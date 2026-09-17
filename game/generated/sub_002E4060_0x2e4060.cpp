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

// Function: sub_002E4060
// Address: 0x2e4060 - 0x2e40a8
void sub_002E4060_0x2e4060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4060_0x2e4060");
#endif

    switch (ctx->pc) {
        case 0x2e4078u: goto label_2e4078;
        default: break;
    }

    ctx->pc = 0x2e4060u;

    // 0x2e4060: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e4060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e4064: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2e4064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2e4068: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x2e4068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
    // 0x2e406c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e406cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4070: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e4070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e4074: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2e4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2e4078:
    // 0x2e4078: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e4078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e407c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e407cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e4080: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e4080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e4084: 0x0  nop
    ctx->pc = 0x2e4084u;
    // NOP
    // 0x2e4088: 0x0  nop
    ctx->pc = 0x2e4088u;
    // NOP
    // 0x2e408c: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E408Cu;
    {
        const bool branch_taken_0x2e408c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E408Cu;
        // 0x2e4090: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e408c) {
            ctx->pc = 0x2E4078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4078;
        }
    }
    ctx->pc = 0x2E4094u;
    // 0x2e4094: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e4094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e4098: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x2e4098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x2e409c: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x2e409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
    // 0x2e40a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E40A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40A0u;
        // 0x2e40a4: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E40A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E40A8u;
}
