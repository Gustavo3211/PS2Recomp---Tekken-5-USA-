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

// Function: sub_001F8D90
// Address: 0x1f8d90 - 0x1f8da0
void sub_001F8D90_0x1f8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D90_0x1f8d90");
#endif

    ctx->pc = 0x1f8d90u;

    // 0x1f8d90: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f8d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D94u;
        // 0x1f8d98: 0x8c6255f4  lw          $v0, 0x55F4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22004)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8D9Cu;
    // 0x1f8d9c: 0x0  nop
    ctx->pc = 0x1f8d9cu;
    // NOP
    ctx->pc = 0x1f8da0u;
}
