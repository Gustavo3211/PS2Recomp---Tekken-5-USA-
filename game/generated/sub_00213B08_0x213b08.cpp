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

// Function: sub_00213B08
// Address: 0x213b08 - 0x213b18
void sub_00213B08_0x213b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B08_0x213b08");
#endif

    ctx->pc = 0x213b08u;

    // 0x213b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x213B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B0Cu;
        // 0x213b10: 0xaf82c8f8  sw          $v0, -0x3708($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B14u;
    // 0x213b14: 0x0  nop
    ctx->pc = 0x213b14u;
    // NOP
    ctx->pc = 0x213b18u;
}
