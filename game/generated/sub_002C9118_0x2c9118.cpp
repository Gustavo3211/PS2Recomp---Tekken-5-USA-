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

// Function: sub_002C9118
// Address: 0x2c9118 - 0x2c9138
void sub_002C9118_0x2c9118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9118_0x2c9118");
#endif

    ctx->pc = 0x2c9118u;

    // 0x2c9118: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c911c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c9120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9124: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c9124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c9128: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2c9128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c912c: 0xac208dd8  sw          $zero, -0x7228($at)
    ctx->pc = 0x2c912cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938072), GPR_U32(ctx, 0));
    // 0x2c9130: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9138u;
}
