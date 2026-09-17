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

// Function: sub_0032DEA0
// Address: 0x32dea0 - 0x32deb0
void sub_0032DEA0_0x32dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DEA0_0x32dea0");
#endif

    switch (ctx->pc) {
        case 0x32dea4u: goto label_32dea4;
        default: break;
    }

    ctx->pc = 0x32dea0u;

    // 0x32dea0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x32dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_32dea4:
    // 0x32dea4: 0x3e00008  jr          $ra
    ctx->pc = 0x32DEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DEA4u;
        // 0x32dea8: 0xfc8200f0  sd          $v0, 0xF0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DEACu;
    // 0x32deac: 0x0  nop
    ctx->pc = 0x32deacu;
    // NOP
    ctx->pc = 0x32deb0u;
}
