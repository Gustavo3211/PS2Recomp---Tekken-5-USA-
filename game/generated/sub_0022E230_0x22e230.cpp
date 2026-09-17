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

// Function: sub_0022E230
// Address: 0x22e230 - 0x22e240
void sub_0022E230_0x22e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E230_0x22e230");
#endif

    ctx->pc = 0x22e230u;

    // 0x22e230: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22e234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e238: 0x3e00008  jr          $ra
    ctx->pc = 0x22E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E238u;
        // 0x22e23c: 0xac62dc50  sw          $v0, -0x23B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E240u;
}
