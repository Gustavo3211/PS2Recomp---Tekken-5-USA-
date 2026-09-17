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

// Function: sub_004B0620
// Address: 0x4b0620 - 0x4b09f0
void sub_004B0620_0x4b0620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0620_0x4b0620");
#endif

    switch (ctx->pc) {
        case 0x4b0980u: goto label_4b0980;
        default: break;
    }

    ctx->pc = 0x4b0620u;

    // 0x4b0620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0624: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b0624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b0628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b062c: 0x24690d30  addiu       $t1, $v1, 0xD30
    ctx->pc = 0x4b062cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b0630: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4b0630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0634: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4b0634u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0638: 0x850201b6  lh          $v0, 0x1B6($t0)
    ctx->pc = 0x4b0638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 438)));
    // 0x4b063c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b063cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b0640: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4b0640u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0644: 0x24e70d34  addiu       $a3, $a3, 0xD34
    ctx->pc = 0x4b0644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3380));
    // 0x4b0648: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b064c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4b064cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D34u));
    // 0x4b0650: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b0654: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b0654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b0658: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b0658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b065c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b065cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b0660: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b0664: 0x85020160  lh          $v0, 0x160($t0)
    ctx->pc = 0x4b0664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x4b0668: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4b0668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b066c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0670: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b0670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b0674: 0x30630180  andi        $v1, $v1, 0x180
    ctx->pc = 0x4b0674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)384);
    // 0x4b0678: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b0678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b067c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b067cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b0680: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4b0680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4b0684: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b0684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b0688: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4b0688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b068c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b068cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b0690: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x4b0690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x4b0694: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0698: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4b0698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b069c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b069cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b06a0: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x4b06a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b06a4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b06a8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b06a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b06ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B06ACu;
    {
        const bool branch_taken_0x4b06ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06ACu;
        // 0x4b06b0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b06ac) {
            ctx->pc = 0x4B06C0u;
            goto label_4b06c0;
        }
    }
    ctx->pc = 0x4B06B4u;
    // 0x4b06b4: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x4b06b8: 0xa4600160  sh          $zero, 0x160($v1)
    ctx->pc = 0x4b06b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b06bc: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x4b06bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4b06c0:
    // 0x4b06c0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b06c4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4b06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b06c8: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x4b06c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x4b06cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b06ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b06d0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b06d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b06d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b06d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b06d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b06dc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b06e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b06e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b06e4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4b06e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b06e8: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4b06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4b06ec: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b06ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b06f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b06f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b06f4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b06f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b06f8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4b06f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b06fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0700: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0700u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b0704: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B0704u;
    {
        const bool branch_taken_0x4b0704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4B0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0704u;
        // 0x4b0708: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0704) {
            ctx->pc = 0x4B0748u;
            goto label_4b0748;
        }
    }
    ctx->pc = 0x4B070Cu;
    // 0x4b070c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B070Cu;
    {
        const bool branch_taken_0x4b070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b070c) {
            ctx->pc = 0x4B0710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B070Cu;
            // 0x4b0710: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0728u;
            goto label_4b0728;
        }
    }
    ctx->pc = 0x4B0714u;
    // 0x4b0714: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B0714u;
    {
        const bool branch_taken_0x4b0714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0714u;
        // 0x4b0718: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0714) {
            ctx->pc = 0x4B0740u;
            goto label_4b0740;
        }
    }
    ctx->pc = 0x4B071Cu;
    // 0x4b071c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B071Cu;
    {
        const bool branch_taken_0x4b071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b071c) {
            ctx->pc = 0x4B0770u;
            goto label_4b0770;
        }
    }
    ctx->pc = 0x4B0724u;
    // 0x4b0724: 0x0  nop
    ctx->pc = 0x4b0724u;
    // NOP
label_4b0728:
    // 0x4b0728: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0728u;
    {
        const bool branch_taken_0x4b0728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0728u;
        // 0x4b072c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0728) {
            ctx->pc = 0x4B0758u;
            goto label_4b0758;
        }
    }
    ctx->pc = 0x4B0730u;
    // 0x4b0730: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0730u;
    {
        const bool branch_taken_0x4b0730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0730u;
        // 0x4b0734: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0730) {
            ctx->pc = 0x4B0768u;
            goto label_4b0768;
        }
    }
    ctx->pc = 0x4B0738u;
    // 0x4b0738: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0738u;
    {
        const bool branch_taken_0x4b0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0738) {
            ctx->pc = 0x4B0770u;
            goto label_4b0770;
        }
    }
    ctx->pc = 0x4B0740u;
label_4b0740:
    // 0x4b0740: 0x812c27a  j           func_4B09E8
    ctx->pc = 0x4B0740u;
    ctx->pc = 0x4B0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0740u;
    // 0x4b0744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09E8u;
    goto label_4b09e8;
    ctx->pc = 0x4B0748u;
label_4b0748:
    // 0x4b0748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b074c: 0x812c1de  j           func_4B0778
    ctx->pc = 0x4B074Cu;
    ctx->pc = 0x4B0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B074Cu;
    // 0x4b0750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0778u;
    goto label_4b0778;
    ctx->pc = 0x4B0754u;
    // 0x4b0754: 0x0  nop
    ctx->pc = 0x4b0754u;
    // NOP
label_4b0758:
    // 0x4b0758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b075c: 0x812c1fa  j           func_4B07E8
    ctx->pc = 0x4B075Cu;
    ctx->pc = 0x4B0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B075Cu;
    // 0x4b0760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B07E8u;
    goto label_4b07e8;
    ctx->pc = 0x4B0764u;
    // 0x4b0764: 0x0  nop
    ctx->pc = 0x4b0764u;
    // NOP
label_4b0768:
    // 0x4b0768: 0x812c27a  j           func_4B09E8
    ctx->pc = 0x4B0768u;
    ctx->pc = 0x4B076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0768u;
    // 0x4b076c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09E8u;
    goto label_4b09e8;
    ctx->pc = 0x4B0770u;
label_4b0770:
    // 0x4b0770: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0770u;
        // 0x4b0774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0778u;
label_4b0778:
    // 0x4b0778: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b077c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b077cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0784: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b0784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b0788: 0x8c470d60  lw          $a3, 0xD60($v0)
    ctx->pc = 0x4b0788u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b078c: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b078cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b0790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0794: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b0794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0798: 0x84e20160  lh          $v0, 0x160($a3)
    ctx->pc = 0x4b0798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x4b079c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b07a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b07a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b07a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b07a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b07ac: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b07acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b07b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b07b4: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b07b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b07b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B07B8u;
    {
        const bool branch_taken_0x4b07b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07B8u;
        // 0x4b07bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b07b8) {
            ctx->pc = 0x4B07D0u;
            goto label_4b07d0;
        }
    }
    ctx->pc = 0x4B07C0u;
    // 0x4b07c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B07C0u;
    {
        const bool branch_taken_0x4b07c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07C0u;
        // 0x4b07c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b07c0) {
            ctx->pc = 0x4B07E0u;
            goto label_4b07e0;
        }
    }
    ctx->pc = 0x4B07C8u;
    // 0x4b07c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B07C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07C8u;
        // 0x4b07cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B07C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B07D0u;
label_4b07d0:
    // 0x4b07d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b07d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b07d4: 0x812c24c  j           func_4B0930
    ctx->pc = 0x4B07D4u;
    ctx->pc = 0x4B07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B07D4u;
    // 0x4b07d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0930u;
    goto label_4b0930;
    ctx->pc = 0x4B07DCu;
    // 0x4b07dc: 0x0  nop
    ctx->pc = 0x4b07dcu;
    // NOP
label_4b07e0:
    // 0x4b07e0: 0x812c274  j           func_4B09D0
    ctx->pc = 0x4B07E0u;
    ctx->pc = 0x4B07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B07E0u;
    // 0x4b07e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09D0u;
    goto label_4b09d0;
    ctx->pc = 0x4B07E8u;
label_4b07e8:
    // 0x4b07e8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b07ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b07ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b07f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b07f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b07f4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b07f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b07f8: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b07f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b07fc: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0800: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b0800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0804: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b0804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0808: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4b0808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4b080c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b080cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0810: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0814: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b0814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b0818: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b081c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b081cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b0820: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b0820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b0824: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0828: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0828u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b082c: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B082Cu;
    {
        const bool branch_taken_0x4b082c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B082Cu;
        // 0x4b0830: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b082c) {
            ctx->pc = 0x4B0870u;
            goto label_4b0870;
        }
    }
    ctx->pc = 0x4B0834u;
    // 0x4b0834: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0834u;
    {
        const bool branch_taken_0x4b0834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0834) {
            ctx->pc = 0x4B0838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0834u;
            // 0x4b0838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0850u;
            goto label_4b0850;
        }
    }
    ctx->pc = 0x4B083Cu;
    // 0x4b083c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B083Cu;
    {
        const bool branch_taken_0x4b083c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B083Cu;
        // 0x4b0840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b083c) {
            ctx->pc = 0x4B0868u;
            goto label_4b0868;
        }
    }
    ctx->pc = 0x4B0844u;
    // 0x4b0844: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B0844u;
    {
        const bool branch_taken_0x4b0844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0844) {
            ctx->pc = 0x4B0898u;
            goto label_4b0898;
        }
    }
    ctx->pc = 0x4B084Cu;
    // 0x4b084c: 0x0  nop
    ctx->pc = 0x4b084cu;
    // NOP
label_4b0850:
    // 0x4b0850: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0850u;
    {
        const bool branch_taken_0x4b0850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0850u;
        // 0x4b0854: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0850) {
            ctx->pc = 0x4B0880u;
            goto label_4b0880;
        }
    }
    ctx->pc = 0x4B0858u;
    // 0x4b0858: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0858u;
    {
        const bool branch_taken_0x4b0858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0858u;
        // 0x4b085c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0858) {
            ctx->pc = 0x4B0890u;
            goto label_4b0890;
        }
    }
    ctx->pc = 0x4B0860u;
    // 0x4b0860: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0860u;
    {
        const bool branch_taken_0x4b0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0860) {
            ctx->pc = 0x4B0898u;
            goto label_4b0898;
        }
    }
    ctx->pc = 0x4B0868u;
label_4b0868:
    // 0x4b0868: 0x812c24c  j           func_4B0930
    ctx->pc = 0x4B0868u;
    ctx->pc = 0x4B086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0868u;
    // 0x4b086c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0930u;
    goto label_4b0930;
    ctx->pc = 0x4B0870u;
label_4b0870:
    // 0x4b0870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0874: 0x812c228  j           func_4B08A0
    ctx->pc = 0x4B0874u;
    ctx->pc = 0x4B0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0874u;
    // 0x4b0878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B08A0u;
    goto label_4b08a0;
    ctx->pc = 0x4B087Cu;
    // 0x4b087c: 0x0  nop
    ctx->pc = 0x4b087cu;
    // NOP
label_4b0880:
    // 0x4b0880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0884: 0x812c238  j           func_4B08E0
    ctx->pc = 0x4B0884u;
    ctx->pc = 0x4B0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0884u;
    // 0x4b0888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B08E0u;
    goto label_4b08e0;
    ctx->pc = 0x4B088Cu;
    // 0x4b088c: 0x0  nop
    ctx->pc = 0x4b088cu;
    // NOP
label_4b0890:
    // 0x4b0890: 0x812c26c  j           func_4B09B0
    ctx->pc = 0x4B0890u;
    ctx->pc = 0x4B0894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0890u;
    // 0x4b0894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09B0u;
    goto label_4b09b0;
    ctx->pc = 0x4B0898u;
label_4b0898:
    // 0x4b0898: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0898u;
        // 0x4b089c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B08A0u;
label_4b08a0:
    // 0x4b08a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b08a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b08a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b08ac: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b08acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b08b0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x4b08b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x4b08b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b08b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b08b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b08b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b08bc: 0xa4a60132  sh          $a2, 0x132($a1)
    ctx->pc = 0x4b08bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 306), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b08c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b08c4: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x4b08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x4b08c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b08c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b08cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b08d0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b08d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b08d4: 0x812c27a  j           func_4B09E8
    ctx->pc = 0x4B08D4u;
    ctx->pc = 0x4B08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B08D4u;
    // 0x4b08d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09E8u;
    goto label_4b09e8;
    ctx->pc = 0x4B08DCu;
    // 0x4b08dc: 0x0  nop
    ctx->pc = 0x4b08dcu;
    // NOP
label_4b08e0:
    // 0x4b08e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b08e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b08e4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b08e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b08e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b08e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b08ec: 0x24c60d60  addiu       $a2, $a2, 0xD60
    ctx->pc = 0x4b08ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4b08f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b08f4: 0x24630132  addiu       $v1, $v1, 0x132
    ctx->pc = 0x4b08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 306));
    // 0x4b08f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b08f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b08fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b0900: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0900u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0904: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b0904u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0908: 0x84a20132  lh          $v0, 0x132($a1)
    ctx->pc = 0x4b0908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 306)));
    // 0x4b090c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B090Cu;
    {
        const bool branch_taken_0x4b090c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B090Cu;
        // 0x4b0910: 0x24a30160  addiu       $v1, $a1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b090c) {
            ctx->pc = 0x4B0920u;
            goto label_4b0920;
        }
    }
    ctx->pc = 0x4B0914u;
    // 0x4b0914: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0918: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b091c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b091cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b0920:
    // 0x4b0920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0924: 0x812c27a  j           func_4B09E8
    ctx->pc = 0x4B0924u;
    ctx->pc = 0x4B0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0924u;
    // 0x4b0928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09E8u;
    goto label_4b09e8;
    ctx->pc = 0x4B092Cu;
    // 0x4b092c: 0x0  nop
    ctx->pc = 0x4b092cu;
    // NOP
label_4b0930:
    // 0x4b0930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0934: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b0934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b0938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b093c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b093cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0940: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b0944: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b0944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b0948: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x4b0948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b094c: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x4b094cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4b0950: 0xa4452334  sh          $a1, 0x2334($v0)
    ctx->pc = 0x4b0950u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4b0954: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x4b0954u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4b0958: 0xa4432336  sh          $v1, 0x2336($v0)
    ctx->pc = 0x4b0958u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4b095c: 0x9605001a  lhu         $a1, 0x1A($s0)
    ctx->pc = 0x4b095cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4b0960: 0xa4452338  sh          $a1, 0x2338($v0)
    ctx->pc = 0x4b0960u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x4b0964: 0x96030164  lhu         $v1, 0x164($s0)
    ctx->pc = 0x4b0964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4b0968: 0xa443233a  sh          $v1, 0x233A($v0)
    ctx->pc = 0x4b0968u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BAu, _value); } while (0);
    // 0x4b096c: 0x96050166  lhu         $a1, 0x166($s0)
    ctx->pc = 0x4b096cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4b0970: 0xa4462330  sh          $a2, 0x2330($v0)
    ctx->pc = 0x4b0970u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4b0974: 0xa445233c  sh          $a1, 0x233C($v0)
    ctx->pc = 0x4b0974u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BCu, _value); } while (0);
    // 0x4b0978: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4B0978u;
    SET_GPR_U32(ctx, 31, 0x4B0980u);
    ctx->pc = 0x4B097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0978u;
    // 0x4b097c: 0xa440233e  sh          $zero, 0x233E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4B0978u, 0x4B0980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0980u;
label_4b0980:
    // 0x4b0980: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0984: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b0984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b098c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b0990: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x4b0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x4b0994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0998: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b099c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b09a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b09a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b09a4: 0x812c27a  j           func_4B09E8
    ctx->pc = 0x4B09A4u;
    ctx->pc = 0x4B09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B09A4u;
    // 0x4b09a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09E8u;
    goto label_4b09e8;
    ctx->pc = 0x4B09ACu;
    // 0x4b09ac: 0x0  nop
    ctx->pc = 0x4b09acu;
    // NOP
label_4b09b0:
    // 0x4b09b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b09b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b09b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b09bc: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b09c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b09c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b09c4: 0xa4600160  sh          $zero, 0x160($v1)
    ctx->pc = 0x4b09c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b09c8: 0x812c27a  j           func_4B09E8
    ctx->pc = 0x4B09C8u;
    ctx->pc = 0x4B09CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B09C8u;
    // 0x4b09cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09E8u;
    goto label_4b09e8;
    ctx->pc = 0x4B09D0u;
label_4b09d0:
    // 0x4b09d0: 0x248401b6  addiu       $a0, $a0, 0x1B6
    ctx->pc = 0x4b09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 438));
    // 0x4b09d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b09d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b09d8: 0x3042fe7f  andi        $v0, $v0, 0xFE7F
    ctx->pc = 0x4b09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65151);
    // 0x4b09dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B09DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B09DCu;
        // 0x4b09e0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B09DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B09E4u;
    // 0x4b09e4: 0x0  nop
    ctx->pc = 0x4b09e4u;
    // NOP
label_4b09e8:
    // 0x4b09e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B09E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B09E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B09F0u;
}
