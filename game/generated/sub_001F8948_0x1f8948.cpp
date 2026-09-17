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

// Function: sub_001F8948
// Address: 0x1f8948 - 0x1f8960
void sub_001F8948_0x1f8948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8948_0x1f8948");
#endif

    ctx->pc = 0x1f8948u;

    // 0x1f8948: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f894c: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x1f894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
    // 0x1f8950: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f8950u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1555B4u));
    // 0x1f8954: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8958: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8958u;
        // 0x1f895c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8960u;
}
