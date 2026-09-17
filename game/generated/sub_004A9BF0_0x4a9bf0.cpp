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

// Function: sub_004A9BF0
// Address: 0x4a9bf0 - 0x4a9c00
void sub_004A9BF0_0x4a9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BF0_0x4a9bf0");
#endif

    ctx->pc = 0x4a9bf0u;

    // 0x4a9bf0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4a9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4a9bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BF4u;
        // 0x4a9bf8: 0x2442e080  addiu       $v0, $v0, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BFCu;
    // 0x4a9bfc: 0x0  nop
    ctx->pc = 0x4a9bfcu;
    // NOP
    ctx->pc = 0x4a9c00u;
}
