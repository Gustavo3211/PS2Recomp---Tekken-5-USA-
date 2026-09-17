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

// Function: sub_001F8998
// Address: 0x1f8998 - 0x1f89b8
void sub_001F8998_0x1f8998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8998_0x1f8998");
#endif

    ctx->pc = 0x1f8998u;

    // 0x1f8998: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f899c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F899Cu;
        // 0x1f89a0: 0x8c6255d0  lw          $v0, 0x55D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21968)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F899Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89A4u;
    // 0x1f89a4: 0x0  nop
    ctx->pc = 0x1f89a4u;
    // NOP
    // 0x1f89a8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f89ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F89ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89ACu;
        // 0x1f89b0: 0xac4455d4  sw          $a0, 0x55D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89B4u;
    // 0x1f89b4: 0x0  nop
    ctx->pc = 0x1f89b4u;
    // NOP
    ctx->pc = 0x1f89b8u;
}
