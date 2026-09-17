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

// Function: sub_00213AB0
// Address: 0x213ab0 - 0x213ac8
void sub_00213AB0_0x213ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213AB0_0x213ab0");
#endif

    ctx->pc = 0x213ab0u;

    // 0x213ab0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213ab4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x213ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x213ab8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x213ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x213abc: 0x3e00008  jr          $ra
    ctx->pc = 0x213ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213ABCu;
        // 0x213ac0: 0x8c42b6f0  lw          $v0, -0x4910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948592)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213AC4u;
    // 0x213ac4: 0x0  nop
    ctx->pc = 0x213ac4u;
    // NOP
    ctx->pc = 0x213ac8u;
}
