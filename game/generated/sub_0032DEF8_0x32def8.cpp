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

// Function: sub_0032DEF8
// Address: 0x32def8 - 0x32df00
void sub_0032DEF8_0x32def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DEF8_0x32def8");
#endif

    ctx->pc = 0x32def8u;

    // 0x32def8: 0x3e00008  jr          $ra
    ctx->pc = 0x32DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DEF8u;
        // 0x32defc: 0xaf84c5ec  sw          $a0, -0x3A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952428), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF00u;
}
