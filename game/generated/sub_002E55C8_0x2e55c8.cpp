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

// Function: sub_002E55C8
// Address: 0x2e55c8 - 0x2e56f0
void sub_002E55C8_0x2e55c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E55C8_0x2e55c8");
#endif

    switch (ctx->pc) {
        case 0x2e55f0u: goto label_2e55f0;
        case 0x2e5670u: goto label_2e5670;
        case 0x2e5688u: goto label_2e5688;
        case 0x2e56a0u: goto label_2e56a0;
        case 0x2e56b8u: goto label_2e56b8;
        default: break;
    }

    ctx->pc = 0x2e55c8u;

    // 0x2e55c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e55c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e55cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e55ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e55d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e55d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e55d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e55d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e55dc: 0x26680004  addiu       $t0, $s3, 0x4
    ctx->pc = 0x2e55dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e55e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e55e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e55e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e55e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e55e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e55ec: 0xae650050  sw          $a1, 0x50($s3)
    ctx->pc = 0x2e55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 5));
label_2e55f0:
    // 0x2e55f0: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x2e55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2e55f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e55f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e55f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e55f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e55fc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e55fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e5600: 0x28e20100  slti        $v0, $a3, 0x100
    ctx->pc = 0x2e5600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e5604: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E5604u;
    {
        const bool branch_taken_0x2e5604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5604u;
        // 0x2e5608: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5604) {
            ctx->pc = 0x2E55F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e55f0;
        }
    }
    ctx->pc = 0x2E560Cu;
    // 0x2e560c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2e560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2e5610: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2E5610u;
    {
        const bool branch_taken_0x2e5610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5610u;
        // 0x2e5614: 0x24424a60  addiu       $v0, $v0, 0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5610) {
            ctx->pc = 0x2E5644u;
            goto label_2e5644;
        }
    }
    ctx->pc = 0x2E5618u;
    // 0x2e5618: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2e5618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2e561c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e561cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5620: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5620u;
    {
        const bool branch_taken_0x2e5620 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5620u;
        // 0x2e5624: 0x24424a58  addiu       $v0, $v0, 0x4A58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5620) {
            ctx->pc = 0x2E5644u;
            goto label_2e5644;
        }
    }
    ctx->pc = 0x2E5628u;
    // 0x2e5628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e562c: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E562Cu;
    {
        const bool branch_taken_0x2e562c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e562c) {
            ctx->pc = 0x2E5630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E562Cu;
            // 0x2e5630: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5640u;
            goto label_2e5640;
        }
    }
    ctx->pc = 0x2E5634u;
    // 0x2e5634: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2e5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2e5638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5638u;
    {
        const bool branch_taken_0x2e5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5638u;
        // 0x2e563c: 0x24424a48  addiu       $v0, $v0, 0x4A48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5638) {
            ctx->pc = 0x2E5644u;
            goto label_2e5644;
        }
    }
    ctx->pc = 0x2E5640u;
label_2e5640:
    // 0x2e5640: 0x24424a50  addiu       $v0, $v0, 0x4A50
    ctx->pc = 0x2e5640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
label_2e5644:
    // 0x2e5644: 0x14c0001f  bnez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5644u;
    {
        const bool branch_taken_0x2e5644 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5644u;
        // 0x2e5648: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5644) {
            ctx->pc = 0x2E56C4u;
            goto label_2e56c4;
        }
    }
    ctx->pc = 0x2E564Cu;
    // 0x2e564c: 0x26630154  addiu       $v1, $s3, 0x154
    ctx->pc = 0x2e564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
    // 0x2e5650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5654: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2e5654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x2e5658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e565c: 0x2671015c  addiu       $s1, $s3, 0x15C
    ctx->pc = 0x2e565cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 348));
    // 0x2e5660: 0x26720164  addiu       $s2, $s3, 0x164
    ctx->pc = 0x2e5660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x2e5664: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2e5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5668: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E5668u;
    SET_GPR_U32(ctx, 31, 0x2E5670u);
    ctx->pc = 0x2E566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5668u;
    // 0x2e566c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E5668u, 0x2E5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5670u;
label_2e5670:
    // 0x2e5670: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x2e5670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2e5674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e5678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e567c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5680: 0xc0b9554  jal         func_2E5550
    ctx->pc = 0x2E5680u;
    SET_GPR_U32(ctx, 31, 0x2E5688u);
    ctx->pc = 0x2E5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5680u;
    // 0x2e5684: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5550u, 0x2E5680u, 0x2E5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5688u;
label_2e5688:
    // 0x2e5688: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e5688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e568c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5694: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e5698: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E5698u;
    SET_GPR_U32(ctx, 31, 0x2E56A0u);
    ctx->pc = 0x2E569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5698u;
    // 0x2e569c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E5698u, 0x2E56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56A0u;
label_2e56a0:
    // 0x2e56a0: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x2e56a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2e56a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e56a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e56a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e56ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e56acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56b0: 0xc0b9554  jal         func_2E5550
    ctx->pc = 0x2E56B0u;
    SET_GPR_U32(ctx, 31, 0x2E56B8u);
    ctx->pc = 0x2E56B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56B0u;
    // 0x2e56b4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5550u, 0x2E56B0u, 0x2E56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56B8u;
label_2e56b8:
    // 0x2e56b8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2e56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2e56bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e56c0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2e56c4:
    // 0x2e56c4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e56c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e56c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e56cc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2e56ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2e56d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e56d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e56d4: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x2e56d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x2e56d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e56d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e56dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e56dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e56e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e56e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e56e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E56E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56E4u;
        // 0x2e56e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E56E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E56ECu;
    // 0x2e56ec: 0x0  nop
    ctx->pc = 0x2e56ecu;
    // NOP
    ctx->pc = 0x2e56f0u;
}
