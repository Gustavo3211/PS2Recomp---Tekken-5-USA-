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

// Function: sub_002D0998
// Address: 0x2d0998 - 0x2d09a8
void sub_002D0998_0x2d0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0998_0x2d0998");
#endif

    ctx->pc = 0x2d0998u;

    // 0x2d0998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d099c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D099Cu;
        // 0x2d09a0: 0xaf82cb2c  sw          $v0, -0x34D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D099Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D09A4u;
    // 0x2d09a4: 0x0  nop
    ctx->pc = 0x2d09a4u;
    // NOP
    ctx->pc = 0x2d09a8u;
}
