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

// Function: sub_0048CB98
// Address: 0x48cb98 - 0x48cba8
void sub_0048CB98_0x48cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB98_0x48cb98");
#endif

    ctx->pc = 0x48cb98u;

    // 0x48cb98: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48cb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x48CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CB9Cu;
        // 0x48cba0: 0x2442b440  addiu       $v0, $v0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CBA4u;
    // 0x48cba4: 0x0  nop
    ctx->pc = 0x48cba4u;
    // NOP
    ctx->pc = 0x48cba8u;
}
