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

// Function: sub_001F30F0
// Address: 0x1f30f0 - 0x1f3110
void sub_001F30F0_0x1f30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F30F0_0x1f30f0");
#endif

    ctx->pc = 0x1f30f0u;

    // 0x1f30f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f30f4: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f30f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f30fc: 0xac6406b0  sw          $a0, 0x6B0($v1)
    ctx->pc = 0x1f30fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 4));
    // 0x1f3100: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f3104: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3104u;
        // 0x1f3108: 0xaca406b0  sw          $a0, 0x6B0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1712), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F310Cu;
    // 0x1f310c: 0x0  nop
    ctx->pc = 0x1f310cu;
    // NOP
    ctx->pc = 0x1f3110u;
}
