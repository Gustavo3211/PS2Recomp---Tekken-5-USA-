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

// Function: sub_0010F140
// Address: 0x10f140 - 0x10f150
void sub_0010F140_0x10f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F140_0x10f140");
#endif

    switch (ctx->pc) {
        case 0x10f148u: goto label_10f148;
        default: break;
    }

    ctx->pc = 0x10f140u;

    // 0x10f140: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x10f140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x10f144: 0xc  syscall     0
    ctx->pc = 0x10f144u;
    ctx->pc = 0x10F148u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f148:
    // 0x10f148: 0x3e00008  jr          $ra
    ctx->pc = 0x10F148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F150u;
}
