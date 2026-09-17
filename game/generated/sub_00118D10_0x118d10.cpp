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

// Function: sub_00118D10
// Address: 0x118d10 - 0x118d20
void sub_00118D10_0x118d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D10_0x118d10");
#endif

    switch (ctx->pc) {
        case 0x118d18u: goto label_118d18;
        default: break;
    }

    ctx->pc = 0x118d10u;

    // 0x118d10: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x118d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x118d14: 0xc  syscall     0
    ctx->pc = 0x118d14u;
    ctx->pc = 0x118D18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_118d18:
    // 0x118d18: 0x3e00008  jr          $ra
    ctx->pc = 0x118D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D20u;
}
