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

// Function: sub_004F9048
// Address: 0x4f9048 - 0x4f9088
void sub_004F9048_0x4f9048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9048_0x4f9048");
#endif

    switch (ctx->pc) {
        case 0x4f9060u: goto label_4f9060;
        default: break;
    }

    ctx->pc = 0x4f9048u;

    // 0x4f9048: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x4f9048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f904c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9050: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f9054: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F9054u;
    {
        const bool branch_taken_0x4f9054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f9054) {
            ctx->pc = 0x4F907Cu;
            goto label_4f907c;
        }
    }
    ctx->pc = 0x4F905Cu;
    // 0x4f905c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4f905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f9060:
    // 0x4f9060: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x4f9060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x4f9064: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4f9064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4f9068: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f906c: 0x0  nop
    ctx->pc = 0x4f906cu;
    // NOP
    // 0x4f9070: 0x0  nop
    ctx->pc = 0x4f9070u;
    // NOP
    // 0x4f9074: 0x1486fffa  bne         $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4F9074u;
    {
        const bool branch_taken_0x4f9074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4F9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9074u;
        // 0x4f9078: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9074) {
            ctx->pc = 0x4F9060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9060;
        }
    }
    ctx->pc = 0x4F907Cu;
label_4f907c:
    // 0x4f907c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F907Cu;
        // 0x4f9080: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9084u;
    // 0x4f9084: 0x0  nop
    ctx->pc = 0x4f9084u;
    // NOP
    ctx->pc = 0x4f9088u;
}
