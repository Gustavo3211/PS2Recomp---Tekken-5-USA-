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

// Function: sub_00316938
// Address: 0x316938 - 0x316974
void sub_00316938_0x316938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316938_0x316938");
#endif

    switch (ctx->pc) {
        case 0x31695cu: goto label_31695c;
        default: break;
    }

    ctx->pc = 0x316938u;

    // 0x316938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31693c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x31693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316940: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x316940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x316944: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316948: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x31694c: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x31694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316950: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x316950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316954: 0xc0c641a  jal         func_319068
    ctx->pc = 0x316954u;
    SET_GPR_U32(ctx, 31, 0x31695Cu);
    ctx->pc = 0x319068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319068u, 0x316954u, 0x31695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31695Cu;
label_31695c:
    // 0x31695c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31695cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316960: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316960u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316964: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x316964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31696c: 0x3e00008  jr          $ra
    ctx->pc = 0x31696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316974u;
}
