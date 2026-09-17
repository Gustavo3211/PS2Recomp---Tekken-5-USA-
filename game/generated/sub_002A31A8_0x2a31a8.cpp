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

// Function: sub_002A31A8
// Address: 0x2a31a8 - 0x2a31b8
void sub_002A31A8_0x2a31a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A31A8_0x2a31a8");
#endif

    ctx->pc = 0x2a31a8u;

    // 0x2a31a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a31ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A31ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31ACu;
        // 0x2a31b0: 0xac820048  sw          $v0, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A31ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A31B4u;
    // 0x2a31b4: 0x0  nop
    ctx->pc = 0x2a31b4u;
    // NOP
    ctx->pc = 0x2a31b8u;
}
