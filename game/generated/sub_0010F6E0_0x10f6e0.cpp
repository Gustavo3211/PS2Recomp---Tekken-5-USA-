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

// Function: sub_0010F6E0
// Address: 0x10f6e0 - 0x10f710
void sub_0010F6E0_0x10f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F6E0_0x10f6e0");
#endif

    switch (ctx->pc) {
        case 0x10f6e8u: goto label_10f6e8;
        case 0x10f6f8u: goto label_10f6f8;
        case 0x10f708u: goto label_10f708;
        default: break;
    }

    ctx->pc = 0x10f6e0u;

    // 0x10f6e0: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x10f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x10f6e4: 0xc  syscall     0
    ctx->pc = 0x10f6e4u;
    ctx->pc = 0x10F6E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f6e8:
    // 0x10f6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F6F0u;
    // 0x10f6f0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x10f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x10f6f4: 0xc  syscall     0
    ctx->pc = 0x10f6f4u;
    ctx->pc = 0x10F6F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f6f8:
    // 0x10f6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F700u;
    // 0x10f700: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x10f700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x10f704: 0xc  syscall     0
    ctx->pc = 0x10f704u;
    ctx->pc = 0x10F708u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f708:
    // 0x10f708: 0x3e00008  jr          $ra
    ctx->pc = 0x10F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F710u;
}
