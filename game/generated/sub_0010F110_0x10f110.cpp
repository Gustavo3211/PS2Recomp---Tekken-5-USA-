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

// Function: sub_0010F110
// Address: 0x10f110 - 0x10f140
void sub_0010F110_0x10f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F110_0x10f110");
#endif

    switch (ctx->pc) {
        case 0x10f118u: goto label_10f118;
        case 0x10f128u: goto label_10f128;
        case 0x10f138u: goto label_10f138;
        default: break;
    }

    ctx->pc = 0x10f110u;

    // 0x10f110: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x10f110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10f114: 0xc  syscall     0
    ctx->pc = 0x10f114u;
    ctx->pc = 0x10F118u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f118:
    // 0x10f118: 0x3e00008  jr          $ra
    ctx->pc = 0x10F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F120u;
    // 0x10f120: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x10f120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x10f124: 0xc  syscall     0
    ctx->pc = 0x10f124u;
    ctx->pc = 0x10F128u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f128:
    // 0x10f128: 0x3e00008  jr          $ra
    ctx->pc = 0x10F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F130u;
    // 0x10f130: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x10f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x10f134: 0xc  syscall     0
    ctx->pc = 0x10f134u;
    ctx->pc = 0x10F138u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f138:
    // 0x10f138: 0x3e00008  jr          $ra
    ctx->pc = 0x10F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F140u;
}
