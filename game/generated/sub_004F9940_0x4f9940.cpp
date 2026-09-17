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

// Function: sub_004F9940
// Address: 0x4f9940 - 0x4f9950
void sub_004F9940_0x4f9940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9940_0x4f9940");
#endif

    ctx->pc = 0x4f9940u;

    // 0x4f9940: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x4f9940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x4f9944: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9944u;
        // 0x4f9948: 0x24421380  addiu       $v0, $v0, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F994Cu;
    // 0x4f994c: 0x0  nop
    ctx->pc = 0x4f994cu;
    // NOP
    ctx->pc = 0x4f9950u;
}
