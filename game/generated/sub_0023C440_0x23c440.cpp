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

// Function: sub_0023C440
// Address: 0x23c440 - 0x23c450
void sub_0023C440_0x23c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C440_0x23c440");
#endif

    ctx->pc = 0x23c440u;

    // 0x23c440: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c444: 0x8c43e3b4  lw          $v1, -0x1C4C($v0)
    ctx->pc = 0x23c444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3AE3B4u));
    // 0x23c448: 0x3e00008  jr          $ra
    ctx->pc = 0x23C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C448u;
        // 0x23c44c: 0x84620012  lh          $v0, 0x12($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C450u;
}
