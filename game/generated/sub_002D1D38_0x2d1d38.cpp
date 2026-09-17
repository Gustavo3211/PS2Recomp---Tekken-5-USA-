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

// Function: sub_002D1D38
// Address: 0x2d1d38 - 0x2d1d40
void sub_002D1D38_0x2d1d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D38_0x2d1d38");
#endif

    ctx->pc = 0x2d1d38u;

    // 0x2d1d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D38u;
        // 0x2d1d3c: 0xaf84cb54  sw          $a0, -0x34AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D40u;
}
