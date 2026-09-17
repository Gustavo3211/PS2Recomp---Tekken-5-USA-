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

// Function: sub_00300518
// Address: 0x300518 - 0x300590
void sub_00300518_0x300518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300518_0x300518");
#endif

    switch (ctx->pc) {
        case 0x300530u: goto label_300530;
        default: break;
    }

    ctx->pc = 0x300518u;

    // 0x300518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30051c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30051Cu;
    {
        const bool branch_taken_0x30051c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x300520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30051Cu;
        // 0x300520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30051c) {
            ctx->pc = 0x30056Cu;
            goto label_30056c;
        }
    }
    ctx->pc = 0x300524u;
    // 0x300524: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x300524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300528: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x300528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30052c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x30052cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_300530:
    // 0x300530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x300530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300534: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x300534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x300538: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x300538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30053c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30053cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x300540: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x300544: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x300548: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300548u;
    {
        const bool branch_taken_0x300548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300548u;
        // 0x30054c: 0xe9302a  slt         $a2, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300548) {
            ctx->pc = 0x30055Cu;
            goto label_30055c;
        }
    }
    ctx->pc = 0x300550u;
    // 0x300550: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x300550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300554: 0x38420063  xori        $v0, $v0, 0x63
    ctx->pc = 0x300554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)99);
    // 0x300558: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x300558u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30055c:
    // 0x30055c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30055Cu;
    {
        const bool branch_taken_0x30055c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x300560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30055Cu;
        // 0x300560: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30055c) {
            ctx->pc = 0x300570u;
            goto label_300570;
        }
    }
    ctx->pc = 0x300564u;
    // 0x300564: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x300564u;
    {
        const bool branch_taken_0x300564 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x300568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300564u;
        // 0x300568: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300564) {
            ctx->pc = 0x300530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300530;
        }
    }
    ctx->pc = 0x30056Cu;
label_30056c:
    // 0x30056c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30056cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300570:
    // 0x300570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300570u;
    {
        const bool branch_taken_0x300570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300570) {
            ctx->pc = 0x300588u;
            goto label_300588;
        }
    }
    ctx->pc = 0x300578u;
    // 0x300578: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x300578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30057c: 0x3e00008  jr          $ra
    ctx->pc = 0x30057Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30057Cu;
        // 0x300580: 0xaca208c0  sw          $v0, 0x8C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30057Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300584u;
    // 0x300584: 0x0  nop
    ctx->pc = 0x300584u;
    // NOP
label_300588:
    // 0x300588: 0x3e00008  jr          $ra
    ctx->pc = 0x300588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300588u;
        // 0x30058c: 0xaca008c0  sw          $zero, 0x8C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300590u;
}
