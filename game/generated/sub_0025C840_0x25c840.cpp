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

// Function: sub_0025C840
// Address: 0x25c840 - 0x25cb20
void sub_0025C840_0x25c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C840_0x25c840");
#endif

    switch (ctx->pc) {
        case 0x25c8b8u: goto label_25c8b8;
        case 0x25c8f0u: goto label_25c8f0;
        case 0x25c968u: goto label_25c968;
        case 0x25c9d0u: goto label_25c9d0;
        default: break;
    }

    ctx->pc = 0x25c840u;

    // 0x25c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c844: 0x29030101  slti        $v1, $t0, 0x101
    ctx->pc = 0x25c844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x25c848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25c84c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25c84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c854: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x25c854u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25c85c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x25c85cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c860: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x25C860u;
    {
        const bool branch_taken_0x25c860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C860u;
        // 0x25c864: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c860) {
            ctx->pc = 0x25CB0Cu;
            goto label_25cb0c;
        }
    }
    ctx->pc = 0x25C868u;
    // 0x25c868: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x25c868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c86c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x25c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25c870: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x25c870u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c874: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x25c874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x25c878: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x25c878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x25c87c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x25c87cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c880: 0x69182a  slt         $v1, $v1, $t1
    ctx->pc = 0x25c880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x25c884: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x25c884u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c888: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x25c888u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c88c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x25c88cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c890: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25C890u;
    {
        const bool branch_taken_0x25c890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C890u;
        // 0x25c894: 0x1e0502d  daddu       $t2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c890) {
            ctx->pc = 0x25C8E0u;
            goto label_25c8e0;
        }
    }
    ctx->pc = 0x25C898u;
    // 0x25c898: 0x8f82ca14  lw          $v0, -0x35EC($gp)
    ctx->pc = 0x25c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953492)));
    // 0x25c89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8a0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x25c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x25c8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c8a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x25c8ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25c8b0: 0x19000095  blez        $t0, . + 4 + (0x95 << 2)
    ctx->pc = 0x25C8B0u;
    {
        const bool branch_taken_0x25c8b0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x25C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8B0u;
        // 0x25c8b4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8b0) {
            ctx->pc = 0x25CB08u;
            goto label_25cb08;
        }
    }
    ctx->pc = 0x25C8B8u;
label_25c8b8:
    // 0x25c8b8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x25c8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c8bc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25c8c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x25c8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25c8c4: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x25c8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25c8c8: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x25c8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c8cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25C8CCu;
    {
        const bool branch_taken_0x25c8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8CCu;
        // 0x25c8d0: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8cc) {
            ctx->pc = 0x25C8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c8b8;
        }
    }
    ctx->pc = 0x25C8D4u;
    // 0x25c8d4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x25C8D4u;
    {
        const bool branch_taken_0x25c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8D4u;
        // 0x25c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8d4) {
            ctx->pc = 0x25CB0Cu;
            goto label_25cb0c;
        }
    }
    ctx->pc = 0x25C8DCu;
    // 0x25c8dc: 0x0  nop
    ctx->pc = 0x25c8dcu;
    // NOP
label_25c8e0:
    // 0x25c8e0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25c8e4: 0x19000009  blez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C8E4u;
    {
        const bool branch_taken_0x25c8e4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x25C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8E4u;
        // 0x25c8e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8e4) {
            ctx->pc = 0x25C90Cu;
            goto label_25c90c;
        }
    }
    ctx->pc = 0x25C8ECu;
    // 0x25c8ec: 0x0  nop
    ctx->pc = 0x25c8ecu;
    // NOP
label_25c8f0:
    // 0x25c8f0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x25c8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c8f4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25c8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25c8f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x25c8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25c8fc: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x25c8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25c900: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x25c900u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c904: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25C904u;
    {
        const bool branch_taken_0x25c904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C904u;
        // 0x25c908: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c904) {
            ctx->pc = 0x25C8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c8f0;
        }
    }
    ctx->pc = 0x25C90Cu;
label_25c90c:
    // 0x25c90c: 0x10e0007f  beqz        $a3, . + 4 + (0x7F << 2)
    ctx->pc = 0x25C90Cu;
    {
        const bool branch_taken_0x25c90c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C90Cu;
        // 0x25c910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c90c) {
            ctx->pc = 0x25CB0Cu;
            goto label_25cb0c;
        }
    }
    ctx->pc = 0x25C914u;
    // 0x25c914: 0x8f83ca18  lw          $v1, -0x35E8($gp)
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953496)));
    // 0x25c918: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x25c918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x25c91c: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x25c91cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25c920: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25c920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c924: 0x24e7000e  addiu       $a3, $a3, 0xE
    ctx->pc = 0x25c924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x25c928: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x25c928u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x25c92c: 0xe6100b  movn        $v0, $a3, $a2
    ctx->pc = 0x25c92cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x25c930: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25c934: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x25c938: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x25c938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x25c93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c940: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x25c940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x25c944: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25c944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25c948: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x25c948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c94c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x25c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x25c950: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x25c950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c954: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x25c954u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c958: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c958u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c95c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25c960: 0x19000069  blez        $t0, . + 4 + (0x69 << 2)
    ctx->pc = 0x25C960u;
    {
        const bool branch_taken_0x25c960 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x25C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C960u;
        // 0x25c964: 0x1633021  addu        $a2, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c960) {
            ctx->pc = 0x25CB08u;
            goto label_25cb08;
        }
    }
    ctx->pc = 0x25C968u;
label_25c968:
    // 0x25c968: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25c96c: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x25c96cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c970: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x25c970u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25c974: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x25c974u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c978: 0x30a201ff  andi        $v0, $a1, 0x1FF
    ctx->pc = 0x25c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x25c97c: 0x52a43  sra         $a1, $a1, 9
    ctx->pc = 0x25c97cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 9));
    // 0x25c980: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25c980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25c984: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25c984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25c988: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x25c988u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x25c98c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x25c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25c990: 0x1812  mflo        $v1
    ctx->pc = 0x25c990u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x25c994: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25c994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25c998: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x25c998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25c99c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25c99cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c9a0: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x25c9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25c9a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C9A4u;
    {
        const bool branch_taken_0x25c9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9A4u;
        // 0x25c9a8: 0x854b0000  lh          $t3, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9a4) {
            ctx->pc = 0x25C9B8u;
            goto label_25c9b8;
        }
    }
    ctx->pc = 0x25C9ACu;
    // 0x25c9ac: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x25c9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25c9b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C9B0u;
    {
        const bool branch_taken_0x25c9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9B0u;
        // 0x25c9b4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9b0) {
            ctx->pc = 0x25C9BCu;
            goto label_25c9bc;
        }
    }
    ctx->pc = 0x25C9B8u;
label_25c9b8:
    // 0x25c9b8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x25c9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c9bc:
    // 0x25c9bc: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x25c9bcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9c0: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x25C9C0u;
    {
        const bool branch_taken_0x25c9c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9C0u;
        // 0x25c9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9c0) {
            ctx->pc = 0x25CAF0u;
            goto label_25caf0;
        }
    }
    ctx->pc = 0x25C9C8u;
    // 0x25c9c8: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x25c9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x25c9cc: 0x0  nop
    ctx->pc = 0x25c9ccu;
    // NOP
label_25c9d0:
    // 0x25c9d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C9D0u;
    {
        const bool branch_taken_0x25c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c9d0) {
            ctx->pc = 0x25C9ECu;
            goto label_25c9ec;
        }
    }
    ctx->pc = 0x25C9D8u;
    // 0x25c9d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x25c9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c9dc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25c9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25c9e0: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x25c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x25c9e4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x25c9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x25c9e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c9ec:
    // 0x25c9ec: 0x55e0000b  bnel        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25C9ECu;
    {
        const bool branch_taken_0x25c9ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c9ec) {
            ctx->pc = 0x25C9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C9ECu;
            // 0x25c9f0: 0x25efffff  addiu       $t7, $t7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CA1Cu;
            goto label_25ca1c;
        }
    }
    ctx->pc = 0x25C9F4u;
    // 0x25c9f4: 0x30b8000f  andi        $t8, $a1, 0xF
    ctx->pc = 0x25c9f4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x25c9f8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x25c9f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x25c9fc: 0x2b020008  slti        $v0, $t8, 0x8
    ctx->pc = 0x25c9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x25ca00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25CA00u;
    {
        const bool branch_taken_0x25ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA00u;
        // 0x25ca04: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca00) {
            ctx->pc = 0x25CA1Cu;
            goto label_25ca1c;
        }
    }
    ctx->pc = 0x25CA08u;
    // 0x25ca08: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x25ca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x25ca0c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x25ca0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x25ca10: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x25ca10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ca14: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x25ca14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x25ca18: 0x2718fff8  addiu       $t8, $t8, -0x8
    ctx->pc = 0x25ca18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967288));
label_25ca1c:
    // 0x25ca1c: 0x2f020008  sltiu       $v0, $t8, 0x8
    ctx->pc = 0x25ca1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x25ca20: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25CA20u;
    {
        const bool branch_taken_0x25ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA20u;
        // 0x25ca24: 0xad1024  and         $v0, $a1, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca20) {
            ctx->pc = 0x25CAC4u;
            goto label_25cac4;
        }
    }
    ctx->pc = 0x25CA28u;
    // 0x25ca28: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x25ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x25ca2c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25ca30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ca34: 0x8c6325b0  lw          $v1, 0x25B0($v1)
    ctx->pc = 0x25ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9648)));
    // 0x25ca38: 0x600008  jr          $v1
    ctx->pc = 0x25CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CA40u: goto label_25ca40;
            case 0x25CA48u: goto label_25ca48;
            case 0x25CA50u: goto label_25ca50;
            case 0x25CA58u: goto label_25ca58;
            case 0x25CA68u: goto label_25ca68;
            case 0x25CA78u: goto label_25ca78;
            case 0x25CA88u: goto label_25ca88;
            case 0x25CAE0u: goto label_25cae0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CA38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25CA40u;
label_25ca40:
    // 0x25ca40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25CA40u;
    {
        const bool branch_taken_0x25ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA40u;
        // 0x25ca44: 0x240effac  addiu       $t6, $zero, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca40) {
            ctx->pc = 0x25CA7Cu;
            goto label_25ca7c;
        }
    }
    ctx->pc = 0x25CA48u;
label_25ca48:
    // 0x25ca48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CA48u;
    {
        const bool branch_taken_0x25ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA48u;
        // 0x25ca4c: 0x240effec  addiu       $t6, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca48) {
            ctx->pc = 0x25CA6Cu;
            goto label_25ca6c;
        }
    }
    ctx->pc = 0x25CA50u;
label_25ca50:
    // 0x25ca50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25CA50u;
    {
        const bool branch_taken_0x25ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA50u;
        // 0x25ca54: 0x240efffc  addiu       $t6, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca50) {
            ctx->pc = 0x25CA5Cu;
            goto label_25ca5c;
        }
    }
    ctx->pc = 0x25CA58u;
label_25ca58:
    // 0x25ca58: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x25ca58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ca5c:
    // 0x25ca5c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x25ca5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ca60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25CA60u;
    {
        const bool branch_taken_0x25ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA60u;
        // 0x25ca64: 0x240d0003  addiu       $t5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca60) {
            ctx->pc = 0x25CAC0u;
            goto label_25cac0;
        }
    }
    ctx->pc = 0x25CA68u;
label_25ca68:
    // 0x25ca68: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x25ca68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_25ca6c:
    // 0x25ca6c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x25ca6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ca70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25CA70u;
    {
        const bool branch_taken_0x25ca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA70u;
        // 0x25ca74: 0x240d000f  addiu       $t5, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca70) {
            ctx->pc = 0x25CAC0u;
            goto label_25cac0;
        }
    }
    ctx->pc = 0x25CA78u;
label_25ca78:
    // 0x25ca78: 0x240e0015  addiu       $t6, $zero, 0x15
    ctx->pc = 0x25ca78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_25ca7c:
    // 0x25ca7c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25ca80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25CA80u;
    {
        const bool branch_taken_0x25ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA80u;
        // 0x25ca84: 0x240d003f  addiu       $t5, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca80) {
            ctx->pc = 0x25CAC0u;
            goto label_25cac0;
        }
    }
    ctx->pc = 0x25CA88u;
label_25ca88:
    // 0x25ca88: 0x28e2000c  slti        $v0, $a3, 0xC
    ctx->pc = 0x25ca88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x25ca8c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CA8Cu;
    {
        const bool branch_taken_0x25ca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca8c) {
            ctx->pc = 0x25CA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CA8Cu;
            // 0x25ca90: 0x51500  sll         $v0, $a1, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CAACu;
            goto label_25caac;
        }
    }
    ctx->pc = 0x25CA94u;
    // 0x25ca94: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x25ca94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ca98: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25ca98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x25ca9c: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x25ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x25caa0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x25caa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x25caa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25caa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25caa8: 0x51500  sll         $v0, $a1, 20
    ctx->pc = 0x25caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
label_25caac:
    // 0x25caac: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x25caacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x25cab0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x25cab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x25cab4: 0x24e7fff4  addiu       $a3, $a3, -0xC
    ctx->pc = 0x25cab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
    // 0x25cab8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25CAB8u;
    {
        const bool branch_taken_0x25cab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAB8u;
        // 0x25cabc: 0x2021004  sllv        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cab8) {
            ctx->pc = 0x25CAD8u;
            goto label_25cad8;
        }
    }
    ctx->pc = 0x25CAC0u;
label_25cac0:
    // 0x25cac0: 0xad1024  and         $v0, $a1, $t5
    ctx->pc = 0x25cac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
label_25cac4:
    // 0x25cac4: 0x1852807  srav        $a1, $a1, $t4
    ctx->pc = 0x25cac4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x25cac8: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x25cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x25cacc: 0xec3823  subu        $a3, $a3, $t4
    ctx->pc = 0x25caccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x25cad0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x25cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x25cad4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x25cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_25cad8:
    // 0x25cad8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25cadc: 0x25c03  sra         $t3, $v0, 16
    ctx->pc = 0x25cadcu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 16));
label_25cae0:
    // 0x25cae0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25cae4: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x25cae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x25cae8: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x25CAE8u;
    {
        const bool branch_taken_0x25cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAE8u;
        // 0x25caec: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cae8) {
            ctx->pc = 0x25C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c9d0;
        }
    }
    ctx->pc = 0x25CAF0u;
label_25caf0:
    // 0x25caf0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25caf4: 0xa54b0000  sh          $t3, 0x0($t2)
    ctx->pc = 0x25caf4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25caf8: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x25caf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25cafc: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x25cafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb00: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x25CB00u;
    {
        const bool branch_taken_0x25cb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB00u;
        // 0x25cb04: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb00) {
            ctx->pc = 0x25C968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c968;
        }
    }
    ctx->pc = 0x25CB08u;
label_25cb08:
    // 0x25cb08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25cb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cb0c:
    // 0x25cb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25cb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25cb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25cb14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25cb14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB18u;
        // 0x25cb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CB20u;
}
