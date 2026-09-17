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

// Function: sub_0023ACA8
// Address: 0x23aca8 - 0x23acb8
void sub_0023ACA8_0x23aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ACA8_0x23aca8");
#endif

    ctx->pc = 0x23aca8u;

    // 0x23aca8: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23acac: 0x3e00008  jr          $ra
    ctx->pc = 0x23ACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACACu;
        // 0x23acb0: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ACB4u;
    // 0x23acb4: 0x0  nop
    ctx->pc = 0x23acb4u;
    // NOP
    ctx->pc = 0x23acb8u;
}
