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

// Function: sub_002495A0
// Address: 0x2495a0 - 0x2495f8
void sub_002495A0_0x2495a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002495A0_0x2495a0");
#endif

    switch (ctx->pc) {
        case 0x2495c4u: goto label_2495c4;
        default: break;
    }

    ctx->pc = 0x2495a0u;

    // 0x2495a0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x2495a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x2495a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2495a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495a8: 0x24c372b0  addiu       $v1, $a2, 0x72B0
    ctx->pc = 0x2495a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29360));
    // 0x2495ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2495acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1672B4u));
    // 0x2495b0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2495B0u;
    {
        const bool branch_taken_0x2495b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2495B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495B0u;
        // 0x2495b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495b0) {
            ctx->pc = 0x2495C0u;
            goto label_2495c0;
        }
    }
    ctx->pc = 0x2495B8u;
    // 0x2495b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2495B8u;
    {
        const bool branch_taken_0x2495b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495B8u;
        // 0x2495bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495b8) {
            ctx->pc = 0x2495ECu;
            goto label_2495ec;
        }
    }
    ctx->pc = 0x2495C0u;
label_2495c0:
    // 0x2495c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2495c4:
    // 0x2495c4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2495c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2495c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2495C8u;
    {
        const bool branch_taken_0x2495c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495C8u;
        // 0x2495cc: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495c8) {
            ctx->pc = 0x2495ECu;
            goto label_2495ec;
        }
    }
    ctx->pc = 0x2495D0u;
    // 0x2495d0: 0x24c272b0  addiu       $v0, $a2, 0x72B0
    ctx->pc = 0x2495d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29360));
    // 0x2495d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2495d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2495d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2495dc: 0x0  nop
    ctx->pc = 0x2495dcu;
    // NOP
    // 0x2495e0: 0x5464fff8  bnel        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2495E0u;
    {
        const bool branch_taken_0x2495e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2495e0) {
            ctx->pc = 0x2495E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2495E0u;
            // 0x2495e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2495C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2495c4;
        }
    }
    ctx->pc = 0x2495E8u;
    // 0x2495e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2495e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2495ec:
    // 0x2495ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2495ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2495F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495ECu;
        // 0x2495f0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2495ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2495F4u;
    // 0x2495f4: 0x0  nop
    ctx->pc = 0x2495f4u;
    // NOP
    ctx->pc = 0x2495f8u;
}
