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

// Function: sub_002015D0
// Address: 0x2015d0 - 0x2015e0
void sub_002015D0_0x2015d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015D0_0x2015d0");
#endif

    ctx->pc = 0x2015d0u;

    // 0x2015d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2015d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2015d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2015D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015D4u;
        // 0x2015d8: 0x244239c8  addiu       $v0, $v0, 0x39C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2015D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2015DCu;
    // 0x2015dc: 0x0  nop
    ctx->pc = 0x2015dcu;
    // NOP
    ctx->pc = 0x2015e0u;
}
