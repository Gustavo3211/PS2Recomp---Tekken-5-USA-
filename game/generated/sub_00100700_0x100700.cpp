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

// Function: sub_00100700
// Address: 0x100700 - 0x100710
void sub_00100700_0x100700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100700_0x100700");
#endif

    ctx->pc = 0x100700u;

    // 0x100700: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x100700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x100704: 0x3e00008  jr          $ra
    ctx->pc = 0x100704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100704u;
        // 0x100708: 0xac400138  sw          $zero, 0x138($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10070Cu;
    // 0x10070c: 0x0  nop
    ctx->pc = 0x10070cu;
    // NOP
    ctx->pc = 0x100710u;
}
