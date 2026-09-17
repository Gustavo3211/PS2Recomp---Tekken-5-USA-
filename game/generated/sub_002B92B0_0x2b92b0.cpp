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

// Function: sub_002B92B0
// Address: 0x2b92b0 - 0x2b92b8
void sub_002B92B0_0x2b92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B92B0_0x2b92b0");
#endif

    ctx->pc = 0x2b92b0u;

    // 0x2b92b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B92B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B0u;
        // 0x2b92b4: 0xaf84badc  sw          $a0, -0x4524($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B92B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B92B8u;
}
