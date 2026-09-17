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

// Function: sub_003169A8
// Address: 0x3169a8 - 0x3169dc
void sub_003169A8_0x3169a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003169A8_0x3169a8");
#endif

    switch (ctx->pc) {
        case 0x3169c4u: goto label_3169c4;
        default: break;
    }

    ctx->pc = 0x3169a8u;

    // 0x3169a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3169a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3169ac: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3169acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3169b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3169b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3169b4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3169b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169b8: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x3169b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x3169bc: 0xc0c6445  jal         func_319114
    ctx->pc = 0x3169BCu;
    SET_GPR_U32(ctx, 31, 0x3169C4u);
    ctx->pc = 0x319114u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319114u, 0x3169BCu, 0x3169C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169C4u;
label_3169c4:
    // 0x3169c4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3169c4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169c8: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3169c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3169cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3169ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3169d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3169d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3169D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3169D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3169DCu;
}
