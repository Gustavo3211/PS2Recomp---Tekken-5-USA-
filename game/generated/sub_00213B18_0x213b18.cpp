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

// Function: sub_00213B18
// Address: 0x213b18 - 0x213b30
void sub_00213B18_0x213b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B18_0x213b18");
#endif

    ctx->pc = 0x213b18u;

    // 0x213b18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x213b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213b1c: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x213b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x213b20: 0x8c42c8f0  lw          $v0, -0x3710($v0)
    ctx->pc = 0x213b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953200)));
    // 0x213b24: 0x3e00008  jr          $ra
    ctx->pc = 0x213B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B2Cu;
    // 0x213b2c: 0x0  nop
    ctx->pc = 0x213b2cu;
    // NOP
    ctx->pc = 0x213b30u;
}
