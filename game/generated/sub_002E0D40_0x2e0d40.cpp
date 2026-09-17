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

// Function: sub_002E0D40
// Address: 0x2e0d40 - 0x2e0db0
void sub_002E0D40_0x2e0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0D40_0x2e0d40");
#endif

    ctx->pc = 0x2e0d40u;

    // 0x2e0d40: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x2e0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2e0d44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D48u;
    {
        const bool branch_taken_0x2e0d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D48u;
        // 0x2e0d4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d48) {
            ctx->pc = 0x2E0D60u;
            goto label_2e0d60;
        }
    }
    ctx->pc = 0x2E0D50u;
    // 0x2e0d50: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0d54: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0d58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0D58u;
    {
        const bool branch_taken_0x2e0d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0d58) {
            ctx->pc = 0x2E0D6Cu;
            goto label_2e0d6c;
        }
    }
    ctx->pc = 0x2E0D60u;
label_2e0d60:
    // 0x2e0d60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0d6c:
    // 0x2e0d6c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0D6Cu;
    {
        const bool branch_taken_0x2e0d6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d6c) {
            ctx->pc = 0x2E0DA8u;
            goto label_2e0da8;
        }
    }
    ctx->pc = 0x2E0D74u;
    // 0x2e0d74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0d78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D78u;
    {
        const bool branch_taken_0x2e0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D78u;
        // 0x2e0d7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d78) {
            ctx->pc = 0x2E0D90u;
            goto label_2e0d90;
        }
    }
    ctx->pc = 0x2E0D80u;
    // 0x2e0d80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0d84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0d88: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D88u;
    {
        const bool branch_taken_0x2e0d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0d88) {
            ctx->pc = 0x2E0D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D88u;
            // 0x2e0d8c: 0x8cc2005c  lw          $v0, 0x5C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DA0u;
            goto label_2e0da0;
        }
    }
    ctx->pc = 0x2E0D90u;
label_2e0d90:
    // 0x2e0d90: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d98: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0d9c: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5Cu));
label_2e0da0:
    // 0x2e0da0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0DA0u;
    {
        const bool branch_taken_0x2e0da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0da0) {
            ctx->pc = 0x2E0DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0DA0u;
            // 0x2e0da4: 0xacc5005c  sw          $a1, 0x5C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DA8u;
            goto label_2e0da8;
        }
    }
    ctx->pc = 0x2E0DA8u;
label_2e0da8:
    // 0x2e0da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DB0u;
}
