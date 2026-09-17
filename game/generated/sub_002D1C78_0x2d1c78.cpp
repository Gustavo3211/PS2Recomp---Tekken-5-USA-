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

// Function: sub_002D1C78
// Address: 0x2d1c78 - 0x2d1ca0
void sub_002D1C78_0x2d1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C78_0x2d1c78");
#endif

    ctx->pc = 0x2d1c78u;

    // 0x2d1c78: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d1c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1c80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d1c84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d1c88: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2d1c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2d1c8c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2d1c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2d1c90: 0xac23b688  sw          $v1, -0x4978($at)
    ctx->pc = 0x2d1c90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948488), GPR_U32(ctx, 3));
    // 0x2d1c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C9Cu;
    // 0x2d1c9c: 0x0  nop
    ctx->pc = 0x2d1c9cu;
    // NOP
    ctx->pc = 0x2d1ca0u;
}
