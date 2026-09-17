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

// Function: sub_0010F380
// Address: 0x10f380 - 0x10f3a0
void sub_0010F380_0x10f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F380_0x10f380");
#endif

    switch (ctx->pc) {
        case 0x10f388u: goto label_10f388;
        case 0x10f398u: goto label_10f398;
        default: break;
    }

    ctx->pc = 0x10f380u;

    // 0x10f380: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x10f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x10f384: 0xc  syscall     0
    ctx->pc = 0x10f384u;
    ctx->pc = 0x10F388u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f388:
    // 0x10f388: 0x3e00008  jr          $ra
    ctx->pc = 0x10F388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F390u;
    // 0x10f390: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x10f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10f394: 0xc  syscall     0
    ctx->pc = 0x10f394u;
    ctx->pc = 0x10F398u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f398:
    // 0x10f398: 0x3e00008  jr          $ra
    ctx->pc = 0x10F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3A0u;
}
