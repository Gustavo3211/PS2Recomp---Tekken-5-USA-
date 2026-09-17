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

// Function: sub_0010F7D0
// Address: 0x10f7d0 - 0x10f800
void sub_0010F7D0_0x10f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F7D0_0x10f7d0");
#endif

    switch (ctx->pc) {
        case 0x10f7d8u: goto label_10f7d8;
        case 0x10f7e8u: goto label_10f7e8;
        case 0x10f7f8u: goto label_10f7f8;
        default: break;
    }

    ctx->pc = 0x10f7d0u;

    // 0x10f7d0: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x10f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x10f7d4: 0xc  syscall     0
    ctx->pc = 0x10f7d4u;
    ctx->pc = 0x10F7D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f7d8:
    // 0x10f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7E0u;
    // 0x10f7e0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x10f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x10f7e4: 0xc  syscall     0
    ctx->pc = 0x10f7e4u;
    ctx->pc = 0x10F7E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f7e8:
    // 0x10f7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7F0u;
    // 0x10f7f0: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x10f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x10f7f4: 0xc  syscall     0
    ctx->pc = 0x10f7f4u;
    ctx->pc = 0x10F7F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f7f8:
    // 0x10f7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F800u;
}
