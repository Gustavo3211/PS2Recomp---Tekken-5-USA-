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

// Function: sub_002DEFE8
// Address: 0x2defe8 - 0x2df000
void sub_002DEFE8_0x2defe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEFE8_0x2defe8");
#endif

    ctx->pc = 0x2defe8u;

    // 0x2defe8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2defe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2defec: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2defecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2deff0: 0x34425400  ori         $v0, $v0, 0x5400
    ctx->pc = 0x2deff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    // 0x2deff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFF4u;
        // 0x2deff8: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEFFCu;
    // 0x2deffc: 0x0  nop
    ctx->pc = 0x2deffcu;
    // NOP
    ctx->pc = 0x2df000u;
}
