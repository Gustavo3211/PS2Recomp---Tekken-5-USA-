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

// Function: sub_001FAEE8
// Address: 0x1faee8 - 0x1faef8
void sub_001FAEE8_0x1faee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAEE8_0x1faee8");
#endif

    ctx->pc = 0x1faee8u;

    // 0x1faee8: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1faeec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEECu;
        // 0x1faef0: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEF4u;
    // 0x1faef4: 0x0  nop
    ctx->pc = 0x1faef4u;
    // NOP
    ctx->pc = 0x1faef8u;
}
