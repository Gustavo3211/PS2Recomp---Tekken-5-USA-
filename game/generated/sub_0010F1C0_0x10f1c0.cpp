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

// Function: sub_0010F1C0
// Address: 0x10f1c0 - 0x10f1e0
void sub_0010F1C0_0x10f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1C0_0x10f1c0");
#endif

    switch (ctx->pc) {
        case 0x10f1c8u: goto label_10f1c8;
        case 0x10f1d8u: goto label_10f1d8;
        default: break;
    }

    ctx->pc = 0x10f1c0u;

    // 0x10f1c0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x10f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10f1c4: 0xc  syscall     0
    ctx->pc = 0x10f1c4u;
    ctx->pc = 0x10F1C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f1c8:
    // 0x10f1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1D0u;
    // 0x10f1d0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x10f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x10f1d4: 0xc  syscall     0
    ctx->pc = 0x10f1d4u;
    ctx->pc = 0x10F1D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f1d8:
    // 0x10f1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1E0u;
}
