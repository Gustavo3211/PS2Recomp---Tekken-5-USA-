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

// Function: sub_005127A8
// Address: 0x5127a8 - 0x5127b8
void sub_005127A8_0x5127a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005127A8_0x5127a8");
#endif

    ctx->pc = 0x5127a8u;

    // 0x5127a8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5127a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x5127ac: 0x3e00008  jr          $ra
    ctx->pc = 0x5127ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5127B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5127ACu;
        // 0x5127b0: 0x2442c700  addiu       $v0, $v0, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5127ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5127B4u;
    // 0x5127b4: 0x0  nop
    ctx->pc = 0x5127b4u;
    // NOP
    ctx->pc = 0x5127b8u;
}
