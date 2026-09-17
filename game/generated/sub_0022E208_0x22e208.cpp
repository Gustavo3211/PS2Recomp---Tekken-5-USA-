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

// Function: sub_0022E208
// Address: 0x22e208 - 0x22e230
void sub_0022E208_0x22e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E208_0x22e208");
#endif

    ctx->pc = 0x22e208u;

    // 0x22e208: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x22e208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22e20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e210: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e218: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x22e21c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x22e21cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x22e220: 0xac239340  sw          $v1, -0x6CC0($at)
    ctx->pc = 0x22e220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939456), GPR_U32(ctx, 3));
    // 0x22e224: 0x3e00008  jr          $ra
    ctx->pc = 0x22E224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E22Cu;
    // 0x22e22c: 0x0  nop
    ctx->pc = 0x22e22cu;
    // NOP
    ctx->pc = 0x22e230u;
}
