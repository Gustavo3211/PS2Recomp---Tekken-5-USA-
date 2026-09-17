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

// Function: sub_0010F620
// Address: 0x10f620 - 0x10f670
void sub_0010F620_0x10f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F620_0x10f620");
#endif

    switch (ctx->pc) {
        case 0x10f628u: goto label_10f628;
        case 0x10f638u: goto label_10f638;
        case 0x10f648u: goto label_10f648;
        case 0x10f658u: goto label_10f658;
        case 0x10f668u: goto label_10f668;
        default: break;
    }

    ctx->pc = 0x10f620u;

    // 0x10f620: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x10f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10f624: 0xc  syscall     0
    ctx->pc = 0x10f624u;
    ctx->pc = 0x10F628u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f628:
    // 0x10f628: 0x3e00008  jr          $ra
    ctx->pc = 0x10F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F630u;
    // 0x10f630: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x10f630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x10f634: 0xc  syscall     0
    ctx->pc = 0x10f634u;
    ctx->pc = 0x10F638u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f638:
    // 0x10f638: 0x3e00008  jr          $ra
    ctx->pc = 0x10F638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F640u;
    // 0x10f640: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x10f640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x10f644: 0xc  syscall     0
    ctx->pc = 0x10f644u;
    ctx->pc = 0x10F648u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f648:
    // 0x10f648: 0x3e00008  jr          $ra
    ctx->pc = 0x10F648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F650u;
    // 0x10f650: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x10f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x10f654: 0xc  syscall     0
    ctx->pc = 0x10f654u;
    ctx->pc = 0x10F658u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f658:
    // 0x10f658: 0x3e00008  jr          $ra
    ctx->pc = 0x10F658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F660u;
    // 0x10f660: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x10f664: 0xc  syscall     0
    ctx->pc = 0x10f664u;
    ctx->pc = 0x10F668u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f668:
    // 0x10f668: 0x3e00008  jr          $ra
    ctx->pc = 0x10F668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F670u;
}
