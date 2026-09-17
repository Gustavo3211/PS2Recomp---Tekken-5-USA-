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

// Function: sub_0010F440
// Address: 0x10f440 - 0x10f450
void sub_0010F440_0x10f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F440_0x10f440");
#endif

    switch (ctx->pc) {
        case 0x10f448u: goto label_10f448;
        default: break;
    }

    ctx->pc = 0x10f440u;

    // 0x10f440: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x10f440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10f444: 0xc  syscall     0
    ctx->pc = 0x10f444u;
    ctx->pc = 0x10F448u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f448:
    // 0x10f448: 0x3e00008  jr          $ra
    ctx->pc = 0x10F448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F450u;
}
