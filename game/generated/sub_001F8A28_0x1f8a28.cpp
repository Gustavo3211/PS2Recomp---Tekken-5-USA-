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

// Function: sub_001F8A28
// Address: 0x1f8a28 - 0x1f8a58
void sub_001F8A28_0x1f8a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8A28_0x1f8a28");
#endif

    ctx->pc = 0x1f8a28u;

    // 0x1f8a28: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f8a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A2Cu;
        // 0x1f8a30: 0x8c6255cc  lw          $v0, 0x55CC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21964)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A34u;
    // 0x1f8a34: 0x0  nop
    ctx->pc = 0x1f8a34u;
    // NOP
    // 0x1f8a38: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f8a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A3Cu;
        // 0x1f8a40: 0xac4455b8  sw          $a0, 0x55B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21944), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A44u;
    // 0x1f8a44: 0x0  nop
    ctx->pc = 0x1f8a44u;
    // NOP
    // 0x1f8a48: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f8a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A4Cu;
        // 0x1f8a50: 0xac4455c0  sw          $a0, 0x55C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21952), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A54u;
    // 0x1f8a54: 0x0  nop
    ctx->pc = 0x1f8a54u;
    // NOP
    ctx->pc = 0x1f8a58u;
}
