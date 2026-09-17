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

// Function: sub_003583C0
// Address: 0x3583c0 - 0x3583d0
void sub_003583C0_0x3583c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003583C0_0x3583c0");
#endif

    ctx->pc = 0x3583c0u;

    // 0x3583c0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3583c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3583c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3583C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3583C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583C4u;
        // 0x3583c8: 0x2442ff80  addiu       $v0, $v0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3583C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3583CCu;
    // 0x3583cc: 0x0  nop
    ctx->pc = 0x3583ccu;
    // NOP
    ctx->pc = 0x3583d0u;
}
