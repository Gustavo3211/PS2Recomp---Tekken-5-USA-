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

// Function: sub_002D8658
// Address: 0x2d8658 - 0x2d8cf0
void sub_002D8658_0x2d8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8658_0x2d8658");
#endif

    switch (ctx->pc) {
        case 0x2d8700u: goto label_2d8700;
        case 0x2d8790u: goto label_2d8790;
        case 0x2d87d8u: goto label_2d87d8;
        case 0x2d8838u: goto label_2d8838;
        case 0x2d8850u: goto label_2d8850;
        case 0x2d88a8u: goto label_2d88a8;
        case 0x2d8964u: goto label_2d8964;
        case 0x2d89c0u: goto label_2d89c0;
        case 0x2d8a8cu: goto label_2d8a8c;
        case 0x2d8ca0u: goto label_2d8ca0;
        default: break;
    }

    ctx->pc = 0x2d8658u;

    // 0x2d8658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d865c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8660: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d8660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d8664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8668: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d8668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d866c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d866cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8670: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d8674: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d8674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d8678: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d867c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d8680: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d8680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d8684: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d8688: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d8688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d868c: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x2d868cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x2d8690: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2d8694: 0x8d0894ec  lw          $t0, -0x6B14($t0)
    ctx->pc = 0x2d8694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939884)));
    // 0x2d8698: 0x3c160002  lui         $s6, 0x2
    ctx->pc = 0x2d8698u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)2 << 16));
    // 0x2d869c: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x2d869cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2d86a0: 0x8ed690d0  lw          $s6, -0x6F30($s6)
    ctx->pc = 0x2d86a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938832)));
    // 0x2d86a4: 0x11000186  beqz        $t0, . + 4 + (0x186 << 2)
    ctx->pc = 0x2D86A4u;
    {
        const bool branch_taken_0x2d86a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86A4u;
        // 0x2d86a8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86a4) {
            ctx->pc = 0x2D8CC0u;
            goto label_2d8cc0;
        }
    }
    ctx->pc = 0x2D86ACu;
    // 0x2d86ac: 0x4a00184  bltz        $a1, . + 4 + (0x184 << 2)
    ctx->pc = 0x2D86ACu;
    {
        const bool branch_taken_0x2d86ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86ACu;
        // 0x2d86b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86ac) {
            ctx->pc = 0x2D8CC0u;
            goto label_2d8cc0;
        }
    }
    ctx->pc = 0x2D86B4u;
    // 0x2d86b4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2d86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2d86b8: 0x15020041  bne         $t0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D86B8u;
    {
        const bool branch_taken_0x2d86b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86B8u;
        // 0x2d86bc: 0x9509000e  lhu         $t1, 0xE($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86b8) {
            ctx->pc = 0x2D87C0u;
            goto label_2d87c0;
        }
    }
    ctx->pc = 0x2D86C0u;
    // 0x2d86c0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d86c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d86c8: 0x846390a8  lh          $v1, -0x6F58($v1)
    ctx->pc = 0x2d86c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294938792)));
    // 0x2d86cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d86d0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D86D0u;
    {
        const bool branch_taken_0x2d86d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86D0u;
        // 0x2d86d4: 0x260a0008  addiu       $t2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86d0) {
            ctx->pc = 0x2D8740u;
            goto label_2d8740;
        }
    }
    ctx->pc = 0x2D86D8u;
    // 0x2d86d8: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x2d86d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2d86dc: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D86DCu;
    {
        const bool branch_taken_0x2d86dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86DCu;
        // 0x2d86e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86dc) {
            ctx->pc = 0x2D8740u;
            goto label_2d8740;
        }
    }
    ctx->pc = 0x2D86E4u;
    // 0x2d86e4: 0x260a0008  addiu       $t2, $s0, 0x8
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d86e8: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x2d86e8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x2d86ec: 0x356b90a0  ori         $t3, $t3, 0x90A0
    ctx->pc = 0x2d86ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)37024);
    // 0x2d86f0: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x2d86f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86f4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2d86f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d86f8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d86f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d86fc: 0x0  nop
    ctx->pc = 0x2d86fcu;
    // NOP
label_2d8700:
    // 0x2d8700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d8700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d8704: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2d8704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d8708: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x2d8708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d870c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d870cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8710: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2d8710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2d8714: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2d8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2d8718: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2d8718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d871c: 0x144d0002  bne         $v0, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D871Cu;
    {
        const bool branch_taken_0x2d871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x2D8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D871Cu;
        // 0x2d8720: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d871c) {
            ctx->pc = 0x2D8728u;
            goto label_2d8728;
        }
    }
    ctx->pc = 0x2D8724u;
    // 0x2d8724: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x2d8724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_2d8728:
    // 0x2d8728: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d8728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d872c: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2d872cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d8730: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D8730u;
    {
        const bool branch_taken_0x2d8730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8730) {
            ctx->pc = 0x2D8734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8730u;
            // 0x2d8734: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8700;
        }
    }
    ctx->pc = 0x2D8738u;
    // 0x2d8738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8738u;
    {
        const bool branch_taken_0x2d8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8738u;
        // 0x2d873c: 0x51403  sra         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8738) {
            ctx->pc = 0x2D8744u;
            goto label_2d8744;
        }
    }
    ctx->pc = 0x2D8740u;
label_2d8740:
    // 0x2d8740: 0x51403  sra         $v0, $a1, 16
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
label_2d8744:
    // 0x2d8744: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d8744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d8748: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2d8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d874c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d874cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d8750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d8750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d8754: 0x846390a0  lh          $v1, -0x6F60($v1)
    ctx->pc = 0x2d8754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294938784)));
    // 0x2d8758: 0x4600029  bltz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D8758u;
    {
        const bool branch_taken_0x2d8758 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2D875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8758u;
        // 0x2d875c: 0x69102a  slt         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8758) {
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D8760u;
    // 0x2d8760: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D8760u;
    {
        const bool branch_taken_0x2d8760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8760u;
        // 0x2d8764: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8760) {
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D8768u;
    // 0x2d8768: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2d8768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d876c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d8770: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d8774: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2d8774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d8778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d877c: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x2d877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2d8780: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8784: 0x5045001e  beql        $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D8784u;
    {
        const bool branch_taken_0x2d8784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d8784) {
            ctx->pc = 0x2D8788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8784u;
            // 0x2d8788: 0x24920004  addiu       $s2, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D878Cu;
    // 0x2d878c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2d8790:
    // 0x2d8790: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2d8790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d8794: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D8794u;
    {
        const bool branch_taken_0x2d8794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8794u;
        // 0x2d8798: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8794) {
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D879Cu;
    // 0x2d879c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d879cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d87a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d87a4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2d87a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d87a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d87ac: 0x5465fff8  bnel        $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D87ACu;
    {
        const bool branch_taken_0x2d87ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d87ac) {
            ctx->pc = 0x2D87B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D87ACu;
            // 0x2d87b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8790;
        }
    }
    ctx->pc = 0x2D87B4u;
    // 0x2d87b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D87B4u;
    {
        const bool branch_taken_0x2d87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87B4u;
        // 0x2d87b8: 0x24920004  addiu       $s2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87b4) {
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D87BCu;
    // 0x2d87bc: 0x0  nop
    ctx->pc = 0x2d87bcu;
    // NOP
label_2d87c0:
    // 0x2d87c0: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x2d87c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2d87c4: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D87C4u;
    {
        const bool branch_taken_0x2d87c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87C4u;
        // 0x2d87c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87c4) {
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D87CCu;
    // 0x2d87cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D87CCu;
    {
        const bool branch_taken_0x2d87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87CCu;
        // 0x2d87d0: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87cc) {
            ctx->pc = 0x2D87E8u;
            goto label_2d87e8;
        }
    }
    ctx->pc = 0x2D87D4u;
    // 0x2d87d4: 0x0  nop
    ctx->pc = 0x2d87d4u;
    // NOP
label_2d87d8:
    // 0x2d87d8: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2d87d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d87dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D87DCu;
    {
        const bool branch_taken_0x2d87dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87DCu;
        // 0x2d87e0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87dc) {
            ctx->pc = 0x2D8800u;
            goto label_2d8800;
        }
    }
    ctx->pc = 0x2D87E4u;
    // 0x2d87e4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d87e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d87e8:
    // 0x2d87e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d87ec: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2d87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d87f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d87f4: 0x5465fff8  bnel        $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D87F4u;
    {
        const bool branch_taken_0x2d87f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d87f4) {
            ctx->pc = 0x2D87F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D87F4u;
            // 0x2d87f8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D87D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D87FCu;
    // 0x2d87fc: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x2d87fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2d8800:
    // 0x2d8800: 0x1240012f  beqz        $s2, . + 4 + (0x12F << 2)
    ctx->pc = 0x2D8800u;
    {
        const bool branch_taken_0x2d8800 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8800u;
        // 0x2d8804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8800) {
            ctx->pc = 0x2D8CC0u;
            goto label_2d8cc0;
        }
    }
    ctx->pc = 0x2D8808u;
    // 0x2d8808: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d8808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d880c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2d880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d8810: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2d8810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8814: 0x91030007  lbu         $v1, 0x7($t0)
    ctx->pc = 0x2d8814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x2d8818: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8818u;
    {
        const bool branch_taken_0x2d8818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8818u;
        // 0x2d881c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8818) {
            ctx->pc = 0x2D8868u;
            goto label_2d8868;
        }
    }
    ctx->pc = 0x2D8820u;
    // 0x2d8820: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2d8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2d8824: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2D8824u;
    {
        const bool branch_taken_0x2d8824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8824u;
        // 0x2d8828: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8824) {
            ctx->pc = 0x2D8990u;
            goto label_2d8990;
        }
    }
    ctx->pc = 0x2D882Cu;
    // 0x2d882c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x2D882Cu;
    {
        const bool branch_taken_0x2d882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D882Cu;
        // 0x2d8830: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d882c) {
            ctx->pc = 0x2D8CC4u;
            goto label_2d8cc4;
        }
    }
    ctx->pc = 0x2D8834u;
    // 0x2d8834: 0x0  nop
    ctx->pc = 0x2d8834u;
    // NOP
label_2d8838:
    // 0x2d8838: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d883c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d883cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d8840: 0xac3690d0  sw          $s6, -0x6F30($at)
    ctx->pc = 0x2d8840u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938832), GPR_U32(ctx, 22));
    // 0x2d8844: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2D8844u;
    {
        const bool branch_taken_0x2d8844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8844u;
        // 0x2d8848: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8844) {
            ctx->pc = 0x2D8CC0u;
            goto label_2d8cc0;
        }
    }
    ctx->pc = 0x2D884Cu;
    // 0x2d884c: 0x0  nop
    ctx->pc = 0x2d884cu;
    // NOP
label_2d8850:
    // 0x2d8850: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8854: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d8854u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d8858: 0xac3690d0  sw          $s6, -0x6F30($at)
    ctx->pc = 0x2d8858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938832), GPR_U32(ctx, 22));
    // 0x2d885c: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x2D885Cu;
    {
        const bool branch_taken_0x2d885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D885Cu;
        // 0x2d8860: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d885c) {
            ctx->pc = 0x2D8CC0u;
            goto label_2d8cc0;
        }
    }
    ctx->pc = 0x2D8864u;
    // 0x2d8864: 0x0  nop
    ctx->pc = 0x2d8864u;
    // NOP
label_2d8868:
    // 0x2d8868: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x2d8868u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d886c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x2d886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2d8870: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8870u;
    {
        const bool branch_taken_0x2d8870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8870u;
        // 0x2d8874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8870) {
            ctx->pc = 0x2D8890u;
            goto label_2d8890;
        }
    }
    ctx->pc = 0x2D8878u;
    // 0x2d8878: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2d8878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2d887c: 0x8c82f4d0  lw          $v0, -0xB30($a0)
    ctx->pc = 0x2d887cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF4D0u));
    // 0x2d8880: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2d8880u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8884: 0x1065010d  beq         $v1, $a1, . + 4 + (0x10D << 2)
    ctx->pc = 0x2D8884u;
    {
        const bool branch_taken_0x2d8884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8884u;
        // 0x2d8888: 0x26320002  addiu       $s2, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8884) {
            ctx->pc = 0x2D8CBCu;
            goto label_2d8cbc;
        }
    }
    ctx->pc = 0x2D888Cu;
    // 0x2d888c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x2d888cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2d8890:
    // 0x2d8890: 0x1080010a  beqz        $a0, . + 4 + (0x10A << 2)
    ctx->pc = 0x2D8890u;
    {
        const bool branch_taken_0x2d8890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8890u;
        // 0x2d8894: 0x26140008  addiu       $s4, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8890) {
            ctx->pc = 0x2D8CBCu;
            goto label_2d8cbc;
        }
    }
    ctx->pc = 0x2D8898u;
    // 0x2d8898: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x2d889c: 0x363190d0  ori         $s1, $s1, 0x90D0
    ctx->pc = 0x2d889cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)37072);
    // 0x2d88a0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2d88a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2d88a4: 0x3417fff1  ori         $s7, $zero, 0xFFF1
    ctx->pc = 0x2d88a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
label_2d88a8:
    // 0x2d88a8: 0x14d70015  bne         $a2, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D88A8u;
    {
        const bool branch_taken_0x2d88a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 23));
        if (branch_taken_0x2d88a8) {
            ctx->pc = 0x2D8900u;
            goto label_2d8900;
        }
    }
    ctx->pc = 0x2D88B0u;
    // 0x2d88b0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d88b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d88b8: 0x944294e8  lhu         $v0, -0x6B18($v0)
    ctx->pc = 0x2d88b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939880)));
    // 0x2d88bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d88c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d88c4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2d88c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d88c8: 0x28a3ffe2  slti        $v1, $a1, -0x1E
    ctx->pc = 0x2d88c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967266) ? 1 : 0);
    // 0x2d88cc: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2D88CCu;
    {
        const bool branch_taken_0x2d88cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d88cc) {
            ctx->pc = 0x2D8838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8838;
        }
    }
    ctx->pc = 0x2D88D4u;
    // 0x2d88d4: 0x28a201df  slti        $v0, $a1, 0x1DF
    ctx->pc = 0x2d88d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)479) ? 1 : 0);
    // 0x2d88d8: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2D88D8u;
    {
        const bool branch_taken_0x2d88d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d88d8) {
            ctx->pc = 0x2D8850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8850;
        }
    }
    ctx->pc = 0x2D88E0u;
    // 0x2d88e0: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D88E0u;
    {
        const bool branch_taken_0x2d88e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88E0u;
        // 0x2d88e4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88e0) {
            ctx->pc = 0x2D8940u;
            goto label_2d8940;
        }
    }
    ctx->pc = 0x2D88E8u;
    // 0x2d88e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d88ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d88f0: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d88f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D88F4u;
    {
        const bool branch_taken_0x2d88f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88F4u;
        // 0x2d88f8: 0x284207ff  slti        $v0, $v0, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88f4) {
            ctx->pc = 0x2D891Cu;
            goto label_2d891c;
        }
    }
    ctx->pc = 0x2D88FCu;
    // 0x2d88fc: 0x0  nop
    ctx->pc = 0x2d88fcu;
    // NOP
label_2d8900:
    // 0x2d8900: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D8900u;
    {
        const bool branch_taken_0x2d8900 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8900u;
        // 0x2d8904: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8900) {
            ctx->pc = 0x2D8944u;
            goto label_2d8944;
        }
    }
    ctx->pc = 0x2D8908u;
    // 0x2d8908: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d890c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8910: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8914: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2d8914u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d8918: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
label_2d891c:
    // 0x2d891c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D891Cu;
    {
        const bool branch_taken_0x2d891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D891Cu;
        // 0x2d8920: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d891c) {
            ctx->pc = 0x2D8944u;
            goto label_2d8944;
        }
    }
    ctx->pc = 0x2D8924u;
    // 0x2d8924: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d8924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8928: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d892c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8930: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d8934: 0xa44500a0  sh          $a1, 0xA0($v0)
    ctx->pc = 0x2d8934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d8938: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2d8938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2d893c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x2d893cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2d8940:
    // 0x2d8940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d8940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8944:
    // 0x2d8944: 0x3884000a  xori        $a0, $a0, 0xA
    ctx->pc = 0x2d8944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)10);
    // 0x2d8948: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d894c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8950: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d8950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d8954: 0x64a80a  movz        $s5, $v1, $a0
    ctx->pc = 0x2d8954u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x2d8958: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d8958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d895c: 0xc0b6180  jal         func_2D8600
    ctx->pc = 0x2D895Cu;
    SET_GPR_U32(ctx, 31, 0x2D8964u);
    ctx->pc = 0x2D8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D895Cu;
    // 0x2d8960: 0x96440000  lhu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8600u, 0x2D895Cu, 0x2D8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8964u;
label_2d8964:
    // 0x2d8964: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x2d8964u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d8968: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2d8968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2d896c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x2d896cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d8970: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2D8970u;
    {
        const bool branch_taken_0x2d8970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8970u;
        // 0x2d8974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8970) {
            ctx->pc = 0x2D88A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d88a8;
        }
    }
    ctx->pc = 0x2D8978u;
    // 0x2d8978: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d8978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d897c: 0x1c40ffca  bgtz        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2D897Cu;
    {
        const bool branch_taken_0x2d897c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D897Cu;
        // 0x2d8980: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d897c) {
            ctx->pc = 0x2D88A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d88a8;
        }
    }
    ctx->pc = 0x2D8984u;
    // 0x2d8984: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2D8984u;
    {
        const bool branch_taken_0x2d8984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8984u;
        // 0x2d8988: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8984) {
            ctx->pc = 0x2D8CC4u;
            goto label_2d8cc4;
        }
    }
    ctx->pc = 0x2D898Cu;
    // 0x2d898c: 0x0  nop
    ctx->pc = 0x2d898cu;
    // NOP
label_2d8990:
    // 0x2d8990: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2d8990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d8994: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x2d8994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2d8998: 0x546200c3  bnel        $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2D8998u;
    {
        const bool branch_taken_0x2d8998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8998) {
            ctx->pc = 0x2D899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8998u;
            // 0x2d899c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8CA8u;
            goto label_2d8ca8;
        }
    }
    ctx->pc = 0x2D89A0u;
    // 0x2d89a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2d89a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2d89a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d89a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d89a8: 0x8c82f4d0  lw          $v0, -0xB30($a0)
    ctx->pc = 0x2d89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF4D0u));
    // 0x2d89ac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2d89acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d89b0: 0x106500c2  beq         $v1, $a1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2D89B0u;
    {
        const bool branch_taken_0x2d89b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89B0u;
        // 0x2d89b4: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89b0) {
            ctx->pc = 0x2D8CBCu;
            goto label_2d8cbc;
        }
    }
    ctx->pc = 0x2D89B8u;
    // 0x2d89b8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2D89B8u;
    {
        const bool branch_taken_0x2d89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89B8u;
        // 0x2d89bc: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89b8) {
            ctx->pc = 0x2D8CA8u;
            goto label_2d8ca8;
        }
    }
    ctx->pc = 0x2D89C0u;
label_2d89c0:
    // 0x2d89c0: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D89C0u;
    {
        const bool branch_taken_0x2d89c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89C0u;
        // 0x2d89c4: 0x3402fff1  ori         $v0, $zero, 0xFFF1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89c0) {
            ctx->pc = 0x2D8A98u;
            goto label_2d8a98;
        }
    }
    ctx->pc = 0x2D89C8u;
    // 0x2d89c8: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D89C8u;
    {
        const bool branch_taken_0x2d89c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d89c8) {
            ctx->pc = 0x2D8A20u;
            goto label_2d8a20;
        }
    }
    ctx->pc = 0x2D89D0u;
    // 0x2d89d0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d89d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d89d8: 0x946394e8  lhu         $v1, -0x6B18($v1)
    ctx->pc = 0x2d89d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939880)));
    // 0x2d89dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2d89dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d89e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d89e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d89e8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2d89e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d89ec: 0x28a3ffe2  slti        $v1, $a1, -0x1E
    ctx->pc = 0x2d89ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967266) ? 1 : 0);
    // 0x2d89f0: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x2D89F0u;
    {
        const bool branch_taken_0x2d89f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d89f0) {
            ctx->pc = 0x2D8838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8838;
        }
    }
    ctx->pc = 0x2D89F8u;
    // 0x2d89f8: 0x28a201df  slti        $v0, $a1, 0x1DF
    ctx->pc = 0x2d89f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)479) ? 1 : 0);
    // 0x2d89fc: 0x1040ff94  beqz        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x2D89FCu;
    {
        const bool branch_taken_0x2d89fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89fc) {
            ctx->pc = 0x2D8850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8850;
        }
    }
    ctx->pc = 0x2D8A04u;
    // 0x2d8a04: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D8A04u;
    {
        const bool branch_taken_0x2d8a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A04u;
        // 0x2d8a08: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a04) {
            ctx->pc = 0x2D8A6Cu;
            goto label_2d8a6c;
        }
    }
    ctx->pc = 0x2D8A0Cu;
    // 0x2d8a0c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8a10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8a14: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8a18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8A18u;
    {
        const bool branch_taken_0x2d8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A18u;
        // 0x2d8a1c: 0x284207ff  slti        $v0, $v0, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a18) {
            ctx->pc = 0x2D8A3Cu;
            goto label_2d8a3c;
        }
    }
    ctx->pc = 0x2D8A20u;
label_2d8a20:
    // 0x2d8a20: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8A20u;
    {
        const bool branch_taken_0x2d8a20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A20u;
        // 0x2d8a24: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a20) {
            ctx->pc = 0x2D8A70u;
            goto label_2d8a70;
        }
    }
    ctx->pc = 0x2D8A28u;
    // 0x2d8a28: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8a2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8a30: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8a34: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2d8a34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8a38: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
label_2d8a3c:
    // 0x2d8a3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8A3Cu;
    {
        const bool branch_taken_0x2d8a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A3Cu;
        // 0x2d8a40: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a3c) {
            ctx->pc = 0x2D8A70u;
            goto label_2d8a70;
        }
    }
    ctx->pc = 0x2D8A44u;
    // 0x2d8a44: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d8a48: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d8a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d8a4c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d8a50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8a54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8a58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8a5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8a60: 0xa44500a8  sh          $a1, 0xA8($v0)
    ctx->pc = 0x2d8a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d8a64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d8a68: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2d8a68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8a6c:
    // 0x2d8a6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8a70:
    // 0x2d8a70: 0x3884000a  xori        $a0, $a0, 0xA
    ctx->pc = 0x2d8a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)10);
    // 0x2d8a74: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2d8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d8a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d8a7c: 0x64a80a  movz        $s5, $v1, $a0
    ctx->pc = 0x2d8a7cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x2d8a80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d8a84: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2d8a84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d8a8c:
    // 0x2d8a8c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2D8A8Cu;
    {
        const bool branch_taken_0x2d8a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A8Cu;
        // 0x2d8a90: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a8c) {
            ctx->pc = 0x2D8CA8u;
            goto label_2d8ca8;
        }
    }
    ctx->pc = 0x2D8A94u;
    // 0x2d8a94: 0x0  nop
    ctx->pc = 0x2d8a94u;
    // NOP
label_2d8a98:
    // 0x2d8a98: 0x308300e0  andi        $v1, $a0, 0xE0
    ctx->pc = 0x2d8a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)224);
    // 0x2d8a9c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2d8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d8aa0: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D8AA0u;
    {
        const bool branch_taken_0x2d8aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AA0u;
        // 0x2d8aa4: 0x308300f0  andi        $v1, $a0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8aa0) {
            ctx->pc = 0x2D8B98u;
            goto label_2d8b98;
        }
    }
    ctx->pc = 0x2D8AA8u;
    // 0x2d8aa8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2d8aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2d8aac: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x2d8aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2d8ab0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2d8ab4: 0x3404fff1  ori         $a0, $zero, 0xFFF1
    ctx->pc = 0x2d8ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x2d8ab8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2d8ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2d8abc: 0x14c4001e  bne         $a2, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D8ABCu;
    {
        const bool branch_taken_0x2d8abc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8ABCu;
        // 0x2d8ac0: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8abc) {
            ctx->pc = 0x2D8B38u;
            goto label_2d8b38;
        }
    }
    ctx->pc = 0x2D8AC4u;
    // 0x2d8ac4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8ac8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8acc: 0x944294e8  lhu         $v0, -0x6B18($v0)
    ctx->pc = 0x2d8accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939880)));
    // 0x2d8ad0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d8ad4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d8ad8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2d8ad8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d8adc: 0x28a3ffe2  slti        $v1, $a1, -0x1E
    ctx->pc = 0x2d8adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967266) ? 1 : 0);
    // 0x2d8ae0: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x2D8AE0u;
    {
        const bool branch_taken_0x2d8ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ae0) {
            ctx->pc = 0x2D8838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8838;
        }
    }
    ctx->pc = 0x2D8AE8u;
    // 0x2d8ae8: 0x28a201df  slti        $v0, $a1, 0x1DF
    ctx->pc = 0x2d8ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)479) ? 1 : 0);
    // 0x2d8aec: 0x1040ff58  beqz        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x2D8AECu;
    {
        const bool branch_taken_0x2d8aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8aec) {
            ctx->pc = 0x2D8850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8850;
        }
    }
    ctx->pc = 0x2D8AF4u;
    // 0x2d8af4: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8AF4u;
    {
        const bool branch_taken_0x2d8af4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AF4u;
        // 0x2d8af8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8af4) {
            ctx->pc = 0x2D8B80u;
            goto label_2d8b80;
        }
    }
    ctx->pc = 0x2D8AFCu;
    // 0x2d8afc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8b00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8b04: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8b08: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8b0c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D8B0Cu;
    {
        const bool branch_taken_0x2d8b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B0Cu;
        // 0x2d8b10: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b0c) {
            ctx->pc = 0x2D8B7Cu;
            goto label_2d8b7c;
        }
    }
    ctx->pc = 0x2D8B14u;
    // 0x2d8b14: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d8b18: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d8b1c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d8b20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8b24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8b28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8b2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8b30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8B30u;
    {
        const bool branch_taken_0x2d8b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B30u;
        // 0x2d8b34: 0xa44500a8  sh          $a1, 0xA8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b30) {
            ctx->pc = 0x2D8B78u;
            goto label_2d8b78;
        }
    }
    ctx->pc = 0x2D8B38u;
label_2d8b38:
    // 0x2d8b38: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8B38u;
    {
        const bool branch_taken_0x2d8b38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B38u;
        // 0x2d8b3c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b38) {
            ctx->pc = 0x2D8B80u;
            goto label_2d8b80;
        }
    }
    ctx->pc = 0x2D8B40u;
    // 0x2d8b40: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8b44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8b48: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8b4c: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8b50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8B50u;
    {
        const bool branch_taken_0x2d8b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B50u;
        // 0x2d8b54: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b50) {
            ctx->pc = 0x2D8B80u;
            goto label_2d8b80;
        }
    }
    ctx->pc = 0x2D8B58u;
    // 0x2d8b58: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d8b5c: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d8b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d8b60: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d8b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d8b64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8b68: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8b6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8b70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8b74: 0xa45200a8  sh          $s2, 0xA8($v0)
    ctx->pc = 0x2d8b74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 18));
label_2d8b78:
    // 0x2d8b78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d8b7c:
    // 0x2d8b7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8b80:
    // 0x2d8b80: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2d8b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2d8b84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d8b8c: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x2D8B8Cu;
    {
        const bool branch_taken_0x2d8b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B8Cu;
        // 0x2d8b90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b8c) {
            ctx->pc = 0x2D8A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8a8c;
        }
    }
    ctx->pc = 0x2D8B94u;
    // 0x2d8b94: 0x0  nop
    ctx->pc = 0x2d8b94u;
    // NOP
label_2d8b98:
    // 0x2d8b98: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2d8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d8b9c: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D8B9Cu;
    {
        const bool branch_taken_0x2d8b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B9Cu;
        // 0x2d8ba0: 0x3083000f  andi        $v1, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b9c) {
            ctx->pc = 0x2D8CA8u;
            goto label_2d8ca8;
        }
    }
    ctx->pc = 0x2D8BA4u;
    // 0x2d8ba4: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2d8ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2d8ba8: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2d8ba8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d8bac: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x2d8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x2d8bb0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2d8bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2d8bb4: 0x3405fff1  ori         $a1, $zero, 0xFFF1
    ctx->pc = 0x2d8bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x2d8bb8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d8bbc: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x2d8bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2d8bc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d8bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d8bc4: 0x14c5001e  bne         $a2, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D8BC4u;
    {
        const bool branch_taken_0x2d8bc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BC4u;
        // 0x2d8bc8: 0x839025  or          $s2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bc4) {
            ctx->pc = 0x2D8C40u;
            goto label_2d8c40;
        }
    }
    ctx->pc = 0x2D8BCCu;
    // 0x2d8bcc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8bd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8bd4: 0x944294e8  lhu         $v0, -0x6B18($v0)
    ctx->pc = 0x2d8bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939880)));
    // 0x2d8bd8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d8bdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d8be0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2d8be0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d8be4: 0x28a3ffe2  slti        $v1, $a1, -0x1E
    ctx->pc = 0x2d8be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967266) ? 1 : 0);
    // 0x2d8be8: 0x1460ff13  bnez        $v1, . + 4 + (-0xED << 2)
    ctx->pc = 0x2D8BE8u;
    {
        const bool branch_taken_0x2d8be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8be8) {
            ctx->pc = 0x2D8838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8838;
        }
    }
    ctx->pc = 0x2D8BF0u;
    // 0x2d8bf0: 0x28a201df  slti        $v0, $a1, 0x1DF
    ctx->pc = 0x2d8bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)479) ? 1 : 0);
    // 0x2d8bf4: 0x1040ff16  beqz        $v0, . + 4 + (-0xEA << 2)
    ctx->pc = 0x2D8BF4u;
    {
        const bool branch_taken_0x2d8bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8bf4) {
            ctx->pc = 0x2D8850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8850;
        }
    }
    ctx->pc = 0x2D8BFCu;
    // 0x2d8bfc: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8BFCu;
    {
        const bool branch_taken_0x2d8bfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BFCu;
        // 0x2d8c00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bfc) {
            ctx->pc = 0x2D8C88u;
            goto label_2d8c88;
        }
    }
    ctx->pc = 0x2D8C04u;
    // 0x2d8c04: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8c08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8c0c: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8c10: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8c14: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D8C14u;
    {
        const bool branch_taken_0x2d8c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C14u;
        // 0x2d8c18: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c14) {
            ctx->pc = 0x2D8C84u;
            goto label_2d8c84;
        }
    }
    ctx->pc = 0x2D8C1Cu;
    // 0x2d8c1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d8c20: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d8c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d8c24: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d8c28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8c2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8c34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8c38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8C38u;
    {
        const bool branch_taken_0x2d8c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C38u;
        // 0x2d8c3c: 0xa44500a8  sh          $a1, 0xA8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c38) {
            ctx->pc = 0x2D8C80u;
            goto label_2d8c80;
        }
    }
    ctx->pc = 0x2D8C40u;
label_2d8c40:
    // 0x2d8c40: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8C40u;
    {
        const bool branch_taken_0x2d8c40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C40u;
        // 0x2d8c44: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c40) {
            ctx->pc = 0x2D8C88u;
            goto label_2d8c88;
        }
    }
    ctx->pc = 0x2D8C48u;
    // 0x2d8c48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8c4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8c50: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8c54: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8c58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8C58u;
    {
        const bool branch_taken_0x2d8c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C58u;
        // 0x2d8c5c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c58) {
            ctx->pc = 0x2D8C88u;
            goto label_2d8c88;
        }
    }
    ctx->pc = 0x2D8C60u;
    // 0x2d8c60: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d8c64: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d8c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d8c68: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d8c6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8c70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8c78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8c7c: 0xa45200a8  sh          $s2, 0xA8($v0)
    ctx->pc = 0x2d8c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 18));
label_2d8c80:
    // 0x2d8c80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d8c84:
    // 0x2d8c84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8c88:
    // 0x2d8c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d8c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c90: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x2d8c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x2d8c94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d8c98: 0xc0b6180  jal         func_2D8600
    ctx->pc = 0x2D8C98u;
    SET_GPR_U32(ctx, 31, 0x2D8CA0u);
    ctx->pc = 0x2D8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C98u;
    // 0x2d8c9c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8600u, 0x2D8C98u, 0x2D8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CA0u;
label_2d8ca0:
    // 0x2d8ca0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2d8ca0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8ca4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ca8:
    // 0x2d8ca8: 0x1480ff45  bnez        $a0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x2D8CA8u;
    {
        const bool branch_taken_0x2d8ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CA8u;
        // 0x2d8cac: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ca8) {
            ctx->pc = 0x2D89C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d89c0;
        }
    }
    ctx->pc = 0x2D8CB0u;
    // 0x2d8cb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8cb4: 0x1c40ff42  bgtz        $v0, . + 4 + (-0xBE << 2)
    ctx->pc = 0x2D8CB4u;
    {
        const bool branch_taken_0x2d8cb4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CB4u;
        // 0x2d8cb8: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cb4) {
            ctx->pc = 0x2D89C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d89c0;
        }
    }
    ctx->pc = 0x2D8CBCu;
label_2d8cbc:
    // 0x2d8cbc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2d8cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d8cc0:
    // 0x2d8cc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d8cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8cc4:
    // 0x2d8cc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d8cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d8cc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d8cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8ccc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d8cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d8cd0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d8cd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8cd4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d8cd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d8cd8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d8cd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8cdc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d8cdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d8ce0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d8ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CE4u;
        // 0x2d8ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8CECu;
    // 0x2d8cec: 0x0  nop
    ctx->pc = 0x2d8cecu;
    // NOP
    ctx->pc = 0x2d8cf0u;
}
