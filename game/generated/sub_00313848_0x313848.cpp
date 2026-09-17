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

// Function: sub_00313848
// Address: 0x313848 - 0x313898
void sub_00313848_0x313848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313848_0x313848");
#endif

    ctx->pc = 0x313848u;

    // 0x313848: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x313848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x31384c: 0x24478110  addiu       $a3, $v0, -0x7EF0
    ctx->pc = 0x31384cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x313850: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x313850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1B814Cu));
    // 0x313854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313858: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x313858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31385c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31385Cu;
    {
        const bool branch_taken_0x31385c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x313860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31385Cu;
        // 0x313860: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31385c) {
            ctx->pc = 0x31386Cu;
            goto label_31386c;
        }
    }
    ctx->pc = 0x313864u;
    // 0x313864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313868: 0x2785c578  addiu       $a1, $gp, -0x3A88
    ctx->pc = 0x313868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952312));
label_31386c:
    // 0x31386c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31386cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x313870: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x313870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x313874: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x313878: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31387c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313880: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x313880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x313884: 0x8ce40048  lw          $a0, 0x48($a3)
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x313888: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31388c: 0x3e00008  jr          $ra
    ctx->pc = 0x31388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31388Cu;
        // 0x313890: 0xac46000c  sw          $a2, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313894u;
    // 0x313894: 0x0  nop
    ctx->pc = 0x313894u;
    // NOP
    ctx->pc = 0x313898u;
}
