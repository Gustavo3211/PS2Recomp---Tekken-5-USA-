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

// Function: sub_0010F2E0
// Address: 0x10f2e0 - 0x10f310
void sub_0010F2E0_0x10f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F2E0_0x10f2e0");
#endif

    switch (ctx->pc) {
        case 0x10f2e8u: goto label_10f2e8;
        case 0x10f2f8u: goto label_10f2f8;
        case 0x10f308u: goto label_10f308;
        default: break;
    }

    ctx->pc = 0x10f2e0u;

    // 0x10f2e0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x10f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x10f2e4: 0xc  syscall     0
    ctx->pc = 0x10f2e4u;
    ctx->pc = 0x10F2E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f2e8:
    // 0x10f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F2F0u;
    // 0x10f2f0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x10f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10f2f4: 0xc  syscall     0
    ctx->pc = 0x10f2f4u;
    ctx->pc = 0x10F2F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f2f8:
    // 0x10f2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F300u;
    // 0x10f300: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x10f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x10f304: 0xc  syscall     0
    ctx->pc = 0x10f304u;
    ctx->pc = 0x10F308u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f308:
    // 0x10f308: 0x3e00008  jr          $ra
    ctx->pc = 0x10F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F310u;
}
