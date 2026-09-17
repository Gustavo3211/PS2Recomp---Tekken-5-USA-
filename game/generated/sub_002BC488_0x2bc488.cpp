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

// Function: sub_002BC488
// Address: 0x2bc488 - 0x2bc4a8
void sub_002BC488_0x2bc488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC488_0x2bc488");
#endif

    ctx->pc = 0x2bc488u;

    // 0x2bc488: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x2bc488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2bc48c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2bc48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bc490: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2bc490u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2bc494: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bc494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bc498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc49c: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x2bc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2bc4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC4A8u;
}
