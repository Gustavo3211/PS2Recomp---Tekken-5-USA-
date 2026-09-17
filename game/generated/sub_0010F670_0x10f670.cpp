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

// Function: sub_0010F670
// Address: 0x10f670 - 0x10f6b0
void sub_0010F670_0x10f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F670_0x10f670");
#endif

    switch (ctx->pc) {
        case 0x10f678u: goto label_10f678;
        case 0x10f688u: goto label_10f688;
        case 0x10f698u: goto label_10f698;
        case 0x10f6a8u: goto label_10f6a8;
        default: break;
    }

    ctx->pc = 0x10f670u;

    // 0x10f670: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x10f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x10f674: 0xc  syscall     0
    ctx->pc = 0x10f674u;
    ctx->pc = 0x10F678u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f678:
    // 0x10f678: 0x3e00008  jr          $ra
    ctx->pc = 0x10F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F680u;
    // 0x10f680: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x10f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x10f684: 0xc  syscall     0
    ctx->pc = 0x10f684u;
    ctx->pc = 0x10F688u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f688:
    // 0x10f688: 0x3e00008  jr          $ra
    ctx->pc = 0x10F688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F690u;
    // 0x10f690: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x10f690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x10f694: 0xc  syscall     0
    ctx->pc = 0x10f694u;
    ctx->pc = 0x10F698u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f698:
    // 0x10f698: 0x3e00008  jr          $ra
    ctx->pc = 0x10F698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F6A0u;
    // 0x10f6a0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x10f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x10f6a4: 0xc  syscall     0
    ctx->pc = 0x10f6a4u;
    ctx->pc = 0x10F6A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f6a8:
    // 0x10f6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F6B0u;
}
