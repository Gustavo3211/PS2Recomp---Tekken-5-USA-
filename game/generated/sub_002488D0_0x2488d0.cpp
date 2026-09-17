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

// Function: sub_002488D0
// Address: 0x2488d0 - 0x2488e8
void sub_002488D0_0x2488d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002488D0_0x2488d0");
#endif

    ctx->pc = 0x2488d0u;

    // 0x2488d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2488d4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x2488d8: 0x24211380  addiu       $at, $at, 0x1380
    ctx->pc = 0x2488d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4992));
    // 0x2488dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2488DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2488E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488DCu;
        // 0x2488e0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2488DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2488E4u;
    // 0x2488e4: 0x0  nop
    ctx->pc = 0x2488e4u;
    // NOP
    ctx->pc = 0x2488e8u;
}
