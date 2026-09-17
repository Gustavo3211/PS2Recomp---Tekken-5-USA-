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

// Function: sub_001F9848
// Address: 0x1f9848 - 0x1f9868
void sub_001F9848_0x1f9848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9848_0x1f9848");
#endif

    ctx->pc = 0x1f9848u;

    // 0x1f9848: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f984c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F984Cu;
        // 0x1f9850: 0x9462b41c  lhu         $v0, -0x4BE4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294947868)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9854u;
    // 0x1f9854: 0x0  nop
    ctx->pc = 0x1f9854u;
    // NOP
    // 0x1f9858: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f985c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F985Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F985Cu;
        // 0x1f9860: 0x8462b41e  lh          $v0, -0x4BE2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294947870)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F985Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9864u;
    // 0x1f9864: 0x0  nop
    ctx->pc = 0x1f9864u;
    // NOP
    ctx->pc = 0x1f9868u;
}
