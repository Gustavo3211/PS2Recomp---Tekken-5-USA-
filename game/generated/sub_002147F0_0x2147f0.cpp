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

// Function: sub_002147F0
// Address: 0x2147f0 - 0x214800
void sub_002147F0_0x2147f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002147F0_0x2147f0");
#endif

    ctx->pc = 0x2147f0u;

    // 0x2147f0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2147f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2147f4: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x2147f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x2147f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2147F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2147FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147F8u;
        // 0x2147fc: 0xaf82c90c  sw          $v0, -0x36F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2147F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214800u;
}
