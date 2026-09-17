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

// Function: sub_002E3FF0
// Address: 0x2e3ff0 - 0x2e4040
void sub_002E3FF0_0x2e3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3FF0_0x2e3ff0");
#endif

    switch (ctx->pc) {
        case 0x2e4018u: goto label_2e4018;
        default: break;
    }

    ctx->pc = 0x2e3ff0u;

    // 0x2e3ff0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e3ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e3ff4: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E3FF4u;
    {
        const bool branch_taken_0x2e3ff4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3ff4) {
            ctx->pc = 0x2E4034u;
            goto label_2e4034;
        }
    }
    ctx->pc = 0x2E3FFCu;
    // 0x2e3ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4000: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E4000u;
    {
        const bool branch_taken_0x2e4000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4000) {
            ctx->pc = 0x2E4034u;
            goto label_2e4034;
        }
    }
    ctx->pc = 0x2E4008u;
    // 0x2e4008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e400c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4010: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4014: 0x0  nop
    ctx->pc = 0x2e4014u;
    // NOP
label_2e4018:
    // 0x2e4018: 0x0  nop
    ctx->pc = 0x2e4018u;
    // NOP
    // 0x2e401c: 0x0  nop
    ctx->pc = 0x2e401cu;
    // NOP
    // 0x2e4020: 0x0  nop
    ctx->pc = 0x2e4020u;
    // NOP
    // 0x2e4024: 0x0  nop
    ctx->pc = 0x2e4024u;
    // NOP
    // 0x2e4028: 0x0  nop
    ctx->pc = 0x2e4028u;
    // NOP
    // 0x2e402c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E402Cu;
    {
        const bool branch_taken_0x2e402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e402c) {
            ctx->pc = 0x2E4030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E402Cu;
            // 0x2e4030: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4018;
        }
    }
    ctx->pc = 0x2E4034u;
label_2e4034:
    // 0x2e4034: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E403Cu;
    // 0x2e403c: 0x0  nop
    ctx->pc = 0x2e403cu;
    // NOP
    ctx->pc = 0x2e4040u;
}
