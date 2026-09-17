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

// Function: sub_00101590
// Address: 0x101590 - 0x1015a0
void sub_00101590_0x101590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101590_0x101590");
#endif

    ctx->pc = 0x101590u;

    // 0x101590: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x101594: 0x3e00008  jr          $ra
    ctx->pc = 0x101594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101594u;
        // 0x101598: 0x24421bc0  addiu       $v0, $v0, 0x1BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10159Cu;
    // 0x10159c: 0x0  nop
    ctx->pc = 0x10159cu;
    // NOP
    ctx->pc = 0x1015a0u;
}
