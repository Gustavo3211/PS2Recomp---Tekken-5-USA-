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

// Function: sub_0029E8D0
// Address: 0x29e8d0 - 0x29e8d8
void sub_0029E8D0_0x29e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E8D0_0x29e8d0");
#endif

    ctx->pc = 0x29e8d0u;

    // 0x29e8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D0u;
        // 0x29e8d4: 0xaf84b6c8  sw          $a0, -0x4938($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E8D8u;
}
