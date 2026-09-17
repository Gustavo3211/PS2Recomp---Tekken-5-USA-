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

// Function: sub_002E0CD0
// Address: 0x2e0cd0 - 0x2e0d40
void sub_002E0CD0_0x2e0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0CD0_0x2e0cd0");
#endif

    ctx->pc = 0x2e0cd0u;

    // 0x2e0cd0: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x2e0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2e0cd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0CD8u;
    {
        const bool branch_taken_0x2e0cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CD8u;
        // 0x2e0cdc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0cd8) {
            ctx->pc = 0x2E0CF0u;
            goto label_2e0cf0;
        }
    }
    ctx->pc = 0x2E0CE0u;
    // 0x2e0ce0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0ce4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0ce8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0CE8u;
    {
        const bool branch_taken_0x2e0ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ce8) {
            ctx->pc = 0x2E0CFCu;
            goto label_2e0cfc;
        }
    }
    ctx->pc = 0x2E0CF0u;
label_2e0cf0:
    // 0x2e0cf0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0cfc:
    // 0x2e0cfc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0CFCu;
    {
        const bool branch_taken_0x2e0cfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cfc) {
            ctx->pc = 0x2E0D38u;
            goto label_2e0d38;
        }
    }
    ctx->pc = 0x2E0D04u;
    // 0x2e0d04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D08u;
    {
        const bool branch_taken_0x2e0d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D08u;
        // 0x2e0d0c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d08) {
            ctx->pc = 0x2E0D20u;
            goto label_2e0d20;
        }
    }
    ctx->pc = 0x2E0D10u;
    // 0x2e0d10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0d14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0d18: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D18u;
    {
        const bool branch_taken_0x2e0d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0d18) {
            ctx->pc = 0x2E0D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D18u;
            // 0x2e0d1c: 0x8cc20058  lw          $v0, 0x58($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D30u;
            goto label_2e0d30;
        }
    }
    ctx->pc = 0x2E0D20u;
label_2e0d20:
    // 0x2e0d20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d28: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0d2c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2e0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58u));
label_2e0d30:
    // 0x2e0d30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0D30u;
    {
        const bool branch_taken_0x2e0d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d30) {
            ctx->pc = 0x2E0D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D30u;
            // 0x2e0d34: 0xacc50058  sw          $a1, 0x58($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D38u;
            goto label_2e0d38;
        }
    }
    ctx->pc = 0x2E0D38u;
label_2e0d38:
    // 0x2e0d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0D40u;
}
