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

// Function: sub_0021BE20
// Address: 0x21be20 - 0x21be38
void sub_0021BE20_0x21be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BE20_0x21be20");
#endif

    ctx->pc = 0x21be20u;

    // 0x21be20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x21be20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21be24: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x21be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x21be28: 0x8442c938  lh          $v0, -0x36C8($v0)
    ctx->pc = 0x21be28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953272)));
    // 0x21be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE34u;
    // 0x21be34: 0x0  nop
    ctx->pc = 0x21be34u;
    // NOP
    ctx->pc = 0x21be38u;
}
