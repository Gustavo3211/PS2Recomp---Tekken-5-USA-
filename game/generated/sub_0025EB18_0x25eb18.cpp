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

// Function: sub_0025EB18
// Address: 0x25eb18 - 0x25eb38
void sub_0025EB18_0x25eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EB18_0x25eb18");
#endif

    ctx->pc = 0x25eb18u;

    // 0x25eb18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb1c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x25eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x25eb20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb24: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x25eb28: 0x8c62089c  lw          $v0, 0x89C($v1)
    ctx->pc = 0x25eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2204)));
    // 0x25eb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB2Cu;
        // 0x25eb30: 0x24420830  addiu       $v0, $v0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EB34u;
    // 0x25eb34: 0x0  nop
    ctx->pc = 0x25eb34u;
    // NOP
    ctx->pc = 0x25eb38u;
}
