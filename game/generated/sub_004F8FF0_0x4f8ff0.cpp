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

// Function: sub_004F8FF0
// Address: 0x4f8ff0 - 0x4f9048
void sub_004F8FF0_0x4f8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8FF0_0x4f8ff0");
#endif

    switch (ctx->pc) {
        case 0x4f9010u: goto label_4f9010;
        default: break;
    }

    ctx->pc = 0x4f8ff0u;

    // 0x4f8ff0: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x4f8ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f8ff4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f8ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f8ff8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f8ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9000: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F9000u;
    {
        const bool branch_taken_0x4f9000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9000u;
        // 0x4f9004: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9000) {
            ctx->pc = 0x4F903Cu;
            goto label_4f903c;
        }
    }
    ctx->pc = 0x4F9008u;
    // 0x4f9008: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4f9008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f900c: 0x0  nop
    ctx->pc = 0x4f900cu;
    // NOP
label_4f9010:
    // 0x4f9010: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4f9010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4f9014: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x4f9014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x4f9018: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F9018u;
    {
        const bool branch_taken_0x4f9018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9018u;
        // 0x4f901c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9018) {
            ctx->pc = 0x4F9028u;
            goto label_4f9028;
        }
    }
    ctx->pc = 0x4F9020u;
    // 0x4f9020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4F9020u;
    {
        const bool branch_taken_0x4f9020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9020u;
        // 0x4f9024: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9020) {
            ctx->pc = 0x4F902Cu;
            goto label_4f902c;
        }
    }
    ctx->pc = 0x4F9028u;
label_4f9028:
    // 0x4f9028: 0x51440  sll         $v0, $a1, 17
    ctx->pc = 0x4f9028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
label_4f902c:
    // 0x4f902c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f902cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9030: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f9034: 0x1486fff6  bne         $a0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x4F9034u;
    {
        const bool branch_taken_0x4f9034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4F9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9034u;
        // 0x4f9038: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9034) {
            ctx->pc = 0x4F9010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9010;
        }
    }
    ctx->pc = 0x4F903Cu;
label_4f903c:
    // 0x4f903c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F903Cu;
        // 0x4f9040: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9044u;
    // 0x4f9044: 0x0  nop
    ctx->pc = 0x4f9044u;
    // NOP
    ctx->pc = 0x4f9048u;
}
