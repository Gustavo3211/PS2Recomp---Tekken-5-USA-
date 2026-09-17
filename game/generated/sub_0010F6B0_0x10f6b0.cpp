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

// Function: sub_0010F6B0
// Address: 0x10f6b0 - 0x10f6e0
void sub_0010F6B0_0x10f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F6B0_0x10f6b0");
#endif

    switch (ctx->pc) {
        case 0x10f6b8u: goto label_10f6b8;
        case 0x10f6c8u: goto label_10f6c8;
        case 0x10f6d8u: goto label_10f6d8;
        default: break;
    }

    ctx->pc = 0x10f6b0u;

    // 0x10f6b0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x10f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x10f6b4: 0xc  syscall     0
    ctx->pc = 0x10f6b4u;
    ctx->pc = 0x10F6B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f6b8:
    // 0x10f6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F6C0u;
    // 0x10f6c0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x10f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10f6c4: 0xc  syscall     0
    ctx->pc = 0x10f6c4u;
    ctx->pc = 0x10F6C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f6c8:
    // 0x10f6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F6D0u;
    // 0x10f6d0: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x10f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x10f6d4: 0xc  syscall     0
    ctx->pc = 0x10f6d4u;
    ctx->pc = 0x10F6D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f6d8:
    // 0x10f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F6E0u;
}
