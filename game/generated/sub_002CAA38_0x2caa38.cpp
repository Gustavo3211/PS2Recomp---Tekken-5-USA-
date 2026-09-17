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

// Function: sub_002CAA38
// Address: 0x2caa38 - 0x2caa50
void sub_002CAA38_0x2caa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA38_0x2caa38");
#endif

    ctx->pc = 0x2caa38u;

    // 0x2caa38: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x2caa38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2caa3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2caa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2caa40: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x2caa40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2caa44: 0xac20bb48  sw          $zero, -0x44B8($at)
    ctx->pc = 0x2caa44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949704), GPR_U32(ctx, 0));
    // 0x2caa48: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA50u;
}
