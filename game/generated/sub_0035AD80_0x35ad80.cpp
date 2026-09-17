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

// Function: sub_0035AD80
// Address: 0x35ad80 - 0x35adb8
void sub_0035AD80_0x35ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AD80_0x35ad80");
#endif

    switch (ctx->pc) {
        case 0x35ad90u: goto label_35ad90;
        default: break;
    }

    ctx->pc = 0x35ad80u;

    // 0x35ad80: 0xaf84c7bc  sw          $a0, -0x3844($gp)
    ctx->pc = 0x35ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952892), GPR_U32(ctx, 4));
    // 0x35ad84: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35AD84u;
    {
        const bool branch_taken_0x35ad84 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x35AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD84u;
        // 0x35ad88: 0xaf85c7c0  sw          $a1, -0x3840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952896), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad84) {
            ctx->pc = 0x35ADACu;
            goto label_35adac;
        }
    }
    ctx->pc = 0x35AD8Cu;
    // 0x35ad8c: 0x24840104  addiu       $a0, $a0, 0x104
    ctx->pc = 0x35ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
label_35ad90:
    // 0x35ad90: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x35ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x35ad94: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x35ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x35ad98: 0x0  nop
    ctx->pc = 0x35ad98u;
    // NOP
    // 0x35ad9c: 0x0  nop
    ctx->pc = 0x35ad9cu;
    // NOP
    // 0x35ada0: 0x0  nop
    ctx->pc = 0x35ada0u;
    // NOP
    // 0x35ada4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35ADA4u;
    {
        const bool branch_taken_0x35ada4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADA4u;
        // 0x35ada8: 0x24840108  addiu       $a0, $a0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ada4) {
            ctx->pc = 0x35AD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ad90;
        }
    }
    ctx->pc = 0x35ADACu;
label_35adac:
    // 0x35adac: 0x3e00008  jr          $ra
    ctx->pc = 0x35ADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ADB4u;
    // 0x35adb4: 0x0  nop
    ctx->pc = 0x35adb4u;
    // NOP
    ctx->pc = 0x35adb8u;
}
