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

// Function: sub_003643F8
// Address: 0x3643f8 - 0x364408
void sub_003643F8_0x3643f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003643F8_0x3643f8");
#endif

    ctx->pc = 0x3643f8u;

    // 0x3643f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3643f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3643fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3643FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643FCu;
        // 0x364400: 0xac831400  sw          $v1, 0x1400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3643FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364404u;
    // 0x364404: 0x0  nop
    ctx->pc = 0x364404u;
    // NOP
    ctx->pc = 0x364408u;
}
