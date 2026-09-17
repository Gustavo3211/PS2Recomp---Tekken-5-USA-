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

// Function: sub_0010F250
// Address: 0x10f250 - 0x10f290
void sub_0010F250_0x10f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F250_0x10f250");
#endif

    switch (ctx->pc) {
        case 0x10f258u: goto label_10f258;
        case 0x10f268u: goto label_10f268;
        case 0x10f278u: goto label_10f278;
        case 0x10f288u: goto label_10f288;
        default: break;
    }

    ctx->pc = 0x10f250u;

    // 0x10f250: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x10f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x10f254: 0xc  syscall     0
    ctx->pc = 0x10f254u;
    ctx->pc = 0x10F258u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f258:
    // 0x10f258: 0x3e00008  jr          $ra
    ctx->pc = 0x10F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F260u;
    // 0x10f260: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x10f260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x10f264: 0xc  syscall     0
    ctx->pc = 0x10f264u;
    ctx->pc = 0x10F268u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f268:
    // 0x10f268: 0x3e00008  jr          $ra
    ctx->pc = 0x10F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F270u;
    // 0x10f270: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x10f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x10f274: 0xc  syscall     0
    ctx->pc = 0x10f274u;
    ctx->pc = 0x10F278u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f278:
    // 0x10f278: 0x3e00008  jr          $ra
    ctx->pc = 0x10F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F280u;
    // 0x10f280: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x10f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x10f284: 0xc  syscall     0
    ctx->pc = 0x10f284u;
    ctx->pc = 0x10F288u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f288:
    // 0x10f288: 0x3e00008  jr          $ra
    ctx->pc = 0x10F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F290u;
}
