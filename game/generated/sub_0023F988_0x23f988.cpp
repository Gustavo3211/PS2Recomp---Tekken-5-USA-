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

// Function: sub_0023F988
// Address: 0x23f988 - 0x23f9b0
void sub_0023F988_0x23f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F988_0x23f988");
#endif

    switch (ctx->pc) {
        case 0x23f998u: goto label_23f998;
        case 0x23f9a0u: goto label_23f9a0;
        default: break;
    }

    ctx->pc = 0x23f988u;

    // 0x23f988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f990: 0xc08fcaa  jal         func_23F2A8
    ctx->pc = 0x23F990u;
    SET_GPR_U32(ctx, 31, 0x23F998u);
    ctx->pc = 0x23F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F2A8u, 0x23F990u, 0x23F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F998u;
label_23f998:
    // 0x23f998: 0xc08fe38  jal         func_23F8E0
    ctx->pc = 0x23F998u;
    SET_GPR_U32(ctx, 31, 0x23F9A0u);
    ctx->pc = 0x23F8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F8E0u, 0x23F998u, 0x23F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9A0u;
label_23f9a0:
    // 0x23f9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A4u;
        // 0x23f9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F9ACu;
    // 0x23f9ac: 0x0  nop
    ctx->pc = 0x23f9acu;
    // NOP
    ctx->pc = 0x23f9b0u;
}
