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

// Function: sub_0022B858
// Address: 0x22b858 - 0x22b878
void sub_0022B858_0x22b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B858_0x22b858");
#endif

    ctx->pc = 0x22b858u;

    // 0x22b858: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x22b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22b85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22b860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b864: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22b868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b86c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x8c42dc40  lw          $v0, -0x23C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B874u;
    // 0x22b874: 0x0  nop
    ctx->pc = 0x22b874u;
    // NOP
    ctx->pc = 0x22b878u;
}
