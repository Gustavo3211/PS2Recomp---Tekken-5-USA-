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

// Function: sub_002C4BB8
// Address: 0x2c4bb8 - 0x2c4bc8
void sub_002C4BB8_0x2c4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4BB8_0x2c4bb8");
#endif

    ctx->pc = 0x2c4bb8u;

    // 0x2c4bb8: 0xaf80bb00  sw          $zero, -0x4500($gp)
    ctx->pc = 0x2c4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949632), GPR_U32(ctx, 0));
    // 0x2c4bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BBCu;
        // 0x2c4bc0: 0xaf80bb04  sw          $zero, -0x44FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4BC4u;
    // 0x2c4bc4: 0x0  nop
    ctx->pc = 0x2c4bc4u;
    // NOP
    ctx->pc = 0x2c4bc8u;
}
