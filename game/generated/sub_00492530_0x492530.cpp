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

// Function: sub_00492530
// Address: 0x492530 - 0x492560
void sub_00492530_0x492530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492530_0x492530");
#endif

    switch (ctx->pc) {
        case 0x492538u: goto label_492538;
        default: break;
    }

    ctx->pc = 0x492530u;

    // 0x492530: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x492530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x492534: 0x8442fd06  lh          $v0, -0x2FA($v0)
    ctx->pc = 0x492534u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7EFD06u));
label_492538:
    // 0x492538: 0x0  nop
    ctx->pc = 0x492538u;
    // NOP
    // 0x49253c: 0x0  nop
    ctx->pc = 0x49253cu;
    // NOP
    // 0x492540: 0x0  nop
    ctx->pc = 0x492540u;
    // NOP
    // 0x492544: 0x0  nop
    ctx->pc = 0x492544u;
    // NOP
    // 0x492548: 0x0  nop
    ctx->pc = 0x492548u;
    // NOP
    // 0x49254c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49254Cu;
    {
        const bool branch_taken_0x49254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49254c) {
            ctx->pc = 0x492538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_492538;
        }
    }
    ctx->pc = 0x492554u;
    // 0x492554: 0x3e00008  jr          $ra
    ctx->pc = 0x492554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49255Cu;
    // 0x49255c: 0x0  nop
    ctx->pc = 0x49255cu;
    // NOP
    ctx->pc = 0x492560u;
}
