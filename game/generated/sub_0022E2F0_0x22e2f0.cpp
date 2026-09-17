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

// Function: sub_0022E2F0
// Address: 0x22e2f0 - 0x22e308
void sub_0022E2F0_0x22e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E2F0_0x22e2f0");
#endif

    ctx->pc = 0x22e2f0u;

    // 0x22e2f0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22e2f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22e2f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x8c42dc68  lw          $v0, -0x2398($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E304u;
    // 0x22e304: 0x0  nop
    ctx->pc = 0x22e304u;
    // NOP
    ctx->pc = 0x22e308u;
}
