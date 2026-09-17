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

// Function: sub_0011AF40
// Address: 0x11af40 - 0x11af50
void sub_0011AF40_0x11af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AF40_0x11af40");
#endif

    switch (ctx->pc) {
        case 0x11af48u: goto label_11af48;
        default: break;
    }

    ctx->pc = 0x11af40u;

    // 0x11af40: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x11af44: 0xc  syscall     0
    ctx->pc = 0x11af44u;
    ctx->pc = 0x11AF48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11af48:
    // 0x11af48: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF50u;
}
