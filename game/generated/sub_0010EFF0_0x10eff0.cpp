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

// Function: sub_0010EFF0
// Address: 0x10eff0 - 0x10f050
void sub_0010EFF0_0x10eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EFF0_0x10eff0");
#endif

    switch (ctx->pc) {
        case 0x10eff8u: goto label_10eff8;
        case 0x10f008u: goto label_10f008;
        case 0x10f018u: goto label_10f018;
        case 0x10f028u: goto label_10f028;
        case 0x10f038u: goto label_10f038;
        case 0x10f048u: goto label_10f048;
        default: break;
    }

    ctx->pc = 0x10eff0u;

    // 0x10eff0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10eff4: 0xc  syscall     0
    ctx->pc = 0x10eff4u;
    ctx->pc = 0x10EFF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10eff8:
    // 0x10eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F000u;
    // 0x10f000: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10f004: 0xc  syscall     0
    ctx->pc = 0x10f004u;
    ctx->pc = 0x10F008u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f008:
    // 0x10f008: 0x3e00008  jr          $ra
    ctx->pc = 0x10F008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F010u;
    // 0x10f010: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x10f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10f014: 0xc  syscall     0
    ctx->pc = 0x10f014u;
    ctx->pc = 0x10F018u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f018:
    // 0x10f018: 0x3e00008  jr          $ra
    ctx->pc = 0x10F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F020u;
    // 0x10f020: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f024: 0xc  syscall     0
    ctx->pc = 0x10f024u;
    ctx->pc = 0x10F028u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f028:
    // 0x10f028: 0x3e00008  jr          $ra
    ctx->pc = 0x10F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F030u;
    // 0x10f030: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10f034: 0xc  syscall     0
    ctx->pc = 0x10f034u;
    ctx->pc = 0x10F038u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f038:
    // 0x10f038: 0x3e00008  jr          $ra
    ctx->pc = 0x10F038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F040u;
    // 0x10f040: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10f044: 0xc  syscall     0
    ctx->pc = 0x10f044u;
    ctx->pc = 0x10F048u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f048:
    // 0x10f048: 0x3e00008  jr          $ra
    ctx->pc = 0x10F048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F050u;
}
