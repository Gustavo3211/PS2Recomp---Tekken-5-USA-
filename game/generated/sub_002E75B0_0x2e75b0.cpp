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

// Function: sub_002E75B0
// Address: 0x2e75b0 - 0x2e7688
void sub_002E75B0_0x2e75b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E75B0_0x2e75b0");
#endif

    switch (ctx->pc) {
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75f0u: goto label_2e75f0;
        case 0x2e7620u: goto label_2e7620;
        case 0x2e7650u: goto label_2e7650;
        default: break;
    }

    ctx->pc = 0x2e75b0u;

    // 0x2e75b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e75b4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2e75b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2e75b8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e75b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e75bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e75bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e75c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e75c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e75c4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2e75c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2e75c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e75c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e75cc: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2e75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2e75d0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E75D0u;
    {
        const bool branch_taken_0x2e75d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75D0u;
        // 0x2e75d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75d0) {
            ctx->pc = 0x2E7640u;
            goto label_2e7640;
        }
    }
    ctx->pc = 0x2E75D8u;
    // 0x2e75d8: 0x26500120  addiu       $s0, $s2, 0x120
    ctx->pc = 0x2e75d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x2e75dc: 0x8e45012c  lw          $a1, 0x12C($s2)
    ctx->pc = 0x2e75dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_2e75e0:
    // 0x2e75e0: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x2e75e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e75e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e75e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e75e8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E75E8u;
    SET_GPR_U32(ctx, 31, 0x2E75F0u);
    ctx->pc = 0x2E75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75E8u;
    // 0x2e75ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E75E8u, 0x2E75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75F0u;
label_2e75f0:
    // 0x2e75f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e75f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e75f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E75F4u;
    {
        const bool branch_taken_0x2e75f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75F4u;
        // 0x2e75f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75f4) {
            ctx->pc = 0x2E760Cu;
            goto label_2e760c;
        }
    }
    ctx->pc = 0x2E75FCu;
    // 0x2e75fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e7600: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e7604: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7604u;
    {
        const bool branch_taken_0x2e7604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7604) {
            ctx->pc = 0x2E7618u;
            goto label_2e7618;
        }
    }
    ctx->pc = 0x2E760Cu;
label_2e760c:
    // 0x2e760c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e760cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e7610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7614: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7618:
    // 0x2e7618: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E7618u;
    SET_GPR_U32(ctx, 31, 0x2E7620u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E7618u, 0x2E7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7620u;
label_2e7620:
    // 0x2e7620: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2e7620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e7624: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2e7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e7628: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2e7628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e762c: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x2e762cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x2e7630: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2e7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2e7634: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e7634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e7638: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E7638u;
    {
        const bool branch_taken_0x2e7638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7638) {
            ctx->pc = 0x2E763Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7638u;
            // 0x2e763c: 0x8e45012c  lw          $a1, 0x12C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E75E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e75e0;
        }
    }
    ctx->pc = 0x2E7640u;
label_2e7640:
    // 0x2e7640: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2e7640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e7644: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7644u;
    {
        const bool branch_taken_0x2e7644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7644) {
            ctx->pc = 0x2E7648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7644u;
            // 0x2e7648: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7670u;
            goto label_2e7670;
        }
    }
    ctx->pc = 0x2E764Cu;
    // 0x2e764c: 0x0  nop
    ctx->pc = 0x2e764cu;
    // NOP
label_2e7650:
    // 0x2e7650: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e7650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e7654: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e7654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e7658: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2e7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e765c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2e765cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e7660: 0x0  nop
    ctx->pc = 0x2e7660u;
    // NOP
    // 0x2e7664: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E7664u;
    {
        const bool branch_taken_0x2e7664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7664u;
        // 0x2e7668: 0xac400130  sw          $zero, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7664) {
            ctx->pc = 0x2E7650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7650;
        }
    }
    ctx->pc = 0x2E766Cu;
    // 0x2e766c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7670:
    // 0x2e7670: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2e7670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e7674: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e7674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7678: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2e7678u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e767c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e767cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7680: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7680u;
        // 0x2e7684: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7688u;
}
