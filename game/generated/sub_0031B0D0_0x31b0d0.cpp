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

// Function: sub_0031B0D0
// Address: 0x31b0d0 - 0x31b0e0
void sub_0031B0D0_0x31b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B0D0_0x31b0d0");
#endif

    ctx->pc = 0x31b0d0u;

    // 0x31b0d0: 0xfc860030  sd          $a2, 0x30($a0)
    ctx->pc = 0x31b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
    // 0x31b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0D4u;
        // 0x31b0d8: 0xfc850028  sd          $a1, 0x28($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B0DCu;
    // 0x31b0dc: 0x0  nop
    ctx->pc = 0x31b0dcu;
    // NOP
    ctx->pc = 0x31b0e0u;
}
