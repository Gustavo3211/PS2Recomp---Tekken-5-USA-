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

// Function: sub_00101378
// Address: 0x101378 - 0x101388
void sub_00101378_0x101378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101378_0x101378");
#endif

    ctx->pc = 0x101378u;

    // 0x101378: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x101378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x10137c: 0x3e00008  jr          $ra
    ctx->pc = 0x10137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10137Cu;
        // 0x101380: 0x2442d180  addiu       $v0, $v0, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10137Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101384u;
    // 0x101384: 0x0  nop
    ctx->pc = 0x101384u;
    // NOP
    ctx->pc = 0x101388u;
}
