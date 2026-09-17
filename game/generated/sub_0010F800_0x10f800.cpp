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

// Function: sub_0010F800
// Address: 0x10f800 - 0x10f810
void sub_0010F800_0x10f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F800_0x10f800");
#endif

    switch (ctx->pc) {
        case 0x10f808u: goto label_10f808;
        default: break;
    }

    ctx->pc = 0x10f800u;

    // 0x10f800: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x10f804: 0xc  syscall     0
    ctx->pc = 0x10f804u;
    ctx->pc = 0x10F808u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f808:
    // 0x10f808: 0x3e00008  jr          $ra
    ctx->pc = 0x10F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F810u;
}
