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

// Function: sub_0035401C
// Address: 0x35401c - 0x354070
void sub_0035401C_0x35401c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035401C_0x35401c");
#endif

    switch (ctx->pc) {
        case 0x354058u: goto label_354058;
        default: break;
    }

    ctx->pc = 0x35401cu;

    // 0x35401c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35401cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354020: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354024: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x354028: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354028u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35402c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x35402cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x354030: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x354030u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x354034: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354038: 0xaf82cbf0  sw          $v0, -0x3410($gp)
    ctx->pc = 0x354038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953968), GPR_U32(ctx, 2));
    // 0x35403c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354040: 0xaf82cbf4  sw          $v0, -0x340C($gp)
    ctx->pc = 0x354040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953972), GPR_U32(ctx, 2));
    // 0x354044: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354048: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x354048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35404c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354050: 0xc0d5421  jal         func_355084
    ctx->pc = 0x354050u;
    SET_GPR_U32(ctx, 31, 0x354058u);
    ctx->pc = 0x355084u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355084u, 0x354050u, 0x354058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354058u;
label_354058:
    // 0x354058: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354058u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35405c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35405cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354060: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354064: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354068: 0x3e00008  jr          $ra
    ctx->pc = 0x354068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354070u;
}
