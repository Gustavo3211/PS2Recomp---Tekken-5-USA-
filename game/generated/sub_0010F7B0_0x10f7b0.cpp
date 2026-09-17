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

// Function: sub_0010F7B0
// Address: 0x10f7b0 - 0x10f7d0
void sub_0010F7B0_0x10f7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F7B0_0x10f7b0");
#endif

    switch (ctx->pc) {
        case 0x10f7b8u: goto label_10f7b8;
        case 0x10f7c0u: goto label_10f7c0;
        case 0x10f7c8u: goto label_10f7c8;
        default: break;
    }

    ctx->pc = 0x10f7b0u;

    // 0x10f7b0: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x10f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x10f7b4: 0xc  syscall     0
    ctx->pc = 0x10f7b4u;
    ctx->pc = 0x10F7B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f7b8:
    // 0x10f7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7C0u;
label_10f7c0:
    // 0x10f7c0: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x10f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x10f7c4: 0xc  syscall     0
    ctx->pc = 0x10f7c4u;
    ctx->pc = 0x10F7C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f7c8:
    // 0x10f7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7D0u;
}
