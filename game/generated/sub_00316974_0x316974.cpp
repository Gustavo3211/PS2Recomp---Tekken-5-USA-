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

// Function: sub_00316974
// Address: 0x316974 - 0x3169a8
void sub_00316974_0x316974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316974_0x316974");
#endif

    switch (ctx->pc) {
        case 0x316990u: goto label_316990;
        default: break;
    }

    ctx->pc = 0x316974u;

    // 0x316974: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316978: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x31697c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31697cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316980: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316980u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316984: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316988: 0xc0c6426  jal         func_319098
    ctx->pc = 0x316988u;
    SET_GPR_U32(ctx, 31, 0x316990u);
    ctx->pc = 0x319098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319098u, 0x316988u, 0x316990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316990u;
label_316990:
    // 0x316990: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316990u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316994: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316994u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316998: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31699c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31699cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3169a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3169A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3169A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3169A8u;
}
