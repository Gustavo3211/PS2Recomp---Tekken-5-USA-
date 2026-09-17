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

// Function: sub_00230820
// Address: 0x230820 - 0x230860
void sub_00230820_0x230820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230820_0x230820");
#endif

    ctx->pc = 0x230820u;

    // 0x230820: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x230820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x230824: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x230824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23082c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230830: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x230834: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x230838: 0x2421d0a0  addiu       $at, $at, -0x2F60
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955168));
    // 0x23083c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x230840: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x230840u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230844: 0x3e00008  jr          $ra
    ctx->pc = 0x230844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230844u;
        // 0x230848: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23084Cu;
    // 0x23084c: 0x0  nop
    ctx->pc = 0x23084cu;
    // NOP
    // 0x230850: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230854: 0x3e00008  jr          $ra
    ctx->pc = 0x230854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230854u;
        // 0x230858: 0xe44cd0b4  swc1        $f12, -0x2F4C($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23085Cu;
    // 0x23085c: 0x0  nop
    ctx->pc = 0x23085cu;
    // NOP
    ctx->pc = 0x230860u;
}
