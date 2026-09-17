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

// Function: sub_002177B0
// Address: 0x2177b0 - 0x2177b8
void sub_002177B0_0x2177b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002177B0_0x2177b0");
#endif

    ctx->pc = 0x2177b0u;

    // 0x2177b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2177B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2177B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177B0u;
        // 0x2177b4: 0xaf84c918  sw          $a0, -0x36E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953240), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2177B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2177B8u;
}
