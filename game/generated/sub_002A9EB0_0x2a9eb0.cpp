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

// Function: sub_002A9EB0
// Address: 0x2a9eb0 - 0x2a9ec0
void sub_002A9EB0_0x2a9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9EB0_0x2a9eb0");
#endif

    ctx->pc = 0x2a9eb0u;

    // 0x2a9eb0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a9eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EB4u;
        // 0x2a9eb8: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9EBCu;
    // 0x2a9ebc: 0x0  nop
    ctx->pc = 0x2a9ebcu;
    // NOP
    ctx->pc = 0x2a9ec0u;
}
