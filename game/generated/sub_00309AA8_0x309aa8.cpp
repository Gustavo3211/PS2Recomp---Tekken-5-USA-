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

// Function: sub_00309AA8
// Address: 0x309aa8 - 0x309ab0
void sub_00309AA8_0x309aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309AA8_0x309aa8");
#endif

    ctx->pc = 0x309aa8u;

    // 0x309aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x309AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AA8u;
        // 0x309aac: 0xa384c530  sb          $a0, -0x3AD0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294952240), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309AB0u;
}
