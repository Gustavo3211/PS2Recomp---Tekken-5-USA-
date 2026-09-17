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

// Function: sub_004F8FD0
// Address: 0x4f8fd0 - 0x4f8fe0
void sub_004F8FD0_0x4f8fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8FD0_0x4f8fd0");
#endif

    ctx->pc = 0x4f8fd0u;

    // 0x4f8fd0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4f8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4f8fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8FD4u;
        // 0x4f8fd8: 0x2442c948  addiu       $v0, $v0, -0x36B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8FDCu;
    // 0x4f8fdc: 0x0  nop
    ctx->pc = 0x4f8fdcu;
    // NOP
    ctx->pc = 0x4f8fe0u;
}
