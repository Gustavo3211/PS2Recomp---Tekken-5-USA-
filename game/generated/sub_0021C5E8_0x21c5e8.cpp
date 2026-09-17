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

// Function: sub_0021C5E8
// Address: 0x21c5e8 - 0x21c5f8
void sub_0021C5E8_0x21c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C5E8_0x21c5e8");
#endif

    ctx->pc = 0x21c5e8u;

    // 0x21c5e8: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x21c5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x21c5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21C5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5ECu;
        // 0x21c5f0: 0xa0800015  sb          $zero, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C5F4u;
    // 0x21c5f4: 0x0  nop
    ctx->pc = 0x21c5f4u;
    // NOP
    ctx->pc = 0x21c5f8u;
}
