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

// Function: sub_00355084
// Address: 0x355084 - 0x3550d4
void sub_00355084_0x355084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355084_0x355084");
#endif

    switch (ctx->pc) {
        case 0x3550bcu: goto label_3550bc;
        default: break;
    }

    ctx->pc = 0x355084u;

    // 0x355084: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355088: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x355088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x35508c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x355090: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355090u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355094: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355098: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35509c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35509Cu;
    {
        const bool branch_taken_0x35509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35509c) {
            ctx->pc = 0x3550BCu;
            goto label_3550bc;
        }
    }
    ctx->pc = 0x3550A4u;
    // 0x3550a4: 0x8f82c730  lw          $v0, -0x38D0($gp)
    ctx->pc = 0x3550a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952752)));
    // 0x3550a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3550A8u;
    {
        const bool branch_taken_0x3550a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550a8) {
            ctx->pc = 0x3550BCu;
            goto label_3550bc;
        }
    }
    ctx->pc = 0x3550B0u;
    // 0x3550b0: 0x8f84c72c  lw          $a0, -0x38D4($gp)
    ctx->pc = 0x3550b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952748)));
    // 0x3550b4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3550B4u;
    SET_GPR_U32(ctx, 31, 0x3550BCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3550B4u, 0x3550BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550BCu;
label_3550bc:
    // 0x3550bc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3550bcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550c0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3550c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3550c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3550c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3550c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3550c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3550cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3550CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3550CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3550D4u;
}
