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

// Function: sub_003166D4
// Address: 0x3166d4 - 0x316708
void sub_003166D4_0x3166d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003166D4_0x3166d4");
#endif

    switch (ctx->pc) {
        case 0x3166f0u: goto label_3166f0;
        default: break;
    }

    ctx->pc = 0x3166d4u;

    // 0x3166d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3166d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3166d8: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3166d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3166dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3166dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3166e0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3166e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166e4: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x3166e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x3166e8: 0xc0c6361  jal         func_318D84
    ctx->pc = 0x3166E8u;
    SET_GPR_U32(ctx, 31, 0x3166F0u);
    ctx->pc = 0x318D84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318D84u, 0x3166E8u, 0x3166F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166F0u;
label_3166f0:
    // 0x3166f0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3166f0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166f4: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3166f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3166f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3166f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3166fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3166fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316700: 0x3e00008  jr          $ra
    ctx->pc = 0x316700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316708u;
}
