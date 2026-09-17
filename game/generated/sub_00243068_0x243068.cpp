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

// Function: sub_00243068
// Address: 0x243068 - 0x243078
void sub_00243068_0x243068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243068_0x243068");
#endif

    ctx->pc = 0x243068u;

    // 0x243068: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24306c: 0x3e00008  jr          $ra
    ctx->pc = 0x24306Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24306Cu;
        // 0x243070: 0x24425db0  addiu       $v0, $v0, 0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24306Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243074u;
    // 0x243074: 0x0  nop
    ctx->pc = 0x243074u;
    // NOP
    ctx->pc = 0x243078u;
}
