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

// Function: sub_0010F780
// Address: 0x10f780 - 0x10f790
void sub_0010F780_0x10f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F780_0x10f780");
#endif

    switch (ctx->pc) {
        case 0x10f788u: goto label_10f788;
        default: break;
    }

    ctx->pc = 0x10f780u;

    // 0x10f780: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x10f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x10f784: 0xc  syscall     0
    ctx->pc = 0x10f784u;
    ctx->pc = 0x10F788u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f788:
    // 0x10f788: 0x3e00008  jr          $ra
    ctx->pc = 0x10F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F790u;
}
