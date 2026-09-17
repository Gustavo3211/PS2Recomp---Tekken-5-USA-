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

// Function: sub_002FD020
// Address: 0x2fd020 - 0x2fd078
void sub_002FD020_0x2fd020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD020_0x2fd020");
#endif

    switch (ctx->pc) {
        case 0x2fd028u: goto label_2fd028;
        default: break;
    }

    ctx->pc = 0x2fd020u;

    // 0x2fd020: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2fd020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd024: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x2fd024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_2fd028:
    // 0x2fd028: 0xa8182a  slt         $v1, $a1, $t0
    ctx->pc = 0x2fd028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2fd02c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FD02Cu;
    {
        const bool branch_taken_0x2fd02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD02Cu;
        // 0x2fd030: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd02c) {
            ctx->pc = 0x2FD070u;
            goto label_2fd070;
        }
    }
    ctx->pc = 0x2FD034u;
    // 0x2fd034: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2fd034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2fd038: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x2fd038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd03c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fd040: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2fd040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2fd044: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2fd044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2fd048: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2fd048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd04c: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD04Cu;
    {
        const bool branch_taken_0x2fd04c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2FD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD04Cu;
        // 0x2fd050: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd04c) {
            ctx->pc = 0x2FD070u;
            goto label_2fd070;
        }
    }
    ctx->pc = 0x2FD054u;
    // 0x2fd054: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fd054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fd058: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2fd058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd05c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2fd05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2fd060: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2fd060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2fd064: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x2fd064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2fd068: 0x460ffef  bltz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2FD068u;
    {
        const bool branch_taken_0x2fd068 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2FD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD068u;
        // 0x2fd06c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd068) {
            ctx->pc = 0x2FD028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd028;
        }
    }
    ctx->pc = 0x2FD070u;
label_2fd070:
    // 0x2fd070: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD078u;
}
