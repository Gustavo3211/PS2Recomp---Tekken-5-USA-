#include "iop_service.h"
#include "module_factories.h"

#include <utility>

namespace ps2x::iop::detail
{
    namespace
    {
        TsnddrvBindings recvxTsnddrvBindings()
        {
            return {
                .serviceName = "TSNDDRV",
                .protocol = TsnddrvProtocolVariant::SndQueueV1,
                .arena = {
                    .base = 0x00120000u,
                    .limit = 0x00200000u,
                    .statusAlignment = 0x100u,
                    .tableAlignment = 0x100u,
                    .storageAlignment = 0x1000u,
                    .hdBytes = 0x4000u,
                    .sqBytes = 0x18000u,
                    .dataBytes = 0x40000u,
                },
                .checksumCandidates = {
                    {0x01E0EF10u, 0x01E0EF20u},
                    {0x01E1EF10u, 0x01E1EF20u},
                },
                .busyFlagAddress = 0x01E212C8u,
                .completionRules = {
                    {0x002EAC20u, true, true, false},
                    {0x002EAC30u, true, true, true},
                    {0x002FAC20u, true, true, false},
                    {0x002FAC30u, true, true, true},
                },
            };
        }

        CriDtxBindings recvxCriDtxBindings()
        {
            return {
                .serviceName = "CRI DTX",
                .sid = 0x7D000000u,
                .urpcObjectBase = 0x01F18000u,
                .urpcObjectLimit = 0x01F1FF00u,
                .urpcObjectStride = 0x20u,
                .urpcFunctionTableBase = 0x0033FED0u,
                .urpcObjectTableBase = 0x0033FFD0u,
                .dispatcherFunctionAddress = 0x002FABC0u,
                .rpcServerPoolBase = 0x01F10000u,
                .rpcServerStride = 0x80u,
            };
        }

        ClFileBindings lotrClFileBindings()
        {
            return {
                .serviceName = "CLFILE",
                .sid = 0x0000FF01u,
                .rpc = {},
            };
        }

        SoundUpdateStubBindings lotrSoundBindings()
        {
            return {
                .serviceName = "SOUND update compatibility stub",
                .sid = 0x00012345u,
                .activeStreamCountOffset = 0u,
                .responseCounterOffset = 4u,
                .zeroReceiveBuffer = true,
                .signalNowaitCompletion = true,
                .completeQueuedPlayStreams = true,
                .overridePhysicalServer = true,
                .suppressedCompletionCallbacks = {},
            };
        }

        SdrdrvBindings fatalFrameSdrdrvBindings()
        {
            return {
                .serviceName = "SDRDRV",
                .sid = 0x19740512u,
                .imageHeaderAddress = 0x012F0000u,
                .sectorSize = 2048u,
                .statusOffset = 0x6Cu,
                .statusStride = 8u,
                .statusSlotMask = 0x1Fu,
                .completeValue = 0u,
                .imageHeaderLowerName = "img_hd.bin",
                .imageHeaderUpperName = "IMG_HD.BIN",
                .imageBodyLowerName = "img_bd.bin",
                .imageBodyUpperName = "IMG_BD.BIN",
            };
        }
    }

    ServiceList createCoreServices(IopHost &host)
    {
        ServiceList services;
        services.emplace_back(createMcservService(host));
        services.emplace_back(createDbcmanService(host));
        services.emplace_back(createLibSdService(host));
        return services;
    }

    std::vector<ProfileDefinition> createBuiltinProfiles()
    {
        std::vector<ProfileDefinition> profiles;
        profiles.push_back({
            "recvx-us",
            "builtin",
            {.elfName = "slus_201.84"},
            [](IopHost &host, const GameIdentity &)
            {
                ServiceList services;
                services.emplace_back(createTsnddrvService(host, recvxTsnddrvBindings()));
                services.emplace_back(createCriDtxService(host, recvxCriDtxBindings()));
                return services;
            },
        });

        profiles.push_back({
            "tekken5-us",
            "builtin",
            {.elfName = "SLUS_210.59"},
            [](IopHost &host, const GameIdentity &)
            {
                ServiceList services;
                SoundUpdateStubBindings sound{};
                sound.serviceName = "nuSound";
                sound.sid = 0x44012346u;
                sound.activeStreamCountOffset = 0u;
                sound.responseCounterOffset = 4u;
                sound.zeroReceiveBuffer = true;
                sound.signalNowaitCompletion = true;
                services.emplace_back(createSoundUpdateStubService(host, sound));

                SoundUpdateStubBindings file{};
                file.serviceName = "nuFile";
                file.sid = 0x4E554649u;
                file.activeStreamCountOffset = 0u;
                file.responseCounterOffset = 4u;
                file.zeroReceiveBuffer = true;
                file.signalNowaitCompletion = true;
                services.emplace_back(createSoundUpdateStubService(host, file));

                SoundUpdateStubBindings rpc1{};
                rpc1.serviceName = "tekkenRpc1";
                rpc1.sid = 0x000695DDu;
                rpc1.activeStreamCountOffset = 0u;
                rpc1.responseCounterOffset = 4u;
                rpc1.zeroReceiveBuffer = true;
                rpc1.signalNowaitCompletion = true;
                services.emplace_back(createSoundUpdateStubService(host, rpc1));

                SoundUpdateStubBindings rpc2{};
                rpc2.serviceName = "tekkenRpc2";
                rpc2.sid = 0x81000201u;
                rpc2.activeStreamCountOffset = 0u;
                rpc2.responseCounterOffset = 4u;
                rpc2.zeroReceiveBuffer = true;
                rpc2.signalNowaitCompletion = true;
                services.emplace_back(createSoundUpdateStubService(host, rpc2));

                return services;
            },
        });

        // TODO remove this on next release
        // profiles.push_back({
        //     "lotr-two-towers-us",
        //     "builtin",
        //     {.elfName = "SLUS_205.78"},
        //     [](IopHost &host, const GameIdentity &)
        //     {
        //         ServiceList services;
        //         services.emplace_back(createClFileService(host, lotrClFileBindings()));
        //         services.emplace_back(createSoundUpdateStubService(host, lotrSoundBindings()));
        //         return services;
        //     },
        // });

        // profiles.push_back({
        //     "fatal-frame-us",
        //     "builtin",
        //     {.elfName = "SLUS_203.88"},
        //     [](IopHost &host, const GameIdentity &)
        //     {
        //         ServiceList services;
        //         services.emplace_back(createSdrdrvService(host, fatalFrameSdrdrvBindings()));
        //         return services;
        //     },
        // });

        return profiles;
    }
}
