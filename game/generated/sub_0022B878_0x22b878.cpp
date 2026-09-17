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

// Function: sub_0022B878
// Address: 0x22b878 - 0x22b898
void sub_0022B878_0x22b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B878_0x22b878");
#endif

    ctx->pc = 0x22b878u;

    // 0x22b878: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x22b878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22b87c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22b880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22b888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b88c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B88Cu;
        // 0x22b890: 0x8c42dc38  lw          $v0, -0x23C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B894u;
    // 0x22b894: 0x0  nop
    ctx->pc = 0x22b894u;
    // NOP
    ctx->pc = 0x22b898u;
}
