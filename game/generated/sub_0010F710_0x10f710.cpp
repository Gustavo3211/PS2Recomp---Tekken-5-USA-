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

// Function: sub_0010F710
// Address: 0x10f710 - 0x10f740
void sub_0010F710_0x10f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F710_0x10f710");
#endif

    switch (ctx->pc) {
        case 0x10f718u: goto label_10f718;
        case 0x10f728u: goto label_10f728;
        case 0x10f738u: goto label_10f738;
        default: break;
    }

    ctx->pc = 0x10f710u;

    // 0x10f710: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x10f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x10f714: 0xc  syscall     0
    ctx->pc = 0x10f714u;
    ctx->pc = 0x10F718u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f718:
    // 0x10f718: 0x3e00008  jr          $ra
    ctx->pc = 0x10F718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F720u;
    // 0x10f720: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x10f720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x10f724: 0xc  syscall     0
    ctx->pc = 0x10f724u;
    ctx->pc = 0x10F728u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f728:
    // 0x10f728: 0x3e00008  jr          $ra
    ctx->pc = 0x10F728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F730u;
    // 0x10f730: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x10f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x10f734: 0xc  syscall     0
    ctx->pc = 0x10f734u;
    ctx->pc = 0x10F738u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f738:
    // 0x10f738: 0x3e00008  jr          $ra
    ctx->pc = 0x10F738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F740u;
}
