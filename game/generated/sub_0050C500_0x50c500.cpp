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

// Function: sub_0050C500
// Address: 0x50c500 - 0x50c510
void sub_0050C500_0x50c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050C500_0x50c500");
#endif

    ctx->pc = 0x50c500u;

    // 0x50c500: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50c500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50c504: 0x3e00008  jr          $ra
    ctx->pc = 0x50C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C504u;
        // 0x50c508: 0x24421548  addiu       $v0, $v0, 0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50C504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50C50Cu;
    // 0x50c50c: 0x0  nop
    ctx->pc = 0x50c50cu;
    // NOP
    ctx->pc = 0x50c510u;
}
