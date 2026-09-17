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

// Function: sub_00101540
// Address: 0x101540 - 0x101550
void sub_00101540_0x101540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101540_0x101540");
#endif

    ctx->pc = 0x101540u;

    // 0x101540: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x101540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x101544: 0x3e00008  jr          $ra
    ctx->pc = 0x101544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101544u;
        // 0x101548: 0x2442c6c0  addiu       $v0, $v0, -0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10154Cu;
    // 0x10154c: 0x0  nop
    ctx->pc = 0x10154cu;
    // NOP
    ctx->pc = 0x101550u;
}
