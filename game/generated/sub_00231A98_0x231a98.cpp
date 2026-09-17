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

// Function: sub_00231A98
// Address: 0x231a98 - 0x231ab0
void sub_00231A98_0x231a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A98_0x231a98");
#endif

    ctx->pc = 0x231a98u;

    // 0x231a98: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x231a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x231a9c: 0x2442d350  addiu       $v0, $v0, -0x2CB0
    ctx->pc = 0x231a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x231aa0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x231aa0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x15D350u));
    // 0x231aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x231AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AA4u;
        // 0x231aa8: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231AACu;
    // 0x231aac: 0x0  nop
    ctx->pc = 0x231aacu;
    // NOP
    ctx->pc = 0x231ab0u;
}
