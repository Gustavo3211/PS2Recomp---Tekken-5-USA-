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

// Function: sub_00355034
// Address: 0x355034 - 0x355084
void sub_00355034_0x355034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355034_0x355034");
#endif

    switch (ctx->pc) {
        case 0x35506cu: goto label_35506c;
        default: break;
    }

    ctx->pc = 0x355034u;

    // 0x355034: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355038: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x355038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x35503c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x355040: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355040u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355044: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355044u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355048: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35504c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35504Cu;
    {
        const bool branch_taken_0x35504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35504c) {
            ctx->pc = 0x35506Cu;
            goto label_35506c;
        }
    }
    ctx->pc = 0x355054u;
    // 0x355054: 0x8f82c730  lw          $v0, -0x38D0($gp)
    ctx->pc = 0x355054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952752)));
    // 0x355058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355058u;
    {
        const bool branch_taken_0x355058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355058) {
            ctx->pc = 0x35506Cu;
            goto label_35506c;
        }
    }
    ctx->pc = 0x355060u;
    // 0x355060: 0x8f84c72c  lw          $a0, -0x38D4($gp)
    ctx->pc = 0x355060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952748)));
    // 0x355064: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x355064u;
    SET_GPR_U32(ctx, 31, 0x35506Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x355064u, 0x35506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35506Cu;
label_35506c:
    // 0x35506c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35506cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355070: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x355070u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355074: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x355074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35507c: 0x3e00008  jr          $ra
    ctx->pc = 0x35507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355084u;
}
