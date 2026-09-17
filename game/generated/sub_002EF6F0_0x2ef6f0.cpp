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

// Function: sub_002EF6F0
// Address: 0x2ef6f0 - 0x2ef810
void sub_002EF6F0_0x2ef6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF6F0_0x2ef6f0");
#endif

    switch (ctx->pc) {
        case 0x2ef760u: goto label_2ef760;
        case 0x2ef770u: goto label_2ef770;
        case 0x2ef7a0u: goto label_2ef7a0;
        case 0x2ef7d0u: goto label_2ef7d0;
        default: break;
    }

    ctx->pc = 0x2ef6f0u;

    // 0x2ef6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ef6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ef6f4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ef6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ef6f8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ef6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ef6fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ef6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef700: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ef700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ef704: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ef704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ef708: 0x267100b8  addiu       $s1, $s3, 0xB8
    ctx->pc = 0x2ef708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
    // 0x2ef70c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ef70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ef710: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2ef710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2ef714: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef718: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF718u;
    {
        const bool branch_taken_0x2ef718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF718u;
        // 0x2ef71c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef718) {
            ctx->pc = 0x2EF734u;
            goto label_2ef734;
        }
    }
    ctx->pc = 0x2EF720u;
    // 0x2ef720: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ef720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ef724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ef724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef728: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ef728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef72c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF72Cu;
    {
        const bool branch_taken_0x2ef72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ef72c) {
            ctx->pc = 0x2EF740u;
            goto label_2ef740;
        }
    }
    ctx->pc = 0x2EF734u;
label_2ef734:
    // 0x2ef734: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ef734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2ef738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ef738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef73c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2ef73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2ef740:
    // 0x2ef740: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2EF740u;
    {
        const bool branch_taken_0x2ef740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF740u;
        // 0x2ef744: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef740) {
            ctx->pc = 0x2EF7F0u;
            goto label_2ef7f0;
        }
    }
    ctx->pc = 0x2EF748u;
    // 0x2ef748: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EF748u;
    {
        const bool branch_taken_0x2ef748 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF748u;
        // 0x2ef74c: 0xae6600f0  sw          $a2, 0xF0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef748) {
            ctx->pc = 0x2EF7F0u;
            goto label_2ef7f0;
        }
    }
    ctx->pc = 0x2EF750u;
    // 0x2ef750: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x2ef750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x2ef754: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EF754u;
    {
        const bool branch_taken_0x2ef754 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF754u;
        // 0x2ef758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef754) {
            ctx->pc = 0x2EF7C0u;
            goto label_2ef7c0;
        }
    }
    ctx->pc = 0x2EF75Cu;
    // 0x2ef75c: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x2ef75cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ef760:
    // 0x2ef760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef764: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ef764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef768: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2EF768u;
    SET_GPR_U32(ctx, 31, 0x2EF770u);
    ctx->pc = 0x2EF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF768u;
    // 0x2ef76c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2EF768u, 0x2EF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF770u;
label_2ef770:
    // 0x2ef770: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ef770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef774: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF774u;
    {
        const bool branch_taken_0x2ef774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF774u;
        // 0x2ef778: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef774) {
            ctx->pc = 0x2EF78Cu;
            goto label_2ef78c;
        }
    }
    ctx->pc = 0x2EF77Cu;
    // 0x2ef77c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ef77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ef780: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ef780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ef784: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF784u;
    {
        const bool branch_taken_0x2ef784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ef784) {
            ctx->pc = 0x2EF798u;
            goto label_2ef798;
        }
    }
    ctx->pc = 0x2EF78Cu;
label_2ef78c:
    // 0x2ef78c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ef78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2ef790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ef790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef794: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2ef794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2ef798:
    // 0x2ef798: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EF798u;
    SET_GPR_U32(ctx, 31, 0x2EF7A0u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EF798u, 0x2EF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7A0u;
label_2ef7a0:
    // 0x2ef7a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ef7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ef7a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ef7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ef7a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2ef7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7ac: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2ef7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x2ef7b0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x2ef7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x2ef7b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ef7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef7b8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EF7B8u;
    {
        const bool branch_taken_0x2ef7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7B8u;
        // 0x2ef7bc: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7b8) {
            ctx->pc = 0x2EF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef760;
        }
    }
    ctx->pc = 0x2EF7C0u;
label_2ef7c0:
    // 0x2ef7c0: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2ef7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2ef7c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF7C4u;
    {
        const bool branch_taken_0x2ef7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7c4) {
            ctx->pc = 0x2EF7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF7C4u;
            // 0x2ef7c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7F0u;
            goto label_2ef7f0;
        }
    }
    ctx->pc = 0x2EF7CCu;
    // 0x2ef7cc: 0x0  nop
    ctx->pc = 0x2ef7ccu;
    // NOP
label_2ef7d0:
    // 0x2ef7d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ef7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ef7d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ef7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ef7d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ef7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ef7dc: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x2ef7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2ef7e0: 0x0  nop
    ctx->pc = 0x2ef7e0u;
    // NOP
    // 0x2ef7e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EF7E4u;
    {
        const bool branch_taken_0x2ef7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7E4u;
        // 0x2ef7e8: 0xac4000c0  sw          $zero, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7e4) {
            ctx->pc = 0x2EF7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef7d0;
        }
    }
    ctx->pc = 0x2EF7ECu;
    // 0x2ef7ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ef7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef7f0:
    // 0x2ef7f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ef7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ef7f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ef7f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef7f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ef7f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ef7fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ef7fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef800: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ef800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ef804: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF804u;
        // 0x2ef808: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF80Cu;
    // 0x2ef80c: 0x0  nop
    ctx->pc = 0x2ef80cu;
    // NOP
    ctx->pc = 0x2ef810u;
}
