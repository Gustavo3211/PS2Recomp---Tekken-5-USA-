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

// Function: sub_0010F320
// Address: 0x10f320 - 0x10f380
void sub_0010F320_0x10f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F320_0x10f320");
#endif

    switch (ctx->pc) {
        case 0x10f328u: goto label_10f328;
        case 0x10f338u: goto label_10f338;
        case 0x10f348u: goto label_10f348;
        case 0x10f358u: goto label_10f358;
        case 0x10f368u: goto label_10f368;
        case 0x10f378u: goto label_10f378;
        default: break;
    }

    ctx->pc = 0x10f320u;

    // 0x10f320: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x10f320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x10f324: 0xc  syscall     0
    ctx->pc = 0x10f324u;
    ctx->pc = 0x10F328u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f328:
    // 0x10f328: 0x3e00008  jr          $ra
    ctx->pc = 0x10F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F330u;
    // 0x10f330: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x10f334: 0xc  syscall     0
    ctx->pc = 0x10f334u;
    ctx->pc = 0x10F338u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f338:
    // 0x10f338: 0x3e00008  jr          $ra
    ctx->pc = 0x10F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F340u;
    // 0x10f340: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x10f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x10f344: 0xc  syscall     0
    ctx->pc = 0x10f344u;
    ctx->pc = 0x10F348u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f348:
    // 0x10f348: 0x3e00008  jr          $ra
    ctx->pc = 0x10F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F350u;
    // 0x10f350: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x10f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x10f354: 0xc  syscall     0
    ctx->pc = 0x10f354u;
    ctx->pc = 0x10F358u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f358:
    // 0x10f358: 0x3e00008  jr          $ra
    ctx->pc = 0x10F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F360u;
    // 0x10f360: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x10f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x10f364: 0xc  syscall     0
    ctx->pc = 0x10f364u;
    ctx->pc = 0x10F368u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f368:
    // 0x10f368: 0x3e00008  jr          $ra
    ctx->pc = 0x10F368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F370u;
    // 0x10f370: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x10f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x10f374: 0xc  syscall     0
    ctx->pc = 0x10f374u;
    ctx->pc = 0x10F378u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f378:
    // 0x10f378: 0x3e00008  jr          $ra
    ctx->pc = 0x10F378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F380u;
}
