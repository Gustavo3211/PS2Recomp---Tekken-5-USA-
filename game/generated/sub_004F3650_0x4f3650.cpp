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

// Function: sub_004F3650
// Address: 0x4f3650 - 0x4f38d0
void sub_004F3650_0x4f3650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3650_0x4f3650");
#endif

    switch (ctx->pc) {
        case 0x4f3710u: goto label_4f3710;
        case 0x4f3718u: goto label_4f3718;
        case 0x4f3774u: goto label_4f3774;
        case 0x4f3818u: goto label_4f3818;
        default: break;
    }

    ctx->pc = 0x4f3650u;

    // 0x4f3650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f3650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f3654: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f3654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f3658: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f3658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f365c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f365cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3660: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4f3660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4f3664: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4f3664u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4f3668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f366c: 0x244a124c  addiu       $t2, $v0, 0x124C
    ctx->pc = 0x4f366cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4684));
    // 0x4f3670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f3670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3674: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f3674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f3678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f367c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3680: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f3680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f3684: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x4f3684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x4f3688: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f3688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f368c: 0x24691244  addiu       $t1, $v1, 0x1244
    ctx->pc = 0x4f368cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4676));
    // 0x4f3690: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f3690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f3694: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4f3694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f3698: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f3698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f369c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4f369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4f36a0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F124Cu));
    // 0x4f36a4: 0x87c71248  lh          $a3, 0x1248($fp)
    ctx->pc = 0x4f36a4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x7F1248u));
    // 0x4f36a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f36a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f36ac: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4f36acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1244u));
    // 0x4f36b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f36b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f36b4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f36b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f36b8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4f36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4f36bc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f36c0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f36c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f36c4: 0x24c61250  addiu       $a2, $a2, 0x1250
    ctx->pc = 0x4f36c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4688));
    // 0x4f36c8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4f36c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
    // 0x4f36cc: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x4f36ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4f36d0: 0x91088198  lbu         $t0, -0x7E68($t0)
    ctx->pc = 0x4f36d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294934936)));
    // 0x4f36d4: 0x24428178  addiu       $v0, $v0, -0x7E88
    ctx->pc = 0x4f36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934904));
    // 0x4f36d8: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4f36d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f36dc: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4f36dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4f36e0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4f36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4f36e4: 0x4600048  bltz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x4F36E4u;
    {
        const bool branch_taken_0x4f36e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4F36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F36E4u;
        // 0x4f36e8: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f36e4) {
            ctx->pc = 0x4F3808u;
            goto label_4f3808;
        }
    }
    ctx->pc = 0x4F36ECu;
    // 0x4f36ec: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4f36ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4f36f0: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4f36f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f36f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4f36f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f36f8: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4f36f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f36fc: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4f36fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4f3700: 0x26f01230  addiu       $s0, $s7, 0x1230
    ctx->pc = 0x4f3700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4656));
    // 0x4f3704: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4f3704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3708: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x4f3708u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f370c: 0x0  nop
    ctx->pc = 0x4f370cu;
    // NOP
label_4f3710:
    // 0x4f3710: 0xc13e422  jal         func_4F9088
    ctx->pc = 0x4F3710u;
    SET_GPR_U32(ctx, 31, 0x4F3718u);
    ctx->pc = 0x4F3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3710u;
    // 0x4f3714: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9088u, 0x4F3710u, 0x4F3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3718u;
label_4f3718:
    // 0x4f3718: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f3718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f371c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4f371cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f3720: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f3720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3724: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4f3724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4f3728: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4f3728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4f372c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x4f372cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4f3730: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4f3730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4f3734: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4f3734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4f3738: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x4f3738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4f373c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f373cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f3740: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f3740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f3744: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f3748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f374c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f374cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3750: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4f3750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4f3754: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f3754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f3758: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f375c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f375cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f3760: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f3760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3764: 0x10470018  beq         $v0, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4F3764u;
    {
        const bool branch_taken_0x4f3764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4F3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3764u;
        // 0x4f3768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3764) {
            ctx->pc = 0x4F37C8u;
            goto label_4f37c8;
        }
    }
    ctx->pc = 0x4F376Cu;
    // 0x4f376c: 0xc13cf06  jal         func_4F3C18
    ctx->pc = 0x4F376Cu;
    SET_GPR_U32(ctx, 31, 0x4F3774u);
    ctx->pc = 0x4F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C18u, 0x4F376Cu, 0x4F3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3774u;
label_4f3774:
    // 0x4f3774: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f3774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3778: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f3778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f377c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4f377cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4f3780: 0x8ec4125c  lw          $a0, 0x125C($s6)
    ctx->pc = 0x4f3780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4700)));
    // 0x4f3784: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f3784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f3788: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f378c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3790: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f3790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3794: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4f3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4f3798: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f3798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f379c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f379cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f37a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f37a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f37a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f37a8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f37a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f37ac: 0x244206cb  addiu       $v0, $v0, 0x6CB
    ctx->pc = 0x4f37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1739));
    // 0x4f37b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f37b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f37b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f37b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f37b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f37bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f37bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f37c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4F37C0u;
    {
        const bool branch_taken_0x4f37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F37C0u;
        // 0x4f37c4: 0xa482000c  sh          $v0, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f37c0) {
            ctx->pc = 0x4F37D4u;
            goto label_4f37d4;
        }
    }
    ctx->pc = 0x4F37C8u;
label_4f37c8:
    // 0x4f37c8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f37cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f37ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f37d0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4f37d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_4f37d4:
    // 0x4f37d4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f37d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f37d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f37dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f37e0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f37e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f37e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f37e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f37e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f37ec: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4f37ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4f37f0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f37f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f37f4: 0x443ffc6  bgezl       $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x4F37F4u;
    {
        const bool branch_taken_0x4f37f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f37f4) {
            ctx->pc = 0x4F37F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F37F4u;
            // 0x4f37f8: 0x82650000  lb          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3710;
        }
    }
    ctx->pc = 0x4F37FCu;
    // 0x4f37fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4F37FCu;
    {
        const bool branch_taken_0x4f37fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f37fc) {
            ctx->pc = 0x4F3810u;
            goto label_4f3810;
        }
    }
    ctx->pc = 0x4F3804u;
    // 0x4f3804: 0x0  nop
    ctx->pc = 0x4f3804u;
    // NOP
label_4f3808:
    // 0x4f3808: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4f3808u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4f380c: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4f380cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
label_4f3810:
    // 0x4f3810: 0xc13cf06  jal         func_4F3C18
    ctx->pc = 0x4F3810u;
    SET_GPR_U32(ctx, 31, 0x4F3818u);
    ctx->pc = 0x4F3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3810u;
    // 0x4f3814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C18u, 0x4F3810u, 0x4F3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3818u;
label_4f3818:
    // 0x4f3818: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f3818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f381c: 0x26e51230  addiu       $a1, $s7, 0x1230
    ctx->pc = 0x4f381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4656));
    // 0x4f3820: 0x97c41248  lhu         $a0, 0x1248($fp)
    ctx->pc = 0x4f3820u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4680)));
    // 0x4f3824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3828: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f3828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f382c: 0x246781b0  addiu       $a3, $v1, -0x7E50
    ctx->pc = 0x4f382cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x4f3830: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f3830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f3834: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x4f3834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4f3838: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f3838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f383c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4f383cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3840: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x4f3840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4f3844: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F3844u;
    {
        const bool branch_taken_0x4f3844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f3844) {
            ctx->pc = 0x4F3848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3844u;
            // 0x4f3848: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3868u;
            goto label_4f3868;
        }
    }
    ctx->pc = 0x4F384Cu;
    // 0x4f384c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3854: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4f3854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4f3858: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f385c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f385cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f3860: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4f3860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3864: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f3864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f3868:
    // 0x4f3868: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4f3868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f386c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4f386cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4f3870: 0x8ec4125c  lw          $a0, 0x125C($s6)
    ctx->pc = 0x4f3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4700)));
    // 0x4f3874: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f3874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f3878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f387c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f387cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3884: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f3884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f3888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f388c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4f388cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f3890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3894: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f3894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f3898: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f3898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f389c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f389cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f38a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f38a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f38a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f38a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f38a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f38ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4f38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4f38b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f38b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f38b4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f38b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f38b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f38b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f38bc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4f38bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f38c0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f38c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f38c4: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x4f38c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f38c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F38C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38C8u;
        // 0x4f38cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F38C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F38D0u;
}
