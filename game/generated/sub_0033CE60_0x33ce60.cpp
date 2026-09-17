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

// Function: sub_0033CE60
// Address: 0x33ce60 - 0x33ce70
void sub_0033CE60_0x33ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CE60_0x33ce60");
#endif

    ctx->pc = 0x33ce60u;

    // 0x33ce60: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x33ce60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33ce64: 0x3e00008  jr          $ra
    ctx->pc = 0x33CE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE64u;
        // 0x33ce68: 0x2123c  dsll32      $v0, $v0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE6Cu;
    // 0x33ce6c: 0x0  nop
    ctx->pc = 0x33ce6cu;
    // NOP
    ctx->pc = 0x33ce70u;
}
