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

// Function: sub_0034BD38
// Address: 0x34bd38 - 0x34bdac
void sub_0034BD38_0x34bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BD38_0x34bd38");
#endif

    switch (ctx->pc) {
        case 0x34bd50u: goto label_34bd50;
        case 0x34bd74u: goto label_34bd74;
        default: break;
    }

    ctx->pc = 0x34bd38u;

    // 0x34bd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bd3c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34bd40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34bd44: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bd44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd48: 0xc0d339a  jal         func_34CE68
    ctx->pc = 0x34BD48u;
    SET_GPR_U32(ctx, 31, 0x34BD50u);
    ctx->pc = 0x34CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CE68u, 0x34BD48u, 0x34BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD50u;
label_34bd50:
    // 0x34bd50: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34bd54: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bd58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34BD58u;
    {
        const bool branch_taken_0x34bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd58) {
            ctx->pc = 0x34BD6Cu;
            goto label_34bd6c;
        }
    }
    ctx->pc = 0x34BD60u;
    // 0x34bd60: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bd64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34BD64u;
    {
        const bool branch_taken_0x34bd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd64) {
            ctx->pc = 0x34BD94u;
            goto label_34bd94;
        }
    }
    ctx->pc = 0x34BD6Cu;
label_34bd6c:
    // 0x34bd6c: 0xc0d3c44  jal         func_34F110
    ctx->pc = 0x34BD6Cu;
    SET_GPR_U32(ctx, 31, 0x34BD74u);
    ctx->pc = 0x34F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F110u, 0x34BD6Cu, 0x34BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD74u;
label_34bd74:
    // 0x34bd74: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34bd78: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bd7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34BD7Cu;
    {
        const bool branch_taken_0x34bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd7c) {
            ctx->pc = 0x34BD90u;
            goto label_34bd90;
        }
    }
    ctx->pc = 0x34BD84u;
    // 0x34bd84: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bd88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34BD88u;
    {
        const bool branch_taken_0x34bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd88) {
            ctx->pc = 0x34BD94u;
            goto label_34bd94;
        }
    }
    ctx->pc = 0x34BD90u;
label_34bd90:
    // 0x34bd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34bd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34bd94:
    // 0x34bd94: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bd94u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd98: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34bd98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bd9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34bd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bda0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34bda4: 0x3e00008  jr          $ra
    ctx->pc = 0x34BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BDACu;
}
