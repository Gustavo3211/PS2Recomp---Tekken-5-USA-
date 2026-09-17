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

// Function: sub_002DEFD0
// Address: 0x2defd0 - 0x2defe8
void sub_002DEFD0_0x2defd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEFD0_0x2defd0");
#endif

    ctx->pc = 0x2defd0u;

    // 0x2defd0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2defd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2defd4: 0x3c02a800  lui         $v0, 0xA800
    ctx->pc = 0x2defd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43008 << 16));
    // 0x2defd8: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x2defd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
    // 0x2defdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFDCu;
        // 0x2defe0: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEFE4u;
    // 0x2defe4: 0x0  nop
    ctx->pc = 0x2defe4u;
    // NOP
    ctx->pc = 0x2defe8u;
}
