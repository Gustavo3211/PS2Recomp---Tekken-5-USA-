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

// Function: sub_0023C430
// Address: 0x23c430 - 0x23c440
void sub_0023C430_0x23c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C430_0x23c430");
#endif

    ctx->pc = 0x23c430u;

    // 0x23c430: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23c434: 0x3e00008  jr          $ra
    ctx->pc = 0x23C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C434u;
        // 0x23c438: 0x8c62e3b4  lw          $v0, -0x1C4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960052)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C43Cu;
    // 0x23c43c: 0x0  nop
    ctx->pc = 0x23c43cu;
    // NOP
    ctx->pc = 0x23c440u;
}
