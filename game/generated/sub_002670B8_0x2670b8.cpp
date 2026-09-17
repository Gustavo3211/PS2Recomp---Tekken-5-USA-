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

// Function: sub_002670B8
// Address: 0x2670b8 - 0x2670c8
void sub_002670B8_0x2670b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002670B8_0x2670b8");
#endif

    switch (ctx->pc) {
        case 0x2670bcu: goto label_2670bc;
        default: break;
    }

    ctx->pc = 0x2670b8u;

    // 0x2670b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2670b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2670bc:
    // 0x2670bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2670BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2670C4u;
    // 0x2670c4: 0x0  nop
    ctx->pc = 0x2670c4u;
    // NOP
    ctx->pc = 0x2670c8u;
}
