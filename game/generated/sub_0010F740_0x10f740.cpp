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

// Function: sub_0010F740
// Address: 0x10f740 - 0x10f760
void sub_0010F740_0x10f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F740_0x10f740");
#endif

    switch (ctx->pc) {
        case 0x10f748u: goto label_10f748;
        case 0x10f758u: goto label_10f758;
        default: break;
    }

    ctx->pc = 0x10f740u;

    // 0x10f740: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x10f740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10f744: 0xc  syscall     0
    ctx->pc = 0x10f744u;
    ctx->pc = 0x10F748u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f748:
    // 0x10f748: 0x3e00008  jr          $ra
    ctx->pc = 0x10F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F750u;
    // 0x10f750: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x10f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x10f754: 0xc  syscall     0
    ctx->pc = 0x10f754u;
    ctx->pc = 0x10F758u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f758:
    // 0x10f758: 0x3e00008  jr          $ra
    ctx->pc = 0x10F758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F760u;
}
