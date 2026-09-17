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

// Function: sub_0010F1F0
// Address: 0x10f1f0 - 0x10f230
void sub_0010F1F0_0x10f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1F0_0x10f1f0");
#endif

    switch (ctx->pc) {
        case 0x10f1f8u: goto label_10f1f8;
        case 0x10f208u: goto label_10f208;
        case 0x10f218u: goto label_10f218;
        case 0x10f228u: goto label_10f228;
        default: break;
    }

    ctx->pc = 0x10f1f0u;

    // 0x10f1f0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x10f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x10f1f4: 0xc  syscall     0
    ctx->pc = 0x10f1f4u;
    ctx->pc = 0x10F1F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f1f8:
    // 0x10f1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F200u;
    // 0x10f200: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x10f204: 0xc  syscall     0
    ctx->pc = 0x10f204u;
    ctx->pc = 0x10F208u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f208:
    // 0x10f208: 0x3e00008  jr          $ra
    ctx->pc = 0x10F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F210u;
    // 0x10f210: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x10f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x10f214: 0xc  syscall     0
    ctx->pc = 0x10f214u;
    ctx->pc = 0x10F218u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f218:
    // 0x10f218: 0x3e00008  jr          $ra
    ctx->pc = 0x10F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F220u;
    // 0x10f220: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x10f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x10f224: 0xc  syscall     0
    ctx->pc = 0x10f224u;
    ctx->pc = 0x10F228u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f228:
    // 0x10f228: 0x3e00008  jr          $ra
    ctx->pc = 0x10F228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F230u;
}
