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

// Function: sub_00102E88
// Address: 0x102e88 - 0x102e98
void sub_00102E88_0x102e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102E88_0x102e88");
#endif

    switch (ctx->pc) {
        case 0x102e90u: goto label_102e90;
        default: break;
    }

    ctx->pc = 0x102e88u;

    // 0x102e88: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x102e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x102e8c: 0xc  syscall     0
    ctx->pc = 0x102e8cu;
    ctx->pc = 0x102E90u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_102e90:
    // 0x102e90: 0x3e00008  jr          $ra
    ctx->pc = 0x102E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102E98u;
}
