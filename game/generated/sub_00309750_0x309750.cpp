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

// Function: sub_00309750
// Address: 0x309750 - 0x309760
void sub_00309750_0x309750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309750_0x309750");
#endif

    ctx->pc = 0x309750u;

    // 0x309750: 0xac860370  sw          $a2, 0x370($a0)
    ctx->pc = 0x309750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 6));
    // 0x309754: 0x3e00008  jr          $ra
    ctx->pc = 0x309754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309754u;
        // 0x309758: 0xac85036c  sw          $a1, 0x36C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 876), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30975Cu;
    // 0x30975c: 0x0  nop
    ctx->pc = 0x30975cu;
    // NOP
    ctx->pc = 0x309760u;
}
