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

// Function: sub_0024BBB8
// Address: 0x24bbb8 - 0x24bbc8
void sub_0024BBB8_0x24bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BBB8_0x24bbb8");
#endif

    ctx->pc = 0x24bbb8u;

    // 0x24bbb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x24bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24bbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x24BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBBCu;
        // 0x24bbc0: 0x28420001  slti        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BBC4u;
    // 0x24bbc4: 0x0  nop
    ctx->pc = 0x24bbc4u;
    // NOP
    ctx->pc = 0x24bbc8u;
}
