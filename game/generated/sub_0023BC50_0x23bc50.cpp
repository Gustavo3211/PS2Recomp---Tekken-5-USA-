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

// Function: sub_0023BC50
// Address: 0x23bc50 - 0x23bc60
void sub_0023BC50_0x23bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BC50_0x23bc50");
#endif

    ctx->pc = 0x23bc50u;

    // 0x23bc50: 0xaf84a948  sw          $a0, -0x56B8($gp)
    ctx->pc = 0x23bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945096), GPR_U32(ctx, 4));
    // 0x23bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x23BC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC54u;
        // 0x23bc58: 0xaf85a94c  sw          $a1, -0x56B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BC5Cu;
    // 0x23bc5c: 0x0  nop
    ctx->pc = 0x23bc5cu;
    // NOP
    ctx->pc = 0x23bc60u;
}
