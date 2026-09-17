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

// Function: sub_002E0DB0
// Address: 0x2e0db0 - 0x2e0e20
void sub_002E0DB0_0x2e0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0DB0_0x2e0db0");
#endif

    ctx->pc = 0x2e0db0u;

    // 0x2e0db0: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x2e0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x2e0db4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0DB8u;
    {
        const bool branch_taken_0x2e0db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DB8u;
        // 0x2e0dbc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0db8) {
            ctx->pc = 0x2E0DD0u;
            goto label_2e0dd0;
        }
    }
    ctx->pc = 0x2E0DC0u;
    // 0x2e0dc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0dc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0dc8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0DC8u;
    {
        const bool branch_taken_0x2e0dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0dc8) {
            ctx->pc = 0x2E0DDCu;
            goto label_2e0ddc;
        }
    }
    ctx->pc = 0x2E0DD0u;
label_2e0dd0:
    // 0x2e0dd0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0dd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0ddc:
    // 0x2e0ddc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0DDCu;
    {
        const bool branch_taken_0x2e0ddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ddc) {
            ctx->pc = 0x2E0E18u;
            goto label_2e0e18;
        }
    }
    ctx->pc = 0x2E0DE4u;
    // 0x2e0de4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0de8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0DE8u;
    {
        const bool branch_taken_0x2e0de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DE8u;
        // 0x2e0dec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0de8) {
            ctx->pc = 0x2E0E00u;
            goto label_2e0e00;
        }
    }
    ctx->pc = 0x2E0DF0u;
    // 0x2e0df0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0df4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0df8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0DF8u;
    {
        const bool branch_taken_0x2e0df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0df8) {
            ctx->pc = 0x2E0DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0DF8u;
            // 0x2e0dfc: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E10u;
            goto label_2e0e10;
        }
    }
    ctx->pc = 0x2E0E00u;
label_2e0e00:
    // 0x2e0e00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0e04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e08: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0e0c: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x2e0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x54u));
label_2e0e10:
    // 0x2e0e10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0E10u;
    {
        const bool branch_taken_0x2e0e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e10) {
            ctx->pc = 0x2E0E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E10u;
            // 0x2e0e14: 0xacc50054  sw          $a1, 0x54($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E18u;
            goto label_2e0e18;
        }
    }
    ctx->pc = 0x2E0E18u;
label_2e0e18:
    // 0x2e0e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E20u;
}
