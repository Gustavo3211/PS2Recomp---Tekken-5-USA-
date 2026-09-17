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

// Function: sub_00282BD8
// Address: 0x282bd8 - 0x282c38
void sub_00282BD8_0x282bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282BD8_0x282bd8");
#endif

    ctx->pc = 0x282bd8u;

    // 0x282bd8: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x282bd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x282bdc: 0x8f84ca8c  lw          $a0, -0x3574($gp)
    ctx->pc = 0x282bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282be0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x282be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282be8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282bec: 0x3e00008  jr          $ra
    ctx->pc = 0x282BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BECu;
        // 0x282bf0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282BF4u;
    // 0x282bf4: 0x0  nop
    ctx->pc = 0x282bf4u;
    // NOP
    // 0x282bf8: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x282bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x282bfc: 0x8f84ca8c  lw          $a0, -0x3574($gp)
    ctx->pc = 0x282bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282c00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x282c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282c08: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x282C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C0Cu;
        // 0x282c10: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C14u;
    // 0x282c14: 0x0  nop
    ctx->pc = 0x282c14u;
    // NOP
    // 0x282c18: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x282c18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x282c1c: 0x8f84ca8c  lw          $a0, -0x3574($gp)
    ctx->pc = 0x282c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282c20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x282c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282c28: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x282C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C2Cu;
        // 0x282c30: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C34u;
    // 0x282c34: 0x0  nop
    ctx->pc = 0x282c34u;
    // NOP
    ctx->pc = 0x282c38u;
}
