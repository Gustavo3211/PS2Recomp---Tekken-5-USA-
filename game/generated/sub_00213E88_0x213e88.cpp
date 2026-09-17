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

// Function: sub_00213E88
// Address: 0x213e88 - 0x213ea0
void sub_00213E88_0x213e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E88_0x213e88");
#endif

    ctx->pc = 0x213e88u;

    // 0x213e88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x213e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213e8c: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x213e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x213e90: 0xac20c8f0  sw          $zero, -0x3710($at)
    ctx->pc = 0x213e90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953200), GPR_U32(ctx, 0));
    // 0x213e94: 0x3e00008  jr          $ra
    ctx->pc = 0x213E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E9Cu;
    // 0x213e9c: 0x0  nop
    ctx->pc = 0x213e9cu;
    // NOP
    ctx->pc = 0x213ea0u;
}
