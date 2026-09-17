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

// Function: sub_002E1D50
// Address: 0x2e1d50 - 0x2e1d70
void sub_002E1D50_0x2e1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1D50_0x2e1d50");
#endif

    switch (ctx->pc) {
        case 0x2e1d60u: goto label_2e1d60;
        default: break;
    }

    ctx->pc = 0x2e1d50u;

    // 0x2e1d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1d58: 0xc087cac  jal         func_21F2B0
    ctx->pc = 0x2E1D58u;
    SET_GPR_U32(ctx, 31, 0x2E1D60u);
    ctx->pc = 0x21F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2B0u, 0x2E1D58u, 0x2E1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D60u;
label_2e1d60:
    // 0x2e1d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D64u;
        // 0x2e1d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1D6Cu;
    // 0x2e1d6c: 0x0  nop
    ctx->pc = 0x2e1d6cu;
    // NOP
    ctx->pc = 0x2e1d70u;
}
