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

// Function: sub_00514FA8
// Address: 0x514fa8 - 0x515030
void sub_00514FA8_0x514fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514FA8_0x514fa8");
#endif

    switch (ctx->pc) {
        case 0x514fb0u: goto label_514fb0;
        case 0x514ff0u: goto label_514ff0;
        default: break;
    }

    ctx->pc = 0x514fa8u;

    // 0x514fa8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x514FA8u;
    {
        const bool branch_taken_0x514fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x514fa8) {
            ctx->pc = 0x514FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x514FA8u;
            // 0x514fac: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514FB8u;
            goto label_514fb8;
        }
    }
    ctx->pc = 0x514FB0u;
label_514fb0:
    // 0x514fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x514FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514FB0u;
        // 0x514fb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514FB8u;
label_514fb8:
    // 0x514fb8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x514fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x514fbc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x514FBCu;
    {
        const bool branch_taken_0x514fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x514FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514FBCu;
        // 0x514fc0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514fbc) {
            ctx->pc = 0x514FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514fb0;
        }
    }
    ctx->pc = 0x514FC4u;
    // 0x514fc4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x514FC4u;
    {
        const bool branch_taken_0x514fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x514fc4) {
            ctx->pc = 0x514FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514fb0;
        }
    }
    ctx->pc = 0x514FCCu;
    // 0x514fcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x514fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x514fd0: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x514FD0u;
    {
        const bool branch_taken_0x514fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x514FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514FD0u;
        // 0x514fd4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514fd0) {
            ctx->pc = 0x514FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514fb0;
        }
    }
    ctx->pc = 0x514FD8u;
    // 0x514fd8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x514FD8u;
    {
        const bool branch_taken_0x514fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514fd8) {
            ctx->pc = 0x514FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514fb0;
        }
    }
    ctx->pc = 0x514FE0u;
    // 0x514fe0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x514FE0u;
    {
        const bool branch_taken_0x514fe0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x514FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514FE0u;
        // 0x514fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514fe0) {
            ctx->pc = 0x515018u;
            goto label_515018;
        }
    }
    ctx->pc = 0x514FE8u;
    // 0x514fe8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x514fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x514fec: 0x0  nop
    ctx->pc = 0x514fecu;
    // NOP
label_514ff0:
    // 0x514ff0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x514ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x514ff4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x514FF4u;
    {
        const bool branch_taken_0x514ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514ff4) {
            ctx->pc = 0x514FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514fb0;
        }
    }
    ctx->pc = 0x514FFCu;
    // 0x514ffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x514ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x515000: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x515000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x515004: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x515004u;
    {
        const bool branch_taken_0x515004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x515008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515004u;
        // 0x515008: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515004) {
            ctx->pc = 0x514FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514fb0;
        }
    }
    ctx->pc = 0x51500Cu;
    // 0x51500c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x51500cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x515010: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x515010u;
    {
        const bool branch_taken_0x515010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x515014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515010u;
        // 0x515014: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515010) {
            ctx->pc = 0x514FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514ff0;
        }
    }
    ctx->pc = 0x515018u;
label_515018:
    // 0x515018: 0x3e00008  jr          $ra
    ctx->pc = 0x515018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515018u;
        // 0x51501c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515020u;
    // 0x515020: 0x3e00008  jr          $ra
    ctx->pc = 0x515020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515020u;
        // 0x515024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515028u;
    // 0x515028: 0x3e00008  jr          $ra
    ctx->pc = 0x515028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515028u;
        // 0x51502c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x515028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x515030u;
}
