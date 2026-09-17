#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003182B4
// Address: 0x3182b4 - 0x31891c
void sub_003182B4_0x3182b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003182B4_0x3182b4");
#endif

    switch (ctx->pc) {
        case 0x3182b4u: goto label_3182b4;
        case 0x3182b8u: goto label_3182b8;
        case 0x3182bcu: goto label_3182bc;
        case 0x3182c0u: goto label_3182c0;
        case 0x3182c4u: goto label_3182c4;
        case 0x3182c8u: goto label_3182c8;
        case 0x3182ccu: goto label_3182cc;
        case 0x3182d0u: goto label_3182d0;
        case 0x3182d4u: goto label_3182d4;
        case 0x3182d8u: goto label_3182d8;
        case 0x3182dcu: goto label_3182dc;
        case 0x3182e0u: goto label_3182e0;
        case 0x3182e4u: goto label_3182e4;
        case 0x3182e8u: goto label_3182e8;
        case 0x3182ecu: goto label_3182ec;
        case 0x3182f0u: goto label_3182f0;
        case 0x3182f4u: goto label_3182f4;
        case 0x3182f8u: goto label_3182f8;
        case 0x3182fcu: goto label_3182fc;
        case 0x318300u: goto label_318300;
        case 0x318304u: goto label_318304;
        case 0x318308u: goto label_318308;
        case 0x31830cu: goto label_31830c;
        case 0x318310u: goto label_318310;
        case 0x318314u: goto label_318314;
        case 0x318318u: goto label_318318;
        case 0x31831cu: goto label_31831c;
        case 0x318320u: goto label_318320;
        case 0x318324u: goto label_318324;
        case 0x318328u: goto label_318328;
        case 0x31832cu: goto label_31832c;
        case 0x318330u: goto label_318330;
        case 0x318334u: goto label_318334;
        case 0x318338u: goto label_318338;
        case 0x31833cu: goto label_31833c;
        case 0x318340u: goto label_318340;
        case 0x318344u: goto label_318344;
        case 0x318348u: goto label_318348;
        case 0x31834cu: goto label_31834c;
        case 0x318350u: goto label_318350;
        case 0x318354u: goto label_318354;
        case 0x318358u: goto label_318358;
        case 0x31835cu: goto label_31835c;
        case 0x318360u: goto label_318360;
        case 0x318364u: goto label_318364;
        case 0x318368u: goto label_318368;
        case 0x31836cu: goto label_31836c;
        case 0x318370u: goto label_318370;
        case 0x318374u: goto label_318374;
        case 0x318378u: goto label_318378;
        case 0x31837cu: goto label_31837c;
        case 0x318380u: goto label_318380;
        case 0x318384u: goto label_318384;
        case 0x318388u: goto label_318388;
        case 0x31838cu: goto label_31838c;
        case 0x318390u: goto label_318390;
        case 0x318394u: goto label_318394;
        case 0x318398u: goto label_318398;
        case 0x31839cu: goto label_31839c;
        case 0x3183a0u: goto label_3183a0;
        case 0x3183a4u: goto label_3183a4;
        case 0x3183a8u: goto label_3183a8;
        case 0x3183acu: goto label_3183ac;
        case 0x3183b0u: goto label_3183b0;
        case 0x3183b4u: goto label_3183b4;
        case 0x3183b8u: goto label_3183b8;
        case 0x3183bcu: goto label_3183bc;
        case 0x3183c0u: goto label_3183c0;
        case 0x3183c4u: goto label_3183c4;
        case 0x3183c8u: goto label_3183c8;
        case 0x3183ccu: goto label_3183cc;
        case 0x3183d0u: goto label_3183d0;
        case 0x3183d4u: goto label_3183d4;
        case 0x3183d8u: goto label_3183d8;
        case 0x3183dcu: goto label_3183dc;
        case 0x3183e0u: goto label_3183e0;
        case 0x3183e4u: goto label_3183e4;
        case 0x3183e8u: goto label_3183e8;
        case 0x3183ecu: goto label_3183ec;
        case 0x3183f0u: goto label_3183f0;
        case 0x3183f4u: goto label_3183f4;
        case 0x3183f8u: goto label_3183f8;
        case 0x3183fcu: goto label_3183fc;
        case 0x318400u: goto label_318400;
        case 0x318404u: goto label_318404;
        case 0x318408u: goto label_318408;
        case 0x31840cu: goto label_31840c;
        case 0x318410u: goto label_318410;
        case 0x318414u: goto label_318414;
        case 0x318418u: goto label_318418;
        case 0x31841cu: goto label_31841c;
        case 0x318420u: goto label_318420;
        case 0x318424u: goto label_318424;
        case 0x318428u: goto label_318428;
        case 0x31842cu: goto label_31842c;
        case 0x318430u: goto label_318430;
        case 0x318434u: goto label_318434;
        case 0x318438u: goto label_318438;
        case 0x31843cu: goto label_31843c;
        case 0x318440u: goto label_318440;
        case 0x318444u: goto label_318444;
        case 0x318448u: goto label_318448;
        case 0x31844cu: goto label_31844c;
        case 0x318450u: goto label_318450;
        case 0x318454u: goto label_318454;
        case 0x318458u: goto label_318458;
        case 0x31845cu: goto label_31845c;
        case 0x318460u: goto label_318460;
        case 0x318464u: goto label_318464;
        case 0x318468u: goto label_318468;
        case 0x31846cu: goto label_31846c;
        case 0x318470u: goto label_318470;
        case 0x318474u: goto label_318474;
        case 0x318478u: goto label_318478;
        case 0x31847cu: goto label_31847c;
        case 0x318480u: goto label_318480;
        case 0x318484u: goto label_318484;
        case 0x318488u: goto label_318488;
        case 0x31848cu: goto label_31848c;
        case 0x318490u: goto label_318490;
        case 0x318494u: goto label_318494;
        case 0x318498u: goto label_318498;
        case 0x31849cu: goto label_31849c;
        case 0x3184a0u: goto label_3184a0;
        case 0x3184a4u: goto label_3184a4;
        case 0x3184a8u: goto label_3184a8;
        case 0x3184acu: goto label_3184ac;
        case 0x3184b0u: goto label_3184b0;
        case 0x3184b4u: goto label_3184b4;
        case 0x3184b8u: goto label_3184b8;
        case 0x3184bcu: goto label_3184bc;
        case 0x3184c0u: goto label_3184c0;
        case 0x3184c4u: goto label_3184c4;
        case 0x3184c8u: goto label_3184c8;
        case 0x3184ccu: goto label_3184cc;
        case 0x3184d0u: goto label_3184d0;
        case 0x3184d4u: goto label_3184d4;
        case 0x3184d8u: goto label_3184d8;
        case 0x3184dcu: goto label_3184dc;
        case 0x3184e0u: goto label_3184e0;
        case 0x3184e4u: goto label_3184e4;
        case 0x3184e8u: goto label_3184e8;
        case 0x3184ecu: goto label_3184ec;
        case 0x3184f0u: goto label_3184f0;
        case 0x3184f4u: goto label_3184f4;
        case 0x3184f8u: goto label_3184f8;
        case 0x3184fcu: goto label_3184fc;
        case 0x318500u: goto label_318500;
        case 0x318504u: goto label_318504;
        case 0x318508u: goto label_318508;
        case 0x31850cu: goto label_31850c;
        case 0x318510u: goto label_318510;
        case 0x318514u: goto label_318514;
        case 0x318518u: goto label_318518;
        case 0x31851cu: goto label_31851c;
        case 0x318520u: goto label_318520;
        case 0x318524u: goto label_318524;
        case 0x318528u: goto label_318528;
        case 0x31852cu: goto label_31852c;
        case 0x318530u: goto label_318530;
        case 0x318534u: goto label_318534;
        case 0x318538u: goto label_318538;
        case 0x31853cu: goto label_31853c;
        case 0x318540u: goto label_318540;
        case 0x318544u: goto label_318544;
        case 0x318548u: goto label_318548;
        case 0x31854cu: goto label_31854c;
        case 0x318550u: goto label_318550;
        case 0x318554u: goto label_318554;
        case 0x318558u: goto label_318558;
        case 0x31855cu: goto label_31855c;
        case 0x318560u: goto label_318560;
        case 0x318564u: goto label_318564;
        case 0x318568u: goto label_318568;
        case 0x31856cu: goto label_31856c;
        case 0x318570u: goto label_318570;
        case 0x318574u: goto label_318574;
        case 0x318578u: goto label_318578;
        case 0x31857cu: goto label_31857c;
        case 0x318580u: goto label_318580;
        case 0x318584u: goto label_318584;
        case 0x318588u: goto label_318588;
        case 0x31858cu: goto label_31858c;
        case 0x318590u: goto label_318590;
        case 0x318594u: goto label_318594;
        case 0x318598u: goto label_318598;
        case 0x31859cu: goto label_31859c;
        case 0x3185a0u: goto label_3185a0;
        case 0x3185a4u: goto label_3185a4;
        case 0x3185a8u: goto label_3185a8;
        case 0x3185acu: goto label_3185ac;
        case 0x3185b0u: goto label_3185b0;
        case 0x3185b4u: goto label_3185b4;
        case 0x3185b8u: goto label_3185b8;
        case 0x3185bcu: goto label_3185bc;
        case 0x3185c0u: goto label_3185c0;
        case 0x3185c4u: goto label_3185c4;
        case 0x3185c8u: goto label_3185c8;
        case 0x3185ccu: goto label_3185cc;
        case 0x3185d0u: goto label_3185d0;
        case 0x3185d4u: goto label_3185d4;
        case 0x3185d8u: goto label_3185d8;
        case 0x3185dcu: goto label_3185dc;
        case 0x3185e0u: goto label_3185e0;
        case 0x3185e4u: goto label_3185e4;
        case 0x3185e8u: goto label_3185e8;
        case 0x3185ecu: goto label_3185ec;
        case 0x3185f0u: goto label_3185f0;
        case 0x3185f4u: goto label_3185f4;
        case 0x3185f8u: goto label_3185f8;
        case 0x3185fcu: goto label_3185fc;
        case 0x318600u: goto label_318600;
        case 0x318604u: goto label_318604;
        case 0x318608u: goto label_318608;
        case 0x31860cu: goto label_31860c;
        case 0x318610u: goto label_318610;
        case 0x318614u: goto label_318614;
        case 0x318618u: goto label_318618;
        case 0x31861cu: goto label_31861c;
        case 0x318620u: goto label_318620;
        case 0x318624u: goto label_318624;
        case 0x318628u: goto label_318628;
        case 0x31862cu: goto label_31862c;
        case 0x318630u: goto label_318630;
        case 0x318634u: goto label_318634;
        case 0x318638u: goto label_318638;
        case 0x31863cu: goto label_31863c;
        case 0x318640u: goto label_318640;
        case 0x318644u: goto label_318644;
        case 0x318648u: goto label_318648;
        case 0x31864cu: goto label_31864c;
        case 0x318650u: goto label_318650;
        case 0x318654u: goto label_318654;
        case 0x318658u: goto label_318658;
        case 0x31865cu: goto label_31865c;
        case 0x318660u: goto label_318660;
        case 0x318664u: goto label_318664;
        case 0x318668u: goto label_318668;
        case 0x31866cu: goto label_31866c;
        case 0x318670u: goto label_318670;
        case 0x318674u: goto label_318674;
        case 0x318678u: goto label_318678;
        case 0x31867cu: goto label_31867c;
        case 0x318680u: goto label_318680;
        case 0x318684u: goto label_318684;
        case 0x318688u: goto label_318688;
        case 0x31868cu: goto label_31868c;
        case 0x318690u: goto label_318690;
        case 0x318694u: goto label_318694;
        case 0x318698u: goto label_318698;
        case 0x31869cu: goto label_31869c;
        case 0x3186a0u: goto label_3186a0;
        case 0x3186a4u: goto label_3186a4;
        case 0x3186a8u: goto label_3186a8;
        case 0x3186acu: goto label_3186ac;
        case 0x3186b0u: goto label_3186b0;
        case 0x3186b4u: goto label_3186b4;
        case 0x3186b8u: goto label_3186b8;
        case 0x3186bcu: goto label_3186bc;
        case 0x3186c0u: goto label_3186c0;
        case 0x3186c4u: goto label_3186c4;
        case 0x3186c8u: goto label_3186c8;
        case 0x3186ccu: goto label_3186cc;
        case 0x3186d0u: goto label_3186d0;
        case 0x3186d4u: goto label_3186d4;
        case 0x3186d8u: goto label_3186d8;
        case 0x3186dcu: goto label_3186dc;
        case 0x3186e0u: goto label_3186e0;
        case 0x3186e4u: goto label_3186e4;
        case 0x3186e8u: goto label_3186e8;
        case 0x3186ecu: goto label_3186ec;
        case 0x3186f0u: goto label_3186f0;
        case 0x3186f4u: goto label_3186f4;
        case 0x3186f8u: goto label_3186f8;
        case 0x3186fcu: goto label_3186fc;
        case 0x318700u: goto label_318700;
        case 0x318704u: goto label_318704;
        case 0x318708u: goto label_318708;
        case 0x31870cu: goto label_31870c;
        case 0x318710u: goto label_318710;
        case 0x318714u: goto label_318714;
        case 0x318718u: goto label_318718;
        case 0x31871cu: goto label_31871c;
        case 0x318720u: goto label_318720;
        case 0x318724u: goto label_318724;
        case 0x318728u: goto label_318728;
        case 0x31872cu: goto label_31872c;
        case 0x318730u: goto label_318730;
        case 0x318734u: goto label_318734;
        case 0x318738u: goto label_318738;
        case 0x31873cu: goto label_31873c;
        case 0x318740u: goto label_318740;
        case 0x318744u: goto label_318744;
        case 0x318748u: goto label_318748;
        case 0x31874cu: goto label_31874c;
        case 0x318750u: goto label_318750;
        case 0x318754u: goto label_318754;
        case 0x318758u: goto label_318758;
        case 0x31875cu: goto label_31875c;
        case 0x318760u: goto label_318760;
        case 0x318764u: goto label_318764;
        case 0x318768u: goto label_318768;
        case 0x31876cu: goto label_31876c;
        case 0x318770u: goto label_318770;
        case 0x318774u: goto label_318774;
        case 0x318778u: goto label_318778;
        case 0x31877cu: goto label_31877c;
        case 0x318780u: goto label_318780;
        case 0x318784u: goto label_318784;
        case 0x318788u: goto label_318788;
        case 0x31878cu: goto label_31878c;
        case 0x318790u: goto label_318790;
        case 0x318794u: goto label_318794;
        case 0x318798u: goto label_318798;
        case 0x31879cu: goto label_31879c;
        case 0x3187a0u: goto label_3187a0;
        case 0x3187a4u: goto label_3187a4;
        case 0x3187a8u: goto label_3187a8;
        case 0x3187acu: goto label_3187ac;
        case 0x3187b0u: goto label_3187b0;
        case 0x3187b4u: goto label_3187b4;
        case 0x3187b8u: goto label_3187b8;
        case 0x3187bcu: goto label_3187bc;
        case 0x3187c0u: goto label_3187c0;
        case 0x3187c4u: goto label_3187c4;
        case 0x3187c8u: goto label_3187c8;
        case 0x3187ccu: goto label_3187cc;
        case 0x3187d0u: goto label_3187d0;
        case 0x3187d4u: goto label_3187d4;
        case 0x3187d8u: goto label_3187d8;
        case 0x3187dcu: goto label_3187dc;
        case 0x3187e0u: goto label_3187e0;
        case 0x3187e4u: goto label_3187e4;
        case 0x3187e8u: goto label_3187e8;
        case 0x3187ecu: goto label_3187ec;
        case 0x3187f0u: goto label_3187f0;
        case 0x3187f4u: goto label_3187f4;
        case 0x3187f8u: goto label_3187f8;
        case 0x3187fcu: goto label_3187fc;
        case 0x318800u: goto label_318800;
        case 0x318804u: goto label_318804;
        case 0x318808u: goto label_318808;
        case 0x31880cu: goto label_31880c;
        case 0x318810u: goto label_318810;
        case 0x318814u: goto label_318814;
        case 0x318818u: goto label_318818;
        case 0x31881cu: goto label_31881c;
        case 0x318820u: goto label_318820;
        case 0x318824u: goto label_318824;
        case 0x318828u: goto label_318828;
        case 0x31882cu: goto label_31882c;
        case 0x318830u: goto label_318830;
        case 0x318834u: goto label_318834;
        case 0x318838u: goto label_318838;
        case 0x31883cu: goto label_31883c;
        case 0x318840u: goto label_318840;
        case 0x318844u: goto label_318844;
        case 0x318848u: goto label_318848;
        case 0x31884cu: goto label_31884c;
        case 0x318850u: goto label_318850;
        case 0x318854u: goto label_318854;
        case 0x318858u: goto label_318858;
        case 0x31885cu: goto label_31885c;
        case 0x318860u: goto label_318860;
        case 0x318864u: goto label_318864;
        case 0x318868u: goto label_318868;
        case 0x31886cu: goto label_31886c;
        case 0x318870u: goto label_318870;
        case 0x318874u: goto label_318874;
        case 0x318878u: goto label_318878;
        case 0x31887cu: goto label_31887c;
        case 0x318880u: goto label_318880;
        case 0x318884u: goto label_318884;
        case 0x318888u: goto label_318888;
        case 0x31888cu: goto label_31888c;
        case 0x318890u: goto label_318890;
        case 0x318894u: goto label_318894;
        case 0x318898u: goto label_318898;
        case 0x31889cu: goto label_31889c;
        case 0x3188a0u: goto label_3188a0;
        case 0x3188a4u: goto label_3188a4;
        case 0x3188a8u: goto label_3188a8;
        case 0x3188acu: goto label_3188ac;
        case 0x3188b0u: goto label_3188b0;
        case 0x3188b4u: goto label_3188b4;
        case 0x3188b8u: goto label_3188b8;
        case 0x3188bcu: goto label_3188bc;
        case 0x3188c0u: goto label_3188c0;
        case 0x3188c4u: goto label_3188c4;
        case 0x3188c8u: goto label_3188c8;
        case 0x3188ccu: goto label_3188cc;
        case 0x3188d0u: goto label_3188d0;
        case 0x3188d4u: goto label_3188d4;
        case 0x3188d8u: goto label_3188d8;
        case 0x3188dcu: goto label_3188dc;
        case 0x3188e0u: goto label_3188e0;
        case 0x3188e4u: goto label_3188e4;
        case 0x3188e8u: goto label_3188e8;
        case 0x3188ecu: goto label_3188ec;
        case 0x3188f0u: goto label_3188f0;
        case 0x3188f4u: goto label_3188f4;
        case 0x3188f8u: goto label_3188f8;
        case 0x3188fcu: goto label_3188fc;
        case 0x318900u: goto label_318900;
        case 0x318904u: goto label_318904;
        case 0x318908u: goto label_318908;
        case 0x31890cu: goto label_31890c;
        case 0x318910u: goto label_318910;
        case 0x318914u: goto label_318914;
        case 0x318918u: goto label_318918;
        default: break;
    }

    ctx->pc = 0x3182b4u;

label_3182b4:
    // 0x3182b4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3182b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3182b8:
    // 0x3182b8: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3182b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_3182bc:
    // 0x3182bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3182bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_3182c0:
    // 0x3182c0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3182c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3182c4:
    // 0x3182c4: 0xafc40028  sw          $a0, 0x28($fp)
    ctx->pc = 0x3182c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 4));
label_3182c8:
    // 0x3182c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3182c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3182cc:
    // 0x3182cc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3182ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3182d0:
    // 0x3182d0: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x3182d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_3182d4:
    // 0x3182d4: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x3182d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_3182d8:
    // 0x3182d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3182d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3182dc:
    // 0x3182dc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3182dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3182e0:
    // 0x3182e0: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x3182e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_3182e4:
    // 0x3182e4: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x3182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3182e8:
    // 0x3182e8: 0x8c43419c  lw          $v1, 0x419C($v0)
    ctx->pc = 0x3182e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16796)));
label_3182ec:
    // 0x3182ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3182ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3182f0:
    // 0x3182f0: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_3182f4:
    if (ctx->pc == 0x3182F4u) {
        ctx->pc = 0x3182F8u;
        goto label_3182f8;
    }
    ctx->pc = 0x3182F0u;
    {
        const bool branch_taken_0x3182f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3182f0) {
            ctx->pc = 0x3184A8u;
            goto label_3184a8;
        }
    }
    ctx->pc = 0x3182F8u;
label_3182f8:
    // 0x3182f8: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3182fc:
    // 0x3182fc: 0x8c6241a4  lw          $v0, 0x41A4($v1)
    ctx->pc = 0x3182fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16804)));
label_318300:
    // 0x318300: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x318300u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_318304:
    // 0x318304: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x318304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318308:
    // 0x318308: 0x8c8241a0  lw          $v0, 0x41A0($a0)
    ctx->pc = 0x318308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16800)));
label_31830c:
    // 0x31830c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x31830cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_318310:
    // 0x318310: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x318310u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_318314:
    // 0x318314: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x318314u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
label_318318:
    // 0x318318: 0x0  nop
    ctx->pc = 0x318318u;
    // NOP
label_31831c:
    // 0x31831c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x31831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_318320:
    // 0x318320: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_318324:
    if (ctx->pc == 0x318324u) {
        ctx->pc = 0x318328u;
        goto label_318328;
    }
    ctx->pc = 0x318320u;
    {
        const bool branch_taken_0x318320 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x318320) {
            ctx->pc = 0x318330u;
            goto label_318330;
        }
    }
    ctx->pc = 0x318328u;
label_318328:
    // 0x318328: 0x10000056  b           . + 4 + (0x56 << 2)
label_31832c:
    if (ctx->pc == 0x31832Cu) {
        ctx->pc = 0x318330u;
        goto label_318330;
    }
    ctx->pc = 0x318328u;
    {
        const bool branch_taken_0x318328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318328) {
            ctx->pc = 0x318484u;
            goto label_318484;
        }
    }
    ctx->pc = 0x318330u;
label_318330:
    // 0x318330: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x318330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318334:
    // 0x318334: 0x8c44418c  lw          $a0, 0x418C($v0)
    ctx->pc = 0x318334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16780)));
label_318338:
    // 0x318338: 0xc043cf8  jal         func_10F3E0
label_31833c:
    if (ctx->pc == 0x31833Cu) {
        ctx->pc = 0x318340u;
        goto label_318340;
    }
    ctx->pc = 0x318338u;
    SET_GPR_U32(ctx, 31, 0x318340u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x318338u, 0x318340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318340u;
label_318340:
    // 0x318340: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318344:
    // 0x318344: 0x8c624198  lw          $v0, 0x4198($v1)
    ctx->pc = 0x318344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_318348:
    // 0x318348: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31834c:
    if (ctx->pc == 0x31834Cu) {
        ctx->pc = 0x318350u;
        goto label_318350;
    }
    ctx->pc = 0x318348u;
    {
        const bool branch_taken_0x318348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318348) {
            ctx->pc = 0x318358u;
            goto label_318358;
        }
    }
    ctx->pc = 0x318350u;
label_318350:
    // 0x318350: 0x1000015e  b           . + 4 + (0x15E << 2)
label_318354:
    if (ctx->pc == 0x318354u) {
        ctx->pc = 0x318358u;
        goto label_318358;
    }
    ctx->pc = 0x318350u;
    {
        const bool branch_taken_0x318350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318350) {
            ctx->pc = 0x3188CCu;
            goto label_3188cc;
        }
    }
    ctx->pc = 0x318358u;
label_318358:
    // 0x318358: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x318358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31835c:
    // 0x31835c: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_318360:
    // 0x318360: 0xc043cf8  jal         func_10F3E0
label_318364:
    if (ctx->pc == 0x318364u) {
        ctx->pc = 0x318368u;
        goto label_318368;
    }
    ctx->pc = 0x318360u;
    SET_GPR_U32(ctx, 31, 0x318368u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x318360u, 0x318368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318368u;
label_318368:
    // 0x318368: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31836c:
    // 0x31836c: 0x246240d4  addiu       $v0, $v1, 0x40D4
    ctx->pc = 0x31836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16596));
label_318370:
    // 0x318370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318374:
    // 0x318374: 0xc0dce70  jal         func_3739C0
label_318378:
    if (ctx->pc == 0x318378u) {
        ctx->pc = 0x31837Cu;
        goto label_31837c;
    }
    ctx->pc = 0x318374u;
    SET_GPR_U32(ctx, 31, 0x31837Cu);
    ctx->pc = 0x3739C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739C0u, 0x318374u, 0x31837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31837Cu;
label_31837c:
    // 0x31837c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x31837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_318380:
    // 0x318380: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x318380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_318384:
    // 0x318384: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x318384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_318388:
    // 0x318388: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x318388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_31838c:
    // 0x31838c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_318390:
    if (ctx->pc == 0x318390u) {
        ctx->pc = 0x318394u;
        goto label_318394;
    }
    ctx->pc = 0x31838Cu;
    {
        const bool branch_taken_0x31838c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31838c) {
            ctx->pc = 0x3183A8u;
            goto label_3183a8;
        }
    }
    ctx->pc = 0x318394u;
label_318394:
    // 0x318394: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x318394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_318398:
    // 0x318398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31839c:
    if (ctx->pc == 0x31839Cu) {
        ctx->pc = 0x3183A0u;
        goto label_3183a0;
    }
    ctx->pc = 0x318398u;
    {
        const bool branch_taken_0x318398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318398) {
            ctx->pc = 0x3183A8u;
            goto label_3183a8;
        }
    }
    ctx->pc = 0x3183A0u;
label_3183a0:
    // 0x3183a0: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3183a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_3183a4:
    // 0x3183a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3183a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3183a8:
    // 0x3183a8: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3183a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_3183ac:
    // 0x3183ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3183acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3183b0:
    // 0x3183b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3183b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3183b4:
    // 0x3183b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3183b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3183b8:
    // 0x3183b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3183b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3183bc:
    // 0x3183bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3183bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3183c0:
    // 0x3183c0: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3183c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3183c4:
    // 0x3183c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3183c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3183c8:
    // 0x3183c8: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x3183c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_3183cc:
    // 0x3183cc: 0x27c30018  addiu       $v1, $fp, 0x18
    ctx->pc = 0x3183ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
label_3183d0:
    // 0x3183d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3183d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3183d4:
    // 0x3183d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3183d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3183d8:
    // 0x3183d8: 0xc0dcdd5  jal         func_373754
label_3183dc:
    if (ctx->pc == 0x3183DCu) {
        ctx->pc = 0x3183E0u;
        goto label_3183e0;
    }
    ctx->pc = 0x3183D8u;
    SET_GPR_U32(ctx, 31, 0x3183E0u);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x3183D8u, 0x3183E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183E0u;
label_3183e0:
    // 0x3183e0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3183e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3183e4:
    // 0x3183e4: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3183e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3183e8:
    // 0x3183e8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3183e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3183ec:
    // 0x3183ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3183ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3183f0:
    // 0x3183f0: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3183f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_3183f4:
    // 0x3183f4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3183f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_3183f8:
    // 0x3183f8: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3183f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3183fc:
    // 0x3183fc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3183fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_318400:
    // 0x318400: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x318400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318404:
    // 0x318404: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x318404u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_318408:
    // 0x318408: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x318408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_31840c:
    // 0x31840c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_318410:
    // 0x318410: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_318414:
    if (ctx->pc == 0x318414u) {
        ctx->pc = 0x318418u;
        goto label_318418;
    }
    ctx->pc = 0x318410u;
    {
        const bool branch_taken_0x318410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318410) {
            ctx->pc = 0x31846Cu;
            goto label_31846c;
        }
    }
    ctx->pc = 0x318418u;
label_318418:
    // 0x318418: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x318418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_31841c:
    // 0x31841c: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x31841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318420:
    // 0x318420: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x318420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_318424:
    // 0x318424: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x318424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_318428:
    // 0x318428: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31842c:
    // 0x31842c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x31842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318430:
    // 0x318430: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x318430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
label_318434:
    // 0x318434: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x318434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_318438:
    // 0x318438: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x318438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_31843c:
    // 0x31843c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_318440:
    if (ctx->pc == 0x318440u) {
        ctx->pc = 0x318444u;
        goto label_318444;
    }
    ctx->pc = 0x31843Cu;
    {
        const bool branch_taken_0x31843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31843c) {
            ctx->pc = 0x31846Cu;
            goto label_31846c;
        }
    }
    ctx->pc = 0x318444u;
label_318444:
    // 0x318444: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x318444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_318448:
    // 0x318448: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x318448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31844c:
    // 0x31844c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x31844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_318450:
    // 0x318450: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x318450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318454:
    // 0x318454: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x318454u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_318458:
    // 0x318458: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x318458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_31845c:
    // 0x31845c: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x31845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318460:
    // 0x318460: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x318460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_318464:
    // 0x318464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318468:
    // 0x318468: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x318468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_31846c:
    // 0x31846c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x31846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318470:
    // 0x318470: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_318474:
    // 0x318474: 0xc043cf0  jal         func_10F3C0
label_318478:
    if (ctx->pc == 0x318478u) {
        ctx->pc = 0x31847Cu;
        goto label_31847c;
    }
    ctx->pc = 0x318474u;
    SET_GPR_U32(ctx, 31, 0x31847Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318474u, 0x31847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31847Cu;
label_31847c:
    // 0x31847c: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
label_318480:
    if (ctx->pc == 0x318480u) {
        ctx->pc = 0x318484u;
        goto label_318484;
    }
    ctx->pc = 0x31847Cu;
    {
        const bool branch_taken_0x31847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31847c) {
            ctx->pc = 0x31831Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31831c;
        }
    }
    ctx->pc = 0x318484u;
label_318484:
    // 0x318484: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x318484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_318488:
    // 0x318488: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
label_31848c:
    if (ctx->pc == 0x31848Cu) {
        ctx->pc = 0x318490u;
        goto label_318490;
    }
    ctx->pc = 0x318488u;
    {
        const bool branch_taken_0x318488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318488) {
            ctx->pc = 0x3188CCu;
            goto label_3188cc;
        }
    }
    ctx->pc = 0x318490u;
label_318490:
    // 0x318490: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x318490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_318494:
    // 0x318494: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x318494u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_318498:
    // 0x318498: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x318498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_31849c:
    // 0x31849c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x31849cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_3184a0:
    // 0x3184a0: 0x1000ff9d  b           . + 4 + (-0x63 << 2)
label_3184a4:
    if (ctx->pc == 0x3184A4u) {
        ctx->pc = 0x3184A8u;
        goto label_3184a8;
    }
    ctx->pc = 0x3184A0u;
    {
        const bool branch_taken_0x3184a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3184a0) {
            ctx->pc = 0x318318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318318;
        }
    }
    ctx->pc = 0x3184A8u;
label_3184a8:
    // 0x3184a8: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3184a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3184ac:
    // 0x3184ac: 0x8c62419c  lw          $v0, 0x419C($v1)
    ctx->pc = 0x3184acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16796)));
label_3184b0:
    // 0x3184b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_3184b4:
    if (ctx->pc == 0x3184B4u) {
        ctx->pc = 0x3184B8u;
        goto label_3184b8;
    }
    ctx->pc = 0x3184B0u;
    {
        const bool branch_taken_0x3184b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3184b0) {
            ctx->pc = 0x318528u;
            goto label_318528;
        }
    }
    ctx->pc = 0x3184B8u;
label_3184b8:
    // 0x3184b8: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3184b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3184bc:
    // 0x3184bc: 0x248241a0  addiu       $v0, $a0, 0x41A0
    ctx->pc = 0x3184bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16800));
label_3184c0:
    // 0x3184c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3184c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3184c4:
    // 0x3184c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3184c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3184c8:
    // 0x3184c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3184c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3184cc:
    // 0x3184cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3184ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3184d0:
    // 0x3184d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3184d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3184d4:
    // 0x3184d4: 0xc0d2f8e  jal         func_34BE38
label_3184d8:
    if (ctx->pc == 0x3184D8u) {
        ctx->pc = 0x3184DCu;
        goto label_3184dc;
    }
    ctx->pc = 0x3184D4u;
    SET_GPR_U32(ctx, 31, 0x3184DCu);
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x3184D4u, 0x3184DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184DCu;
label_3184dc:
    // 0x3184dc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3184dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3184e0:
    // 0x3184e0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3184e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3184e4:
    // 0x3184e4: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x3184e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3184e8:
    // 0x3184e8: 0x8c4542a4  lw          $a1, 0x42A4($v0)
    ctx->pc = 0x3184e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17060)));
label_3184ec:
    // 0x3184ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3184ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3184f0:
    // 0x3184f0: 0xc0d3031  jal         func_34C0C4
label_3184f4:
    if (ctx->pc == 0x3184F4u) {
        ctx->pc = 0x3184F8u;
        goto label_3184f8;
    }
    ctx->pc = 0x3184F0u;
    SET_GPR_U32(ctx, 31, 0x3184F8u);
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x3184F0u, 0x3184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184F8u;
label_3184f8:
    // 0x3184f8: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3184f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3184fc:
    // 0x3184fc: 0x8c6242a8  lw          $v0, 0x42A8($v1)
    ctx->pc = 0x3184fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17064)));
label_318500:
    // 0x318500: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x318500u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318504:
    // 0x318504: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_318508:
    // 0x318508: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
label_31850c:
    if (ctx->pc == 0x31850Cu) {
        ctx->pc = 0x318510u;
        goto label_318510;
    }
    ctx->pc = 0x318508u;
    {
        const bool branch_taken_0x318508 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x318508) {
            ctx->pc = 0x318598u;
            goto label_318598;
        }
    }
    ctx->pc = 0x318510u;
label_318510:
    // 0x318510: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x318510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_318514:
    // 0x318514: 0xc0d3054  jal         func_34C150
label_318518:
    if (ctx->pc == 0x318518u) {
        ctx->pc = 0x31851Cu;
        goto label_31851c;
    }
    ctx->pc = 0x318514u;
    SET_GPR_U32(ctx, 31, 0x31851Cu);
    ctx->pc = 0x34C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C150u, 0x318514u, 0x31851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31851Cu;
label_31851c:
    // 0x31851c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x31851cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318520:
    // 0x318520: 0x1000001d  b           . + 4 + (0x1D << 2)
label_318524:
    if (ctx->pc == 0x318524u) {
        ctx->pc = 0x318528u;
        goto label_318528;
    }
    ctx->pc = 0x318520u;
    {
        const bool branch_taken_0x318520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318520) {
            ctx->pc = 0x318598u;
            goto label_318598;
        }
    }
    ctx->pc = 0x318528u;
label_318528:
    // 0x318528: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x318528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31852c:
    // 0x31852c: 0x8c83419c  lw          $v1, 0x419C($a0)
    ctx->pc = 0x31852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16796)));
label_318530:
    // 0x318530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318534:
    // 0x318534: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_318538:
    if (ctx->pc == 0x318538u) {
        ctx->pc = 0x31853Cu;
        goto label_31853c;
    }
    ctx->pc = 0x318534u;
    {
        const bool branch_taken_0x318534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318534) {
            ctx->pc = 0x318578u;
            goto label_318578;
        }
    }
    ctx->pc = 0x31853Cu;
label_31853c:
    // 0x31853c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x31853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318540:
    // 0x318540: 0x8c6241a0  lw          $v0, 0x41A0($v1)
    ctx->pc = 0x318540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16800)));
label_318544:
    // 0x318544: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x318544u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_318548:
    // 0x318548: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x318548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31854c:
    // 0x31854c: 0x8c8241a4  lw          $v0, 0x41A4($a0)
    ctx->pc = 0x31854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16804)));
label_318550:
    // 0x318550: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x318550u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318554:
    // 0x318554: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_318558:
    // 0x318558: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
label_31855c:
    if (ctx->pc == 0x31855Cu) {
        ctx->pc = 0x318560u;
        goto label_318560;
    }
    ctx->pc = 0x318558u;
    {
        const bool branch_taken_0x318558 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x318558) {
            ctx->pc = 0x318598u;
            goto label_318598;
        }
    }
    ctx->pc = 0x318560u;
label_318560:
    // 0x318560: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x318560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_318564:
    // 0x318564: 0xc0d3054  jal         func_34C150
label_318568:
    if (ctx->pc == 0x318568u) {
        ctx->pc = 0x31856Cu;
        goto label_31856c;
    }
    ctx->pc = 0x318564u;
    SET_GPR_U32(ctx, 31, 0x31856Cu);
    ctx->pc = 0x34C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C150u, 0x318564u, 0x31856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31856Cu;
label_31856c:
    // 0x31856c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x31856cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318570:
    // 0x318570: 0x10000009  b           . + 4 + (0x9 << 2)
label_318574:
    if (ctx->pc == 0x318574u) {
        ctx->pc = 0x318578u;
        goto label_318578;
    }
    ctx->pc = 0x318570u;
    {
        const bool branch_taken_0x318570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318570) {
            ctx->pc = 0x318598u;
            goto label_318598;
        }
    }
    ctx->pc = 0x318578u;
label_318578:
    // 0x318578: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x318578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31857c:
    // 0x31857c: 0x8c43419c  lw          $v1, 0x419C($v0)
    ctx->pc = 0x31857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16796)));
label_318580:
    // 0x318580: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x318580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_318584:
    // 0x318584: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_318588:
    if (ctx->pc == 0x318588u) {
        ctx->pc = 0x31858Cu;
        goto label_31858c;
    }
    ctx->pc = 0x318584u;
    {
        const bool branch_taken_0x318584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318584) {
            ctx->pc = 0x318598u;
            goto label_318598;
        }
    }
    ctx->pc = 0x31858Cu;
label_31858c:
    // 0x31858c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x31858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318590:
    // 0x318590: 0x8c6241ac  lw          $v0, 0x41AC($v1)
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16812)));
label_318594:
    // 0x318594: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x318594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318598:
    // 0x318598: 0x0  nop
    ctx->pc = 0x318598u;
    // NOP
label_31859c:
    // 0x31859c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x31859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3185a0:
    // 0x3185a0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_3185a4:
    if (ctx->pc == 0x3185A4u) {
        ctx->pc = 0x3185A8u;
        goto label_3185a8;
    }
    ctx->pc = 0x3185A0u;
    {
        const bool branch_taken_0x3185a0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3185a0) {
            ctx->pc = 0x3185B0u;
            goto label_3185b0;
        }
    }
    ctx->pc = 0x3185A8u;
label_3185a8:
    // 0x3185a8: 0x100000ac  b           . + 4 + (0xAC << 2)
label_3185ac:
    if (ctx->pc == 0x3185ACu) {
        ctx->pc = 0x3185B0u;
        goto label_3185b0;
    }
    ctx->pc = 0x3185A8u;
    {
        const bool branch_taken_0x3185a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185a8) {
            ctx->pc = 0x31885Cu;
            goto label_31885c;
        }
    }
    ctx->pc = 0x3185B0u;
label_3185b0:
    // 0x3185b0: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3185b4:
    // 0x3185b4: 0x8c44418c  lw          $a0, 0x418C($v0)
    ctx->pc = 0x3185b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16780)));
label_3185b8:
    // 0x3185b8: 0xc043cf8  jal         func_10F3E0
label_3185bc:
    if (ctx->pc == 0x3185BCu) {
        ctx->pc = 0x3185C0u;
        goto label_3185c0;
    }
    ctx->pc = 0x3185B8u;
    SET_GPR_U32(ctx, 31, 0x3185C0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3185B8u, 0x3185C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185C0u;
label_3185c0:
    // 0x3185c0: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3185c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3185c4:
    // 0x3185c4: 0x8c624198  lw          $v0, 0x4198($v1)
    ctx->pc = 0x3185c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_3185c8:
    // 0x3185c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3185cc:
    if (ctx->pc == 0x3185CCu) {
        ctx->pc = 0x3185D0u;
        goto label_3185d0;
    }
    ctx->pc = 0x3185C8u;
    {
        const bool branch_taken_0x3185c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185c8) {
            ctx->pc = 0x3185D8u;
            goto label_3185d8;
        }
    }
    ctx->pc = 0x3185D0u;
label_3185d0:
    // 0x3185d0: 0x100000be  b           . + 4 + (0xBE << 2)
label_3185d4:
    if (ctx->pc == 0x3185D4u) {
        ctx->pc = 0x3185D8u;
        goto label_3185d8;
    }
    ctx->pc = 0x3185D0u;
    {
        const bool branch_taken_0x3185d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185d0) {
            ctx->pc = 0x3188CCu;
            goto label_3188cc;
        }
    }
    ctx->pc = 0x3185D8u;
label_3185d8:
    // 0x3185d8: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x3185d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3185dc:
    // 0x3185dc: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x3185dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_3185e0:
    // 0x3185e0: 0xc043cf8  jal         func_10F3E0
label_3185e4:
    if (ctx->pc == 0x3185E4u) {
        ctx->pc = 0x3185E8u;
        goto label_3185e8;
    }
    ctx->pc = 0x3185E0u;
    SET_GPR_U32(ctx, 31, 0x3185E8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3185E0u, 0x3185E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185E8u;
label_3185e8:
    // 0x3185e8: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3185ec:
    // 0x3185ec: 0x246240d4  addiu       $v0, $v1, 0x40D4
    ctx->pc = 0x3185ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16596));
label_3185f0:
    // 0x3185f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3185f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3185f4:
    // 0x3185f4: 0xc0dce65  jal         func_373994
label_3185f8:
    if (ctx->pc == 0x3185F8u) {
        ctx->pc = 0x3185FCu;
        goto label_3185fc;
    }
    ctx->pc = 0x3185F4u;
    SET_GPR_U32(ctx, 31, 0x3185FCu);
    ctx->pc = 0x373994u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373994u, 0x3185F4u, 0x3185FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185FCu;
label_3185fc:
    // 0x3185fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3185fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_318600:
    // 0x318600: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x318600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_318604:
    // 0x318604: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x318604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318608:
    // 0x318608: 0x248240d4  addiu       $v0, $a0, 0x40D4
    ctx->pc = 0x318608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16596));
label_31860c:
    // 0x31860c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318610:
    // 0x318610: 0xc0dce70  jal         func_3739C0
label_318614:
    if (ctx->pc == 0x318614u) {
        ctx->pc = 0x318618u;
        goto label_318618;
    }
    ctx->pc = 0x318610u;
    SET_GPR_U32(ctx, 31, 0x318618u);
    ctx->pc = 0x3739C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739C0u, 0x318610u, 0x318618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318618u;
label_318618:
    // 0x318618: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x318618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31861c:
    // 0x31861c: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x31861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_318620:
    // 0x318620: 0xc043cf0  jal         func_10F3C0
label_318624:
    if (ctx->pc == 0x318624u) {
        ctx->pc = 0x318628u;
        goto label_318628;
    }
    ctx->pc = 0x318620u;
    SET_GPR_U32(ctx, 31, 0x318628u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318620u, 0x318628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318628u;
label_318628:
    // 0x318628: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31862c:
    // 0x31862c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x31862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_318630:
    // 0x318630: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x318630u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_318634:
    // 0x318634: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_318638:
    // 0x318638: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x318638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_31863c:
    // 0x31863c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x31863cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_318640:
    // 0x318640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_318644:
    if (ctx->pc == 0x318644u) {
        ctx->pc = 0x318648u;
        goto label_318648;
    }
    ctx->pc = 0x318640u;
    {
        const bool branch_taken_0x318640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318640) {
            ctx->pc = 0x318650u;
            goto label_318650;
        }
    }
    ctx->pc = 0x318648u;
label_318648:
    // 0x318648: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_31864c:
    // 0x31864c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x31864cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_318650:
    // 0x318650: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x318650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_318654:
    // 0x318654: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x318654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_318658:
    // 0x318658: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31865c:
    // 0x31865c: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x31865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_318660:
    // 0x318660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x318660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318664:
    // 0x318664: 0xc043f26  jal         func_10FC98
label_318668:
    if (ctx->pc == 0x318668u) {
        ctx->pc = 0x31866Cu;
        goto label_31866c;
    }
    ctx->pc = 0x318664u;
    SET_GPR_U32(ctx, 31, 0x31866Cu);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x318664u, 0x31866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31866Cu;
label_31866c:
    // 0x31866c: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318670:
    // 0x318670: 0x8c83419c  lw          $v1, 0x419C($a0)
    ctx->pc = 0x318670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16796)));
label_318674:
    // 0x318674: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x318674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_318678:
    // 0x318678: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_31867c:
    if (ctx->pc == 0x31867Cu) {
        ctx->pc = 0x318680u;
        goto label_318680;
    }
    ctx->pc = 0x318678u;
    {
        const bool branch_taken_0x318678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318678) {
            ctx->pc = 0x3186ACu;
            goto label_3186ac;
        }
    }
    ctx->pc = 0x318680u;
label_318680:
    // 0x318680: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318684:
    // 0x318684: 0x8c6241a0  lw          $v0, 0x41A0($v1)
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16800)));
label_318688:
    // 0x318688: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31868c:
    // 0x31868c: 0x8c6441a8  lw          $a0, 0x41A8($v1)
    ctx->pc = 0x31868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_318690:
    // 0x318690: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x318690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_318694:
    // 0x318694: 0x8fc60020  lw          $a2, 0x20($fp)
    ctx->pc = 0x318694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_318698:
    // 0x318698: 0x40f809  jalr        $v0
label_31869c:
    if (ctx->pc == 0x31869Cu) {
        ctx->pc = 0x3186A0u;
        goto label_3186a0;
    }
    ctx->pc = 0x318698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3186A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318698u, 0x3186A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3186A0u;
label_3186a0:
    // 0x3186a0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3186a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3186a4:
    // 0x3186a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3186a8:
    if (ctx->pc == 0x3186A8u) {
        ctx->pc = 0x3186ACu;
        goto label_3186ac;
    }
    ctx->pc = 0x3186A4u;
    {
        const bool branch_taken_0x3186a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186a4) {
            ctx->pc = 0x3186C4u;
            goto label_3186c4;
        }
    }
    ctx->pc = 0x3186ACu;
label_3186ac:
    // 0x3186ac: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3186acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3186b0:
    // 0x3186b0: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x3186b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_3186b4:
    // 0x3186b4: 0x8fc60020  lw          $a2, 0x20($fp)
    ctx->pc = 0x3186b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3186b8:
    // 0x3186b8: 0xc0d2fed  jal         func_34BFB4
label_3186bc:
    if (ctx->pc == 0x3186BCu) {
        ctx->pc = 0x3186C0u;
        goto label_3186c0;
    }
    ctx->pc = 0x3186B8u;
    SET_GPR_U32(ctx, 31, 0x3186C0u);
    ctx->pc = 0x34BFB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFB4u, 0x3186B8u, 0x3186C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186C0u;
label_3186c0:
    // 0x3186c0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3186c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3186c4:
    // 0x3186c4: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3186c8:
    // 0x3186c8: 0x8c824198  lw          $v0, 0x4198($a0)
    ctx->pc = 0x3186c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16792)));
label_3186cc:
    // 0x3186cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3186d0:
    if (ctx->pc == 0x3186D0u) {
        ctx->pc = 0x3186D4u;
        goto label_3186d4;
    }
    ctx->pc = 0x3186CCu;
    {
        const bool branch_taken_0x3186cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186cc) {
            ctx->pc = 0x3186DCu;
            goto label_3186dc;
        }
    }
    ctx->pc = 0x3186D4u;
label_3186d4:
    // 0x3186d4: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3186d8:
    if (ctx->pc == 0x3186D8u) {
        ctx->pc = 0x3186DCu;
        goto label_3186dc;
    }
    ctx->pc = 0x3186D4u;
    {
        const bool branch_taken_0x3186d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186d4) {
            ctx->pc = 0x3188CCu;
            goto label_3188cc;
        }
    }
    ctx->pc = 0x3186DCu;
label_3186dc:
    // 0x3186dc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3186dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3186e0:
    // 0x3186e0: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3186e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3186e4:
    // 0x3186e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3186e8:
    if (ctx->pc == 0x3186E8u) {
        ctx->pc = 0x3186ECu;
        goto label_3186ec;
    }
    ctx->pc = 0x3186E4u;
    {
        const bool branch_taken_0x3186e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3186e4) {
            ctx->pc = 0x3186F4u;
            goto label_3186f4;
        }
    }
    ctx->pc = 0x3186ECu;
label_3186ec:
    // 0x3186ec: 0x10000077  b           . + 4 + (0x77 << 2)
label_3186f0:
    if (ctx->pc == 0x3186F0u) {
        ctx->pc = 0x3186F4u;
        goto label_3186f4;
    }
    ctx->pc = 0x3186ECu;
    {
        const bool branch_taken_0x3186ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186ec) {
            ctx->pc = 0x3188CCu;
            goto label_3188cc;
        }
    }
    ctx->pc = 0x3186F4u;
label_3186f4:
    // 0x3186f4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3186f8:
    // 0x3186f8: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3186f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3186fc:
    // 0x3186fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3186fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318700:
    // 0x318700: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x318700u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_318704:
    // 0x318704: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x318704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_318708:
    // 0x318708: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x318708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_31870c:
    // 0x31870c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x31870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_318710:
    // 0x318710: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x318710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_318714:
    // 0x318714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_318718:
    if (ctx->pc == 0x318718u) {
        ctx->pc = 0x31871Cu;
        goto label_31871c;
    }
    ctx->pc = 0x318714u;
    {
        const bool branch_taken_0x318714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318714) {
            ctx->pc = 0x318734u;
            goto label_318734;
        }
    }
    ctx->pc = 0x31871Cu;
label_31871c:
    // 0x31871c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x31871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_318720:
    // 0x318720: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x318720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_318724:
    // 0x318724: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_318728:
    if (ctx->pc == 0x318728u) {
        ctx->pc = 0x31872Cu;
        goto label_31872c;
    }
    ctx->pc = 0x318724u;
    {
        const bool branch_taken_0x318724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x318724) {
            ctx->pc = 0x318734u;
            goto label_318734;
        }
    }
    ctx->pc = 0x31872Cu;
label_31872c:
    // 0x31872c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x31872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_318730:
    // 0x318730: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x318730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_318734:
    // 0x318734: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x318734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318738:
    // 0x318738: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_31873c:
    // 0x31873c: 0xc043cf8  jal         func_10F3E0
label_318740:
    if (ctx->pc == 0x318740u) {
        ctx->pc = 0x318744u;
        goto label_318744;
    }
    ctx->pc = 0x31873Cu;
    SET_GPR_U32(ctx, 31, 0x318744u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x31873Cu, 0x318744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318744u;
label_318744:
    // 0x318744: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x318744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_318748:
    // 0x318748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31874c:
    // 0x31874c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31874cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_318750:
    // 0x318750: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x318750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_318754:
    // 0x318754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x318754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_318758:
    // 0x318758: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x318758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31875c:
    // 0x31875c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x31875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318760:
    // 0x318760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318764:
    // 0x318764: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x318764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_318768:
    // 0x318768: 0x27c30024  addiu       $v1, $fp, 0x24
    ctx->pc = 0x318768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
label_31876c:
    // 0x31876c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318770:
    // 0x318770: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x318770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_318774:
    // 0x318774: 0xc0dcdd5  jal         func_373754
label_318778:
    if (ctx->pc == 0x318778u) {
        ctx->pc = 0x31877Cu;
        goto label_31877c;
    }
    ctx->pc = 0x318774u;
    SET_GPR_U32(ctx, 31, 0x31877Cu);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x318774u, 0x31877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31877Cu;
label_31877c:
    // 0x31877c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x31877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_318780:
    // 0x318780: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x318780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_318784:
    // 0x318784: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_318788:
    if (ctx->pc == 0x318788u) {
        ctx->pc = 0x31878Cu;
        goto label_31878c;
    }
    ctx->pc = 0x318784u;
    {
        const bool branch_taken_0x318784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318784) {
            ctx->pc = 0x318844u;
            goto label_318844;
        }
    }
    ctx->pc = 0x31878Cu;
label_31878c:
    // 0x31878c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x31878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_318790:
    // 0x318790: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x318790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318794:
    // 0x318794: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x318794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_318798:
    // 0x318798: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x318798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_31879c:
    // 0x31879c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3187a0:
    // 0x3187a0: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3187a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3187a4:
    // 0x3187a4: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x3187a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
label_3187a8:
    // 0x3187a8: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3187a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3187ac:
    // 0x3187ac: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3187b0:
    // 0x3187b0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3187b4:
    if (ctx->pc == 0x3187B4u) {
        ctx->pc = 0x3187B8u;
        goto label_3187b8;
    }
    ctx->pc = 0x3187B0u;
    {
        const bool branch_taken_0x3187b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3187b0) {
            ctx->pc = 0x318844u;
            goto label_318844;
        }
    }
    ctx->pc = 0x3187B8u;
label_3187b8:
    // 0x3187b8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3187b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3187bc:
    // 0x3187bc: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3187bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3187c0:
    // 0x3187c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3187c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3187c4:
    // 0x3187c4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3187c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_3187c8:
    // 0x3187c8: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3187c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3187cc:
    // 0x3187cc: 0x8c83419c  lw          $v1, 0x419C($a0)
    ctx->pc = 0x3187ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16796)));
label_3187d0:
    // 0x3187d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3187d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3187d4:
    // 0x3187d4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_3187d8:
    if (ctx->pc == 0x3187D8u) {
        ctx->pc = 0x3187DCu;
        goto label_3187dc;
    }
    ctx->pc = 0x3187D4u;
    {
        const bool branch_taken_0x3187d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3187d4) {
            ctx->pc = 0x318824u;
            goto label_318824;
        }
    }
    ctx->pc = 0x3187DCu;
label_3187dc:
    // 0x3187dc: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3187dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3187e0:
    // 0x3187e0: 0x8c6241a4  lw          $v0, 0x41A4($v1)
    ctx->pc = 0x3187e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16804)));
label_3187e4:
    // 0x3187e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3187e8:
    if (ctx->pc == 0x3187E8u) {
        ctx->pc = 0x3187ECu;
        goto label_3187ec;
    }
    ctx->pc = 0x3187E4u;
    {
        const bool branch_taken_0x3187e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3187e4) {
            ctx->pc = 0x318844u;
            goto label_318844;
        }
    }
    ctx->pc = 0x3187ECu;
label_3187ec:
    // 0x3187ec: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3187ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3187f0:
    // 0x3187f0: 0x8c8241a4  lw          $v0, 0x41A4($a0)
    ctx->pc = 0x3187f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16804)));
label_3187f4:
    // 0x3187f4: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3187f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3187f8:
    // 0x3187f8: 0x8c6441a8  lw          $a0, 0x41A8($v1)
    ctx->pc = 0x3187f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_3187fc:
    // 0x3187fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3187fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318800:
    // 0x318800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x318800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318804:
    // 0x318804: 0x40f809  jalr        $v0
label_318808:
    if (ctx->pc == 0x318808u) {
        ctx->pc = 0x31880Cu;
        goto label_31880c;
    }
    ctx->pc = 0x318804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31880Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318804u, 0x31880Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31880Cu;
label_31880c:
    // 0x31880c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31880cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318810:
    // 0x318810: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x318810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_318814:
    // 0x318814: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x318814u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318818:
    // 0x318818: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x318818u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_31881c:
    // 0x31881c: 0x10000009  b           . + 4 + (0x9 << 2)
label_318820:
    if (ctx->pc == 0x318820u) {
        ctx->pc = 0x318824u;
        goto label_318824;
    }
    ctx->pc = 0x31881Cu;
    {
        const bool branch_taken_0x31881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31881c) {
            ctx->pc = 0x318844u;
            goto label_318844;
        }
    }
    ctx->pc = 0x318824u;
label_318824:
    // 0x318824: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x318824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_318828:
    // 0x318828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x318828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31882c:
    // 0x31882c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318830:
    // 0x318830: 0xc0d3031  jal         func_34C0C4
label_318834:
    if (ctx->pc == 0x318834u) {
        ctx->pc = 0x318838u;
        goto label_318838;
    }
    ctx->pc = 0x318830u;
    SET_GPR_U32(ctx, 31, 0x318838u);
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x318830u, 0x318838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318838u;
label_318838:
    // 0x318838: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x318838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_31883c:
    // 0x31883c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31883cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_318840:
    // 0x318840: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x318840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_318844:
    // 0x318844: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x318844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318848:
    // 0x318848: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_31884c:
    // 0x31884c: 0xc043cf0  jal         func_10F3C0
label_318850:
    if (ctx->pc == 0x318850u) {
        ctx->pc = 0x318854u;
        goto label_318854;
    }
    ctx->pc = 0x31884Cu;
    SET_GPR_U32(ctx, 31, 0x318854u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x31884Cu, 0x318854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318854u;
label_318854:
    // 0x318854: 0x1000ff51  b           . + 4 + (-0xAF << 2)
label_318858:
    if (ctx->pc == 0x318858u) {
        ctx->pc = 0x31885Cu;
        goto label_31885c;
    }
    ctx->pc = 0x318854u;
    {
        const bool branch_taken_0x318854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318854) {
            ctx->pc = 0x31859Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31859c;
        }
    }
    ctx->pc = 0x31885Cu;
label_31885c:
    // 0x31885c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x31885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_318860:
    // 0x318860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x318860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_318864:
    // 0x318864: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_318868:
    if (ctx->pc == 0x318868u) {
        ctx->pc = 0x31886Cu;
        goto label_31886c;
    }
    ctx->pc = 0x318864u;
    {
        const bool branch_taken_0x318864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x318864) {
            ctx->pc = 0x3188CCu;
            goto label_3188cc;
        }
    }
    ctx->pc = 0x31886Cu;
label_31886c:
    // 0x31886c: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x31886cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318870:
    // 0x318870: 0x8c83419c  lw          $v1, 0x419C($a0)
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16796)));
label_318874:
    // 0x318874: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x318874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_318878:
    // 0x318878: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_31887c:
    if (ctx->pc == 0x31887Cu) {
        ctx->pc = 0x318880u;
        goto label_318880;
    }
    ctx->pc = 0x318878u;
    {
        const bool branch_taken_0x318878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318878) {
            ctx->pc = 0x3188A8u;
            goto label_3188a8;
        }
    }
    ctx->pc = 0x318880u;
label_318880:
    // 0x318880: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_318884:
    // 0x318884: 0x8c6241a4  lw          $v0, 0x41A4($v1)
    ctx->pc = 0x318884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16804)));
label_318888:
    // 0x318888: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x318888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_31888c:
    // 0x31888c: 0x8c6441a8  lw          $a0, 0x41A8($v1)
    ctx->pc = 0x31888cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_318890:
    // 0x318890: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x318890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_318894:
    // 0x318894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x318894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318898:
    // 0x318898: 0x40f809  jalr        $v0
label_31889c:
    if (ctx->pc == 0x31889Cu) {
        ctx->pc = 0x3188A0u;
        goto label_3188a0;
    }
    ctx->pc = 0x318898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3188A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318898u, 0x3188A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3188A0u;
label_3188a0:
    // 0x3188a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3188a4:
    if (ctx->pc == 0x3188A4u) {
        ctx->pc = 0x3188A8u;
        goto label_3188a8;
    }
    ctx->pc = 0x3188A0u;
    {
        const bool branch_taken_0x3188a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3188a0) {
            ctx->pc = 0x3188BCu;
            goto label_3188bc;
        }
    }
    ctx->pc = 0x3188A8u;
label_3188a8:
    // 0x3188a8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3188a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3188ac:
    // 0x3188ac: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3188b0:
    // 0x3188b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3188b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3188b4:
    // 0x3188b4: 0xc0d3031  jal         func_34C0C4
label_3188b8:
    if (ctx->pc == 0x3188B8u) {
        ctx->pc = 0x3188BCu;
        goto label_3188bc;
    }
    ctx->pc = 0x3188B4u;
    SET_GPR_U32(ctx, 31, 0x3188BCu);
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x3188B4u, 0x3188BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188BCu;
label_3188bc:
    // 0x3188bc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_3188c0:
    // 0x3188c0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3188c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3188c4:
    // 0x3188c4: 0x1000ff34  b           . + 4 + (-0xCC << 2)
label_3188c8:
    if (ctx->pc == 0x3188C8u) {
        ctx->pc = 0x3188CCu;
        goto label_3188cc;
    }
    ctx->pc = 0x3188C4u;
    {
        const bool branch_taken_0x3188c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3188c4) {
            ctx->pc = 0x318598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318598;
        }
    }
    ctx->pc = 0x3188CCu;
label_3188cc:
    // 0x3188cc: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3188ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3188d0:
    // 0x3188d0: 0x8c82419c  lw          $v0, 0x419C($a0)
    ctx->pc = 0x3188d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16796)));
label_3188d4:
    // 0x3188d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3188d8:
    if (ctx->pc == 0x3188D8u) {
        ctx->pc = 0x3188DCu;
        goto label_3188dc;
    }
    ctx->pc = 0x3188D4u;
    {
        const bool branch_taken_0x3188d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3188d4) {
            ctx->pc = 0x3188E8u;
            goto label_3188e8;
        }
    }
    ctx->pc = 0x3188DCu;
label_3188dc:
    // 0x3188dc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3188dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3188e0:
    // 0x3188e0: 0xc0d2fcf  jal         func_34BF3C
label_3188e4:
    if (ctx->pc == 0x3188E4u) {
        ctx->pc = 0x3188E8u;
        goto label_3188e8;
    }
    ctx->pc = 0x3188E0u;
    SET_GPR_U32(ctx, 31, 0x3188E8u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x3188E0u, 0x3188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188E8u;
label_3188e8:
    // 0x3188e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3188e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3188ec:
    // 0x3188ec: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3188ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3188f0:
    // 0x3188f0: 0xac624198  sw          $v0, 0x4198($v1)
    ctx->pc = 0x3188f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16792), GPR_U32(ctx, 2));
label_3188f4:
    // 0x3188f4: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3188f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3188f8:
    // 0x3188f8: 0xac804190  sw          $zero, 0x4190($a0)
    ctx->pc = 0x3188f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16784), GPR_U32(ctx, 0));
label_3188fc:
    // 0x3188fc: 0xc043c78  jal         func_10F1E0
label_318900:
    if (ctx->pc == 0x318900u) {
        ctx->pc = 0x318904u;
        goto label_318904;
    }
    ctx->pc = 0x3188FCu;
    SET_GPR_U32(ctx, 31, 0x318904u);
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x3188FCu, 0x318904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318904u;
label_318904:
    // 0x318904: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318904u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_318908:
    // 0x318908: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x318908u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31890c:
    // 0x31890c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31890cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_318910:
    // 0x318910: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x318910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_318914:
    // 0x318914: 0x3e00008  jr          $ra
label_318918:
    if (ctx->pc == 0x318918u) {
        ctx->pc = 0x31891Cu;
        goto label_fallthrough_0x318914;
    }
    ctx->pc = 0x318914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x318914:
    ctx->pc = 0x31891Cu;
}
