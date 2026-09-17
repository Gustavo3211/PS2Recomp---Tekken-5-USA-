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

// Function: sub_004A9B10
// Address: 0x4a9b10 - 0x4a9b20
void sub_004A9B10_0x4a9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B10_0x4a9b10");
#endif

    ctx->pc = 0x4a9b10u;

    // 0x4a9b10: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a9b14: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B14u;
        // 0x4a9b18: 0x24425bc0  addiu       $v0, $v0, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9B1Cu;
    // 0x4a9b1c: 0x0  nop
    ctx->pc = 0x4a9b1cu;
    // NOP
    ctx->pc = 0x4a9b20u;
}
