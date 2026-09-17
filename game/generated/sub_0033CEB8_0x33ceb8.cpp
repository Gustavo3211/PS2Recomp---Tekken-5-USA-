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

// Function: sub_0033CEB8
// Address: 0x33ceb8 - 0x33cec8
void sub_0033CEB8_0x33ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CEB8_0x33ceb8");
#endif

    switch (ctx->pc) {
        case 0x33cebcu: goto label_33cebc;
        default: break;
    }

    ctx->pc = 0x33ceb8u;

    // 0x33ceb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ceb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cebc:
    // 0x33cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x33CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEBCu;
        // 0x33cec0: 0xa0820016  sb          $v0, 0x16($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CEC4u;
    // 0x33cec4: 0x0  nop
    ctx->pc = 0x33cec4u;
    // NOP
    ctx->pc = 0x33cec8u;
}
