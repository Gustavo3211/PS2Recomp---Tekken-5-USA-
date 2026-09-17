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

// Function: sub_0050B0C8
// Address: 0x50b0c8 - 0x50b0d8
void sub_0050B0C8_0x50b0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B0C8_0x50b0c8");
#endif

    ctx->pc = 0x50b0c8u;

    // 0x50b0c8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50b0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x50B0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B0CCu;
        // 0x50b0d0: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B0D4u;
    // 0x50b0d4: 0x0  nop
    ctx->pc = 0x50b0d4u;
    // NOP
    ctx->pc = 0x50b0d8u;
}
