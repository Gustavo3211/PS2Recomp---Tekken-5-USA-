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

// Function: sub_003450F0
// Address: 0x3450f0 - 0x345128
void sub_003450F0_0x3450f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003450F0_0x3450f0");
#endif

    switch (ctx->pc) {
        case 0x345100u: goto label_345100;
        default: break;
    }

    ctx->pc = 0x3450f0u;

    // 0x3450f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3450f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3450f4: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x3450f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3450f8: 0xa0820047  sb          $v0, 0x47($a0)
    ctx->pc = 0x3450f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x3450fc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x3450fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_345100:
    // 0x345100: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x345100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345104: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x345104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x345108: 0x0  nop
    ctx->pc = 0x345108u;
    // NOP
    // 0x34510c: 0x0  nop
    ctx->pc = 0x34510cu;
    // NOP
    // 0x345110: 0x0  nop
    ctx->pc = 0x345110u;
    // NOP
    // 0x345114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x345114u;
    {
        const bool branch_taken_0x345114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345114u;
        // 0x345118: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345114) {
            ctx->pc = 0x345100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345100;
        }
    }
    ctx->pc = 0x34511Cu;
    // 0x34511c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x345120: 0x3e00008  jr          $ra
    ctx->pc = 0x345120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345120u;
        // 0x345124: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345128u;
}
