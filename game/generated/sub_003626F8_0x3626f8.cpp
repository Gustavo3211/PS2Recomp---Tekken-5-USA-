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

// Function: sub_003626F8
// Address: 0x3626f8 - 0x362708
void sub_003626F8_0x3626f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003626F8_0x3626f8");
#endif

    ctx->pc = 0x3626f8u;

    // 0x3626f8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3626f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3626fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3626FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626FCu;
        // 0x362700: 0xac445d00  sw          $a0, 0x5D00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23808), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362704u;
    // 0x362704: 0x0  nop
    ctx->pc = 0x362704u;
    // NOP
    ctx->pc = 0x362708u;
}
