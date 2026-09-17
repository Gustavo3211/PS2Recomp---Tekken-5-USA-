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

// Function: sub_002E3618
// Address: 0x2e3618 - 0x2e38e8
void sub_002E3618_0x2e3618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3618_0x2e3618");
#endif

    switch (ctx->pc) {
        case 0x2e3618u: goto label_2e3618;
        case 0x2e361cu: goto label_2e361c;
        case 0x2e3620u: goto label_2e3620;
        case 0x2e3624u: goto label_2e3624;
        case 0x2e3628u: goto label_2e3628;
        case 0x2e362cu: goto label_2e362c;
        case 0x2e3630u: goto label_2e3630;
        case 0x2e3634u: goto label_2e3634;
        case 0x2e3638u: goto label_2e3638;
        case 0x2e363cu: goto label_2e363c;
        case 0x2e3640u: goto label_2e3640;
        case 0x2e3644u: goto label_2e3644;
        case 0x2e3648u: goto label_2e3648;
        case 0x2e364cu: goto label_2e364c;
        case 0x2e3650u: goto label_2e3650;
        case 0x2e3654u: goto label_2e3654;
        case 0x2e3658u: goto label_2e3658;
        case 0x2e365cu: goto label_2e365c;
        case 0x2e3660u: goto label_2e3660;
        case 0x2e3664u: goto label_2e3664;
        case 0x2e3668u: goto label_2e3668;
        case 0x2e366cu: goto label_2e366c;
        case 0x2e3670u: goto label_2e3670;
        case 0x2e3674u: goto label_2e3674;
        case 0x2e3678u: goto label_2e3678;
        case 0x2e367cu: goto label_2e367c;
        case 0x2e3680u: goto label_2e3680;
        case 0x2e3684u: goto label_2e3684;
        case 0x2e3688u: goto label_2e3688;
        case 0x2e368cu: goto label_2e368c;
        case 0x2e3690u: goto label_2e3690;
        case 0x2e3694u: goto label_2e3694;
        case 0x2e3698u: goto label_2e3698;
        case 0x2e369cu: goto label_2e369c;
        case 0x2e36a0u: goto label_2e36a0;
        case 0x2e36a4u: goto label_2e36a4;
        case 0x2e36a8u: goto label_2e36a8;
        case 0x2e36acu: goto label_2e36ac;
        case 0x2e36b0u: goto label_2e36b0;
        case 0x2e36b4u: goto label_2e36b4;
        case 0x2e36b8u: goto label_2e36b8;
        case 0x2e36bcu: goto label_2e36bc;
        case 0x2e36c0u: goto label_2e36c0;
        case 0x2e36c4u: goto label_2e36c4;
        case 0x2e36c8u: goto label_2e36c8;
        case 0x2e36ccu: goto label_2e36cc;
        case 0x2e36d0u: goto label_2e36d0;
        case 0x2e36d4u: goto label_2e36d4;
        case 0x2e36d8u: goto label_2e36d8;
        case 0x2e36dcu: goto label_2e36dc;
        case 0x2e36e0u: goto label_2e36e0;
        case 0x2e36e4u: goto label_2e36e4;
        case 0x2e36e8u: goto label_2e36e8;
        case 0x2e36ecu: goto label_2e36ec;
        case 0x2e36f0u: goto label_2e36f0;
        case 0x2e36f4u: goto label_2e36f4;
        case 0x2e36f8u: goto label_2e36f8;
        case 0x2e36fcu: goto label_2e36fc;
        case 0x2e3700u: goto label_2e3700;
        case 0x2e3704u: goto label_2e3704;
        case 0x2e3708u: goto label_2e3708;
        case 0x2e370cu: goto label_2e370c;
        case 0x2e3710u: goto label_2e3710;
        case 0x2e3714u: goto label_2e3714;
        case 0x2e3718u: goto label_2e3718;
        case 0x2e371cu: goto label_2e371c;
        case 0x2e3720u: goto label_2e3720;
        case 0x2e3724u: goto label_2e3724;
        case 0x2e3728u: goto label_2e3728;
        case 0x2e372cu: goto label_2e372c;
        case 0x2e3730u: goto label_2e3730;
        case 0x2e3734u: goto label_2e3734;
        case 0x2e3738u: goto label_2e3738;
        case 0x2e373cu: goto label_2e373c;
        case 0x2e3740u: goto label_2e3740;
        case 0x2e3744u: goto label_2e3744;
        case 0x2e3748u: goto label_2e3748;
        case 0x2e374cu: goto label_2e374c;
        case 0x2e3750u: goto label_2e3750;
        case 0x2e3754u: goto label_2e3754;
        case 0x2e3758u: goto label_2e3758;
        case 0x2e375cu: goto label_2e375c;
        case 0x2e3760u: goto label_2e3760;
        case 0x2e3764u: goto label_2e3764;
        case 0x2e3768u: goto label_2e3768;
        case 0x2e376cu: goto label_2e376c;
        case 0x2e3770u: goto label_2e3770;
        case 0x2e3774u: goto label_2e3774;
        case 0x2e3778u: goto label_2e3778;
        case 0x2e377cu: goto label_2e377c;
        case 0x2e3780u: goto label_2e3780;
        case 0x2e3784u: goto label_2e3784;
        case 0x2e3788u: goto label_2e3788;
        case 0x2e378cu: goto label_2e378c;
        case 0x2e3790u: goto label_2e3790;
        case 0x2e3794u: goto label_2e3794;
        case 0x2e3798u: goto label_2e3798;
        case 0x2e379cu: goto label_2e379c;
        case 0x2e37a0u: goto label_2e37a0;
        case 0x2e37a4u: goto label_2e37a4;
        case 0x2e37a8u: goto label_2e37a8;
        case 0x2e37acu: goto label_2e37ac;
        case 0x2e37b0u: goto label_2e37b0;
        case 0x2e37b4u: goto label_2e37b4;
        case 0x2e37b8u: goto label_2e37b8;
        case 0x2e37bcu: goto label_2e37bc;
        case 0x2e37c0u: goto label_2e37c0;
        case 0x2e37c4u: goto label_2e37c4;
        case 0x2e37c8u: goto label_2e37c8;
        case 0x2e37ccu: goto label_2e37cc;
        case 0x2e37d0u: goto label_2e37d0;
        case 0x2e37d4u: goto label_2e37d4;
        case 0x2e37d8u: goto label_2e37d8;
        case 0x2e37dcu: goto label_2e37dc;
        case 0x2e37e0u: goto label_2e37e0;
        case 0x2e37e4u: goto label_2e37e4;
        case 0x2e37e8u: goto label_2e37e8;
        case 0x2e37ecu: goto label_2e37ec;
        case 0x2e37f0u: goto label_2e37f0;
        case 0x2e37f4u: goto label_2e37f4;
        case 0x2e37f8u: goto label_2e37f8;
        case 0x2e37fcu: goto label_2e37fc;
        case 0x2e3800u: goto label_2e3800;
        case 0x2e3804u: goto label_2e3804;
        case 0x2e3808u: goto label_2e3808;
        case 0x2e380cu: goto label_2e380c;
        case 0x2e3810u: goto label_2e3810;
        case 0x2e3814u: goto label_2e3814;
        case 0x2e3818u: goto label_2e3818;
        case 0x2e381cu: goto label_2e381c;
        case 0x2e3820u: goto label_2e3820;
        case 0x2e3824u: goto label_2e3824;
        case 0x2e3828u: goto label_2e3828;
        case 0x2e382cu: goto label_2e382c;
        case 0x2e3830u: goto label_2e3830;
        case 0x2e3834u: goto label_2e3834;
        case 0x2e3838u: goto label_2e3838;
        case 0x2e383cu: goto label_2e383c;
        case 0x2e3840u: goto label_2e3840;
        case 0x2e3844u: goto label_2e3844;
        case 0x2e3848u: goto label_2e3848;
        case 0x2e384cu: goto label_2e384c;
        case 0x2e3850u: goto label_2e3850;
        case 0x2e3854u: goto label_2e3854;
        case 0x2e3858u: goto label_2e3858;
        case 0x2e385cu: goto label_2e385c;
        case 0x2e3860u: goto label_2e3860;
        case 0x2e3864u: goto label_2e3864;
        case 0x2e3868u: goto label_2e3868;
        case 0x2e386cu: goto label_2e386c;
        case 0x2e3870u: goto label_2e3870;
        case 0x2e3874u: goto label_2e3874;
        case 0x2e3878u: goto label_2e3878;
        case 0x2e387cu: goto label_2e387c;
        case 0x2e3880u: goto label_2e3880;
        case 0x2e3884u: goto label_2e3884;
        case 0x2e3888u: goto label_2e3888;
        case 0x2e388cu: goto label_2e388c;
        case 0x2e3890u: goto label_2e3890;
        case 0x2e3894u: goto label_2e3894;
        case 0x2e3898u: goto label_2e3898;
        case 0x2e389cu: goto label_2e389c;
        case 0x2e38a0u: goto label_2e38a0;
        case 0x2e38a4u: goto label_2e38a4;
        case 0x2e38a8u: goto label_2e38a8;
        case 0x2e38acu: goto label_2e38ac;
        case 0x2e38b0u: goto label_2e38b0;
        case 0x2e38b4u: goto label_2e38b4;
        case 0x2e38b8u: goto label_2e38b8;
        case 0x2e38bcu: goto label_2e38bc;
        case 0x2e38c0u: goto label_2e38c0;
        case 0x2e38c4u: goto label_2e38c4;
        case 0x2e38c8u: goto label_2e38c8;
        case 0x2e38ccu: goto label_2e38cc;
        case 0x2e38d0u: goto label_2e38d0;
        case 0x2e38d4u: goto label_2e38d4;
        case 0x2e38d8u: goto label_2e38d8;
        case 0x2e38dcu: goto label_2e38dc;
        case 0x2e38e0u: goto label_2e38e0;
        case 0x2e38e4u: goto label_2e38e4;
        default: break;
    }

    ctx->pc = 0x2e3618u;

label_2e3618:
    // 0x2e3618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e361c:
    // 0x2e361c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e3620:
    // 0x2e3620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3624:
    // 0x2e3624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e3628:
    // 0x2e3628: 0x26320088  addiu       $s2, $s1, 0x88
    ctx->pc = 0x2e3628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_2e362c:
    // 0x2e362c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e3630:
    // 0x2e3630: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e3634:
    // 0x2e3634: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e3634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2e3638:
    // 0x2e3638: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e3638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2e363c:
    // 0x2e363c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e3640:
    // 0x2e3640: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2e3640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2e3644:
    // 0x2e3644: 0x8e330058  lw          $s3, 0x58($s1)
    ctx->pc = 0x2e3644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2e3648:
    // 0x2e3648: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2e364c:
    if (ctx->pc == 0x2E364Cu) {
        ctx->pc = 0x2E364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3648u;
        // 0x2e364c: 0x8e340050  lw          $s4, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3650u;
        goto label_2e3650;
    }
    ctx->pc = 0x2E3648u;
    {
        const bool branch_taken_0x2e3648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3648u;
        // 0x2e364c: 0x8e340050  lw          $s4, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3648) {
            ctx->pc = 0x2E3668u;
            goto label_2e3668;
        }
    }
    ctx->pc = 0x2E3650u;
label_2e3650:
    // 0x2e3650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3654:
    // 0x2e3654: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
label_2e3658:
    if (ctx->pc == 0x2E3658u) {
        ctx->pc = 0x2E3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3654u;
        // 0x2e3658: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E365Cu;
        goto label_2e365c;
    }
    ctx->pc = 0x2E3654u;
    {
        const bool branch_taken_0x2e3654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3654u;
        // 0x2e3658: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3654) {
            ctx->pc = 0x2E3824u;
            goto label_2e3824;
        }
    }
    ctx->pc = 0x2E365Cu;
label_2e365c:
    // 0x2e365c: 0x10000099  b           . + 4 + (0x99 << 2)
label_2e3660:
    if (ctx->pc == 0x2E3660u) {
        ctx->pc = 0x2E3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E365Cu;
        // 0x2e3660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3664u;
        goto label_2e3664;
    }
    ctx->pc = 0x2E365Cu;
    {
        const bool branch_taken_0x2e365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E365Cu;
        // 0x2e3660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e365c) {
            ctx->pc = 0x2E38C4u;
            goto label_2e38c4;
        }
    }
    ctx->pc = 0x2E3664u;
label_2e3664:
    // 0x2e3664: 0x0  nop
    ctx->pc = 0x2e3664u;
    // NOP
label_2e3668:
    // 0x2e3668: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2e3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2e366c:
    // 0x2e366c: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_2e3670:
    if (ctx->pc == 0x2E3670u) {
        ctx->pc = 0x2E3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E366Cu;
        // 0x2e3670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3674u;
        goto label_2e3674;
    }
    ctx->pc = 0x2E366Cu;
    {
        const bool branch_taken_0x2e366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E366Cu;
        // 0x2e3670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e366c) {
            ctx->pc = 0x2E38C0u;
            goto label_2e38c0;
        }
    }
    ctx->pc = 0x2E3674u;
label_2e3674:
    // 0x2e3674: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2e3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2e3678:
    // 0x2e3678: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_2e367c:
    if (ctx->pc == 0x2E367Cu) {
        ctx->pc = 0x2E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3678u;
        // 0x2e367c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3680u;
        goto label_2e3680;
    }
    ctx->pc = 0x2E3678u;
    {
        const bool branch_taken_0x2e3678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3678u;
        // 0x2e367c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3678) {
            ctx->pc = 0x2E38C4u;
            goto label_2e38c4;
        }
    }
    ctx->pc = 0x2E3680u;
label_2e3680:
    // 0x2e3680: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2e3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2e3684:
    // 0x2e3684: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_2e3688:
    if (ctx->pc == 0x2E3688u) {
        ctx->pc = 0x2E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3684u;
        // 0x2e3688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E368Cu;
        goto label_2e368c;
    }
    ctx->pc = 0x2E3684u;
    {
        const bool branch_taken_0x2e3684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3684u;
        // 0x2e3688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3684) {
            ctx->pc = 0x2E38C4u;
            goto label_2e38c4;
        }
    }
    ctx->pc = 0x2E368Cu;
label_2e368c:
    // 0x2e368c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2e368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2e3690:
    // 0x2e3690: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_2e3694:
    if (ctx->pc == 0x2E3694u) {
        ctx->pc = 0x2E3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3690u;
        // 0x2e3694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3698u;
        goto label_2e3698;
    }
    ctx->pc = 0x2E3690u;
    {
        const bool branch_taken_0x2e3690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3690u;
        // 0x2e3694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3690) {
            ctx->pc = 0x2E38C4u;
            goto label_2e38c4;
        }
    }
    ctx->pc = 0x2E3698u;
label_2e3698:
    // 0x2e3698: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2e369c:
    // 0x2e369c: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
label_2e36a0:
    if (ctx->pc == 0x2E36A0u) {
        ctx->pc = 0x2E36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E369Cu;
        // 0x2e36a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36A4u;
        goto label_2e36a4;
    }
    ctx->pc = 0x2E369Cu;
    {
        const bool branch_taken_0x2e369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E369Cu;
        // 0x2e36a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e369c) {
            ctx->pc = 0x2E38C4u;
            goto label_2e38c4;
        }
    }
    ctx->pc = 0x2E36A4u;
label_2e36a4:
    // 0x2e36a4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2e36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2e36a8:
    // 0x2e36a8: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_2e36ac:
    if (ctx->pc == 0x2E36ACu) {
        ctx->pc = 0x2E36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36A8u;
        // 0x2e36ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36B0u;
        goto label_2e36b0;
    }
    ctx->pc = 0x2E36A8u;
    {
        const bool branch_taken_0x2e36a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e36a8) {
            ctx->pc = 0x2E36ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E36A8u;
            // 0x2e36ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E38C4u;
            goto label_2e38c4;
        }
    }
    ctx->pc = 0x2E36B0u;
label_2e36b0:
    // 0x2e36b0: 0xc089832  jal         func_2260C8
label_2e36b4:
    if (ctx->pc == 0x2E36B4u) {
        ctx->pc = 0x2E36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36B0u;
        // 0x2e36b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36B8u;
        goto label_2e36b8;
    }
    ctx->pc = 0x2E36B0u;
    SET_GPR_U32(ctx, 31, 0x2E36B8u);
    ctx->pc = 0x2E36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36B0u;
    // 0x2e36b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260C8u, 0x2E36B0u, 0x2E36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36B8u;
label_2e36b8:
    // 0x2e36b8: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_2e36bc:
    if (ctx->pc == 0x2E36BCu) {
        ctx->pc = 0x2E36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36B8u;
        // 0x2e36bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36C0u;
        goto label_2e36c0;
    }
    ctx->pc = 0x2E36B8u;
    {
        const bool branch_taken_0x2e36b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36B8u;
        // 0x2e36bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36b8) {
            ctx->pc = 0x2E38BCu;
            goto label_2e38bc;
        }
    }
    ctx->pc = 0x2E36C0u;
label_2e36c0:
    // 0x2e36c0: 0xc0c1254  jal         func_304950
label_2e36c4:
    if (ctx->pc == 0x2E36C4u) {
        ctx->pc = 0x2E36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36C0u;
        // 0x2e36c4: 0x263000c8  addiu       $s0, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36C8u;
        goto label_2e36c8;
    }
    ctx->pc = 0x2E36C0u;
    SET_GPR_U32(ctx, 31, 0x2E36C8u);
    ctx->pc = 0x2E36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36C0u;
    // 0x2e36c4: 0x263000c8  addiu       $s0, $s1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304950u, 0x2E36C0u, 0x2E36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36C8u;
label_2e36c8:
    // 0x2e36c8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2e36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2e36cc:
    // 0x2e36cc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2e36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2e36d0:
    // 0x2e36d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e36d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e36d4:
    // 0x2e36d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e36d8:
    // 0x2e36d8: 0x60f809  jalr        $v1
label_2e36dc:
    if (ctx->pc == 0x2E36DCu) {
        ctx->pc = 0x2E36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D8u;
        // 0x2e36dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E36E0u;
        goto label_2e36e0;
    }
    ctx->pc = 0x2E36D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E36E0u);
        ctx->pc = 0x2E36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D8u;
        // 0x2e36dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36D8u, 0x2E36E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E36E0u;
label_2e36e0:
    // 0x2e36e0: 0xae500038  sw          $s0, 0x38($s2)
    ctx->pc = 0x2e36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
label_2e36e4:
    // 0x2e36e4: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x2e36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2e36e8:
    // 0x2e36e8: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2e36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e36ec:
    // 0x2e36ec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2e36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2e36f0:
    // 0x2e36f0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2e36f4:
    // 0x2e36f4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2e36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2e36f8:
    // 0x2e36f8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2e36f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e36fc:
    // 0x2e36fc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2e36fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e3700:
    // 0x2e3700: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x2e3700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2e3704:
    // 0x2e3704: 0xc0f809  jalr        $a2
label_2e3708:
    if (ctx->pc == 0x2E3708u) {
        ctx->pc = 0x2E3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3704u;
        // 0x2e3708: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E370Cu;
        goto label_2e370c;
    }
    ctx->pc = 0x2E3704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2E370Cu);
        ctx->pc = 0x2E3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3704u;
        // 0x2e3708: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3704u, 0x2E370Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E370Cu;
label_2e370c:
    // 0x2e370c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2e370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2e3710:
    // 0x2e3710: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x2e3710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2e3714:
    // 0x2e3714: 0x26860006  addiu       $a2, $s4, 0x6
    ctx->pc = 0x2e3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
label_2e3718:
    // 0x2e3718: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e3718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e371c:
    // 0x2e371c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e371cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3720:
    // 0x2e3720: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3724:
    // 0x2e3724: 0x60f809  jalr        $v1
label_2e3728:
    if (ctx->pc == 0x2E3728u) {
        ctx->pc = 0x2E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3724u;
        // 0x2e3728: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E372Cu;
        goto label_2e372c;
    }
    ctx->pc = 0x2E3724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E372Cu);
        ctx->pc = 0x2E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3724u;
        // 0x2e3728: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3724u, 0x2E372Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E372Cu;
label_2e372c:
    // 0x2e372c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2e372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2e3730:
    // 0x2e3730: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e3734:
    // 0x2e3734: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2e3738:
    // 0x2e3738: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x2e3738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2e373c:
    // 0x2e373c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e373cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3740:
    // 0x2e3740: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3744:
    // 0x2e3744: 0x60f809  jalr        $v1
label_2e3748:
    if (ctx->pc == 0x2E3748u) {
        ctx->pc = 0x2E3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3744u;
        // 0x2e3748: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E374Cu;
        goto label_2e374c;
    }
    ctx->pc = 0x2E3744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E374Cu);
        ctx->pc = 0x2E3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3744u;
        // 0x2e3748: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3744u, 0x2E374Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E374Cu;
label_2e374c:
    // 0x2e374c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2e374cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2e3750:
    // 0x2e3750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3754:
    // 0x2e3754: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2e3754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2e3758:
    // 0x2e3758: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x2e3758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2e375c:
    // 0x2e375c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2e3760:
    // 0x2e3760: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3764:
    // 0x2e3764: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3768:
    // 0x2e3768: 0x60f809  jalr        $v1
label_2e376c:
    if (ctx->pc == 0x2E376Cu) {
        ctx->pc = 0x2E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3768u;
        // 0x2e376c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3770u;
        goto label_2e3770;
    }
    ctx->pc = 0x2E3768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3770u);
        ctx->pc = 0x2E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3768u;
        // 0x2e376c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3768u, 0x2E3770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3770u;
label_2e3770:
    // 0x2e3770: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2e3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2e3774:
    // 0x2e3774: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2e3778:
    if (ctx->pc == 0x2E3778u) {
        ctx->pc = 0x2E3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3774u;
        // 0x2e3778: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E377Cu;
        goto label_2e377c;
    }
    ctx->pc = 0x2E3774u;
    {
        const bool branch_taken_0x2e3774 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3774u;
        // 0x2e3778: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3774) {
            ctx->pc = 0x2E3784u;
            goto label_2e3784;
        }
    }
    ctx->pc = 0x2E377Cu;
label_2e377c:
    // 0x2e377c: 0xc0ae4ac  jal         func_2B92B0
label_2e3780:
    if (ctx->pc == 0x2E3780u) {
        ctx->pc = 0x2E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E377Cu;
        // 0x2e3780: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3784u;
        goto label_2e3784;
    }
    ctx->pc = 0x2E377Cu;
    SET_GPR_U32(ctx, 31, 0x2E3784u);
    ctx->pc = 0x2E3780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E377Cu;
    // 0x2e3780: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B92B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92B0u, 0x2E377Cu, 0x2E3784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3784u;
label_2e3784:
    // 0x2e3784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e3788:
    // 0x2e3788: 0xc0c122a  jal         func_3048A8
label_2e378c:
    if (ctx->pc == 0x2E378Cu) {
        ctx->pc = 0x2E378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3788u;
        // 0x2e378c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3790u;
        goto label_2e3790;
    }
    ctx->pc = 0x2E3788u;
    SET_GPR_U32(ctx, 31, 0x2E3790u);
    ctx->pc = 0x2E378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3788u;
    // 0x2e378c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3048A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3048A8u, 0x2E3788u, 0x2E3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3790u;
label_2e3790:
    // 0x2e3790: 0x266206e0  addiu       $v0, $s3, 0x6E0
    ctx->pc = 0x2e3790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1760));
label_2e3794:
    // 0x2e3794: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2e3798:
    if (ctx->pc == 0x2E3798u) {
        ctx->pc = 0x2E3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3794u;
        // 0x2e3798: 0x8e26007c  lw          $a2, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E379Cu;
        goto label_2e379c;
    }
    ctx->pc = 0x2E3794u;
    {
        const bool branch_taken_0x2e3794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3794) {
            ctx->pc = 0x2E3798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3794u;
            // 0x2e3798: 0x8e26007c  lw          $a2, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37C4u;
            goto label_2e37c4;
        }
    }
    ctx->pc = 0x2E379Cu;
label_2e379c:
    // 0x2e379c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2e379cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2e37a0:
    // 0x2e37a0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2e37a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2e37a4:
    // 0x2e37a4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2e37a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e37a8:
    // 0x2e37a8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2e37a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2e37ac:
    // 0x2e37ac: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2e37acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2e37b0:
    // 0x2e37b0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2e37b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2e37b4:
    // 0x2e37b4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2e37b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e37b8:
    // 0x2e37b8: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2e37b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2e37bc:
    // 0x2e37bc: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2e37bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2e37c0:
    // 0x2e37c0: 0x8e26007c  lw          $a2, 0x7C($s1)
    ctx->pc = 0x2e37c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2e37c4:
    // 0x2e37c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e37c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e37c8:
    // 0x2e37c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e37c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e37cc:
    // 0x2e37cc: 0xc0c1350  jal         func_304D40
label_2e37d0:
    if (ctx->pc == 0x2E37D0u) {
        ctx->pc = 0x2E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37CCu;
        // 0x2e37d0: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37D4u;
        goto label_2e37d4;
    }
    ctx->pc = 0x2E37CCu;
    SET_GPR_U32(ctx, 31, 0x2E37D4u);
    ctx->pc = 0x2E37D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37CCu;
    // 0x2e37d0: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304D40u, 0x2E37CCu, 0x2E37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37D4u;
label_2e37d4:
    // 0x2e37d4: 0x86620012  lh          $v0, 0x12($s3)
    ctx->pc = 0x2e37d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_2e37d8:
    // 0x2e37d8: 0x1055000e  beq         $v0, $s5, . + 4 + (0xE << 2)
label_2e37dc:
    if (ctx->pc == 0x2E37DCu) {
        ctx->pc = 0x2E37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37D8u;
        // 0x2e37dc: 0x26300098  addiu       $s0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37E0u;
        goto label_2e37e0;
    }
    ctx->pc = 0x2E37D8u;
    {
        const bool branch_taken_0x2e37d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2E37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37D8u;
        // 0x2e37dc: 0x26300098  addiu       $s0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37d8) {
            ctx->pc = 0x2E3814u;
            goto label_2e3814;
        }
    }
    ctx->pc = 0x2E37E0u;
label_2e37e0:
    // 0x2e37e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e37e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e37e4:
    // 0x2e37e4: 0xc0b6bcc  jal         func_2DAF30
label_2e37e8:
    if (ctx->pc == 0x2E37E8u) {
        ctx->pc = 0x2E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37E4u;
        // 0x2e37e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37ECu;
        goto label_2e37ec;
    }
    ctx->pc = 0x2E37E4u;
    SET_GPR_U32(ctx, 31, 0x2E37ECu);
    ctx->pc = 0x2E37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37E4u;
    // 0x2e37e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF30u, 0x2E37E4u, 0x2E37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37ECu;
label_2e37ec:
    // 0x2e37ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e37f0:
    // 0x2e37f0: 0xc0b6c26  jal         func_2DB098
label_2e37f4:
    if (ctx->pc == 0x2E37F4u) {
        ctx->pc = 0x2E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F0u;
        // 0x2e37f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E37F8u;
        goto label_2e37f8;
    }
    ctx->pc = 0x2E37F0u;
    SET_GPR_U32(ctx, 31, 0x2E37F8u);
    ctx->pc = 0x2E37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37F0u;
    // 0x2e37f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB098u, 0x2E37F0u, 0x2E37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37F8u;
label_2e37f8:
    // 0x2e37f8: 0x86620012  lh          $v0, 0x12($s3)
    ctx->pc = 0x2e37f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_2e37fc:
    // 0x2e37fc: 0x10550005  beq         $v0, $s5, . + 4 + (0x5 << 2)
label_2e3800:
    if (ctx->pc == 0x2E3800u) {
        ctx->pc = 0x2E3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37FCu;
        // 0x2e3800: 0x26240138  addiu       $a0, $s1, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3804u;
        goto label_2e3804;
    }
    ctx->pc = 0x2E37FCu;
    {
        const bool branch_taken_0x2e37fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2E3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37FCu;
        // 0x2e3800: 0x26240138  addiu       $a0, $s1, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37fc) {
            ctx->pc = 0x2E3814u;
            goto label_2e3814;
        }
    }
    ctx->pc = 0x2E3804u;
label_2e3804:
    // 0x2e3804: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x2e3804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2e3808:
    // 0x2e3808: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x2e3808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2e380c:
    // 0x2e380c: 0xc0c0e24  jal         func_303890
label_2e3810:
    if (ctx->pc == 0x2E3810u) {
        ctx->pc = 0x2E3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E380Cu;
        // 0x2e3810: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3814u;
        goto label_2e3814;
    }
    ctx->pc = 0x2E380Cu;
    SET_GPR_U32(ctx, 31, 0x2E3814u);
    ctx->pc = 0x2E3810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E380Cu;
    // 0x2e3810: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303890u, 0x2E380Cu, 0x2E3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3814u;
label_2e3814:
    // 0x2e3814: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2e3814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2e3818:
    // 0x2e3818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e381c:
    // 0x2e381c: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x2e381cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_2e3820:
    // 0x2e3820: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2e3820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_2e3824:
    // 0x2e3824: 0x86630012  lh          $v1, 0x12($s3)
    ctx->pc = 0x2e3824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_2e3828:
    // 0x2e3828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e382c:
    // 0x2e382c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2e3830:
    if (ctx->pc == 0x2E3830u) {
        ctx->pc = 0x2E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E382Cu;
        // 0x2e3830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3834u;
        goto label_2e3834;
    }
    ctx->pc = 0x2E382Cu;
    {
        const bool branch_taken_0x2e382c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E382Cu;
        // 0x2e3830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e382c) {
            ctx->pc = 0x2E3848u;
            goto label_2e3848;
        }
    }
    ctx->pc = 0x2E3834u;
label_2e3834:
    // 0x2e3834: 0xc0c1262  jal         func_304988
label_2e3838:
    if (ctx->pc == 0x2E3838u) {
        ctx->pc = 0x2E3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3834u;
        // 0x2e3838: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E383Cu;
        goto label_2e383c;
    }
    ctx->pc = 0x2E3834u;
    SET_GPR_U32(ctx, 31, 0x2E383Cu);
    ctx->pc = 0x2E3838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3834u;
    // 0x2e3838: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304988u, 0x2E3834u, 0x2E383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E383Cu;
label_2e383c:
    // 0x2e383c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e3840:
    if (ctx->pc == 0x2E3840u) {
        ctx->pc = 0x2E3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E383Cu;
        // 0x2e3840: 0x86630012  lh          $v1, 0x12($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3844u;
        goto label_2e3844;
    }
    ctx->pc = 0x2E383Cu;
    {
        const bool branch_taken_0x2e383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E383Cu;
        // 0x2e3840: 0x86630012  lh          $v1, 0x12($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e383c) {
            ctx->pc = 0x2E3870u;
            goto label_2e3870;
        }
    }
    ctx->pc = 0x2E3844u;
label_2e3844:
    // 0x2e3844: 0x0  nop
    ctx->pc = 0x2e3844u;
    // NOP
label_2e3848:
    // 0x2e3848: 0xc08b8ae  jal         func_22E2B8
label_2e384c:
    if (ctx->pc == 0x2E384Cu) {
        ctx->pc = 0x2E3850u;
        goto label_2e3850;
    }
    ctx->pc = 0x2E3848u;
    SET_GPR_U32(ctx, 31, 0x2E3850u);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2E3848u, 0x2E3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3850u;
label_2e3850:
    // 0x2e3850: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2e3854:
    if (ctx->pc == 0x2E3854u) {
        ctx->pc = 0x2E3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3850u;
        // 0x2e3854: 0x86630012  lh          $v1, 0x12($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3858u;
        goto label_2e3858;
    }
    ctx->pc = 0x2E3850u;
    {
        const bool branch_taken_0x2e3850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3850) {
            ctx->pc = 0x2E3854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3850u;
            // 0x2e3854: 0x86630012  lh          $v1, 0x12($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3870u;
            goto label_2e3870;
        }
    }
    ctx->pc = 0x2E3858u;
label_2e3858:
    // 0x2e3858: 0xc08f10c  jal         func_23C430
label_2e385c:
    if (ctx->pc == 0x2E385Cu) {
        ctx->pc = 0x2E3860u;
        goto label_2e3860;
    }
    ctx->pc = 0x2E3858u;
    SET_GPR_U32(ctx, 31, 0x2E3860u);
    ctx->pc = 0x23C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C430u, 0x2E3858u, 0x2E3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3860u;
label_2e3860:
    // 0x2e3860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e3860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e3864:
    // 0x2e3864: 0xc0c1262  jal         func_304988
label_2e3868:
    if (ctx->pc == 0x2E3868u) {
        ctx->pc = 0x2E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3864u;
        // 0x2e3868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E386Cu;
        goto label_2e386c;
    }
    ctx->pc = 0x2E3864u;
    SET_GPR_U32(ctx, 31, 0x2E386Cu);
    ctx->pc = 0x2E3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3864u;
    // 0x2e3868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304988u, 0x2E3864u, 0x2E386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E386Cu;
label_2e386c:
    // 0x2e386c: 0x86630012  lh          $v1, 0x12($s3)
    ctx->pc = 0x2e386cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_2e3870:
    // 0x2e3870: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e3874:
    // 0x2e3874: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_2e3878:
    if (ctx->pc == 0x2E3878u) {
        ctx->pc = 0x2E3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3874u;
        // 0x2e3878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E387Cu;
        goto label_2e387c;
    }
    ctx->pc = 0x2E3874u;
    {
        const bool branch_taken_0x2e3874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3874u;
        // 0x2e3878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3874) {
            ctx->pc = 0x2E38C0u;
            goto label_2e38c0;
        }
    }
    ctx->pc = 0x2E387Cu;
label_2e387c:
    // 0x2e387c: 0x8e6208bc  lw          $v0, 0x8BC($s3)
    ctx->pc = 0x2e387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2236)));
label_2e3880:
    // 0x2e3880: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e3884:
    if (ctx->pc == 0x2E3884u) {
        ctx->pc = 0x2E3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3880u;
        // 0x2e3884: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3888u;
        goto label_2e3888;
    }
    ctx->pc = 0x2E3880u;
    {
        const bool branch_taken_0x2e3880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3880u;
        // 0x2e3884: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3880) {
            ctx->pc = 0x2E38B0u;
            goto label_2e38b0;
        }
    }
    ctx->pc = 0x2E3888u;
label_2e3888:
    // 0x2e3888: 0xae6008bc  sw          $zero, 0x8BC($s3)
    ctx->pc = 0x2e3888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2236), GPR_U32(ctx, 0));
label_2e388c:
    // 0x2e388c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e3890:
    // 0x2e3890: 0xc0b6bcc  jal         func_2DAF30
label_2e3894:
    if (ctx->pc == 0x2E3894u) {
        ctx->pc = 0x2E3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3890u;
        // 0x2e3894: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3898u;
        goto label_2e3898;
    }
    ctx->pc = 0x2E3890u;
    SET_GPR_U32(ctx, 31, 0x2E3898u);
    ctx->pc = 0x2E3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3890u;
    // 0x2e3894: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF30u, 0x2E3890u, 0x2E3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3898u;
label_2e3898:
    // 0x2e3898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e389c:
    // 0x2e389c: 0xc0b6c26  jal         func_2DB098
label_2e38a0:
    if (ctx->pc == 0x2E38A0u) {
        ctx->pc = 0x2E38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E389Cu;
        // 0x2e38a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38A4u;
        goto label_2e38a4;
    }
    ctx->pc = 0x2E389Cu;
    SET_GPR_U32(ctx, 31, 0x2E38A4u);
    ctx->pc = 0x2E38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E389Cu;
    // 0x2e38a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB098u, 0x2E389Cu, 0x2E38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E38A4u;
label_2e38a4:
    // 0x2e38a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e38a8:
    if (ctx->pc == 0x2E38A8u) {
        ctx->pc = 0x2E38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A4u;
        // 0x2e38a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38ACu;
        goto label_2e38ac;
    }
    ctx->pc = 0x2E38A4u;
    {
        const bool branch_taken_0x2e38a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A4u;
        // 0x2e38a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38a4) {
            ctx->pc = 0x2E38B4u;
            goto label_2e38b4;
        }
    }
    ctx->pc = 0x2E38ACu;
label_2e38ac:
    // 0x2e38ac: 0x0  nop
    ctx->pc = 0x2e38acu;
    // NOP
label_2e38b0:
    // 0x2e38b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e38b4:
    // 0x2e38b4: 0xc0b6fb0  jal         func_2DBEC0
label_2e38b8:
    if (ctx->pc == 0x2E38B8u) {
        ctx->pc = 0x2E38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B4u;
        // 0x2e38b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38BCu;
        goto label_2e38bc;
    }
    ctx->pc = 0x2E38B4u;
    SET_GPR_U32(ctx, 31, 0x2E38BCu);
    ctx->pc = 0x2E38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E38B4u;
    // 0x2e38b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2E38B4u, 0x2E38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E38BCu;
label_2e38bc:
    // 0x2e38bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e38bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e38c0:
    // 0x2e38c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e38c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e38c4:
    // 0x2e38c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e38c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e38c8:
    // 0x2e38c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e38c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e38cc:
    // 0x2e38cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e38ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e38d0:
    // 0x2e38d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e38d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e38d4:
    // 0x2e38d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e38d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e38d8:
    // 0x2e38d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e38d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e38dc:
    // 0x2e38dc: 0x3e00008  jr          $ra
label_2e38e0:
    if (ctx->pc == 0x2E38E0u) {
        ctx->pc = 0x2E38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38DCu;
        // 0x2e38e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E38E4u;
        goto label_2e38e4;
    }
    ctx->pc = 0x2E38DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38DCu;
        // 0x2e38e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E38DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E38E4u;
label_2e38e4:
    // 0x2e38e4: 0x0  nop
    ctx->pc = 0x2e38e4u;
    // NOP
    ctx->pc = 0x2e38e8u;
}
