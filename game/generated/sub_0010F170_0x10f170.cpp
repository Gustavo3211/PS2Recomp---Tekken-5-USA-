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

// Function: sub_0010F170
// Address: 0x10f170 - 0x10f1a0
void sub_0010F170_0x10f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F170_0x10f170");
#endif

    switch (ctx->pc) {
        case 0x10f178u: goto label_10f178;
        case 0x10f188u: goto label_10f188;
        case 0x10f198u: goto label_10f198;
        default: break;
    }

    ctx->pc = 0x10f170u;

    // 0x10f170: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x10f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x10f174: 0xc  syscall     0
    ctx->pc = 0x10f174u;
    ctx->pc = 0x10F178u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f178:
    // 0x10f178: 0x3e00008  jr          $ra
    ctx->pc = 0x10F178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F180u;
    // 0x10f180: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x10f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x10f184: 0xc  syscall     0
    ctx->pc = 0x10f184u;
    ctx->pc = 0x10F188u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f188:
    // 0x10f188: 0x3e00008  jr          $ra
    ctx->pc = 0x10F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F190u;
    // 0x10f190: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x10f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x10f194: 0xc  syscall     0
    ctx->pc = 0x10f194u;
    ctx->pc = 0x10F198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f198:
    // 0x10f198: 0x3e00008  jr          $ra
    ctx->pc = 0x10F198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1A0u;
}
