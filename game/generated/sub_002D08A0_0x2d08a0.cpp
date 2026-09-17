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

// Function: sub_002D08A0
// Address: 0x2d08a0 - 0x2d08b8
void sub_002D08A0_0x2d08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D08A0_0x2d08a0");
#endif

    ctx->pc = 0x2d08a0u;

    // 0x2d08a0: 0x8f82cb28  lw          $v0, -0x34D8($gp)
    ctx->pc = 0x2d08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953768)));
    // 0x2d08a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d08a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D08A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08A8u;
        // 0x2d08ac: 0xaf82cb28  sw          $v0, -0x34D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D08A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D08B0u;
    // 0x2d08b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D08B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08B0u;
        // 0x2d08b4: 0x8f82cb28  lw          $v0, -0x34D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953768)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D08B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D08B8u;
}
