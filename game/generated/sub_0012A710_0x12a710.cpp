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

// Function: sub_0012A710
// Address: 0x12a710 - 0x12a998
void sub_0012A710_0x12a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A710_0x12a710");
#endif

    switch (ctx->pc) {
        case 0x12a738u: goto label_12a738;
        case 0x12a748u: goto label_12a748;
        case 0x12a754u: goto label_12a754;
        case 0x12a760u: goto label_12a760;
        case 0x12a7a8u: goto label_12a7a8;
        case 0x12a86cu: goto label_12a86c;
        case 0x12a880u: goto label_12a880;
        case 0x12a890u: goto label_12a890;
        case 0x12a8d0u: goto label_12a8d0;
        default: break;
    }

    ctx->pc = 0x12a710u;

label_12a710:
    // 0x12a710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a714: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12a714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12a718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a71c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12a71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a720: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a724: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x12a724u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x12a728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a72c: 0x804a5fe  j           func_1297F8
    ctx->pc = 0x12A72Cu;
    ctx->pc = 0x12A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A72Cu;
    // 0x12a730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297F8u;
    entry_1297f8_0x12a710(rdram, ctx, runtime); return;
    ctx->pc = 0x12A734u;
    // 0x12a734: 0x0  nop
    ctx->pc = 0x12a734u;
    // NOP
label_12a738:
    // 0x12a738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a740: 0xc04a9c4  jal         func_12A710
    ctx->pc = 0x12A740u;
    SET_GPR_U32(ctx, 31, 0x12A748u);
    ctx->pc = 0x12A710u;
    goto label_12a710;
    ctx->pc = 0x12A748u;
label_12a748:
    // 0x12a748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a74c: 0xc048e00  jal         func_123800
    ctx->pc = 0x12A74Cu;
    SET_GPR_U32(ctx, 31, 0x12A754u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x12A74Cu, 0x12A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A754u;
label_12a754:
    // 0x12a754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a758: 0x3e00008  jr          $ra
    ctx->pc = 0x12A758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A758u;
        // 0x12a75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A760u;
label_12a760:
    // 0x12a760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12a764: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12a768: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12a768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a76c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12a770: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12a770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12a774: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12a778: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12a77c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12a780: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12a780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12a784: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12a788: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x12a788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a78c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12a790: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12a790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a794: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12a798: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12a798u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a79c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12a7a0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x12a7a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a7a4: 0x0  nop
    ctx->pc = 0x12a7a4u;
    // NOP
label_12a7a8:
    // 0x12a7a8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a7ac: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12a7b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12a7b4: 0x9042f4f1  lbu         $v0, -0xB0F($v0)
    ctx->pc = 0x12a7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964465)));
    // 0x12a7b8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12a7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12a7bc: 0x0  nop
    ctx->pc = 0x12a7bcu;
    // NOP
    // 0x12a7c0: 0x0  nop
    ctx->pc = 0x12a7c0u;
    // NOP
    // 0x12a7c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12A7C4u;
    {
        const bool branch_taken_0x12a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7C4u;
        // 0x12a7c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7c4) {
            ctx->pc = 0x12A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a7a8;
        }
    }
    ctx->pc = 0x12A7CCu;
    // 0x12a7cc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12a7d0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A7D0u;
    {
        const bool branch_taken_0x12a7d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7D0u;
        // 0x12a7d4: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7d0) {
            ctx->pc = 0x12A7E8u;
            goto label_12a7e8;
        }
    }
    ctx->pc = 0x12A7D8u;
    // 0x12a7d8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a7d8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a7dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12a7e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A7E0u;
    {
        const bool branch_taken_0x12a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7E0u;
        // 0x12a7e4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7e0) {
            ctx->pc = 0x12A7F8u;
            goto label_12a7f8;
        }
    }
    ctx->pc = 0x12A7E8u;
label_12a7e8:
    // 0x12a7e8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A7E8u;
    {
        const bool branch_taken_0x12a7e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a7e8) {
            ctx->pc = 0x12A7F8u;
            goto label_12a7f8;
        }
    }
    ctx->pc = 0x12A7F0u;
    // 0x12a7f0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a7f0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a7f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12a7f8:
    // 0x12a7f8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A7F8u;
    {
        const bool branch_taken_0x12a7f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7F8u;
        // 0x12a7fc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7f8) {
            ctx->pc = 0x12A808u;
            goto label_12a808;
        }
    }
    ctx->pc = 0x12A800u;
    // 0x12a800: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12A800u;
    {
        const bool branch_taken_0x12a800 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a800) {
            ctx->pc = 0x12A834u;
            goto label_12a834;
        }
    }
    ctx->pc = 0x12A808u;
label_12a808:
    // 0x12a808: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12a80c: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A80Cu;
    {
        const bool branch_taken_0x12a80c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A80Cu;
        // 0x12a810: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a80c) {
            ctx->pc = 0x12A834u;
            goto label_12a834;
        }
    }
    ctx->pc = 0x12A814u;
    // 0x12a814: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x12a814u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a818: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A818u;
    {
        const bool branch_taken_0x12a818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A818u;
        // 0x12a81c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a818) {
            ctx->pc = 0x12A828u;
            goto label_12a828;
        }
    }
    ctx->pc = 0x12A820u;
    // 0x12a820: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A820u;
    {
        const bool branch_taken_0x12a820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a820) {
            ctx->pc = 0x12A834u;
            goto label_12a834;
        }
    }
    ctx->pc = 0x12A828u;
label_12a828:
    // 0x12a828: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x12a828u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x12a82c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x12a82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x12a830: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12a830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12a834:
    // 0x12a834: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A834u;
    {
        const bool branch_taken_0x12a834 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A834u;
        // 0x12a838: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a834) {
            ctx->pc = 0x12A848u;
            goto label_12a848;
        }
    }
    ctx->pc = 0x12A83Cu;
    // 0x12a83c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x12a83cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12a840: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x12a844: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x12a844u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_12a848:
    // 0x12a848: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a84c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x12a84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x12a850: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x12a850u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a854: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x12a854u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x12a858: 0x57a00a  movz        $s4, $v0, $s7
    ctx->pc = 0x12a858u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x12a85c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x12a85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a864: 0xc048492  jal         func_121248
    ctx->pc = 0x12A864u;
    SET_GPR_U32(ctx, 31, 0x12A86Cu);
    ctx->pc = 0x12A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A864u;
    // 0x12a868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121248u, 0x12A864u, 0x12A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A86Cu;
label_12a86c:
    // 0x12a86c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a870: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x12a870u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a874: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x12a874u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12a878: 0xc048332  jal         func_120CC8
    ctx->pc = 0x12A878u;
    SET_GPR_U32(ctx, 31, 0x12A880u);
    ctx->pc = 0x12A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A878u;
    // 0x12a87c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x12A878u, 0x12A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A880u;
label_12a880:
    // 0x12a880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a884: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12a884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a888: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12A888u;
    {
        const bool branch_taken_0x12a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A888u;
        // 0x12a88c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a888) {
            ctx->pc = 0x12A8E0u;
            goto label_12a8e0;
        }
    }
    ctx->pc = 0x12A890u;
label_12a890:
    // 0x12a890: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x12a890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12a894: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12A894u;
    {
        const bool branch_taken_0x12a894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a894) {
            ctx->pc = 0x12A920u;
            goto label_12a920;
        }
    }
    ctx->pc = 0x12A89Cu;
    // 0x12a89c: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A89Cu;
    {
        const bool branch_taken_0x12a89c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x12A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A89Cu;
        // 0x12a8a0: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a89c) {
            ctx->pc = 0x12A8C0u;
            goto label_12a8c0;
        }
    }
    ctx->pc = 0x12A8A4u;
    // 0x12a8a4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x12A8A4u;
    {
        const bool branch_taken_0x12a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8a4) {
            ctx->pc = 0x12A8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8A4u;
            // 0x12a8a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A8D8u;
            goto label_12a8d8;
        }
    }
    ctx->pc = 0x12A8ACu;
    // 0x12a8ac: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A8ACu;
    {
        const bool branch_taken_0x12a8ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x12A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8ACu;
        // 0x12a8b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8ac) {
            ctx->pc = 0x12A8C8u;
            goto label_12a8c8;
        }
    }
    ctx->pc = 0x12A8B4u;
    // 0x12a8b4: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x12a8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12a8b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A8B8u;
    {
        const bool branch_taken_0x12a8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a8b8) {
            ctx->pc = 0x12A8C8u;
            goto label_12a8c8;
        }
    }
    ctx->pc = 0x12A8C0u;
label_12a8c0:
    // 0x12a8c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A8C0u;
    {
        const bool branch_taken_0x12a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8C0u;
        // 0x12a8c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8c0) {
            ctx->pc = 0x12A8D8u;
            goto label_12a8d8;
        }
    }
    ctx->pc = 0x12A8C8u;
label_12a8c8:
    // 0x12a8c8: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x12A8C8u;
    SET_GPR_U32(ctx, 31, 0x12A8D0u);
    ctx->pc = 0x12A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A8C8u;
    // 0x12a8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x12A8C8u, 0x12A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8D0u;
label_12a8d0:
    // 0x12a8d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12a8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a8d4: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x12a8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_12a8d8:
    // 0x12a8d8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a8d8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a8dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12a8e0:
    // 0x12a8e0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x12a8e4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x12a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x12a8e8: 0x9084f4f1  lbu         $a0, -0xB0F($a0)
    ctx->pc = 0x12a8e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964465)));
    // 0x12a8ec: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x12a8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x12a8f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A8F0u;
    {
        const bool branch_taken_0x12a8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F0u;
        // 0x12a8f4: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8f0) {
            ctx->pc = 0x12A900u;
            goto label_12a900;
        }
    }
    ctx->pc = 0x12A8F8u;
    // 0x12a8f8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x12A8F8u;
    {
        const bool branch_taken_0x12a8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F8u;
        // 0x12a8fc: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8f8) {
            ctx->pc = 0x12A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a890;
        }
    }
    ctx->pc = 0x12A900u;
label_12a900:
    // 0x12a900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A900u;
    {
        const bool branch_taken_0x12a900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A900u;
        // 0x12a904: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a900) {
            ctx->pc = 0x12A920u;
            goto label_12a920;
        }
    }
    ctx->pc = 0x12A908u;
    // 0x12a908: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x12a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x12a90c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x12a90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x12a910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a914: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x12A914u;
    {
        const bool branch_taken_0x12a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A914u;
        // 0x12a918: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a914) {
            ctx->pc = 0x12A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a890;
        }
    }
    ctx->pc = 0x12A91Cu;
    // 0x12a91c: 0x0  nop
    ctx->pc = 0x12a91cu;
    // NOP
label_12a920:
    // 0x12a920: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x12A920u;
    {
        const bool branch_taken_0x12a920 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x12A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A920u;
        // 0x12a924: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a920) {
            ctx->pc = 0x12A950u;
            goto label_12a950;
        }
    }
    ctx->pc = 0x12A928u;
    // 0x12a928: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a92c: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x12a92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x12a930: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12a930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a934: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x12a934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12a938: 0x77280a  movz        $a1, $v1, $s7
    ctx->pc = 0x12a938u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x12a93c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a940: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12a944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12A944u;
    {
        const bool branch_taken_0x12a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A944u;
        // 0x12a948: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a944) {
            ctx->pc = 0x12A954u;
            goto label_12a954;
        }
    }
    ctx->pc = 0x12A94Cu;
    // 0x12a94c: 0x0  nop
    ctx->pc = 0x12a94cu;
    // NOP
label_12a950:
    // 0x12a950: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x12a950u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_12a954:
    // 0x12a954: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A954u;
    {
        const bool branch_taken_0x12a954 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A954u;
        // 0x12a958: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a954) {
            ctx->pc = 0x12A964u;
            goto label_12a964;
        }
    }
    ctx->pc = 0x12A95Cu;
    // 0x12a95c: 0x46a80b  movn        $s5, $v0, $a2
    ctx->pc = 0x12a95cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x12a960: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x12a960u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_12a964:
    // 0x12a964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12a964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a968: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12a968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a96c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12a96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a970: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12a970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a974: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12a974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a978: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12a978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a97c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12a97cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a980: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12a980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a984: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12a984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a988: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12a988u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a98c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12a98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12a990: 0x3e00008  jr          $ra
    ctx->pc = 0x12A990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A990u;
        // 0x12a994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A998u;
}
