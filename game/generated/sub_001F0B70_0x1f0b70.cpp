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

// Function: sub_001F0B70
// Address: 0x1f0b70 - 0x1f0b90
void sub_001F0B70_0x1f0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B70_0x1f0b70");
#endif

    ctx->pc = 0x1f0b70u;

    // 0x1f0b70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f0b74: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f0b78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0b7c: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x1f0b80: 0xac4006a4  sw          $zero, 0x6A4($v0)
    ctx->pc = 0x1f0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 0));
    // 0x1f0b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B84u;
        // 0x1f0b88: 0xac40069c  sw          $zero, 0x69C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0B8Cu;
    // 0x1f0b8c: 0x0  nop
    ctx->pc = 0x1f0b8cu;
    // NOP
    ctx->pc = 0x1f0b90u;
}
