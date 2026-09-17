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

// Function: sub_00225C30
// Address: 0x225c30 - 0x225c50
void sub_00225C30_0x225c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C30_0x225c30");
#endif

    ctx->pc = 0x225c30u;

    // 0x225c30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x225c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225c34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225c38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225c3c: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x225c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x225c40: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x225c40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x225c44: 0xa42561b2  sh          $a1, 0x61B2($at)
    ctx->pc = 0x225c44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25010), (uint16_t)GPR_U32(ctx, 5));
    // 0x225c48: 0x3e00008  jr          $ra
    ctx->pc = 0x225C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C50u;
}
