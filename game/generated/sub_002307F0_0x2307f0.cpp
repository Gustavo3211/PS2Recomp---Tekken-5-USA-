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

// Function: sub_002307F0
// Address: 0x2307f0 - 0x230820
void sub_002307F0_0x2307f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002307F0_0x2307f0");
#endif

    ctx->pc = 0x2307f0u;

    // 0x2307f0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2307f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2307f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2307f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2307fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2307fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230800: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x230804: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x230808: 0x2421d060  addiu       $at, $at, -0x2FA0
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955104));
    // 0x23080c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x230810: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x230810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230814: 0x3e00008  jr          $ra
    ctx->pc = 0x230814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230814u;
        // 0x230818: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23081Cu;
    // 0x23081c: 0x0  nop
    ctx->pc = 0x23081cu;
    // NOP
    ctx->pc = 0x230820u;
}
