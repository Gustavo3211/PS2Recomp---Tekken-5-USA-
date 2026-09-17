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

// Function: sub_0022E1E8
// Address: 0x22e1e8 - 0x22e208
void sub_0022E1E8_0x22e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E1E8_0x22e1e8");
#endif

    ctx->pc = 0x22e1e8u;

    // 0x22e1e8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x22e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22e1ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e1f4: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x22e1f8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x22e1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x22e1fc: 0xac259338  sw          $a1, -0x6CC8($at)
    ctx->pc = 0x22e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939448), GPR_U32(ctx, 5));
    // 0x22e200: 0x3e00008  jr          $ra
    ctx->pc = 0x22E200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E208u;
}
