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

// Function: sub_00225988
// Address: 0x225988 - 0x2259e8
void sub_00225988_0x225988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225988_0x225988");
#endif

    switch (ctx->pc) {
        case 0x2259a0u: goto label_2259a0;
        default: break;
    }

    ctx->pc = 0x225988u;

    // 0x225988: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x225988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x22598c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225990: 0x244361b0  addiu       $v1, $v0, 0x61B0
    ctx->pc = 0x225990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
    // 0x225994: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x225994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225998: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22599c: 0x0  nop
    ctx->pc = 0x22599cu;
    // NOP
label_2259a0:
    // 0x2259a0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2259a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2259a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2259A4u;
    {
        const bool branch_taken_0x2259a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2259A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259A4u;
        // 0x2259a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259a4) {
            ctx->pc = 0x2259C0u;
            goto label_2259c0;
        }
    }
    ctx->pc = 0x2259ACu;
    // 0x2259ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2259b0: 0x50470003  beql        $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2259B0u;
    {
        const bool branch_taken_0x2259b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2259b0) {
            ctx->pc = 0x2259B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2259B0u;
            // 0x2259b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2259C0u;
            goto label_2259c0;
        }
    }
    ctx->pc = 0x2259B8u;
    // 0x2259b8: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2259B8u;
    {
        const bool branch_taken_0x2259b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2259b8) {
            ctx->pc = 0x2259BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2259B8u;
            // 0x2259bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2259C0u;
            goto label_2259c0;
        }
    }
    ctx->pc = 0x2259C0u;
label_2259c0:
    // 0x2259c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2259C0u;
    {
        const bool branch_taken_0x2259c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259C0u;
        // 0x2259c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259c0) {
            ctx->pc = 0x2259E0u;
            goto label_2259e0;
        }
    }
    ctx->pc = 0x2259C8u;
    // 0x2259c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2259c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2259cc: 0x28a20096  slti        $v0, $a1, 0x96
    ctx->pc = 0x2259ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x2259d0: 0x0  nop
    ctx->pc = 0x2259d0u;
    // NOP
    // 0x2259d4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2259D4u;
    {
        const bool branch_taken_0x2259d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2259D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D4u;
        // 0x2259d8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d4) {
            ctx->pc = 0x2259A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2259a0;
        }
    }
    ctx->pc = 0x2259DCu;
    // 0x2259dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2259e0:
    // 0x2259e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2259E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2259E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2259E8u;
}
