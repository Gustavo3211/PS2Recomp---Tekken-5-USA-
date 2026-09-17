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

// Function: sub_002D0948
// Address: 0x2d0948 - 0x2d0958
void sub_002D0948_0x2d0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0948_0x2d0948");
#endif

    ctx->pc = 0x2d0948u;

    // 0x2d0948: 0x8f82cb24  lw          $v0, -0x34DC($gp)
    ctx->pc = 0x2d0948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953764)));
    // 0x2d094c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0950: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0950u;
        // 0x2d0954: 0xaf82cb24  sw          $v0, -0x34DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0958u;
}
