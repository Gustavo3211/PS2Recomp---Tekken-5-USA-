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

// Function: sub_0032DF20
// Address: 0x32df20 - 0x32df38
void sub_0032DF20_0x32df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DF20_0x32df20");
#endif

    ctx->pc = 0x32df20u;

    // 0x32df20: 0xaf84c5f4  sw          $a0, -0x3A0C($gp)
    ctx->pc = 0x32df20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952436), GPR_U32(ctx, 4));
    // 0x32df24: 0xaf85c5fc  sw          $a1, -0x3A04($gp)
    ctx->pc = 0x32df24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952444), GPR_U32(ctx, 5));
    // 0x32df28: 0xaf84c5f0  sw          $a0, -0x3A10($gp)
    ctx->pc = 0x32df28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952432), GPR_U32(ctx, 4));
    // 0x32df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x32DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF2Cu;
        // 0x32df30: 0xaf85c5f8  sw          $a1, -0x3A08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952440), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF34u;
    // 0x32df34: 0x0  nop
    ctx->pc = 0x32df34u;
    // NOP
    ctx->pc = 0x32df38u;
}
