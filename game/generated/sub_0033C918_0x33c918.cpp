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

// Function: sub_0033C918
// Address: 0x33c918 - 0x33c920
void sub_0033C918_0x33c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C918_0x33c918");
#endif

    ctx->pc = 0x33c918u;

    // 0x33c918: 0x3e00008  jr          $ra
    ctx->pc = 0x33C918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C918u;
        // 0x33c91c: 0xaf84cce4  sw          $a0, -0x331C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C920u;
}
