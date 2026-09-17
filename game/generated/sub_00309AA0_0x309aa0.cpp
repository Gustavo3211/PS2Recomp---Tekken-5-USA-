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

// Function: sub_00309AA0
// Address: 0x309aa0 - 0x309aa8
void sub_00309AA0_0x309aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309AA0_0x309aa0");
#endif

    ctx->pc = 0x309aa0u;

    // 0x309aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x309AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AA0u;
        // 0x309aa4: 0xa384c531  sb          $a0, -0x3ACF($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294952241), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309AA8u;
}
