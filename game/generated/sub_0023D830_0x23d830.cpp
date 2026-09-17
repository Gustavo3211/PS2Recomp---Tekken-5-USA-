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

// Function: sub_0023D830
// Address: 0x23d830 - 0x23d868
void sub_0023D830_0x23d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D830_0x23d830");
#endif

    ctx->pc = 0x23d830u;

    // 0x23d830: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x23d830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23d834: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23d834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d838: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x23d838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x23d83c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x23d83cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x23d840: 0x8c2488d0  lw          $a0, -0x7730($at)
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936784)));
    // 0x23d844: 0x8c8600c4  lw          $a2, 0xC4($a0)
    ctx->pc = 0x23d844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x23d848: 0x90c30040  lbu         $v1, 0x40($a2)
    ctx->pc = 0x23d848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x23d84c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D84Cu;
    {
        const bool branch_taken_0x23d84c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D84Cu;
        // 0x23d850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d84c) {
            ctx->pc = 0x23D860u;
            goto label_23d860;
        }
    }
    ctx->pc = 0x23D854u;
    // 0x23d854: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x23d854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x23d858: 0x94c20044  lhu         $v0, 0x44($a2)
    ctx->pc = 0x23d858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x23d85c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23d85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23d860:
    // 0x23d860: 0x3e00008  jr          $ra
    ctx->pc = 0x23D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D868u;
}
