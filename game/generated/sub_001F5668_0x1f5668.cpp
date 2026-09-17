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

// Function: sub_001F5668
// Address: 0x1f5668 - 0x1f5b78
void sub_001F5668_0x1f5668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5668_0x1f5668");
#endif

    switch (ctx->pc) {
        case 0x1f5868u: goto label_1f5868;
        case 0x1f5898u: goto label_1f5898;
        case 0x1f58a4u: goto label_1f58a4;
        case 0x1f58c4u: goto label_1f58c4;
        case 0x1f58d8u: goto label_1f58d8;
        case 0x1f5904u: goto label_1f5904;
        case 0x1f5928u: goto label_1f5928;
        case 0x1f5940u: goto label_1f5940;
        case 0x1f5950u: goto label_1f5950;
        case 0x1f5980u: goto label_1f5980;
        case 0x1f598cu: goto label_1f598c;
        case 0x1f5b48u: goto label_1f5b48;
        default: break;
    }

    ctx->pc = 0x1f5668u;

    // 0x1f5668: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f566c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5678: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f5678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f567c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f567cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5680: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1f5680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1f5684: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f5684u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f568c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5690: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5698: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f5698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f569c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f56a0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f56a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f56a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f56a8: 0x92250202  lbu         $a1, 0x202($s1)
    ctx->pc = 0x1f56a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 514)));
    // 0x1f56ac: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F56ACu;
    {
        const bool branch_taken_0x1f56ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56ACu;
        // 0x1f56b0: 0x8e33005c  lw          $s3, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56ac) {
            ctx->pc = 0x1F56D0u;
            goto label_1f56d0;
        }
    }
    ctx->pc = 0x1F56B4u;
    // 0x1f56b4: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1f56b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1f56b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f56bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F56BCu;
    {
        const bool branch_taken_0x1f56bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56BCu;
        // 0x1f56c0: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56bc) {
            ctx->pc = 0x1F56D0u;
            goto label_1f56d0;
        }
    }
    ctx->pc = 0x1F56C4u;
    // 0x1f56c4: 0x9622014e  lhu         $v0, 0x14E($s1)
    ctx->pc = 0x1f56c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f56c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f56cc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1f56ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_1f56d0:
    // 0x1f56d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f56d4: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F56D4u;
    {
        const bool branch_taken_0x1f56d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f56d4) {
            ctx->pc = 0x1F56D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56D4u;
            // 0x1f56d8: 0x86220148  lh          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5700u;
            goto label_1f5700;
        }
    }
    ctx->pc = 0x1F56DCu;
    // 0x1f56dc: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1f56dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1f56e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f56e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F56E4u;
    {
        const bool branch_taken_0x1f56e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56E4u;
        // 0x1f56e8: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56e4) {
            ctx->pc = 0x1F56F8u;
            goto label_1f56f8;
        }
    }
    ctx->pc = 0x1F56ECu;
    // 0x1f56ec: 0x9622014e  lhu         $v0, 0x14E($s1)
    ctx->pc = 0x1f56ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f56f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f56f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f56f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1f56f8:
    // 0x1f56f8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1f56f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f56fc: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x1f56fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
label_1f5700:
    // 0x1f5700: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5700u;
    {
        const bool branch_taken_0x1f5700 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5700u;
        // 0x1f5704: 0x96270148  lhu         $a3, 0x148($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5700) {
            ctx->pc = 0x1F5738u;
            goto label_1f5738;
        }
    }
    ctx->pc = 0x1F5708u;
    // 0x1f5708: 0x92630202  lbu         $v1, 0x202($s3)
    ctx->pc = 0x1f5708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 514)));
    // 0x1f570c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5710: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5710u;
    {
        const bool branch_taken_0x1f5710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5710u;
        // 0x1f5714: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5710) {
            ctx->pc = 0x1F573Cu;
            goto label_1f573c;
        }
    }
    ctx->pc = 0x1F5718u;
    // 0x1f5718: 0x9662021a  lhu         $v0, 0x21A($s3)
    ctx->pc = 0x1f5718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 538)));
    // 0x1f571c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5720: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5720u;
    {
        const bool branch_taken_0x1f5720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5720u;
        // 0x1f5724: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5720) {
            ctx->pc = 0x1F5734u;
            goto label_1f5734;
        }
    }
    ctx->pc = 0x1F5728u;
    // 0x1f5728: 0x9662014e  lhu         $v0, 0x14E($s3)
    ctx->pc = 0x1f5728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 334)));
    // 0x1f572c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f572cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5730: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f5730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1f5734:
    // 0x1f5734: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1f5734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1f5738:
    // 0x1f5738: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f573c:
    // 0x1f573c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F573Cu;
    {
        const bool branch_taken_0x1f573c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F573Cu;
        // 0x1f5740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f573c) {
            ctx->pc = 0x1F5760u;
            goto label_1f5760;
        }
    }
    ctx->pc = 0x1F5744u;
    // 0x1f5744: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1f5744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1f5748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f574c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F574Cu;
    {
        const bool branch_taken_0x1f574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F574Cu;
        // 0x1f5750: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f574c) {
            ctx->pc = 0x1F5760u;
            goto label_1f5760;
        }
    }
    ctx->pc = 0x1F5754u;
    // 0x1f5754: 0x9622014e  lhu         $v0, 0x14E($s1)
    ctx->pc = 0x1f5754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f5758: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f575c: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_1f5760:
    // 0x1f5760: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f5760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5764: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5764u;
    {
        const bool branch_taken_0x1f5764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5764u;
        // 0x1f5768: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5764) {
            ctx->pc = 0x1F5790u;
            goto label_1f5790;
        }
    }
    ctx->pc = 0x1F576Cu;
    // 0x1f576c: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1f576cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1f5770: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5774: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5774u;
    {
        const bool branch_taken_0x1f5774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5774u;
        // 0x1f5778: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5774) {
            ctx->pc = 0x1F5788u;
            goto label_1f5788;
        }
    }
    ctx->pc = 0x1F577Cu;
    // 0x1f577c: 0x9622014e  lhu         $v0, 0x14E($s1)
    ctx->pc = 0x1f577cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f5780: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5784: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f5784u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1f5788:
    // 0x1f5788: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f578c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1f578cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1f5790:
    // 0x1f5790: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5790u;
    {
        const bool branch_taken_0x1f5790 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5790u;
        // 0x1f5794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5790) {
            ctx->pc = 0x1F57CCu;
            goto label_1f57cc;
        }
    }
    ctx->pc = 0x1F5798u;
    // 0x1f5798: 0x92630202  lbu         $v1, 0x202($s3)
    ctx->pc = 0x1f5798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 514)));
    // 0x1f579c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f57a0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F57A0u;
    {
        const bool branch_taken_0x1f57a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57A0u;
        // 0x1f57a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57a0) {
            ctx->pc = 0x1F57CCu;
            goto label_1f57cc;
        }
    }
    ctx->pc = 0x1F57A8u;
    // 0x1f57a8: 0x9662021a  lhu         $v0, 0x21A($s3)
    ctx->pc = 0x1f57a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 538)));
    // 0x1f57ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f57acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f57b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F57B0u;
    {
        const bool branch_taken_0x1f57b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57B0u;
        // 0x1f57b4: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57b0) {
            ctx->pc = 0x1F57C4u;
            goto label_1f57c4;
        }
    }
    ctx->pc = 0x1F57B8u;
    // 0x1f57b8: 0x9662014e  lhu         $v0, 0x14E($s3)
    ctx->pc = 0x1f57b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 334)));
    // 0x1f57bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f57c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f57c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1f57c4:
    // 0x1f57c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f57c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f57cc:
    // 0x1f57cc: 0xc4a021  addu        $s4, $a2, $a0
    ctx->pc = 0x1f57ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f57d0: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F57D0u;
    {
        const bool branch_taken_0x1f57d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57D0u;
        // 0x1f57d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57d0) {
            ctx->pc = 0x1F57F4u;
            goto label_1f57f4;
        }
    }
    ctx->pc = 0x1F57D8u;
    // 0x1f57d8: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1f57d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1f57dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f57e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F57E0u;
    {
        const bool branch_taken_0x1f57e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57E0u;
        // 0x1f57e4: 0x3b403  sra         $s6, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57e0) {
            ctx->pc = 0x1F57F4u;
            goto label_1f57f4;
        }
    }
    ctx->pc = 0x1F57E8u;
    // 0x1f57e8: 0x9622014e  lhu         $v0, 0x14E($s1)
    ctx->pc = 0x1f57e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f57ec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f57f0: 0x3b403  sra         $s6, $v1, 16
    ctx->pc = 0x1f57f0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 16));
label_1f57f4:
    // 0x1f57f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f57f8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F57F8u;
    {
        const bool branch_taken_0x1f57f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57F8u;
        // 0x1f57fc: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57f8) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F5800u;
    // 0x1f5800: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1f5800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1f5804: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5808: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5808u;
    {
        const bool branch_taken_0x1f5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5808u;
        // 0x1f580c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5808) {
            ctx->pc = 0x1F581Cu;
            goto label_1f581c;
        }
    }
    ctx->pc = 0x1F5810u;
    // 0x1f5810: 0x9622014e  lhu         $v0, 0x14E($s1)
    ctx->pc = 0x1f5810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f5814: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5818: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f5818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1f581c:
    // 0x1f581c: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x1f581cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f5820: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1f5820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1f5824:
    // 0x1f5824: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5824u;
    {
        const bool branch_taken_0x1f5824 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5824) {
            ctx->pc = 0x1F5828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5824u;
            // 0x1f5828: 0xa220020d  sb          $zero, 0x20D($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 525), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5860u;
            goto label_1f5860;
        }
    }
    ctx->pc = 0x1F582Cu;
    // 0x1f582c: 0x92630202  lbu         $v1, 0x202($s3)
    ctx->pc = 0x1f582cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 514)));
    // 0x1f5830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5834: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5834u;
    {
        const bool branch_taken_0x1f5834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5834) {
            ctx->pc = 0x1F5838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5834u;
            // 0x1f5838: 0xa220020d  sb          $zero, 0x20D($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 525), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5860u;
            goto label_1f5860;
        }
    }
    ctx->pc = 0x1F583Cu;
    // 0x1f583c: 0x9662021a  lhu         $v0, 0x21A($s3)
    ctx->pc = 0x1f583cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 538)));
    // 0x1f5840: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5844: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5844u;
    {
        const bool branch_taken_0x1f5844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5844u;
        // 0x1f5848: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5844) {
            ctx->pc = 0x1F5858u;
            goto label_1f5858;
        }
    }
    ctx->pc = 0x1F584Cu;
    // 0x1f584c: 0x9662014e  lhu         $v0, 0x14E($s3)
    ctx->pc = 0x1f584cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 334)));
    // 0x1f5850: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f5850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f5854: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f5854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1f5858:
    // 0x1f5858: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f585c: 0xa220020d  sb          $zero, 0x20D($s1)
    ctx->pc = 0x1f585cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 525), (uint8_t)GPR_U32(ctx, 0));
label_1f5860:
    // 0x1f5860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5864: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f5864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1f5868:
    // 0x1f5868: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f586c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f5870: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f5874: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5878: 0x24500520  addiu       $s0, $v0, 0x520
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
    // 0x1f587c: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x1f587cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1f5880: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5880u;
    {
        const bool branch_taken_0x1f5880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5880u;
        // 0x1f5884: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5880) {
            ctx->pc = 0x1F58A4u;
            goto label_1f58a4;
        }
    }
    ctx->pc = 0x1F5888u;
    // 0x1f5888: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x1f5888u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f588c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5890: 0xc07d032  jal         func_1F40C8
    ctx->pc = 0x1F5890u;
    SET_GPR_U32(ctx, 31, 0x1F5898u);
    ctx->pc = 0x1F5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5890u;
    // 0x1f5894: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F40C8u, 0x1F5890u, 0x1F5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5898u;
label_1f5898:
    // 0x1f5898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f589c: 0xc07d16c  jal         func_1F45B0
    ctx->pc = 0x1F589Cu;
    SET_GPR_U32(ctx, 31, 0x1F58A4u);
    ctx->pc = 0x1F58A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F589Cu;
    // 0x1f58a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45B0u, 0x1F589Cu, 0x1F58A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58A4u;
label_1f58a4:
    // 0x1f58a4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f58a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f58a8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F58A8u;
    {
        const bool branch_taken_0x1f58a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58A8u;
        // 0x1f58ac: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58a8) {
            ctx->pc = 0x1F5868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5868;
        }
    }
    ctx->pc = 0x1F58B0u;
    // 0x1f58b0: 0x922201ec  lbu         $v0, 0x1EC($s1)
    ctx->pc = 0x1f58b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1f58b4: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F58B4u;
    {
        const bool branch_taken_0x1f58b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f58b4) {
            ctx->pc = 0x1F58B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F58B4u;
            // 0x1f58b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5944u;
            goto label_1f5944;
        }
    }
    ctx->pc = 0x1F58BCu;
    // 0x1f58bc: 0xc07d122  jal         func_1F4488
    ctx->pc = 0x1F58BCu;
    SET_GPR_U32(ctx, 31, 0x1F58C4u);
    ctx->pc = 0x1F58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58BCu;
    // 0x1f58c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4488u, 0x1F58BCu, 0x1F58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58C4u;
label_1f58c4:
    // 0x1f58c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f58c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f58c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58d0: 0xc080232  jal         func_2008C8
    ctx->pc = 0x1F58D0u;
    SET_GPR_U32(ctx, 31, 0x1F58D8u);
    ctx->pc = 0x1F58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58D0u;
    // 0x1f58d4: 0xae3005c0  sw          $s0, 0x5C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2008C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008C8u, 0x1F58D0u, 0x1F58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58D8u;
label_1f58d8:
    // 0x1f58d8: 0x922201ed  lbu         $v0, 0x1ED($s1)
    ctx->pc = 0x1f58d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 493)));
    // 0x1f58dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F58DCu;
    {
        const bool branch_taken_0x1f58dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58DCu;
        // 0x1f58e0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58dc) {
            ctx->pc = 0x1F5918u;
            goto label_1f5918;
        }
    }
    ctx->pc = 0x1F58E4u;
    // 0x1f58e4: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x1f58e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f58e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f58ec: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1f58ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f58f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F58F0u;
    {
        const bool branch_taken_0x1f58f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f58f0) {
            ctx->pc = 0x1F58F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F58F0u;
            // 0x1f58f4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F58F8u;
            goto label_1f58f8;
        }
    }
    ctx->pc = 0x1F58F8u;
label_1f58f8:
    // 0x1f58f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58fc: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1F58FCu;
    SET_GPR_U32(ctx, 31, 0x1F5904u);
    ctx->pc = 0x1F5900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58FCu;
    // 0x1f5900: 0x34058023  ori         $a1, $zero, 0x8023 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32803);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1F58FCu, 0x1F5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5904u;
label_1f5904:
    // 0x1f5904: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f5908: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f590c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F590Cu;
    {
        const bool branch_taken_0x1f590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F590Cu;
        // 0x1f5910: 0xae220314  sw          $v0, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f590c) {
            ctx->pc = 0x1F5930u;
            goto label_1f5930;
        }
    }
    ctx->pc = 0x1F5914u;
    // 0x1f5914: 0x0  nop
    ctx->pc = 0x1f5914u;
    // NOP
label_1f5918:
    // 0x1f5918: 0x8e6600c4  lw          $a2, 0xC4($s3)
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x1f591c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5920: 0xc09fa6c  jal         func_27E9B0
    ctx->pc = 0x1F5920u;
    SET_GPR_U32(ctx, 31, 0x1F5928u);
    ctx->pc = 0x1F5924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5920u;
    // 0x1f5924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E9B0u, 0x1F5920u, 0x1F5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5928u;
label_1f5928:
    // 0x1f5928: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f5928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f592c: 0xae230314  sw          $v1, 0x314($s1)
    ctx->pc = 0x1f592cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
label_1f5930:
    // 0x1f5930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f5930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5938: 0xc0a0bc4  jal         func_282F10
    ctx->pc = 0x1F5938u;
    SET_GPR_U32(ctx, 31, 0x1F5940u);
    ctx->pc = 0x1F593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5938u;
    // 0x1f593c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282F10u, 0x1F5938u, 0x1F5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5940u;
label_1f5940:
    // 0x1f5940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5944:
    // 0x1f5944: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5948: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f5948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f594c: 0x0  nop
    ctx->pc = 0x1f594cu;
    // NOP
label_1f5950:
    // 0x1f5950: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f5954: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f5958: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f595c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5960: 0x24500520  addiu       $s0, $v0, 0x520
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
    // 0x1f5964: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x1f5964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1f5968: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F5968u;
    {
        const bool branch_taken_0x1f5968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5968u;
        // 0x1f596c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5968) {
            ctx->pc = 0x1F59B8u;
            goto label_1f59b8;
        }
    }
    ctx->pc = 0x1F5970u;
    // 0x1f5970: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x1f5970u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5978: 0xc07d09a  jal         func_1F4268
    ctx->pc = 0x1F5978u;
    SET_GPR_U32(ctx, 31, 0x1F5980u);
    ctx->pc = 0x1F597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5978u;
    // 0x1f597c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4268u, 0x1F5978u, 0x1F5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5980u;
label_1f5980:
    // 0x1f5980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5984: 0xc07d16c  jal         func_1F45B0
    ctx->pc = 0x1F5984u;
    SET_GPR_U32(ctx, 31, 0x1F598Cu);
    ctx->pc = 0x1F5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5984u;
    // 0x1f5988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45B0u, 0x1F5984u, 0x1F598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F598Cu;
label_1f598c:
    // 0x1f598c: 0x96220228  lhu         $v0, 0x228($s1)
    ctx->pc = 0x1f598cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x1f5990: 0x96030040  lhu         $v1, 0x40($s0)
    ctx->pc = 0x1f5990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f5994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5998: 0xa6220228  sh          $v0, 0x228($s1)
    ctx->pc = 0x1f5998u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f599c: 0x86030042  lh          $v1, 0x42($s0)
    ctx->pc = 0x1f599cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x1f59a0: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1f59a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1f59a4: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F59A4u;
    {
        const bool branch_taken_0x1f59a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59A4u;
        // 0x1f59a8: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59a4) {
            ctx->pc = 0x1F59BCu;
            goto label_1f59bc;
        }
    }
    ctx->pc = 0x1F59ACu;
    // 0x1f59ac: 0x926201b1  lbu         $v0, 0x1B1($s3)
    ctx->pc = 0x1f59acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 433)));
    // 0x1f59b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F59B0u;
    {
        const bool branch_taken_0x1f59b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f59b0) {
            ctx->pc = 0x1F59B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F59B0u;
            // 0x1f59b4: 0xa237020d  sb          $s7, 0x20D($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 525), (uint8_t)GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F59B8u;
            goto label_1f59b8;
        }
    }
    ctx->pc = 0x1F59B8u;
label_1f59b8:
    // 0x1f59b8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f59b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f59bc:
    // 0x1f59bc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1F59BCu;
    {
        const bool branch_taken_0x1f59bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59BCu;
        // 0x1f59c0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59bc) {
            ctx->pc = 0x1F5950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5950;
        }
    }
    ctx->pc = 0x1F59C4u;
    // 0x1f59c4: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x1f59c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f59c8: 0x54e0001d  bnel        $a3, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F59C8u;
    {
        const bool branch_taken_0x1f59c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f59c8) {
            ctx->pc = 0x1F59CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F59C8u;
            // 0x1f59cc: 0x8e25069c  lw          $a1, 0x69C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A40u;
            goto label_1f5a40;
        }
    }
    ctx->pc = 0x1F59D0u;
    // 0x1f59d0: 0x8e3e069c  lw          $fp, 0x69C($s1)
    ctx->pc = 0x1f59d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1f59d4: 0x2953021  addu        $a2, $s4, $s5
    ctx->pc = 0x1f59d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1f59d8: 0x8f829738  lw          $v0, -0x68C8($gp)
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940472)));
    // 0x1f59dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F59DCu;
    {
        const bool branch_taken_0x1f59dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59DCu;
        // 0x1f59e0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59dc) {
            ctx->pc = 0x1F5A00u;
            goto label_1f5a00;
        }
    }
    ctx->pc = 0x1F59E4u;
    // 0x1f59e4: 0x8f829748  lw          $v0, -0x68B8($gp)
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940488)));
    // 0x1f59e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F59E8u;
    {
        const bool branch_taken_0x1f59e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f59e8) {
            ctx->pc = 0x1F59ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F59E8u;
            // 0x1f59ec: 0x96220228  lhu         $v0, 0x228($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A04u;
            goto label_1f5a04;
        }
    }
    ctx->pc = 0x1F59F0u;
    // 0x1f59f0: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1f59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1f59f4: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1f59f8: 0xae22069c  sw          $v0, 0x69C($s1)
    ctx->pc = 0x1f59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
    // 0x1f59fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f59fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a00:
    // 0x1f5a00: 0x96220228  lhu         $v0, 0x228($s1)
    ctx->pc = 0x1f5a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
label_1f5a04:
    // 0x1f5a04: 0x2d51821  addu        $v1, $s6, $s5
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1f5a08: 0x922401ec  lbu         $a0, 0x1EC($s1)
    ctx->pc = 0x1f5a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1f5a0c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f5a10: 0xa626022a  sh          $a2, 0x22A($s1)
    ctx->pc = 0x1f5a10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f5a14: 0xa6220228  sh          $v0, 0x228($s1)
    ctx->pc = 0x1f5a14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f5a18: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5A18u;
    {
        const bool branch_taken_0x1f5a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A18u;
        // 0x1f5a1c: 0xa623022c  sh          $v1, 0x22C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a18) {
            ctx->pc = 0x1F5A24u;
            goto label_1f5a24;
        }
    }
    ctx->pc = 0x1F5A20u;
    // 0x1f5a20: 0xa6350162  sh          $s5, 0x162($s1)
    ctx->pc = 0x1f5a20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 21));
label_1f5a24:
    // 0x1f5a24: 0x96220160  lhu         $v0, 0x160($s1)
    ctx->pc = 0x1f5a24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1f5a28: 0xbe182a  slt         $v1, $a1, $fp
    ctx->pc = 0x1f5a28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1f5a2c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f5a30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5A30u;
    {
        const bool branch_taken_0x1f5a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A30u;
        // 0x1f5a34: 0xa6220160  sh          $v0, 0x160($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a30) {
            ctx->pc = 0x1F5A40u;
            goto label_1f5a40;
        }
    }
    ctx->pc = 0x1F5A38u;
    // 0x1f5a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5a3c: 0xa222018d  sb          $v0, 0x18D($s1)
    ctx->pc = 0x1f5a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 397), (uint8_t)GPR_U32(ctx, 2));
label_1f5a40:
    // 0x1f5a40: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5A40u;
    {
        const bool branch_taken_0x1f5a40 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1f5a40) {
            ctx->pc = 0x1F5A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5A40u;
            // 0x1f5a44: 0x8e2306a0  lw          $v1, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A54u;
            goto label_1f5a54;
        }
    }
    ctx->pc = 0x1F5A48u;
    // 0x1f5a48: 0xae20069c  sw          $zero, 0x69C($s1)
    ctx->pc = 0x1f5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 0));
    // 0x1f5a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a50: 0x8e2306a0  lw          $v1, 0x6A0($s1)
    ctx->pc = 0x1f5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1f5a54:
    // 0x1f5a54: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1f5a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f5a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5A58u;
    {
        const bool branch_taken_0x1f5a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a58) {
            ctx->pc = 0x1F5A68u;
            goto label_1f5a68;
        }
    }
    ctx->pc = 0x1F5A60u;
    // 0x1f5a60: 0xae23069c  sw          $v1, 0x69C($s1)
    ctx->pc = 0x1f5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 3));
    // 0x1f5a64: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f5a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a68:
    // 0x1f5a68: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5A68u;
    {
        const bool branch_taken_0x1f5a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a68) {
            ctx->pc = 0x1F5A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5A68u;
            // 0x1f5a6c: 0x922201fc  lbu         $v0, 0x1FC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A9Cu;
            goto label_1f5a9c;
        }
    }
    ctx->pc = 0x1F5A70u;
    // 0x1f5a70: 0x13c50009  beq         $fp, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5A70u;
    {
        const bool branch_taken_0x1f5a70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A70u;
        // 0x1f5a74: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a70) {
            ctx->pc = 0x1F5A98u;
            goto label_1f5a98;
        }
    }
    ctx->pc = 0x1F5A78u;
    // 0x1f5a78: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x1f5a7c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f5a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f5a80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5A80u;
    {
        const bool branch_taken_0x1f5a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a80) {
            ctx->pc = 0x1F5A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5A80u;
            // 0x1f5a84: 0x922201fc  lbu         $v0, 0x1FC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A9Cu;
            goto label_1f5a9c;
        }
    }
    ctx->pc = 0x1F5A88u;
    // 0x1f5a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5a8c: 0xa22201fc  sb          $v0, 0x1FC($s1)
    ctx->pc = 0x1f5a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 508), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5a90: 0xa26201fd  sb          $v0, 0x1FD($s3)
    ctx->pc = 0x1f5a90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 509), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5a94: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x1f5a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1f5a98:
    // 0x1f5a98: 0x922201fc  lbu         $v0, 0x1FC($s1)
    ctx->pc = 0x1f5a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 508)));
label_1f5a9c:
    // 0x1f5a9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5A9Cu;
    {
        const bool branch_taken_0x1f5a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a9c) {
            ctx->pc = 0x1F5ABCu;
            goto label_1f5abc;
        }
    }
    ctx->pc = 0x1F5AA4u;
    // 0x1f5aa4: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x1f5aa8: 0x90430046  lbu         $v1, 0x46($v0)
    ctx->pc = 0x1f5aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x1f5aac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5AACu;
    {
        const bool branch_taken_0x1f5aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AACu;
        // 0x1f5ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5aac) {
            ctx->pc = 0x1F5ABCu;
            goto label_1f5abc;
        }
    }
    ctx->pc = 0x1F5AB4u;
    // 0x1f5ab4: 0xa22001ee  sb          $zero, 0x1EE($s1)
    ctx->pc = 0x1f5ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 494), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5ab8: 0xa22201ef  sb          $v0, 0x1EF($s1)
    ctx->pc = 0x1f5ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 495), (uint8_t)GPR_U32(ctx, 2));
label_1f5abc:
    // 0x1f5abc: 0x14e00015  bnez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F5ABCu;
    {
        const bool branch_taken_0x1f5abc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ABCu;
        // 0x1f5ac0: 0x2ce20009  sltiu       $v0, $a3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5abc) {
            ctx->pc = 0x1F5B14u;
            goto label_1f5b14;
        }
    }
    ctx->pc = 0x1F5AC4u;
    // 0x1f5ac4: 0x922201ec  lbu         $v0, 0x1EC($s1)
    ctx->pc = 0x1f5ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1f5ac8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5AC8u;
    {
        const bool branch_taken_0x1f5ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ac8) {
            ctx->pc = 0x1F5B10u;
            goto label_1f5b10;
        }
    }
    ctx->pc = 0x1F5AD0u;
    // 0x1f5ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5ad4: 0x153400  sll         $a2, $s5, 16
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x1f5ad8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f5ad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5adc: 0x8c8505c0  lw          $a1, 0x5C0($a0)
    ctx->pc = 0x1f5adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1472)));
    // 0x1f5ae0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1f5ae0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1f5ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5aec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f5aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5af0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f5af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5af4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f5af4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5af8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f5af8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5afc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1f5afcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5b00: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f5b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5b04: 0x807cfdc  j           func_1F3F70
    ctx->pc = 0x1F5B04u;
    ctx->pc = 0x1F5B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B04u;
    // 0x1f5b08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3F70u, 0x1F5B04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F5B0Cu;
    // 0x1f5b0c: 0x0  nop
    ctx->pc = 0x1f5b0cu;
    // NOP
label_1f5b10:
    // 0x1f5b10: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x1f5b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f5b14:
    // 0x1f5b14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5B14u;
    {
        const bool branch_taken_0x1f5b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B14u;
        // 0x1f5b18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b14) {
            ctx->pc = 0x1F5B2Cu;
            goto label_1f5b2c;
        }
    }
    ctx->pc = 0x1F5B1Cu;
    // 0x1f5b1c: 0x2ce20005  sltiu       $v0, $a3, 0x5
    ctx->pc = 0x1f5b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f5b20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5B20u;
    {
        const bool branch_taken_0x1f5b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B20u;
        // 0x1f5b24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b20) {
            ctx->pc = 0x1F5B2Cu;
            goto label_1f5b2c;
        }
    }
    ctx->pc = 0x1F5B28u;
    // 0x1f5b28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b2c:
    // 0x1f5b2c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5B2Cu;
    {
        const bool branch_taken_0x1f5b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B2Cu;
        // 0x1f5b30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b2c) {
            ctx->pc = 0x1F5B4Cu;
            goto label_1f5b4c;
        }
    }
    ctx->pc = 0x1F5B34u;
    // 0x1f5b34: 0x922201ec  lbu         $v0, 0x1EC($s1)
    ctx->pc = 0x1f5b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1f5b38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5B38u;
    {
        const bool branch_taken_0x1f5b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b38) {
            ctx->pc = 0x1F5B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B38u;
            // 0x1f5b3c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B50u;
            goto label_1f5b50;
        }
    }
    ctx->pc = 0x1F5B40u;
    // 0x1f5b40: 0xc08e970  jal         func_23A5C0
    ctx->pc = 0x1F5B40u;
    SET_GPR_U32(ctx, 31, 0x1F5B48u);
    ctx->pc = 0x1F5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B40u;
    // 0x1f5b44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5C0u, 0x1F5B40u, 0x1F5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B48u;
label_1f5b48:
    // 0x1f5b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5b4c:
    // 0x1f5b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f5b50:
    // 0x1f5b50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5b54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f5b54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5b58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f5b58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5b5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f5b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5b60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f5b60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5b64: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f5b64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5b68: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1f5b68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5b6c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f5b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B70u;
        // 0x1f5b74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5B78u;
}
