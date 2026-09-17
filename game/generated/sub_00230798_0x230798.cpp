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

// Function: sub_00230798
// Address: 0x230798 - 0x2307f0
void sub_00230798_0x230798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230798_0x230798");
#endif

    ctx->pc = 0x230798u;

    // 0x230798: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23079c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2307a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2307a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2307a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2307a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2307a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2307ac: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2307acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2307b0: 0x2421d090  addiu       $at, $at, -0x2F70
    ctx->pc = 0x2307b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955152));
    // 0x2307b4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2307b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2307b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2307b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2307bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2307BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2307C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307BCu;
        // 0x2307c0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2307BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2307C4u;
    // 0x2307c4: 0x0  nop
    ctx->pc = 0x2307c4u;
    // NOP
    // 0x2307c8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2307c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2307cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2307ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2307d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2307d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2307d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2307d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2307d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2307d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2307dc: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2307dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2307e0: 0x2421d060  addiu       $at, $at, -0x2FA0
    ctx->pc = 0x2307e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955104));
    // 0x2307e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2307E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2307E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307E4u;
        // 0x2307e8: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2307E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2307ECu;
    // 0x2307ec: 0x0  nop
    ctx->pc = 0x2307ecu;
    // NOP
    ctx->pc = 0x2307f0u;
}
