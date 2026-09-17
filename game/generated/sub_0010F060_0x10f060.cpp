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

// Function: sub_0010F060
// Address: 0x10f060 - 0x10f080
void sub_0010F060_0x10f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F060_0x10f060");
#endif

    switch (ctx->pc) {
        case 0x10f068u: goto label_10f068;
        case 0x10f078u: goto label_10f078;
        default: break;
    }

    ctx->pc = 0x10f060u;

    // 0x10f060: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x10f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10f064: 0xc  syscall     0
    ctx->pc = 0x10f064u;
    ctx->pc = 0x10F068u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f068:
    // 0x10f068: 0x3e00008  jr          $ra
    ctx->pc = 0x10F068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F070u;
    // 0x10f070: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10f074: 0xc  syscall     0
    ctx->pc = 0x10f074u;
    ctx->pc = 0x10F078u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f078:
    // 0x10f078: 0x3e00008  jr          $ra
    ctx->pc = 0x10F078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F080u;
}
