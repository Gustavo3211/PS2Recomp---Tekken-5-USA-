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

// Function: sub_003626D8
// Address: 0x3626d8 - 0x3626e8
void sub_003626D8_0x3626d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003626D8_0x3626d8");
#endif

    ctx->pc = 0x3626d8u;

    // 0x3626d8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3626d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3626dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3626DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3626E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626DCu;
        // 0x3626e0: 0xac445cf8  sw          $a0, 0x5CF8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23800), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3626E4u;
    // 0x3626e4: 0x0  nop
    ctx->pc = 0x3626e4u;
    // NOP
    ctx->pc = 0x3626e8u;
}
