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

// Function: sub_00333D98
// Address: 0x333d98 - 0x333db8
void sub_00333D98_0x333d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333D98_0x333d98");
#endif

    switch (ctx->pc) {
        case 0x333da8u: goto label_333da8;
        default: break;
    }

    ctx->pc = 0x333d98u;

    // 0x333d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333da0: 0xc0cd0dc  jal         func_334370
    ctx->pc = 0x333DA0u;
    SET_GPR_U32(ctx, 31, 0x333DA8u);
    ctx->pc = 0x333DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DA0u;
    // 0x333da4: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334370u, 0x333DA0u, 0x333DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DA8u;
label_333da8:
    // 0x333da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333dac: 0x3e00008  jr          $ra
    ctx->pc = 0x333DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DACu;
        // 0x333db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333DB4u;
    // 0x333db4: 0x0  nop
    ctx->pc = 0x333db4u;
    // NOP
    ctx->pc = 0x333db8u;
}
