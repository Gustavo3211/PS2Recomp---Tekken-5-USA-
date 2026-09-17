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

// Function: sub_001F1300
// Address: 0x1f1300 - 0x1f1308
void sub_001F1300_0x1f1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1300_0x1f1300");
#endif

    ctx->pc = 0x1f1300u;

    // 0x1f1300: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0xaf84c890  sw          $a0, -0x3770($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1308u;
}
