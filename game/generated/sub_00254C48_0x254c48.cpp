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

// Function: sub_00254C48
// Address: 0x254c48 - 0x254c68
void sub_00254C48_0x254c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254C48_0x254c48");
#endif

    switch (ctx->pc) {
        case 0x254c58u: goto label_254c58;
        default: break;
    }

    ctx->pc = 0x254c48u;

    // 0x254c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254c50: 0xc09528a  jal         func_254A28
    ctx->pc = 0x254C50u;
    SET_GPR_U32(ctx, 31, 0x254C58u);
    ctx->pc = 0x254A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A28u, 0x254C50u, 0x254C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C58u;
label_254c58:
    // 0x254c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x254C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C5Cu;
        // 0x254c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254C64u;
    // 0x254c64: 0x0  nop
    ctx->pc = 0x254c64u;
    // NOP
    ctx->pc = 0x254c68u;
}
