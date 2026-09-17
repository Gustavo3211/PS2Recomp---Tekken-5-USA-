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

// Function: sub_0034B60C
// Address: 0x34b60c - 0x34b66c
void sub_0034B60C_0x34b60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B60C_0x34b60c");
#endif

    switch (ctx->pc) {
        case 0x34b624u: goto label_34b624;
        case 0x34b62cu: goto label_34b62c;
        case 0x34b634u: goto label_34b634;
        case 0x34b63cu: goto label_34b63c;
        case 0x34b644u: goto label_34b644;
        case 0x34b64cu: goto label_34b64c;
        case 0x34b654u: goto label_34b654;
        default: break;
    }

    ctx->pc = 0x34b60cu;

    // 0x34b60c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b610: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x34b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x34b614: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b618: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34b618u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b61c: 0xc0d2f4e  jal         func_34BD38
    ctx->pc = 0x34B61Cu;
    SET_GPR_U32(ctx, 31, 0x34B624u);
    ctx->pc = 0x34BD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BD38u, 0x34B61Cu, 0x34B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B624u;
label_34b624:
    // 0x34b624: 0xc0d2db1  jal         func_34B6C4
    ctx->pc = 0x34B624u;
    SET_GPR_U32(ctx, 31, 0x34B62Cu);
    ctx->pc = 0x34B6C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B6C4u, 0x34B624u, 0x34B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B62Cu;
label_34b62c:
    // 0x34b62c: 0xc0d3ff3  jal         func_34FFCC
    ctx->pc = 0x34B62Cu;
    SET_GPR_U32(ctx, 31, 0x34B634u);
    ctx->pc = 0x34FFCCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FFCCu, 0x34B62Cu, 0x34B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B634u;
label_34b634:
    // 0x34b634: 0xc0d3f3a  jal         func_34FCE8
    ctx->pc = 0x34B634u;
    SET_GPR_U32(ctx, 31, 0x34B63Cu);
    ctx->pc = 0x34FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FCE8u, 0x34B634u, 0x34B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B63Cu;
label_34b63c:
    // 0x34b63c: 0xc0d40b1  jal         func_3502C4
    ctx->pc = 0x34B63Cu;
    SET_GPR_U32(ctx, 31, 0x34B644u);
    ctx->pc = 0x3502C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502C4u, 0x34B63Cu, 0x34B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B644u;
label_34b644:
    // 0x34b644: 0xc0d4d05  jal         func_353414
    ctx->pc = 0x34B644u;
    SET_GPR_U32(ctx, 31, 0x34B64Cu);
    ctx->pc = 0x353414u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353414u, 0x34B644u, 0x34B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B64Cu;
label_34b64c:
    // 0x34b64c: 0xc0d4fb0  jal         func_353EC0
    ctx->pc = 0x34B64Cu;
    SET_GPR_U32(ctx, 31, 0x34B654u);
    ctx->pc = 0x353EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353EC0u, 0x34B64Cu, 0x34B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B654u;
label_34b654:
    // 0x34b654: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34b654u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b658: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x34b658u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b660: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x34b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34b664: 0x3e00008  jr          $ra
    ctx->pc = 0x34B664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B66Cu;
}
