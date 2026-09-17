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

// Function: sub_00311BE0
// Address: 0x311be0 - 0x311be8
void sub_00311BE0_0x311be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311BE0_0x311be0");
#endif

    ctx->pc = 0x311be0u;

    // 0x311be0: 0x3e00008  jr          $ra
    ctx->pc = 0x311BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BE0u;
        // 0x311be4: 0xaf84c568  sw          $a0, -0x3A98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311BE8u;
}
