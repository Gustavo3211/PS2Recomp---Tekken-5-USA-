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

// Function: sub_00247840
// Address: 0x247840 - 0x247880
void sub_00247840_0x247840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247840_0x247840");
#endif

    ctx->pc = 0x247840u;

    // 0x247840: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x247840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x247844: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x247848: 0x24a56f50  addiu       $a1, $a1, 0x6F50
    ctx->pc = 0x247848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28496));
    // 0x24784c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x24784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x247850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247854: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x247854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x247858: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24785c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x24785cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x247860: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x247860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x247864: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x247864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x247868: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x247868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x24786c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247870: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x247870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x247874: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x247878: 0x3e00008  jr          $ra
    ctx->pc = 0x247878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247878u;
        // 0x24787c: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247880u;
}
