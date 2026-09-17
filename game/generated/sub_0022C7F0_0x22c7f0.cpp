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

// Function: sub_0022C7F0
// Address: 0x22c7f0 - 0x22c8c8
void sub_0022C7F0_0x22c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C7F0_0x22c7f0");
#endif

    switch (ctx->pc) {
        case 0x22c840u: goto label_22c840;
        default: break;
    }

    ctx->pc = 0x22c7f0u;

    // 0x22c7f0: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x22c7f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c7f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c7fc: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x22c7fcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c800: 0x2d820009  sltiu       $v0, $t4, 0x9
    ctx->pc = 0x22c800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x22c804: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x22c804u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c808: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x22C808u;
    {
        const bool branch_taken_0x22c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C808u;
        // 0x22c80c: 0x140702d  daddu       $t6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c808) {
            ctx->pc = 0x22C8F0u;
            return;
        }
    }
    ctx->pc = 0x22C810u;
    // 0x22c810: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x22c814: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x22c818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c81c: 0x8c637950  lw          $v1, 0x7950($v1)
    ctx->pc = 0x22c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31056)));
    // 0x22c820: 0x600008  jr          $v1
    ctx->pc = 0x22C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C828u: goto label_22c828;
            case 0x22C830u: goto label_22c830;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22C828u;
label_22c828:
    // 0x22c828: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22C828u;
    {
        const bool branch_taken_0x22c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C828u;
        // 0x22c82c: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c828) {
            ctx->pc = 0x22C8F0u;
            return;
        }
    }
    ctx->pc = 0x22C830u;
label_22c830:
    // 0x22c830: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x22c834: 0x1103000b  beq         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22C834u;
    {
        const bool branch_taken_0x22c834 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x22C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C834u;
        // 0x22c838: 0x8c8d0004  lw          $t5, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c834) {
            ctx->pc = 0x22C864u;
            goto label_22c864;
        }
    }
    ctx->pc = 0x22C83Cu;
    // 0x22c83c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x22c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_22c840:
    // 0x22c840: 0x104d0009  beq         $v0, $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C840u;
    {
        const bool branch_taken_0x22c840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x22C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C840u;
        // 0x22c844: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c840) {
            ctx->pc = 0x22C868u;
            goto label_22c868;
        }
    }
    ctx->pc = 0x22C848u;
    // 0x22c848: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22c848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22c84c: 0x0  nop
    ctx->pc = 0x22c84cu;
    // NOP
    // 0x22c850: 0x0  nop
    ctx->pc = 0x22c850u;
    // NOP
    // 0x22c854: 0x0  nop
    ctx->pc = 0x22c854u;
    // NOP
    // 0x22c858: 0x0  nop
    ctx->pc = 0x22c858u;
    // NOP
    // 0x22c85c: 0x5503fff8  bnel        $t0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22C85Cu;
    {
        const bool branch_taken_0x22c85c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c85c) {
            ctx->pc = 0x22C860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C85Cu;
            // 0x22c860: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c840;
        }
    }
    ctx->pc = 0x22C864u;
label_22c864:
    // 0x22c864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c868:
    // 0x22c868: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22c86c: 0x8de9002c  lw          $t1, 0x2C($t7)
    ctx->pc = 0x22c86cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x22c870: 0x1182000b  beq         $t4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22C870u;
    {
        const bool branch_taken_0x22c870 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C870u;
        // 0x22c874: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c870) {
            ctx->pc = 0x22C8A0u;
            goto label_22c8a0;
        }
    }
    ctx->pc = 0x22C878u;
    // 0x22c878: 0x29820006  slti        $v0, $t4, 0x6
    ctx->pc = 0x22c878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x22c87c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22C87Cu;
    {
        const bool branch_taken_0x22c87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C87Cu;
        // 0x22c880: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c87c) {
            ctx->pc = 0x22C8A8u;
            goto label_22c8a8;
        }
    }
    ctx->pc = 0x22C884u;
    // 0x22c884: 0x11820007  beq         $t4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C884u;
    {
        const bool branch_taken_0x22c884 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C884u;
        // 0x22c888: 0x39c20002  xori        $v0, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c884) {
            ctx->pc = 0x22C8A4u;
            goto label_22c8a4;
        }
    }
    ctx->pc = 0x22C88Cu;
    // 0x22c88c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c890: 0x11820004  beq         $t4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C890u;
    {
        const bool branch_taken_0x22c890 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C890u;
        // 0x22c894: 0x39c20003  xori        $v0, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c890) {
            ctx->pc = 0x22C8A4u;
            goto label_22c8a4;
        }
    }
    ctx->pc = 0x22C898u;
    // 0x22c898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22C898u;
    {
        const bool branch_taken_0x22c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c898) {
            ctx->pc = 0x22C8A8u;
            goto label_22c8a8;
        }
    }
    ctx->pc = 0x22C8A0u;
label_22c8a0:
    // 0x22c8a0: 0x39c20001  xori        $v0, $t6, 0x1
    ctx->pc = 0x22c8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
label_22c8a4:
    // 0x22c8a4: 0x2c4a0001  sltiu       $t2, $v0, 0x1
    ctx->pc = 0x22c8a4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22c8a8:
    // 0x22c8a8: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C8A8u;
    {
        const bool branch_taken_0x22c8a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A8u;
        // 0x22c8ac: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8a8) {
            ctx->pc = 0x22C8F0u;
            return;
        }
    }
    ctx->pc = 0x22C8B0u;
    // 0x22c8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c8b4: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x22c8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8b8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x22c8b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8bc: 0x808b1a0  j           func_22C680
    ctx->pc = 0x22C8BCu;
    ctx->pc = 0x22C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8BCu;
    // 0x22c8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C680u;
    sub_0022C680_0x22c680(rdram, ctx, runtime); return;
    ctx->pc = 0x22C8C4u;
    // 0x22c8c4: 0x0  nop
    ctx->pc = 0x22c8c4u;
    // NOP
    ctx->pc = 0x22c8c8u;
}
