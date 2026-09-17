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

// Function: sub_0020BEA0
// Address: 0x20bea0 - 0x20beb0
void sub_0020BEA0_0x20bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BEA0_0x20bea0");
#endif

    ctx->pc = 0x20bea0u;

    // 0x20bea0: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bea4: 0x3e00008  jr          $ra
    ctx->pc = 0x20BEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA4u;
        // 0x20bea8: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BEACu;
    // 0x20beac: 0x0  nop
    ctx->pc = 0x20beacu;
    // NOP
    ctx->pc = 0x20beb0u;
}
