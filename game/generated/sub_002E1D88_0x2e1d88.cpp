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

// Function: sub_002E1D88
// Address: 0x2e1d88 - 0x2e1db8
void sub_002E1D88_0x2e1d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1D88_0x2e1d88");
#endif

    ctx->pc = 0x2e1d88u;

    // 0x2e1d88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e1d8c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2e1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2e1d90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1d94: 0x8c634510  lw          $v1, 0x4510($v1)
    ctx->pc = 0x2e1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17680)));
    // 0x2e1d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D98u;
        // 0x2e1d9c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1DA0u;
    // 0x2e1da0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e1da4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2e1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2e1da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1dac: 0x8c634510  lw          $v1, 0x4510($v1)
    ctx->pc = 0x2e1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17680)));
    // 0x2e1db0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DB0u;
        // 0x2e1db4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1DB8u;
}
