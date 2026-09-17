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

// Function: sub_00230768
// Address: 0x230768 - 0x230798
void sub_00230768_0x230768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230768_0x230768");
#endif

    ctx->pc = 0x230768u;

    // 0x230768: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x230768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23076c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230774: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x230774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230778: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23077c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x23077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x230780: 0x2421d050  addiu       $at, $at, -0x2FB0
    ctx->pc = 0x230780u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955088));
    // 0x230784: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x230788: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x230788u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23078c: 0x3e00008  jr          $ra
    ctx->pc = 0x23078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23078Cu;
        // 0x230790: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230794u;
    // 0x230794: 0x0  nop
    ctx->pc = 0x230794u;
    // NOP
    ctx->pc = 0x230798u;
}
