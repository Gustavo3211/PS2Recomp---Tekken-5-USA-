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

// Function: sub_0032DF38
// Address: 0x32df38 - 0x32df50
void sub_0032DF38_0x32df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DF38_0x32df38");
#endif

    ctx->pc = 0x32df38u;

    // 0x32df38: 0x8f82c5f4  lw          $v0, -0x3A0C($gp)
    ctx->pc = 0x32df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952436)));
    // 0x32df3c: 0x8f83c5fc  lw          $v1, -0x3A04($gp)
    ctx->pc = 0x32df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952444)));
    // 0x32df40: 0xaf82c5f0  sw          $v0, -0x3A10($gp)
    ctx->pc = 0x32df40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952432), GPR_U32(ctx, 2));
    // 0x32df44: 0x3e00008  jr          $ra
    ctx->pc = 0x32DF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF44u;
        // 0x32df48: 0xaf83c5f8  sw          $v1, -0x3A08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF4Cu;
    // 0x32df4c: 0x0  nop
    ctx->pc = 0x32df4cu;
    // NOP
    ctx->pc = 0x32df50u;
}
