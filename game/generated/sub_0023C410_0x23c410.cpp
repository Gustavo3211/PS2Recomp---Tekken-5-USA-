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

// Function: sub_0023C410
// Address: 0x23c410 - 0x23c420
void sub_0023C410_0x23c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C410_0x23c410");
#endif

    ctx->pc = 0x23c410u;

    // 0x23c410: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c414: 0x3e00008  jr          $ra
    ctx->pc = 0x23C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C414u;
        // 0x23c418: 0x2442e3c0  addiu       $v0, $v0, -0x1C40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C41Cu;
    // 0x23c41c: 0x0  nop
    ctx->pc = 0x23c41cu;
    // NOP
    ctx->pc = 0x23c420u;
}
