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

// Function: sub_002E0B88
// Address: 0x2e0b88 - 0x2e0bf8
void sub_002E0B88_0x2e0b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B88_0x2e0b88");
#endif

    ctx->pc = 0x2e0b88u;

    // 0x2e0b88: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e0b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e0b8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0B90u;
    {
        const bool branch_taken_0x2e0b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B90u;
        // 0x2e0b94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b90) {
            ctx->pc = 0x2E0BA8u;
            goto label_2e0ba8;
        }
    }
    ctx->pc = 0x2E0B98u;
    // 0x2e0b98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0b9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0ba0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0BA0u;
    {
        const bool branch_taken_0x2e0ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ba0) {
            ctx->pc = 0x2E0BB4u;
            goto label_2e0bb4;
        }
    }
    ctx->pc = 0x2E0BA8u;
label_2e0ba8:
    // 0x2e0ba8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bb0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0bb4:
    // 0x2e0bb4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0BB4u;
    {
        const bool branch_taken_0x2e0bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bb4) {
            ctx->pc = 0x2E0BF0u;
            goto label_2e0bf0;
        }
    }
    ctx->pc = 0x2E0BBCu;
    // 0x2e0bbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0BC0u;
    {
        const bool branch_taken_0x2e0bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BC0u;
        // 0x2e0bc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bc0) {
            ctx->pc = 0x2E0BD8u;
            goto label_2e0bd8;
        }
    }
    ctx->pc = 0x2E0BC8u;
    // 0x2e0bc8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0bcc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0bd0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0BD0u;
    {
        const bool branch_taken_0x2e0bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0bd0) {
            ctx->pc = 0x2E0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0BD0u;
            // 0x2e0bd4: 0x8cc20090  lw          $v0, 0x90($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0BE8u;
            goto label_2e0be8;
        }
    }
    ctx->pc = 0x2E0BD8u;
label_2e0bd8:
    // 0x2e0bd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0be0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0be4: 0x8cc20090  lw          $v0, 0x90($a2)
    ctx->pc = 0x2e0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x90u));
label_2e0be8:
    // 0x2e0be8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0BE8u;
    {
        const bool branch_taken_0x2e0be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0be8) {
            ctx->pc = 0x2E0BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0BE8u;
            // 0x2e0bec: 0xacc50090  sw          $a1, 0x90($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0BF0u;
            goto label_2e0bf0;
        }
    }
    ctx->pc = 0x2E0BF0u;
label_2e0bf0:
    // 0x2e0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0BF8u;
}
