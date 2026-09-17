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

// Function: sub_002C8CF0
// Address: 0x2c8cf0 - 0x2c8d10
void sub_002C8CF0_0x2c8cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8CF0_0x2c8cf0");
#endif

    ctx->pc = 0x2c8cf0u;

    // 0x2c8cf0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c8cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8cf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8cfc: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c8d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8d04: 0x8c428ddc  lw          $v0, -0x7224($v0)
    ctx->pc = 0x2c8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938076)));
    // 0x2c8d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8D10u;
}
