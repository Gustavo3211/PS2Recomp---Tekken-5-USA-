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

// Function: sub_00319448
// Address: 0x319448 - 0x319498
void sub_00319448_0x319448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319448_0x319448");
#endif

    ctx->pc = 0x319448u;

    // 0x319448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31944c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x31944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x319450: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319450u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319454: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x319454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319458: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x319458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x31945c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31945cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319460: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x319460u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319464: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x319464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x319468: 0x3e00008  jr          $ra
    ctx->pc = 0x319468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319470u;
    // 0x319470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319474: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x319474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x319478: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319478u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31947c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31947cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319480: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x319480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x319484: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319484u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319488: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x319488u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31948c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31948cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x319490: 0x3e00008  jr          $ra
    ctx->pc = 0x319490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319498u;
}
