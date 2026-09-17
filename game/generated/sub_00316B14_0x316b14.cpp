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

// Function: sub_00316B14
// Address: 0x316b14 - 0x316b48
void sub_00316B14_0x316b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316B14_0x316b14");
#endif

    switch (ctx->pc) {
        case 0x316b30u: goto label_316b30;
        default: break;
    }

    ctx->pc = 0x316b14u;

    // 0x316b14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316b18: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316b1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316b20: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316b20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b24: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316b28: 0xc0c6512  jal         func_319448
    ctx->pc = 0x316B28u;
    SET_GPR_U32(ctx, 31, 0x316B30u);
    ctx->pc = 0x319448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319448u, 0x316B28u, 0x316B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B30u;
label_316b30:
    // 0x316b30: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316b30u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b34: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316b34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316b3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316b40: 0x3e00008  jr          $ra
    ctx->pc = 0x316B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316B48u;
}
