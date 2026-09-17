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

// Function: sub_001F9650
// Address: 0x1f9650 - 0x1f9660
void sub_001F9650_0x1f9650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9650_0x1f9650");
#endif

    ctx->pc = 0x1f9650u;

    // 0x1f9650: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f9654: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9654u;
        // 0x1f9658: 0x8462b414  lh          $v0, -0x4BEC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294947860)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F965Cu;
    // 0x1f965c: 0x0  nop
    ctx->pc = 0x1f965cu;
    // NOP
    ctx->pc = 0x1f9660u;
}
