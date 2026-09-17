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

// Function: sub_00119130
// Address: 0x119130 - 0x119140
void sub_00119130_0x119130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119130_0x119130");
#endif

    switch (ctx->pc) {
        case 0x119138u: goto label_119138;
        default: break;
    }

    ctx->pc = 0x119130u;

    // 0x119130: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x119134: 0xc  syscall     0
    ctx->pc = 0x119134u;
    ctx->pc = 0x119138u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_119138:
    // 0x119138: 0x3e00008  jr          $ra
    ctx->pc = 0x119138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119140u;
}
