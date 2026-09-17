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

// Function: sub_002206E0
// Address: 0x2206e0 - 0x2206f0
void sub_002206E0_0x2206e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002206E0_0x2206e0");
#endif

    ctx->pc = 0x2206e0u;

    // 0x2206e0: 0x2782a4c8  addiu       $v0, $gp, -0x5B38
    ctx->pc = 0x2206e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2206e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2206E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2206ECu;
    // 0x2206ec: 0x0  nop
    ctx->pc = 0x2206ecu;
    // NOP
    ctx->pc = 0x2206f0u;
}
