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

// Function: sub_00354E20
// Address: 0x354e20 - 0x354e58
void sub_00354E20_0x354e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354E20_0x354e20");
#endif

    switch (ctx->pc) {
        case 0x354e40u: goto label_354e40;
        default: break;
    }

    ctx->pc = 0x354e20u;

    // 0x354e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354e24: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x354e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x354e28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x354e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x354e2c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354e2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e30: 0xaf80c734  sw          $zero, -0x38CC($gp)
    ctx->pc = 0x354e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952756), GPR_U32(ctx, 0));
    // 0x354e34: 0x8f84c72c  lw          $a0, -0x38D4($gp)
    ctx->pc = 0x354e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952748)));
    // 0x354e38: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x354E38u;
    SET_GPR_U32(ctx, 31, 0x354E40u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x354E38u, 0x354E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E40u;
label_354e40:
    // 0x354e40: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354e40u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e44: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x354e44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354e48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x354e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354e4c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x354e50: 0x3e00008  jr          $ra
    ctx->pc = 0x354E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354E58u;
}
