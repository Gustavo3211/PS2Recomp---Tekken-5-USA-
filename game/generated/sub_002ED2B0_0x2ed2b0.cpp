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

// Function: sub_002ED2B0
// Address: 0x2ed2b0 - 0x2ed2c0
void sub_002ED2B0_0x2ed2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED2B0_0x2ed2b0");
#endif

    ctx->pc = 0x2ed2b0u;

    // 0x2ed2b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ed2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ed2b4: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x2ed2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x2ed2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2B8u;
        // 0x2ed2bc: 0xa0400069  sb          $zero, 0x69($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED2C0u;
}
