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

// Function: sub_0034FCE8
// Address: 0x34fce8 - 0x34fd2c
void sub_0034FCE8_0x34fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FCE8_0x34fce8");
#endif

    switch (ctx->pc) {
        case 0x34fd10u: goto label_34fd10;
        default: break;
    }

    ctx->pc = 0x34fce8u;

    // 0x34fce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fcec: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x34fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x34fcf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34fcf4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fcf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fcf8: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x34fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x34fcfc: 0x2484ba80  addiu       $a0, $a0, -0x4580
    ctx->pc = 0x34fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949504));
    // 0x34fd00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34fd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd04: 0x240607c8  addiu       $a2, $zero, 0x7C8
    ctx->pc = 0x34fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1992));
    // 0x34fd08: 0xc04a151  jal         func_128544
    ctx->pc = 0x34FD08u;
    SET_GPR_U32(ctx, 31, 0x34FD10u);
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x34FD08u, 0x34FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD10u;
label_34fd10:
    // 0x34fd10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34fd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd14: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fd14u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd18: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x34fd18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fd1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fd20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x34fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34fd24: 0x3e00008  jr          $ra
    ctx->pc = 0x34FD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FD2Cu;
}
