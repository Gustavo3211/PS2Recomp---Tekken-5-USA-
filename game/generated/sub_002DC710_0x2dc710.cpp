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

// Function: sub_002DC710
// Address: 0x2dc710 - 0x2dc750
void sub_002DC710_0x2dc710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC710_0x2dc710");
#endif

    switch (ctx->pc) {
        case 0x2dc728u: goto label_2dc728;
        default: break;
    }

    ctx->pc = 0x2dc710u;

    // 0x2dc710: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2dc710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dc714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc718: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2dc718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2dc71c: 0x242188d0  addiu       $at, $at, -0x7730
    ctx->pc = 0x2dc71cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936784));
    // 0x2dc720: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2dc720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2dc724: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2dc724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dc728:
    // 0x2dc728: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dc728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc72c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2dc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2dc730: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc734: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2dc734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc738: 0x0  nop
    ctx->pc = 0x2dc738u;
    // NOP
    // 0x2dc73c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DC73Cu;
    {
        const bool branch_taken_0x2dc73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC73Cu;
        // 0x2dc740: 0xa04608b7  sb          $a2, 0x8B7($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2231), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc73c) {
            ctx->pc = 0x2DC728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc728;
        }
    }
    ctx->pc = 0x2DC744u;
    // 0x2dc744: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC74Cu;
    // 0x2dc74c: 0x0  nop
    ctx->pc = 0x2dc74cu;
    // NOP
    ctx->pc = 0x2dc750u;
}
