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

// Function: sub_00316904
// Address: 0x316904 - 0x316938
void sub_00316904_0x316904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316904_0x316904");
#endif

    switch (ctx->pc) {
        case 0x316920u: goto label_316920;
        default: break;
    }

    ctx->pc = 0x316904u;

    // 0x316904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316908: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x31690c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316910: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316910u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316914: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316918: 0xc0c640b  jal         func_31902C
    ctx->pc = 0x316918u;
    SET_GPR_U32(ctx, 31, 0x316920u);
    ctx->pc = 0x31902Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31902Cu, 0x316918u, 0x316920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316920u;
label_316920:
    // 0x316920: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316920u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316924: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316924u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316928: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31692c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31692cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316930: 0x3e00008  jr          $ra
    ctx->pc = 0x316930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316938u;
}
