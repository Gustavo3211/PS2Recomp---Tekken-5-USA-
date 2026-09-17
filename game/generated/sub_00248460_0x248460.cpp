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

// Function: sub_00248460
// Address: 0x248460 - 0x248470
void sub_00248460_0x248460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248460_0x248460");
#endif

    ctx->pc = 0x248460u;

    // 0x248460: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x248460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x248464: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x248464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x248468: 0x3e00008  jr          $ra
    ctx->pc = 0x248468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248468u;
        // 0x24846c: 0xac626ffc  sw          $v0, 0x6FFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248470u;
}
