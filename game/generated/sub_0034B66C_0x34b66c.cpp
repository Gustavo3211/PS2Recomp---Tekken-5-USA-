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

// Function: sub_0034B66C
// Address: 0x34b66c - 0x34b6c4
void sub_0034B66C_0x34b66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B66C_0x34b66c");
#endif

    switch (ctx->pc) {
        case 0x34b684u: goto label_34b684;
        case 0x34b68cu: goto label_34b68c;
        case 0x34b694u: goto label_34b694;
        case 0x34b69cu: goto label_34b69c;
        case 0x34b6a4u: goto label_34b6a4;
        case 0x34b6acu: goto label_34b6ac;
        default: break;
    }

    ctx->pc = 0x34b66cu;

    // 0x34b66c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b670: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x34b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x34b674: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b678: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34b678u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b67c: 0xc0d4d2c  jal         func_3534B0
    ctx->pc = 0x34B67Cu;
    SET_GPR_U32(ctx, 31, 0x34B684u);
    ctx->pc = 0x3534B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3534B0u, 0x34B67Cu, 0x34B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B684u;
label_34b684:
    // 0x34b684: 0xc0d4fdd  jal         func_353F74
    ctx->pc = 0x34B684u;
    SET_GPR_U32(ctx, 31, 0x34B68Cu);
    ctx->pc = 0x353F74u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F74u, 0x34B684u, 0x34B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B68Cu;
label_34b68c:
    // 0x34b68c: 0xc0d42dc  jal         func_350B70
    ctx->pc = 0x34B68Cu;
    SET_GPR_U32(ctx, 31, 0x34B694u);
    ctx->pc = 0x350B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B70u, 0x34B68Cu, 0x34B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B694u;
label_34b694:
    // 0x34b694: 0xc0d2e0e  jal         func_34B838
    ctx->pc = 0x34B694u;
    SET_GPR_U32(ctx, 31, 0x34B69Cu);
    ctx->pc = 0x34B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B838u, 0x34B694u, 0x34B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B69Cu;
label_34b69c:
    // 0x34b69c: 0xc0d3f4b  jal         func_34FD2C
    ctx->pc = 0x34B69Cu;
    SET_GPR_U32(ctx, 31, 0x34B6A4u);
    ctx->pc = 0x34FD2Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD2Cu, 0x34B69Cu, 0x34B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6A4u;
label_34b6a4:
    // 0x34b6a4: 0xc0d4004  jal         func_350010
    ctx->pc = 0x34B6A4u;
    SET_GPR_U32(ctx, 31, 0x34B6ACu);
    ctx->pc = 0x350010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350010u, 0x34B6A4u, 0x34B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6ACu;
label_34b6ac:
    // 0x34b6ac: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34b6acu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b6b0: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x34b6b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b6b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b6b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x34b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x34B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B6C4u;
}
