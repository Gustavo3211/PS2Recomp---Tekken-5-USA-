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

// Function: sub_00218A80
// Address: 0x218a80 - 0x218a98
void sub_00218A80_0x218a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218A80_0x218a80");
#endif

    ctx->pc = 0x218a80u;

    // 0x218a80: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x218a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x218a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x218A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A8Cu;
        // 0x218a90: 0xa0a30069  sb          $v1, 0x69($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218A94u;
    // 0x218a94: 0x0  nop
    ctx->pc = 0x218a94u;
    // NOP
    ctx->pc = 0x218a98u;
}
