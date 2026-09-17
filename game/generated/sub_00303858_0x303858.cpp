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

// Function: sub_00303858
// Address: 0x303858 - 0x303890
void sub_00303858_0x303858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303858_0x303858");
#endif

    ctx->pc = 0x303858u;

    // 0x303858: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x303858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30385c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30385Cu;
    {
        const bool branch_taken_0x30385c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x303860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30385Cu;
        // 0x303860: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30385c) {
            ctx->pc = 0x303878u;
            goto label_303878;
        }
    }
    ctx->pc = 0x303864u;
    // 0x303864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x303864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30386c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x30386cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303870: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x303870u;
    {
        const bool branch_taken_0x303870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303870u;
        // 0x303874: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303870) {
            ctx->pc = 0x30387Cu;
            goto label_30387c;
        }
    }
    ctx->pc = 0x303878u;
label_303878:
    // 0x303878: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x303878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30387c:
    // 0x30387c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30387Cu;
    {
        const bool branch_taken_0x30387c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30387Cu;
        // 0x303880: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30387c) {
            ctx->pc = 0x303888u;
            goto label_303888;
        }
    }
    ctx->pc = 0x303884u;
    // 0x303884: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x303884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_303888:
    // 0x303888: 0x3e00008  jr          $ra
    ctx->pc = 0x303888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303890u;
}
