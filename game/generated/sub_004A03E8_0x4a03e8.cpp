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

// Function: sub_004A03E8
// Address: 0x4a03e8 - 0x4a08a0
void sub_004A03E8_0x4a03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A03E8_0x4a03e8");
#endif

    switch (ctx->pc) {
        case 0x4a03e8u: goto label_4a03e8;
        case 0x4a03ecu: goto label_4a03ec;
        case 0x4a03f0u: goto label_4a03f0;
        case 0x4a03f4u: goto label_4a03f4;
        case 0x4a03f8u: goto label_4a03f8;
        case 0x4a03fcu: goto label_4a03fc;
        case 0x4a0400u: goto label_4a0400;
        case 0x4a0404u: goto label_4a0404;
        case 0x4a0408u: goto label_4a0408;
        case 0x4a040cu: goto label_4a040c;
        case 0x4a0410u: goto label_4a0410;
        case 0x4a0414u: goto label_4a0414;
        case 0x4a0418u: goto label_4a0418;
        case 0x4a041cu: goto label_4a041c;
        case 0x4a0420u: goto label_4a0420;
        case 0x4a0424u: goto label_4a0424;
        case 0x4a0428u: goto label_4a0428;
        case 0x4a042cu: goto label_4a042c;
        case 0x4a0430u: goto label_4a0430;
        case 0x4a0434u: goto label_4a0434;
        case 0x4a0438u: goto label_4a0438;
        case 0x4a043cu: goto label_4a043c;
        case 0x4a0440u: goto label_4a0440;
        case 0x4a0444u: goto label_4a0444;
        case 0x4a0448u: goto label_4a0448;
        case 0x4a044cu: goto label_4a044c;
        case 0x4a0450u: goto label_4a0450;
        case 0x4a0454u: goto label_4a0454;
        case 0x4a0458u: goto label_4a0458;
        case 0x4a045cu: goto label_4a045c;
        case 0x4a0460u: goto label_4a0460;
        case 0x4a0464u: goto label_4a0464;
        case 0x4a0468u: goto label_4a0468;
        case 0x4a046cu: goto label_4a046c;
        case 0x4a0470u: goto label_4a0470;
        case 0x4a0474u: goto label_4a0474;
        case 0x4a0478u: goto label_4a0478;
        case 0x4a047cu: goto label_4a047c;
        case 0x4a0480u: goto label_4a0480;
        case 0x4a0484u: goto label_4a0484;
        case 0x4a0488u: goto label_4a0488;
        case 0x4a048cu: goto label_4a048c;
        case 0x4a0490u: goto label_4a0490;
        case 0x4a0494u: goto label_4a0494;
        case 0x4a0498u: goto label_4a0498;
        case 0x4a049cu: goto label_4a049c;
        case 0x4a04a0u: goto label_4a04a0;
        case 0x4a04a4u: goto label_4a04a4;
        case 0x4a04a8u: goto label_4a04a8;
        case 0x4a04acu: goto label_4a04ac;
        case 0x4a04b0u: goto label_4a04b0;
        case 0x4a04b4u: goto label_4a04b4;
        case 0x4a04b8u: goto label_4a04b8;
        case 0x4a04bcu: goto label_4a04bc;
        case 0x4a04c0u: goto label_4a04c0;
        case 0x4a04c4u: goto label_4a04c4;
        case 0x4a04c8u: goto label_4a04c8;
        case 0x4a04ccu: goto label_4a04cc;
        case 0x4a04d0u: goto label_4a04d0;
        case 0x4a04d4u: goto label_4a04d4;
        case 0x4a04d8u: goto label_4a04d8;
        case 0x4a04dcu: goto label_4a04dc;
        case 0x4a04e0u: goto label_4a04e0;
        case 0x4a04e4u: goto label_4a04e4;
        case 0x4a04e8u: goto label_4a04e8;
        case 0x4a04ecu: goto label_4a04ec;
        case 0x4a04f0u: goto label_4a04f0;
        case 0x4a04f4u: goto label_4a04f4;
        case 0x4a04f8u: goto label_4a04f8;
        case 0x4a04fcu: goto label_4a04fc;
        case 0x4a0500u: goto label_4a0500;
        case 0x4a0504u: goto label_4a0504;
        case 0x4a0508u: goto label_4a0508;
        case 0x4a050cu: goto label_4a050c;
        case 0x4a0510u: goto label_4a0510;
        case 0x4a0514u: goto label_4a0514;
        case 0x4a0518u: goto label_4a0518;
        case 0x4a051cu: goto label_4a051c;
        case 0x4a0520u: goto label_4a0520;
        case 0x4a0524u: goto label_4a0524;
        case 0x4a0528u: goto label_4a0528;
        case 0x4a052cu: goto label_4a052c;
        case 0x4a0530u: goto label_4a0530;
        case 0x4a0534u: goto label_4a0534;
        case 0x4a0538u: goto label_4a0538;
        case 0x4a053cu: goto label_4a053c;
        case 0x4a0540u: goto label_4a0540;
        case 0x4a0544u: goto label_4a0544;
        case 0x4a0548u: goto label_4a0548;
        case 0x4a054cu: goto label_4a054c;
        case 0x4a0550u: goto label_4a0550;
        case 0x4a0554u: goto label_4a0554;
        case 0x4a0558u: goto label_4a0558;
        case 0x4a055cu: goto label_4a055c;
        case 0x4a0560u: goto label_4a0560;
        case 0x4a0564u: goto label_4a0564;
        case 0x4a0568u: goto label_4a0568;
        case 0x4a056cu: goto label_4a056c;
        case 0x4a0570u: goto label_4a0570;
        case 0x4a0574u: goto label_4a0574;
        case 0x4a0578u: goto label_4a0578;
        case 0x4a057cu: goto label_4a057c;
        case 0x4a0580u: goto label_4a0580;
        case 0x4a0584u: goto label_4a0584;
        case 0x4a0588u: goto label_4a0588;
        case 0x4a058cu: goto label_4a058c;
        case 0x4a0590u: goto label_4a0590;
        case 0x4a0594u: goto label_4a0594;
        case 0x4a0598u: goto label_4a0598;
        case 0x4a059cu: goto label_4a059c;
        case 0x4a05a0u: goto label_4a05a0;
        case 0x4a05a4u: goto label_4a05a4;
        case 0x4a05a8u: goto label_4a05a8;
        case 0x4a05acu: goto label_4a05ac;
        case 0x4a05b0u: goto label_4a05b0;
        case 0x4a05b4u: goto label_4a05b4;
        case 0x4a05b8u: goto label_4a05b8;
        case 0x4a05bcu: goto label_4a05bc;
        case 0x4a05c0u: goto label_4a05c0;
        case 0x4a05c4u: goto label_4a05c4;
        case 0x4a05c8u: goto label_4a05c8;
        case 0x4a05ccu: goto label_4a05cc;
        case 0x4a05d0u: goto label_4a05d0;
        case 0x4a05d4u: goto label_4a05d4;
        case 0x4a05d8u: goto label_4a05d8;
        case 0x4a05dcu: goto label_4a05dc;
        case 0x4a05e0u: goto label_4a05e0;
        case 0x4a05e4u: goto label_4a05e4;
        case 0x4a05e8u: goto label_4a05e8;
        case 0x4a05ecu: goto label_4a05ec;
        case 0x4a05f0u: goto label_4a05f0;
        case 0x4a05f4u: goto label_4a05f4;
        case 0x4a05f8u: goto label_4a05f8;
        case 0x4a05fcu: goto label_4a05fc;
        case 0x4a0600u: goto label_4a0600;
        case 0x4a0604u: goto label_4a0604;
        case 0x4a0608u: goto label_4a0608;
        case 0x4a060cu: goto label_4a060c;
        case 0x4a0610u: goto label_4a0610;
        case 0x4a0614u: goto label_4a0614;
        case 0x4a0618u: goto label_4a0618;
        case 0x4a061cu: goto label_4a061c;
        case 0x4a0620u: goto label_4a0620;
        case 0x4a0624u: goto label_4a0624;
        case 0x4a0628u: goto label_4a0628;
        case 0x4a062cu: goto label_4a062c;
        case 0x4a0630u: goto label_4a0630;
        case 0x4a0634u: goto label_4a0634;
        case 0x4a0638u: goto label_4a0638;
        case 0x4a063cu: goto label_4a063c;
        case 0x4a0640u: goto label_4a0640;
        case 0x4a0644u: goto label_4a0644;
        case 0x4a0648u: goto label_4a0648;
        case 0x4a064cu: goto label_4a064c;
        case 0x4a0650u: goto label_4a0650;
        case 0x4a0654u: goto label_4a0654;
        case 0x4a0658u: goto label_4a0658;
        case 0x4a065cu: goto label_4a065c;
        case 0x4a0660u: goto label_4a0660;
        case 0x4a0664u: goto label_4a0664;
        case 0x4a0668u: goto label_4a0668;
        case 0x4a066cu: goto label_4a066c;
        case 0x4a0670u: goto label_4a0670;
        case 0x4a0674u: goto label_4a0674;
        case 0x4a0678u: goto label_4a0678;
        case 0x4a067cu: goto label_4a067c;
        case 0x4a0680u: goto label_4a0680;
        case 0x4a0684u: goto label_4a0684;
        case 0x4a0688u: goto label_4a0688;
        case 0x4a068cu: goto label_4a068c;
        case 0x4a0690u: goto label_4a0690;
        case 0x4a0694u: goto label_4a0694;
        case 0x4a0698u: goto label_4a0698;
        case 0x4a069cu: goto label_4a069c;
        case 0x4a06a0u: goto label_4a06a0;
        case 0x4a06a4u: goto label_4a06a4;
        case 0x4a06a8u: goto label_4a06a8;
        case 0x4a06acu: goto label_4a06ac;
        case 0x4a06b0u: goto label_4a06b0;
        case 0x4a06b4u: goto label_4a06b4;
        case 0x4a06b8u: goto label_4a06b8;
        case 0x4a06bcu: goto label_4a06bc;
        case 0x4a06c0u: goto label_4a06c0;
        case 0x4a06c4u: goto label_4a06c4;
        case 0x4a06c8u: goto label_4a06c8;
        case 0x4a06ccu: goto label_4a06cc;
        case 0x4a06d0u: goto label_4a06d0;
        case 0x4a06d4u: goto label_4a06d4;
        case 0x4a06d8u: goto label_4a06d8;
        case 0x4a06dcu: goto label_4a06dc;
        case 0x4a06e0u: goto label_4a06e0;
        case 0x4a06e4u: goto label_4a06e4;
        case 0x4a06e8u: goto label_4a06e8;
        case 0x4a06ecu: goto label_4a06ec;
        case 0x4a06f0u: goto label_4a06f0;
        case 0x4a06f4u: goto label_4a06f4;
        case 0x4a06f8u: goto label_4a06f8;
        case 0x4a06fcu: goto label_4a06fc;
        case 0x4a0700u: goto label_4a0700;
        case 0x4a0704u: goto label_4a0704;
        case 0x4a0708u: goto label_4a0708;
        case 0x4a070cu: goto label_4a070c;
        case 0x4a0710u: goto label_4a0710;
        case 0x4a0714u: goto label_4a0714;
        case 0x4a0718u: goto label_4a0718;
        case 0x4a071cu: goto label_4a071c;
        case 0x4a0720u: goto label_4a0720;
        case 0x4a0724u: goto label_4a0724;
        case 0x4a0728u: goto label_4a0728;
        case 0x4a072cu: goto label_4a072c;
        case 0x4a0730u: goto label_4a0730;
        case 0x4a0734u: goto label_4a0734;
        case 0x4a0738u: goto label_4a0738;
        case 0x4a073cu: goto label_4a073c;
        case 0x4a0740u: goto label_4a0740;
        case 0x4a0744u: goto label_4a0744;
        case 0x4a0748u: goto label_4a0748;
        case 0x4a074cu: goto label_4a074c;
        case 0x4a0750u: goto label_4a0750;
        case 0x4a0754u: goto label_4a0754;
        case 0x4a0758u: goto label_4a0758;
        case 0x4a075cu: goto label_4a075c;
        case 0x4a0760u: goto label_4a0760;
        case 0x4a0764u: goto label_4a0764;
        case 0x4a0768u: goto label_4a0768;
        case 0x4a076cu: goto label_4a076c;
        case 0x4a0770u: goto label_4a0770;
        case 0x4a0774u: goto label_4a0774;
        case 0x4a0778u: goto label_4a0778;
        case 0x4a077cu: goto label_4a077c;
        case 0x4a0780u: goto label_4a0780;
        case 0x4a0784u: goto label_4a0784;
        case 0x4a0788u: goto label_4a0788;
        case 0x4a078cu: goto label_4a078c;
        case 0x4a0790u: goto label_4a0790;
        case 0x4a0794u: goto label_4a0794;
        case 0x4a0798u: goto label_4a0798;
        case 0x4a079cu: goto label_4a079c;
        case 0x4a07a0u: goto label_4a07a0;
        case 0x4a07a4u: goto label_4a07a4;
        case 0x4a07a8u: goto label_4a07a8;
        case 0x4a07acu: goto label_4a07ac;
        case 0x4a07b0u: goto label_4a07b0;
        case 0x4a07b4u: goto label_4a07b4;
        case 0x4a07b8u: goto label_4a07b8;
        case 0x4a07bcu: goto label_4a07bc;
        case 0x4a07c0u: goto label_4a07c0;
        case 0x4a07c4u: goto label_4a07c4;
        case 0x4a07c8u: goto label_4a07c8;
        case 0x4a07ccu: goto label_4a07cc;
        case 0x4a07d0u: goto label_4a07d0;
        case 0x4a07d4u: goto label_4a07d4;
        case 0x4a07d8u: goto label_4a07d8;
        case 0x4a07dcu: goto label_4a07dc;
        case 0x4a07e0u: goto label_4a07e0;
        case 0x4a07e4u: goto label_4a07e4;
        case 0x4a07e8u: goto label_4a07e8;
        case 0x4a07ecu: goto label_4a07ec;
        case 0x4a07f0u: goto label_4a07f0;
        case 0x4a07f4u: goto label_4a07f4;
        case 0x4a07f8u: goto label_4a07f8;
        case 0x4a07fcu: goto label_4a07fc;
        case 0x4a0800u: goto label_4a0800;
        case 0x4a0804u: goto label_4a0804;
        case 0x4a0808u: goto label_4a0808;
        case 0x4a080cu: goto label_4a080c;
        case 0x4a0810u: goto label_4a0810;
        case 0x4a0814u: goto label_4a0814;
        case 0x4a0818u: goto label_4a0818;
        case 0x4a081cu: goto label_4a081c;
        case 0x4a0820u: goto label_4a0820;
        case 0x4a0824u: goto label_4a0824;
        case 0x4a0828u: goto label_4a0828;
        case 0x4a082cu: goto label_4a082c;
        case 0x4a0830u: goto label_4a0830;
        case 0x4a0834u: goto label_4a0834;
        case 0x4a0838u: goto label_4a0838;
        case 0x4a083cu: goto label_4a083c;
        case 0x4a0840u: goto label_4a0840;
        case 0x4a0844u: goto label_4a0844;
        case 0x4a0848u: goto label_4a0848;
        case 0x4a084cu: goto label_4a084c;
        case 0x4a0850u: goto label_4a0850;
        case 0x4a0854u: goto label_4a0854;
        case 0x4a0858u: goto label_4a0858;
        case 0x4a085cu: goto label_4a085c;
        case 0x4a0860u: goto label_4a0860;
        case 0x4a0864u: goto label_4a0864;
        case 0x4a0868u: goto label_4a0868;
        case 0x4a086cu: goto label_4a086c;
        case 0x4a0870u: goto label_4a0870;
        case 0x4a0874u: goto label_4a0874;
        case 0x4a0878u: goto label_4a0878;
        case 0x4a087cu: goto label_4a087c;
        case 0x4a0880u: goto label_4a0880;
        case 0x4a0884u: goto label_4a0884;
        case 0x4a0888u: goto label_4a0888;
        case 0x4a088cu: goto label_4a088c;
        case 0x4a0890u: goto label_4a0890;
        case 0x4a0894u: goto label_4a0894;
        case 0x4a0898u: goto label_4a0898;
        case 0x4a089cu: goto label_4a089c;
        default: break;
    }

    ctx->pc = 0x4a03e8u;

label_4a03e8:
    // 0x4a03e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a03e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a03ec:
    // 0x4a03ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a03ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4a03f0:
    // 0x4a03f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a03f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a03f4:
    // 0x4a03f4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a03f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_4a03f8:
    // 0x4a03f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a03f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a03fc:
    // 0x4a03fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a03fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_4a0400:
    // 0x4a0400: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a0400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_4a0404:
    // 0x4a0404: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a0404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4a0408:
    // 0x4a0408: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a0408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_4a040c:
    // 0x4a040c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a040cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_4a0410:
    // 0x4a0410: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4a0410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_4a0414:
    // 0x4a0414: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4a0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_4a0418:
    // 0x4a0418: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a0418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_4a041c:
    // 0x4a041c: 0xc1232f2  jal         func_48CBC8
label_4a0420:
    if (ctx->pc == 0x4A0420u) {
        ctx->pc = 0x4A0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A041Cu;
        // 0x4a0420: 0x26740148  addiu       $s4, $s3, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0424u;
        goto label_4a0424;
    }
    ctx->pc = 0x4A041Cu;
    SET_GPR_U32(ctx, 31, 0x4A0424u);
    ctx->pc = 0x4A0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A041Cu;
    // 0x4a0420: 0x26740148  addiu       $s4, $s3, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A041Cu, 0x4A0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0424u;
label_4a0424:
    // 0x4a0424: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x4a0424u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0428:
    // 0x4a0428: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a0428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4a042c:
    // 0x4a042c: 0xac500be8  sw          $s0, 0xBE8($v0)
    ctx->pc = 0x4a042cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3048), GPR_U32(ctx, 16));
label_4a0430:
    // 0x4a0430: 0x866201b4  lh          $v0, 0x1B4($s3)
    ctx->pc = 0x4a0430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 436)));
label_4a0434:
    // 0x4a0434: 0x443010d  bgezl       $v0, . + 4 + (0x10D << 2)
label_4a0438:
    if (ctx->pc == 0x4A0438u) {
        ctx->pc = 0x4A0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0434u;
        // 0x4a0438: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A043Cu;
        goto label_4a043c;
    }
    ctx->pc = 0x4A0434u;
    {
        const bool branch_taken_0x4a0434 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a0434) {
            ctx->pc = 0x4A0438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0434u;
            // 0x4a0438: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A086Cu;
            goto label_4a086c;
        }
    }
    ctx->pc = 0x4A043Cu;
label_4a043c:
    // 0x4a043c: 0x866201c2  lh          $v0, 0x1C2($s3)
    ctx->pc = 0x4a043cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 450)));
label_4a0440:
    // 0x4a0440: 0x54400109  bnel        $v0, $zero, . + 4 + (0x109 << 2)
label_4a0444:
    if (ctx->pc == 0x4A0444u) {
        ctx->pc = 0x4A0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0440u;
        // 0x4a0444: 0x26740148  addiu       $s4, $s3, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0448u;
        goto label_4a0448;
    }
    ctx->pc = 0x4A0440u;
    {
        const bool branch_taken_0x4a0440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0440) {
            ctx->pc = 0x4A0444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0440u;
            // 0x4a0444: 0x26740148  addiu       $s4, $s3, 0x148 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0868u;
            goto label_4a0868;
        }
    }
    ctx->pc = 0x4A0448u;
label_4a0448:
    // 0x4a0448: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4a0448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4a044c:
    // 0x4a044c: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_4a0450:
    if (ctx->pc == 0x4A0450u) {
        ctx->pc = 0x4A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A044Cu;
        // 0x4a0450: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0454u;
        goto label_4a0454;
    }
    ctx->pc = 0x4A044Cu;
    {
        const bool branch_taken_0x4a044c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A044Cu;
        // 0x4a0450: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a044c) {
            ctx->pc = 0x4A086Cu;
            goto label_4a086c;
        }
    }
    ctx->pc = 0x4A0454u;
label_4a0454:
    // 0x4a0454: 0x866301c0  lh          $v1, 0x1C0($s3)
    ctx->pc = 0x4a0454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_4a0458:
    // 0x4a0458: 0x254a0be4  addiu       $t2, $t2, 0xBE4
    ctx->pc = 0x4a0458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3044));
label_4a045c:
    // 0x4a045c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a045cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_4a0460:
    // 0x4a0460: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4a0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a0464:
    // 0x4a0464: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a0464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4a0468:
    // 0x4a0468: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a0468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4a046c:
    // 0x4a046c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a046cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4a0470:
    // 0x4a0470: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a0470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a0474:
    // 0x4a0474: 0x248e0bd4  addiu       $t6, $a0, 0xBD4
    ctx->pc = 0x4a0474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 3028));
label_4a0478:
    // 0x4a0478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a047c:
    // 0x4a047c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a0480:
    // 0x4a0480: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x4a0480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_4a0484:
    // 0x4a0484: 0x25080be0  addiu       $t0, $t0, 0xBE0
    ctx->pc = 0x4a0484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3040));
label_4a0488:
    // 0x4a0488: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4a0488u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4a048c:
    // 0x4a048c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a048cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4a0490:
    // 0x4a0490: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a0490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a0494:
    // 0x4a0494: 0x24af0bd8  addiu       $t7, $a1, 0xBD8
    ctx->pc = 0x4a0494u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 3032));
label_4a0498:
    // 0x4a0498: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4a0498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4a049c:
    // 0x4a049c: 0x24780bdc  addiu       $t8, $v1, 0xBDC
    ctx->pc = 0x4a049cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 3036));
label_4a04a0:
    // 0x4a04a0: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4a04a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4a04a4:
    // 0x4a04a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4a04a8:
    // 0x4a04a8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a04a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a04ac:
    // 0x4a04ac: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4a04acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_4a04b0:
    // 0x4a04b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a04b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a04b4:
    // 0x4a04b4: 0x34630028  ori         $v1, $v1, 0x28
    ctx->pc = 0x4a04b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40);
label_4a04b8:
    // 0x4a04b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a04b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a04bc:
    // 0x4a04bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a04bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a04c0:
    // 0x4a04c0: 0x82f024  and         $fp, $a0, $v0
    ctx->pc = 0x4a04c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a04c4:
    // 0x4a04c4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4a04c8:
    // 0x4a04c8: 0xadde0000  sw          $fp, 0x0($t6)
    ctx->pc = 0x4a04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 30));
label_4a04cc:
    // 0x4a04cc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a04ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a04d0:
    // 0x4a04d0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a04d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4a04d4:
    // 0x4a04d4: 0x25a30004  addiu       $v1, $t5, 0x4
    ctx->pc = 0x4a04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_4a04d8:
    // 0x4a04d8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4a04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4a04dc:
    // 0x4a04dc: 0x24910bc8  addiu       $s1, $a0, 0xBC8
    ctx->pc = 0x4a04dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3016));
label_4a04e0:
    // 0x4a04e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4a04e4:
    // 0x4a04e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a04e8:
    // 0x4a04e8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a04e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a04ec:
    // 0x4a04ec: 0x8f090000  lw          $t1, 0x0($t8)
    ctx->pc = 0x4a04ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_4a04f0:
    // 0x4a04f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a04f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a04f4:
    // 0x4a04f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4a04f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a04f8:
    // 0x4a04f8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a04f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a04fc:
    // 0x4a04fc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a04fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a0500:
    // 0x4a0500: 0xa2b024  and         $s6, $a1, $v0
    ctx->pc = 0x4a0500u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a0504:
    // 0x4a0504: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a0504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4a0508:
    // 0x4a0508: 0x244c0bcc  addiu       $t4, $v0, 0xBCC
    ctx->pc = 0x4a0508u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 3020));
label_4a050c:
    // 0x4a050c: 0x25a20008  addiu       $v0, $t5, 0x8
    ctx->pc = 0x4a050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_4a0510:
    // 0x4a0510: 0xadf60000  sw          $s6, 0x0($t7)
    ctx->pc = 0x4a0510u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 22));
label_4a0514:
    // 0x4a0514: 0x246b0bd0  addiu       $t3, $v1, 0xBD0
    ctx->pc = 0x4a0514u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
label_4a0518:
    // 0x4a0518: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4a0518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4a051c:
    // 0x4a051c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a051cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4a0520:
    // 0x4a0520: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4a0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4a0524:
    // 0x4a0524: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4a0524u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_4a0528:
    // 0x4a0528: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a0528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a052c:
    // 0x4a052c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a0530:
    // 0x4a0530: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0534:
    // 0x4a0534: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4a0534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4a0538:
    // 0x4a0538: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a053c:
    // 0x4a053c: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4a053cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4a0540:
    // 0x4a0540: 0x1229024  and         $s2, $t1, $v0
    ctx->pc = 0x4a0540u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_4a0544:
    // 0x4a0544: 0x85d90000  lh          $t9, 0x0($t6)
    ctx->pc = 0x4a0544u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_4a0548:
    // 0x4a0548: 0xaf120000  sw          $s2, 0x0($t8)
    ctx->pc = 0x4a0548u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 18));
label_4a054c:
    // 0x4a054c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a054cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a0550:
    // 0x4a0550: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a0550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a0554:
    // 0x4a0554: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x4a0554u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_4a0558:
    // 0x4a0558: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4a0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4a055c:
    // 0x4a055c: 0x85490000  lh          $t1, 0x0($t2)
    ctx->pc = 0x4a055cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4a0560:
    // 0x4a0560: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4a0560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4a0564:
    // 0x4a0564: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a0564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a0568:
    // 0x4a0568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a056c:
    // 0x4a056c: 0x87170000  lh          $s7, 0x0($t8)
    ctx->pc = 0x4a056cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_4a0570:
    // 0x4a0570: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0574:
    // 0x4a0574: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4a0574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4a0578:
    // 0x4a0578: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a0578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4a057c:
    // 0x4a057c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4a0580:
    // 0x4a0580: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a0580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_4a0584:
    // 0x4a0584: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a0584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4a0588:
    // 0x4a0588: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a0588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4a058c:
    // 0x4a058c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0590:
    // 0x4a0590: 0x34eaffff  ori         $t2, $a3, 0xFFFF
    ctx->pc = 0x4a0590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a0594:
    // 0x4a0594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a0594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a0598:
    // 0x4a0598: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4a0598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a059c:
    // 0x4a059c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a05a0:
    // 0x4a05a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a05a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a05a4:
    // 0x4a05a4: 0x791823  subu        $v1, $v1, $t9
    ctx->pc = 0x4a05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_4a05a8:
    // 0x4a05a8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a05a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a05ac:
    // 0x4a05ac: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a05acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4a05b0:
    // 0x4a05b0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a05b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a05b4:
    // 0x4a05b4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4a05b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4a05b8:
    // 0x4a05b8: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_4a05bc:
    // 0x4a05bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a05bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a05c0:
    // 0x4a05c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a05c4:
    // 0x4a05c4: 0x34c9ffff  ori         $t1, $a2, 0xFFFF
    ctx->pc = 0x4a05c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4a05c8:
    // 0x4a05c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a05cc:
    // 0x4a05cc: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4a05ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4a05d0:
    // 0x4a05d0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a05d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a05d4:
    // 0x4a05d4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4a05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_4a05d8:
    // 0x4a05d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a05d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a05dc:
    // 0x4a05dc: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x4a05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4a05e0:
    // 0x4a05e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a05e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a05e4:
    // 0x4a05e4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a05e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4a05e8:
    // 0x4a05e8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a05e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a05ec:
    // 0x4a05ec: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a05ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a05f0:
    // 0x4a05f0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4a05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_4a05f4:
    // 0x4a05f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a05f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a05f8:
    // 0x4a05f8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_4a05fc:
    // 0x4a05fc: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x4a05fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a0600:
    // 0x4a0600: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4a0600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4a0604:
    // 0x4a0604: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a0604u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_4a0608:
    // 0x4a0608: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x4a0608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4a060c:
    // 0x4a060c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0610:
    // 0x4a0610: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a0610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a0614:
    // 0x4a0614: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4a0614u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_4a0618:
    // 0x4a0618: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a0618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a061c:
    // 0x4a061c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4a061cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4a0620:
    // 0x4a0620: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a0620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0624:
    // 0x4a0624: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x4a0624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4a0628:
    // 0x4a0628: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4a0628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4a062c:
    // 0x4a062c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4a0630:
    // 0x4a0630: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a0630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4a0634:
    // 0x4a0634: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0638:
    // 0x4a0638: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4a0638u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
label_4a063c:
    // 0x4a063c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4a063cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_4a0640:
    // 0x4a0640: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4a0640u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
label_4a0644:
    // 0x4a0644: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4a0644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
label_4a0648:
    // 0x4a0648: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4a0648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4a064c:
    // 0x4a064c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4a064cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_4a0650:
    // 0x4a0650: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4a0650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4a0654:
    // 0x4a0654: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4a0654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4a0658:
    // 0x4a0658: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x4a0658u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4a065c:
    // 0x4a065c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4a065cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0660:
    // 0x4a0660: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a0660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4a0664:
    // 0x4a0664: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0668:
    // 0x4a0668: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x4a0668u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
label_4a066c:
    // 0x4a066c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a066cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a0670:
    // 0x4a0670: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x4a0670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4a0674:
    // 0x4a0674: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_4a0678:
    if (ctx->pc == 0x4A0678u) {
        ctx->pc = 0x4A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0674u;
        // 0x4a0678: 0xad650000  sw          $a1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A067Cu;
        goto label_4a067c;
    }
    ctx->pc = 0x4A0674u;
    {
        const bool branch_taken_0x4a0674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0674u;
        // 0x4a0678: 0xad650000  sw          $a1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0674) {
            ctx->pc = 0x4A0868u;
            goto label_4a0868;
        }
    }
    ctx->pc = 0x4A067Cu;
label_4a067c:
    // 0x4a067c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4a067cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4a0680:
    // 0x4a0680: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4a0680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4a0684:
    // 0x4a0684: 0x50400079  beql        $v0, $zero, . + 4 + (0x79 << 2)
label_4a0688:
    if (ctx->pc == 0x4A0688u) {
        ctx->pc = 0x4A0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0684u;
        // 0x4a0688: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A068Cu;
        goto label_4a068c;
    }
    ctx->pc = 0x4A0684u;
    {
        const bool branch_taken_0x4a0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0684) {
            ctx->pc = 0x4A0688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0684u;
            // 0x4a0688: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A086Cu;
            goto label_4a086c;
        }
    }
    ctx->pc = 0x4A068Cu;
label_4a068c:
    // 0x4a068c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4a068cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4a0690:
    // 0x4a0690: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4a0690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4a0694:
    // 0x4a0694: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
label_4a0698:
    if (ctx->pc == 0x4A0698u) {
        ctx->pc = 0x4A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0694u;
        // 0x4a0698: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A069Cu;
        goto label_4a069c;
    }
    ctx->pc = 0x4A0694u;
    {
        const bool branch_taken_0x4a0694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0694) {
            ctx->pc = 0x4A0698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0694u;
            // 0x4a0698: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A086Cu;
            goto label_4a086c;
        }
    }
    ctx->pc = 0x4A069Cu;
label_4a069c:
    // 0x4a069c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4a069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4a06a0:
    // 0x4a06a0: 0x37c4ffff  ori         $a0, $fp, 0xFFFF
    ctx->pc = 0x4a06a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
label_4a06a4:
    // 0x4a06a4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4a06a8:
    // 0x4a06a8: 0x3648ffff  ori         $t0, $s2, 0xFFFF
    ctx->pc = 0x4a06a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_4a06ac:
    // 0x4a06ac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a06acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a06b0:
    // 0x4a06b0: 0x2472d680  addiu       $s2, $v1, -0x2980
    ctx->pc = 0x4a06b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
label_4a06b4:
    // 0x4a06b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a06b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a06b8:
    // 0x4a06b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a06bc:
    // 0x4a06bc: 0x3221023  subu        $v0, $t9, $v0
    ctx->pc = 0x4a06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_4a06c0:
    // 0x4a06c0: 0x26492494  addiu       $t1, $s2, 0x2494
    ctx->pc = 0x4a06c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 9364));
label_4a06c4:
    // 0x4a06c4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a06c8:
    // 0x4a06c8: 0x36c7ffff  ori         $a3, $s6, 0xFFFF
    ctx->pc = 0x4a06c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
label_4a06cc:
    // 0x4a06cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a06ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a06d0:
    // 0x4a06d0: 0x264a2498  addiu       $t2, $s2, 0x2498
    ctx->pc = 0x4a06d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 9368));
label_4a06d4:
    // 0x4a06d4: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x4a06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
label_4a06d8:
    // 0x4a06d8: 0x264b249c  addiu       $t3, $s2, 0x249C
    ctx->pc = 0x4a06d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 9372));
label_4a06dc:
    // 0x4a06dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a06e0:
    // 0x4a06e0: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4a06e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_4a06e4:
    // 0x4a06e4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a06e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a06e8:
    // 0x4a06e8: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4a06e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4a06ec:
    // 0x4a06ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a06ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a06f0:
    // 0x4a06f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4a06f4:
    // 0x4a06f4: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x4a06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4a06f8:
    // 0x4a06f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a06f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a06fc:
    // 0x4a06fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0700:
    // 0x4a0700: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4a0700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
label_4a0704:
    // 0x4a0704: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a0704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4a0708:
    // 0x4a0708: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4a0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a070c:
    // 0x4a070c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4a070cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4a0710:
    // 0x4a0710: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a0710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4a0714:
    // 0x4a0714: 0xade70000  sw          $a3, 0x0($t7)
    ctx->pc = 0x4a0714u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 7));
label_4a0718:
    // 0x4a0718: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4a0718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_4a071c:
    // 0x4a071c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a0720:
    // 0x4a0720: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4a0720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_4a0724:
    // 0x4a0724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a0728:
    // 0x4a0728: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x4a0728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_4a072c:
    // 0x4a072c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4a0730:
    // 0x4a0730: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4a0730u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4a0734:
    // 0x4a0734: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0738:
    // 0x4a0738: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a0738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4a073c:
    // 0x4a073c: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x4a073cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4a0740:
    // 0x4a0740: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a0740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a0744:
    // 0x4a0744: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0748:
    // 0x4a0748: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a0748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a074c:
    // 0x4a074c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a074cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4a0750:
    // 0x4a0750: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4a0750u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
label_4a0754:
    // 0x4a0754: 0xaf080000  sw          $t0, 0x0($t8)
    ctx->pc = 0x4a0754u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 8));
label_4a0758:
    // 0x4a0758: 0x97020000  lhu         $v0, 0x0($t8)
    ctx->pc = 0x4a0758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_4a075c:
    // 0x4a075c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a075cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4a0760:
    // 0x4a0760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a0760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a0764:
    // 0x4a0764: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a0764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4a0768:
    // 0x4a0768: 0xc12b8da  jal         func_4AE368
label_4a076c:
    if (ctx->pc == 0x4A076Cu) {
        ctx->pc = 0x4A076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0768u;
        // 0x4a076c: 0xad660000  sw          $a2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0770u;
        goto label_4a0770;
    }
    ctx->pc = 0x4A0768u;
    SET_GPR_U32(ctx, 31, 0x4A0770u);
    ctx->pc = 0x4A076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0768u;
    // 0x4a076c: 0xad660000  sw          $a2, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4A0768u, 0x4A0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0770u;
label_4a0770:
    // 0x4a0770: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a0770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0774:
    // 0x4a0774: 0x864224a2  lh          $v0, 0x24A2($s2)
    ctx->pc = 0x4a0774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
label_4a0778:
    // 0x4a0778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a0778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a077c:
    // 0x4a077c: 0x86440074  lh          $a0, 0x74($s2)
    ctx->pc = 0x4a077cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_4a0780:
    // 0x4a0780: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0784:
    // 0x4a0784: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a0784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a0788:
    // 0x4a0788: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a0788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a078c:
    // 0x4a078c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a078cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a0790:
    // 0x4a0790: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a0790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0794:
    // 0x4a0794: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4a0794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a0798:
    // 0x4a0798: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a079c:
    // 0x4a079c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a07a0:
    // 0x4a07a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a07a4:
    // 0x4a07a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a07a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a07a8:
    // 0x4a07a8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a07a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a07ac:
    // 0x4a07ac: 0x24420c72  addiu       $v0, $v0, 0xC72
    ctx->pc = 0x4a07acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3186));
label_4a07b0:
    // 0x4a07b0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a07b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a07b4:
    // 0x4a07b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a07b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a07b8:
    // 0x4a07b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a07bc:
    // 0x4a07bc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a07bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a07c0:
    // 0x4a07c0: 0x2c4218e4  sltiu       $v0, $v0, 0x18E4
    ctx->pc = 0x4a07c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6372) ? 1 : 0);
label_4a07c4:
    // 0x4a07c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4a07c8:
    if (ctx->pc == 0x4A07C8u) {
        ctx->pc = 0x4A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A07C4u;
        // 0x4a07c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A07CCu;
        goto label_4a07cc;
    }
    ctx->pc = 0x4A07C4u;
    {
        const bool branch_taken_0x4a07c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A07C4u;
        // 0x4a07c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a07c4) {
            ctx->pc = 0x4A0820u;
            goto label_4a0820;
        }
    }
    ctx->pc = 0x4A07CCu;
label_4a07cc:
    // 0x4a07cc: 0x864224a0  lh          $v0, 0x24A0($s2)
    ctx->pc = 0x4a07ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
label_4a07d0:
    // 0x4a07d0: 0x86440076  lh          $a0, 0x76($s2)
    ctx->pc = 0x4a07d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 118)));
label_4a07d4:
    // 0x4a07d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a07d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a07d8:
    // 0x4a07d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a07d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a07dc:
    // 0x4a07dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a07dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a07e0:
    // 0x4a07e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a07e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a07e4:
    // 0x4a07e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a07e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a07e8:
    // 0x4a07e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4a07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a07ec:
    // 0x4a07ec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a07ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a07f0:
    // 0x4a07f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a07f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a07f4:
    // 0x4a07f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a07f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a07f8:
    // 0x4a07f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a07f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a07fc:
    // 0x4a07fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a07fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0800:
    // 0x4a0800: 0x24420c72  addiu       $v0, $v0, 0xC72
    ctx->pc = 0x4a0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3186));
label_4a0804:
    // 0x4a0804: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0808:
    // 0x4a0808: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a0808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a080c:
    // 0x4a080c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a080cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a0810:
    // 0x4a0810: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a0810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0814:
    // 0x4a0814: 0x2c4218e4  sltiu       $v0, $v0, 0x18E4
    ctx->pc = 0x4a0814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6372) ? 1 : 0);
label_4a0818:
    // 0x4a0818: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4a081c:
    if (ctx->pc == 0x4A081Cu) {
        ctx->pc = 0x4A081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0818u;
        // 0x4a081c: 0x86620008  lh          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0820u;
        goto label_4a0820;
    }
    ctx->pc = 0x4A0818u;
    {
        const bool branch_taken_0x4a0818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0818) {
            ctx->pc = 0x4A081Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0818u;
            // 0x4a081c: 0x86620008  lh          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0830u;
            goto label_4a0830;
        }
    }
    ctx->pc = 0x4A0820u;
label_4a0820:
    // 0x4a0820: 0xc1280ee  jal         func_4A03B8
label_4a0824:
    if (ctx->pc == 0x4A0824u) {
        ctx->pc = 0x4A0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0820u;
        // 0x4a0824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0828u;
        goto label_4a0828;
    }
    ctx->pc = 0x4A0820u;
    SET_GPR_U32(ctx, 31, 0x4A0828u);
    ctx->pc = 0x4A0824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0820u;
    // 0x4a0824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03B8u, 0x4A0820u, 0x4A0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0828u;
label_4a0828:
    // 0x4a0828: 0x10000011  b           . + 4 + (0x11 << 2)
label_4a082c:
    if (ctx->pc == 0x4A082Cu) {
        ctx->pc = 0x4A082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0828u;
        // 0x4a082c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0830u;
        goto label_4a0830;
    }
    ctx->pc = 0x4A0828u;
    {
        const bool branch_taken_0x4a0828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0828u;
        // 0x4a082c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0828) {
            ctx->pc = 0x4A0870u;
            goto label_4a0870;
        }
    }
    ctx->pc = 0x4A0830u;
label_4a0830:
    // 0x4a0830: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a0830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a0834:
    // 0x4a0834: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a0834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4a0838:
    // 0x4a0838: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a0838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a083c:
    // 0x4a083c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a083cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a0840:
    // 0x4a0840: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a0840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0844:
    // 0x4a0844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a0844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a0848:
    // 0x4a0848: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a0848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_4a084c:
    // 0x4a084c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a0850:
    // 0x4a0850: 0x8c638540  lw          $v1, -0x7AC0($v1)
    ctx->pc = 0x4a0850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935872)));
label_4a0854:
    // 0x4a0854: 0x60f809  jalr        $v1
label_4a0858:
    if (ctx->pc == 0x4A0858u) {
        ctx->pc = 0x4A0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0854u;
        // 0x4a0858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A085Cu;
        goto label_4a085c;
    }
    ctx->pc = 0x4A0854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A085Cu);
        ctx->pc = 0x4A0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0854u;
        // 0x4a0858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0854u, 0x4A085Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A085Cu;
label_4a085c:
    // 0x4a085c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a0860:
    if (ctx->pc == 0x4A0860u) {
        ctx->pc = 0x4A0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A085Cu;
        // 0x4a0860: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0864u;
        goto label_4a0864;
    }
    ctx->pc = 0x4A085Cu;
    {
        const bool branch_taken_0x4a085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A085Cu;
        // 0x4a0860: 0x86820000  lh          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a085c) {
            ctx->pc = 0x4A086Cu;
            goto label_4a086c;
        }
    }
    ctx->pc = 0x4A0864u;
label_4a0864:
    // 0x4a0864: 0x0  nop
    ctx->pc = 0x4a0864u;
    // NOP
label_4a0868:
    // 0x4a0868: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4a0868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4a086c:
    // 0x4a086c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4a086cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4a0870:
    // 0x4a0870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a0870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0874:
    // 0x4a0874: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a0874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4a0878:
    // 0x4a0878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a0878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a087c:
    // 0x4a087c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a087cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4a0880:
    // 0x4a0880: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a0880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0884:
    // 0x4a0884: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a0884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4a0888:
    // 0x4a0888: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a0888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a088c:
    // 0x4a088c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4a088cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4a0890:
    // 0x4a0890: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4a0890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4a0894:
    // 0x4a0894: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4a0894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4a0898:
    // 0x4a0898: 0x3e00008  jr          $ra
label_4a089c:
    if (ctx->pc == 0x4A089Cu) {
        ctx->pc = 0x4A089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0898u;
        // 0x4a089c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08A0u;
        goto label_fallthrough_0x4a0898;
    }
    ctx->pc = 0x4A0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0898u;
        // 0x4a089c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a0898:
    ctx->pc = 0x4A08A0u;
}
