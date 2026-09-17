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

// Function: sub_001225A0
// Address: 0x1225a0 - 0x122670
void sub_001225A0_0x1225a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001225A0_0x1225a0");
#endif

    switch (ctx->pc) {
        case 0x1225c0u: goto label_1225c0;
        default: break;
    }

    ctx->pc = 0x1225a0u;

    // 0x1225a0: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1225A0u;
    {
        const bool branch_taken_0x1225a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225A0u;
        // 0x1225a4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225a0) {
            ctx->pc = 0x122668u;
            goto label_122668;
        }
    }
    ctx->pc = 0x1225A8u;
    // 0x1225a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1225ac: 0x10490026  beq         $v0, $t1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1225ACu;
    {
        const bool branch_taken_0x1225ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x1225B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225ACu;
        // 0x1225b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225ac) {
            ctx->pc = 0x122648u;
            goto label_122648;
        }
    }
    ctx->pc = 0x1225B4u;
    // 0x1225b4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1225b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1225b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1225b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225bc: 0x0  nop
    ctx->pc = 0x1225bcu;
    // NOP
label_1225c0:
    // 0x1225c0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1225c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1225c4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1225c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1225c8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1225C8u;
    {
        const bool branch_taken_0x1225c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225c8) {
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x1225D0u;
    // 0x1225d0: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1225d4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1225d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1225d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1225D8u;
    {
        const bool branch_taken_0x1225d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225d8) {
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x1225E0u;
    // 0x1225e0: 0x112b000c  beq         $t1, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1225E0u;
    {
        const bool branch_taken_0x1225e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x1225E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225E0u;
        // 0x1225e4: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225e0) {
            ctx->pc = 0x122614u;
            goto label_122614;
        }
    }
    ctx->pc = 0x1225E8u;
    // 0x1225e8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1225e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1225ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1225ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1225f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1225f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1225f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1225f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1225f8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1225f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1225fc: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1225FCu;
    {
        const bool branch_taken_0x1225fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225fc) {
            ctx->pc = 0x122600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225FCu;
            // 0x122600: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12263Cu;
            goto label_12263c;
        }
    }
    ctx->pc = 0x122604u;
    // 0x122604: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122608: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x122608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12260c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12260Cu;
    {
        const bool branch_taken_0x12260c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12260c) {
            ctx->pc = 0x122610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12260Cu;
            // 0x122610: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12263Cu;
            goto label_12263c;
        }
    }
    ctx->pc = 0x122614u;
label_122614:
    // 0x122614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x122614u;
    {
        const bool branch_taken_0x122614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122614u;
        // 0x122618: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122614) {
            ctx->pc = 0x122638u;
            goto label_122638;
        }
    }
    ctx->pc = 0x12261Cu;
    // 0x12261c: 0x0  nop
    ctx->pc = 0x12261cu;
    // NOP
label_122620:
    // 0x122620: 0x5220006  bltzl       $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x122620u;
    {
        const bool branch_taken_0x122620 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x122620) {
            ctx->pc = 0x122624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122620u;
            // 0x122624: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12263Cu;
            goto label_12263c;
        }
    }
    ctx->pc = 0x122628u;
    // 0x122628: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x122628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12262c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x12262cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122630: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x122630u;
    {
        const bool branch_taken_0x122630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122630u;
        // 0x122634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122630) {
            ctx->pc = 0x12264Cu;
            goto label_12264c;
        }
    }
    ctx->pc = 0x122638u;
label_122638:
    // 0x122638: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x122638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_12263c:
    // 0x12263c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x12263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x122640: 0x144bffdf  bne         $v0, $t3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x122640u;
    {
        const bool branch_taken_0x122640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x122644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122640u;
        // 0x122644: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122640) {
            ctx->pc = 0x1225C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1225c0;
        }
    }
    ctx->pc = 0x122648u;
label_122648:
    // 0x122648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12264c:
    // 0x12264c: 0x11220006  beq         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12264Cu;
    {
        const bool branch_taken_0x12264c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x122650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12264Cu;
        // 0x122650: 0x91840  sll         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12264c) {
            ctx->pc = 0x122668u;
            goto label_122668;
        }
    }
    ctx->pc = 0x122654u;
    // 0x122654: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x122654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x122658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x122658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12265c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x122660: 0x3e00008  jr          $ra
    ctx->pc = 0x122660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122660u;
        // 0x122664: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122668u;
label_122668:
    // 0x122668: 0x3e00008  jr          $ra
    ctx->pc = 0x122668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122668u;
        // 0x12266c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122670u;
}
