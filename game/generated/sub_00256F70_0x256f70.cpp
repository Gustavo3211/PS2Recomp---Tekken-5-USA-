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

// Function: sub_00256F70
// Address: 0x256f70 - 0x256fb0
void sub_00256F70_0x256f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256F70_0x256f70");
#endif

    switch (ctx->pc) {
        case 0x256f80u: goto label_256f80;
        default: break;
    }

    ctx->pc = 0x256f70u;

    // 0x256f70: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x256f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f74: 0x54180  sll         $t0, $a1, 6
    ctx->pc = 0x256f74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x256f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f7c: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x256f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_256f80:
    // 0x256f80: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x256f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x256f84: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x256f88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256f8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x256f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x256f90: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x256f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x256f94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256f98: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x256f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x256f9c: 0x28c50003  slti        $a1, $a2, 0x3
    ctx->pc = 0x256f9cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x256fa0: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x256FA0u;
    {
        const bool branch_taken_0x256fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x256FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FA0u;
        // 0x256fa4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fa0) {
            ctx->pc = 0x256F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256f80;
        }
    }
    ctx->pc = 0x256FA8u;
    // 0x256fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x256FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256FB0u;
}
