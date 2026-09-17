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

// Function: sub_002E0E20
// Address: 0x2e0e20 - 0x2e0e90
void sub_002E0E20_0x2e0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E20_0x2e0e20");
#endif

    ctx->pc = 0x2e0e20u;

    // 0x2e0e20: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x2e0e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x2e0e24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0E28u;
    {
        const bool branch_taken_0x2e0e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E28u;
        // 0x2e0e2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e28) {
            ctx->pc = 0x2E0E40u;
            goto label_2e0e40;
        }
    }
    ctx->pc = 0x2E0E30u;
    // 0x2e0e30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0e34: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0e38: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0E38u;
    {
        const bool branch_taken_0x2e0e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0e38) {
            ctx->pc = 0x2E0E4Cu;
            goto label_2e0e4c;
        }
    }
    ctx->pc = 0x2E0E40u;
label_2e0e40:
    // 0x2e0e40: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0e4c:
    // 0x2e0e4c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0E4Cu;
    {
        const bool branch_taken_0x2e0e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e4c) {
            ctx->pc = 0x2E0E88u;
            goto label_2e0e88;
        }
    }
    ctx->pc = 0x2E0E54u;
    // 0x2e0e54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0E58u;
    {
        const bool branch_taken_0x2e0e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E58u;
        // 0x2e0e5c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e58) {
            ctx->pc = 0x2E0E70u;
            goto label_2e0e70;
        }
    }
    ctx->pc = 0x2E0E60u;
    // 0x2e0e60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0e64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0e68: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0E68u;
    {
        const bool branch_taken_0x2e0e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0e68) {
            ctx->pc = 0x2E0E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E68u;
            // 0x2e0e6c: 0x8cc20058  lw          $v0, 0x58($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E80u;
            goto label_2e0e80;
        }
    }
    ctx->pc = 0x2E0E70u;
label_2e0e70:
    // 0x2e0e70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0e7c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58u));
label_2e0e80:
    // 0x2e0e80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0E80u;
    {
        const bool branch_taken_0x2e0e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e80) {
            ctx->pc = 0x2E0E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E80u;
            // 0x2e0e84: 0xacc50058  sw          $a1, 0x58($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E88u;
            goto label_2e0e88;
        }
    }
    ctx->pc = 0x2E0E88u;
label_2e0e88:
    // 0x2e0e88: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E90u;
}
