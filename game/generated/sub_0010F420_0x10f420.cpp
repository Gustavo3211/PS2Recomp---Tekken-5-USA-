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

// Function: sub_0010F420
// Address: 0x10f420 - 0x10f440
void sub_0010F420_0x10f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F420_0x10f420");
#endif

    switch (ctx->pc) {
        case 0x10f428u: goto label_10f428;
        case 0x10f438u: goto label_10f438;
        default: break;
    }

    ctx->pc = 0x10f420u;

    // 0x10f420: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x10f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x10f424: 0xc  syscall     0
    ctx->pc = 0x10f424u;
    ctx->pc = 0x10F428u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f428:
    // 0x10f428: 0x3e00008  jr          $ra
    ctx->pc = 0x10F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F430u;
    // 0x10f430: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x10f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x10f434: 0xc  syscall     0
    ctx->pc = 0x10f434u;
    ctx->pc = 0x10F438u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f438:
    // 0x10f438: 0x3e00008  jr          $ra
    ctx->pc = 0x10F438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F440u;
}
