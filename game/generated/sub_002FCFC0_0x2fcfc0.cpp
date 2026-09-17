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

// Function: sub_002FCFC0
// Address: 0x2fcfc0 - 0x2fd020
void sub_002FCFC0_0x2fcfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCFC0_0x2fcfc0");
#endif

    switch (ctx->pc) {
        case 0x2fcfd8u: goto label_2fcfd8;
        case 0x2fcff0u: goto label_2fcff0;
        default: break;
    }

    ctx->pc = 0x2fcfc0u;

    // 0x2fcfc0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2fcfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fcfc4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCFC4u;
    {
        const bool branch_taken_0x2fcfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcfc4) {
            ctx->pc = 0x2FCFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCFC4u;
            // 0x2fcfc8: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCFE0u;
            goto label_2fcfe0;
        }
    }
    ctx->pc = 0x2FCFCCu;
    // 0x2fcfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFCCu;
        // 0x2fcfd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCFD4u;
    // 0x2fcfd4: 0x0  nop
    ctx->pc = 0x2fcfd4u;
    // NOP
label_2fcfd8:
    // 0x2fcfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFD8u;
        // 0x2fcfdc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCFE0u;
label_2fcfe0:
    // 0x2fcfe0: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FCFE0u;
    {
        const bool branch_taken_0x2fcfe0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2FCFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFE0u;
        // 0x2fcfe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfe0) {
            ctx->pc = 0x2FD014u;
            goto label_2fd014;
        }
    }
    ctx->pc = 0x2FCFE8u;
    // 0x2fcfe8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2fcfe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcfec: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fcfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fcff0:
    // 0x2fcff0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fcff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2fcff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2fcff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fcff8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2fcff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2fcffc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2fcffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2fd000: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2fd000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2fd004: 0x10a2fff4  beq         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2FD004u;
    {
        const bool branch_taken_0x2fd004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD004u;
        // 0x2fd008: 0xe4302a  slt         $a2, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd004) {
            ctx->pc = 0x2FCFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcfd8;
        }
    }
    ctx->pc = 0x2FD00Cu;
    // 0x2fd00c: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FD00Cu;
    {
        const bool branch_taken_0x2fd00c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd00c) {
            ctx->pc = 0x2FD010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD00Cu;
            // 0x2fd010: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcff0;
        }
    }
    ctx->pc = 0x2FD014u;
label_2fd014:
    // 0x2fd014: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD014u;
        // 0x2fd018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD01Cu;
    // 0x2fd01c: 0x0  nop
    ctx->pc = 0x2fd01cu;
    // NOP
    ctx->pc = 0x2fd020u;
}
