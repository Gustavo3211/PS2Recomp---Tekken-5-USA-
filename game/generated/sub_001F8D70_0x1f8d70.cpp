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

// Function: sub_001F8D70
// Address: 0x1f8d70 - 0x1f8d80
void sub_001F8D70_0x1f8d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D70_0x1f8d70");
#endif

    ctx->pc = 0x1f8d70u;

    // 0x1f8d70: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f8d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D74u;
        // 0x1f8d78: 0x8c6255e8  lw          $v0, 0x55E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21992)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8D7Cu;
    // 0x1f8d7c: 0x0  nop
    ctx->pc = 0x1f8d7cu;
    // NOP
    ctx->pc = 0x1f8d80u;
}
