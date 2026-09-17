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

// Function: sub_0021AC80
// Address: 0x21ac80 - 0x21ac88
void sub_0021AC80_0x21ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AC80_0x21ac80");
#endif

    ctx->pc = 0x21ac80u;

    // 0x21ac80: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC80u;
        // 0x21ac84: 0xaf84c934  sw          $a0, -0x36CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953268), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC88u;
}
