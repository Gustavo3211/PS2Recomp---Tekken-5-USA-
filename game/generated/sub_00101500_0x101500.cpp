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

// Function: sub_00101500
// Address: 0x101500 - 0x101510
void sub_00101500_0x101500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101500_0x101500");
#endif

    ctx->pc = 0x101500u;

    // 0x101500: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x101500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x101504: 0x3e00008  jr          $ra
    ctx->pc = 0x101504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101504u;
        // 0x101508: 0x2442e100  addiu       $v0, $v0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10150Cu;
    // 0x10150c: 0x0  nop
    ctx->pc = 0x10150cu;
    // NOP
    ctx->pc = 0x101510u;
}
