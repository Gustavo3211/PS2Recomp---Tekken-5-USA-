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

// Function: sub_004B00E8
// Address: 0x4b00e8 - 0x4b0620
void sub_004B00E8_0x4b00e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B00E8_0x4b00e8");
#endif

    switch (ctx->pc) {
        case 0x4b0538u: goto label_4b0538;
        case 0x4b0544u: goto label_4b0544;
        default: break;
    }

    ctx->pc = 0x4b00e8u;

    // 0x4b00e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b00e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b00ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b00f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b00f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b00f4: 0x24680d30  addiu       $t0, $v1, 0xD30
    ctx->pc = 0x4b00f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b00f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4b00f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b00fc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4b00fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0100: 0x852201b6  lh          $v0, 0x1B6($t1)
    ctx->pc = 0x4b0100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 438)));
    // 0x4b0104: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b0104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b0108: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4b0108u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b010c: 0x24e70d34  addiu       $a3, $a3, 0xD34
    ctx->pc = 0x4b010cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3380));
    // 0x4b0110: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0114: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4b0114u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D34u));
    // 0x4b0118: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b011c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b011cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b0120: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b0120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b0124: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b0124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b0128: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b012c: 0x85220160  lh          $v0, 0x160($t1)
    ctx->pc = 0x4b012cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 352)));
    // 0x4b0130: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4b0130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0134: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0138: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b0138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b013c: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x4b013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x4b0140: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b0140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b0144: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b0144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b0148: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4b0148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4b014c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b014cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b0150: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4b0150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b0154: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b0154u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b0158: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x4b0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x4b015c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0160: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4b0160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0164: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b0164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b0168: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b0168u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b016c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b016cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b0170: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b0170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b0174: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0174u;
    {
        const bool branch_taken_0x4b0174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0174u;
        // 0x4b0178: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0174) {
            ctx->pc = 0x4B0188u;
            goto label_4b0188;
        }
    }
    ctx->pc = 0x4B017Cu;
    // 0x4b017c: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x4b0180: 0xa460015e  sh          $zero, 0x15E($v1)
    ctx->pc = 0x4b0180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b0184: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b0184u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4b0188:
    // 0x4b0188: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0188u;
    {
        const bool branch_taken_0x4b0188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0188u;
        // 0x4b018c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0188) {
            ctx->pc = 0x4B0198u;
            goto label_4b0198;
        }
    }
    ctx->pc = 0x4B0190u;
    // 0x4b0190: 0xa522015e  sh          $v0, 0x15E($t1)
    ctx->pc = 0x4b0190u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0194: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b0194u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4b0198:
    // 0x4b0198: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b019c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4b019cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b01a0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4b01a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4b01a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b01a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b01a8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b01a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b01ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b01acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b01b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b01b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b01b4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b01b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b01b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b01bc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b01bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b01c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4b01c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4b01c4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b01c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b01c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b01cc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b01d0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b01d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b01d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b01d8: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b01d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b01dc: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B01DCu;
    {
        const bool branch_taken_0x4b01dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4B01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01DCu;
        // 0x4b01e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b01dc) {
            ctx->pc = 0x4B0220u;
            goto label_4b0220;
        }
    }
    ctx->pc = 0x4B01E4u;
    // 0x4b01e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B01E4u;
    {
        const bool branch_taken_0x4b01e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b01e4) {
            ctx->pc = 0x4B01E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B01E4u;
            // 0x4b01e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0200u;
            goto label_4b0200;
        }
    }
    ctx->pc = 0x4B01ECu;
    // 0x4b01ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B01ECu;
    {
        const bool branch_taken_0x4b01ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01ECu;
        // 0x4b01f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b01ec) {
            ctx->pc = 0x4B0218u;
            goto label_4b0218;
        }
    }
    ctx->pc = 0x4B01F4u;
    // 0x4b01f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B01F4u;
    {
        const bool branch_taken_0x4b01f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b01f4) {
            ctx->pc = 0x4B0248u;
            goto label_4b0248;
        }
    }
    ctx->pc = 0x4B01FCu;
    // 0x4b01fc: 0x0  nop
    ctx->pc = 0x4b01fcu;
    // NOP
label_4b0200:
    // 0x4b0200: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0200u;
    {
        const bool branch_taken_0x4b0200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0200u;
        // 0x4b0204: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0200) {
            ctx->pc = 0x4B0230u;
            goto label_4b0230;
        }
    }
    ctx->pc = 0x4B0208u;
    // 0x4b0208: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0208u;
    {
        const bool branch_taken_0x4b0208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0208u;
        // 0x4b020c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0208) {
            ctx->pc = 0x4B0240u;
            goto label_4b0240;
        }
    }
    ctx->pc = 0x4B0210u;
    // 0x4b0210: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0210u;
    {
        const bool branch_taken_0x4b0210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0210) {
            ctx->pc = 0x4B0248u;
            goto label_4b0248;
        }
    }
    ctx->pc = 0x4B0218u;
label_4b0218:
    // 0x4b0218: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B0218u;
    ctx->pc = 0x4B021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0218u;
    // 0x4b021c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B0220u;
label_4b0220:
    // 0x4b0220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0224: 0x812c094  j           func_4B0250
    ctx->pc = 0x4B0224u;
    ctx->pc = 0x4B0228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0224u;
    // 0x4b0228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0250u;
    goto label_4b0250;
    ctx->pc = 0x4B022Cu;
    // 0x4b022c: 0x0  nop
    ctx->pc = 0x4b022cu;
    // NOP
label_4b0230:
    // 0x4b0230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0234: 0x812c0c2  j           func_4B0308
    ctx->pc = 0x4B0234u;
    ctx->pc = 0x4B0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0234u;
    // 0x4b0238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0308u;
    goto label_4b0308;
    ctx->pc = 0x4B023Cu;
    // 0x4b023c: 0x0  nop
    ctx->pc = 0x4b023cu;
    // NOP
label_4b0240:
    // 0x4b0240: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B0240u;
    ctx->pc = 0x4B0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0240u;
    // 0x4b0244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B0248u;
label_4b0248:
    // 0x4b0248: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0248u;
        // 0x4b024c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0250u;
label_4b0250:
    // 0x4b0250: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0254: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b025c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b0260: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b0260u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0264: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b0264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0268: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b0268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b026c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b026cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0270: 0x84c2015e  lh          $v0, 0x15E($a2)
    ctx->pc = 0x4b0270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 350)));
    // 0x4b0274: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b0274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0278: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b027c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b0280: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0284: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b0284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b0288: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b0288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b028c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0290: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b0294: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B0294u;
    {
        const bool branch_taken_0x4b0294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0294u;
        // 0x4b0298: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0294) {
            ctx->pc = 0x4B02D8u;
            goto label_4b02d8;
        }
    }
    ctx->pc = 0x4B029Cu;
    // 0x4b029c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B029Cu;
    {
        const bool branch_taken_0x4b029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b029c) {
            ctx->pc = 0x4B02A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B029Cu;
            // 0x4b02a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B02B8u;
            goto label_4b02b8;
        }
    }
    ctx->pc = 0x4B02A4u;
    // 0x4b02a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B02A4u;
    {
        const bool branch_taken_0x4b02a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B02A4u;
        // 0x4b02a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b02a4) {
            ctx->pc = 0x4B02D0u;
            goto label_4b02d0;
        }
    }
    ctx->pc = 0x4B02ACu;
    // 0x4b02ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B02ACu;
    {
        const bool branch_taken_0x4b02ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b02ac) {
            ctx->pc = 0x4B0300u;
            goto label_4b0300;
        }
    }
    ctx->pc = 0x4B02B4u;
    // 0x4b02b4: 0x0  nop
    ctx->pc = 0x4b02b4u;
    // NOP
label_4b02b8:
    // 0x4b02b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B02B8u;
    {
        const bool branch_taken_0x4b02b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B02B8u;
        // 0x4b02bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b02b8) {
            ctx->pc = 0x4B02E8u;
            goto label_4b02e8;
        }
    }
    ctx->pc = 0x4B02C0u;
    // 0x4b02c0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B02C0u;
    {
        const bool branch_taken_0x4b02c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B02C0u;
        // 0x4b02c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b02c0) {
            ctx->pc = 0x4B02F8u;
            goto label_4b02f8;
        }
    }
    ctx->pc = 0x4B02C8u;
    // 0x4b02c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B02C8u;
    {
        const bool branch_taken_0x4b02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b02c8) {
            ctx->pc = 0x4B0300u;
            goto label_4b0300;
        }
    }
    ctx->pc = 0x4B02D0u;
label_4b02d0:
    // 0x4b02d0: 0x812c124  j           func_4B0490
    ctx->pc = 0x4B02D0u;
    ctx->pc = 0x4B02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B02D0u;
    // 0x4b02d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0490u;
    goto label_4b0490;
    ctx->pc = 0x4B02D8u;
label_4b02d8:
    // 0x4b02d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b02d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b02dc: 0x812c0f0  j           func_4B03C0
    ctx->pc = 0x4B02DCu;
    ctx->pc = 0x4B02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B02DCu;
    // 0x4b02e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B03C0u;
    goto label_4b03c0;
    ctx->pc = 0x4B02E4u;
    // 0x4b02e4: 0x0  nop
    ctx->pc = 0x4b02e4u;
    // NOP
label_4b02e8:
    // 0x4b02e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b02e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b02ec: 0x812c110  j           func_4B0440
    ctx->pc = 0x4B02ECu;
    ctx->pc = 0x4B02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B02ECu;
    // 0x4b02f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0440u;
    goto label_4b0440;
    ctx->pc = 0x4B02F4u;
    // 0x4b02f4: 0x0  nop
    ctx->pc = 0x4b02f4u;
    // NOP
label_4b02f8:
    // 0x4b02f8: 0x812c180  j           func_4B0600
    ctx->pc = 0x4B02F8u;
    ctx->pc = 0x4B02FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B02F8u;
    // 0x4b02fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0600u;
    goto label_4b0600;
    ctx->pc = 0x4B0300u;
label_4b0300:
    // 0x4b0300: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0300u;
        // 0x4b0304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0308u;
label_4b0308:
    // 0x4b0308: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b030c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b030cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0314: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b0314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b0318: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b0318u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b031c: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0320: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b0320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0324: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b0324u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0328: 0x84c2015e  lh          $v0, 0x15E($a2)
    ctx->pc = 0x4b0328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 350)));
    // 0x4b032c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b032cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0330: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0334: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b0334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b0338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b033c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b033cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b0340: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b0340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b0344: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b0344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0348: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0348u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b034c: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B034Cu;
    {
        const bool branch_taken_0x4b034c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B034Cu;
        // 0x4b0350: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b034c) {
            ctx->pc = 0x4B0390u;
            goto label_4b0390;
        }
    }
    ctx->pc = 0x4B0354u;
    // 0x4b0354: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0354u;
    {
        const bool branch_taken_0x4b0354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0354) {
            ctx->pc = 0x4B0358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0354u;
            // 0x4b0358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0370u;
            goto label_4b0370;
        }
    }
    ctx->pc = 0x4B035Cu;
    // 0x4b035c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B035Cu;
    {
        const bool branch_taken_0x4b035c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B035Cu;
        // 0x4b0360: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b035c) {
            ctx->pc = 0x4B0388u;
            goto label_4b0388;
        }
    }
    ctx->pc = 0x4B0364u;
    // 0x4b0364: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B0364u;
    {
        const bool branch_taken_0x4b0364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0364) {
            ctx->pc = 0x4B03B8u;
            goto label_4b03b8;
        }
    }
    ctx->pc = 0x4B036Cu;
    // 0x4b036c: 0x0  nop
    ctx->pc = 0x4b036cu;
    // NOP
label_4b0370:
    // 0x4b0370: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0370u;
    {
        const bool branch_taken_0x4b0370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0370u;
        // 0x4b0374: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0370) {
            ctx->pc = 0x4B03A0u;
            goto label_4b03a0;
        }
    }
    ctx->pc = 0x4B0378u;
    // 0x4b0378: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0378u;
    {
        const bool branch_taken_0x4b0378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0378u;
        // 0x4b037c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0378) {
            ctx->pc = 0x4B03B0u;
            goto label_4b03b0;
        }
    }
    ctx->pc = 0x4B0380u;
    // 0x4b0380: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0380u;
    {
        const bool branch_taken_0x4b0380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0380) {
            ctx->pc = 0x4B03B8u;
            goto label_4b03b8;
        }
    }
    ctx->pc = 0x4B0388u;
label_4b0388:
    // 0x4b0388: 0x812c124  j           func_4B0490
    ctx->pc = 0x4B0388u;
    ctx->pc = 0x4B038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0388u;
    // 0x4b038c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0490u;
    goto label_4b0490;
    ctx->pc = 0x4B0390u;
label_4b0390:
    // 0x4b0390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0394: 0x812c100  j           func_4B0400
    ctx->pc = 0x4B0394u;
    ctx->pc = 0x4B0398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0394u;
    // 0x4b0398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0400u;
    goto label_4b0400;
    ctx->pc = 0x4B039Cu;
    // 0x4b039c: 0x0  nop
    ctx->pc = 0x4b039cu;
    // NOP
label_4b03a0:
    // 0x4b03a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b03a4: 0x812c110  j           func_4B0440
    ctx->pc = 0x4B03A4u;
    ctx->pc = 0x4B03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B03A4u;
    // 0x4b03a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0440u;
    goto label_4b0440;
    ctx->pc = 0x4B03ACu;
    // 0x4b03ac: 0x0  nop
    ctx->pc = 0x4b03acu;
    // NOP
label_4b03b0:
    // 0x4b03b0: 0x812c178  j           func_4B05E0
    ctx->pc = 0x4B03B0u;
    ctx->pc = 0x4B03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B03B0u;
    // 0x4b03b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B05E0u;
    goto label_4b05e0;
    ctx->pc = 0x4B03B8u;
label_4b03b8:
    // 0x4b03b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B03B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B03B8u;
        // 0x4b03bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B03B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B03C0u;
label_4b03c0:
    // 0x4b03c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b03c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b03c4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b03c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b03cc: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b03d0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x4b03d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4b03d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b03d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b03d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b03dc: 0xa4a60130  sh          $a2, 0x130($a1)
    ctx->pc = 0x4b03dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b03e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b03e4: 0x2463015e  addiu       $v1, $v1, 0x15E
    ctx->pc = 0x4b03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 350));
    // 0x4b03e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b03e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b03ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b03f0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b03f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b03f4: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B03F4u;
    ctx->pc = 0x4B03F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B03F4u;
    // 0x4b03f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B03FCu;
    // 0x4b03fc: 0x0  nop
    ctx->pc = 0x4b03fcu;
    // NOP
label_4b0400:
    // 0x4b0400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0404: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b040c: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b0410: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x4b0410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x4b0414: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b0414u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b041c: 0xa4a60130  sh          $a2, 0x130($a1)
    ctx->pc = 0x4b041cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b0420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b0420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0424: 0x2463015e  addiu       $v1, $v1, 0x15E
    ctx->pc = 0x4b0424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 350));
    // 0x4b0428: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b042c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b0430: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0434: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B0434u;
    ctx->pc = 0x4B0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0434u;
    // 0x4b0438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B043Cu;
    // 0x4b043c: 0x0  nop
    ctx->pc = 0x4b043cu;
    // NOP
label_4b0440:
    // 0x4b0440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0444: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b0444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b0448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b044c: 0x24c60d60  addiu       $a2, $a2, 0xD60
    ctx->pc = 0x4b044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4b0450: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b0450u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0454: 0x24630130  addiu       $v1, $v1, 0x130
    ctx->pc = 0x4b0454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x4b0458: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b045c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b0460: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0460u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0464: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b0464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0468: 0x84a20130  lh          $v0, 0x130($a1)
    ctx->pc = 0x4b0468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x4b046c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B046Cu;
    {
        const bool branch_taken_0x4b046c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B046Cu;
        // 0x4b0470: 0x24a3015e  addiu       $v1, $a1, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b046c) {
            ctx->pc = 0x4B0480u;
            goto label_4b0480;
        }
    }
    ctx->pc = 0x4B0474u;
    // 0x4b0474: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0478: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b047c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b047cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b0480:
    // 0x4b0480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0484: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B0484u;
    ctx->pc = 0x4B0488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0484u;
    // 0x4b0488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B048Cu;
    // 0x4b048c: 0x0  nop
    ctx->pc = 0x4b048cu;
    // NOP
label_4b0490:
    // 0x4b0490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b0494: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b0498: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4b0498u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4b049c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b04a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b04a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b04a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b04ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b04b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b04b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4b04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4b04b8: 0x8ec20d60  lw          $v0, 0xD60($s6)
    ctx->pc = 0x4b04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b04bc: 0x84430120  lh          $v1, 0x120($v0)
    ctx->pc = 0x4b04bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x4b04c0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4B04C0u;
    {
        const bool branch_taken_0x4b04c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B04C0u;
        // 0x4b04c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b04c0) {
            ctx->pc = 0x4B04F0u;
            goto label_4b04f0;
        }
    }
    ctx->pc = 0x4B04C8u;
    // 0x4b04c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b04c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b04cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b04ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b04d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b04d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b04d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b04d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b04d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b04d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b04dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b04dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b04e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b04e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b04e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4b04e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b04e8: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B04E8u;
    ctx->pc = 0x4B04ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B04E8u;
    // 0x4b04ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B04F0u;
label_4b04f0:
    // 0x4b04f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b04f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b04f8: 0x24440d48  addiu       $a0, $v0, 0xD48
    ctx->pc = 0x4b04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
    // 0x4b04fc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4b04fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x4b0500: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b0500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D48u));
    // 0x4b0504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b0508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b0508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b050c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b050cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b0510: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4b0510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0514: 0x4600022  bltz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B0514u;
    {
        const bool branch_taken_0x4b0514 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0514u;
        // 0x4b0518: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0514) {
            ctx->pc = 0x4B05A0u;
            goto label_4b05a0;
        }
    }
    ctx->pc = 0x4B051Cu;
    // 0x4b051c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b051cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b0520: 0x24540d54  addiu       $s4, $v0, 0xD54
    ctx->pc = 0x4b0520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3412));
    // 0x4b0524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0528: 0x24720d50  addiu       $s2, $v1, 0xD50
    ctx->pc = 0x4b0528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3408));
    // 0x4b052c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4b052cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0530: 0x2415005b  addiu       $s5, $zero, 0x5B
    ctx->pc = 0x4b0530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x4b0534: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b0534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4b0538:
    // 0x4b0538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b053c: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4B053Cu;
    SET_GPR_U32(ctx, 31, 0x4B0544u);
    ctx->pc = 0x4B0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B053Cu;
    // 0x4b0540: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4B053Cu, 0x4B0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0544u;
label_4b0544:
    // 0x4b0544: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0548: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4b0548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b054c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0550: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b0550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b0554: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4b0554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4b0558: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b0558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b055c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b0560: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x4b0560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x4b0564: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4b0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b0568: 0xac510140  sw          $s1, 0x140($v0)
    ctx->pc = 0x4b0568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 17));
    // 0x4b056c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4b056cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0570: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4b0570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b0574: 0xa44401be  sh          $a0, 0x1BE($v0)
    ctx->pc = 0x4b0574u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b0578: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4b0578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b057c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4b057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0580: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b0584: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b0584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b0588: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b0588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b058c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b058cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b0590: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b0590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4b0594: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b0594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0598: 0x443ffe7  bgezl       $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4B0598u;
    {
        const bool branch_taken_0x4b0598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b0598) {
            ctx->pc = 0x4B059Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0598u;
            // 0x4b059c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0538;
        }
    }
    ctx->pc = 0x4B05A0u;
label_4b05a0:
    // 0x4b05a0: 0x8ec30d60  lw          $v1, 0xD60($s6)
    ctx->pc = 0x4b05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3424)));
    // 0x4b05a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b05a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b05a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b05a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b05ac: 0x2463015e  addiu       $v1, $v1, 0x15E
    ctx->pc = 0x4b05acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 350));
    // 0x4b05b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b05b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b05b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b05b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b05b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b05b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b05bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b05bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b05c0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b05c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b05c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b05c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b05c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b05cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b05ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b05d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4b05d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b05d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b05d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b05d8: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B05D8u;
    ctx->pc = 0x4B05DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B05D8u;
    // 0x4b05dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B05E0u;
label_4b05e0:
    // 0x4b05e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b05e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b05e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b05e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b05e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b05ec: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b05f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b05f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b05f4: 0xa460015e  sh          $zero, 0x15E($v1)
    ctx->pc = 0x4b05f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b05f8: 0x812c186  j           func_4B0618
    ctx->pc = 0x4B05F8u;
    ctx->pc = 0x4B05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B05F8u;
    // 0x4b05fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0618u;
    goto label_4b0618;
    ctx->pc = 0x4B0600u;
label_4b0600:
    // 0x4b0600: 0x248401b6  addiu       $a0, $a0, 0x1B6
    ctx->pc = 0x4b0600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 438));
    // 0x4b0604: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b0604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0608: 0x3042ff9f  andi        $v0, $v0, 0xFF9F
    ctx->pc = 0x4b0608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65439);
    // 0x4b060c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B060Cu;
        // 0x4b0610: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0614u;
    // 0x4b0614: 0x0  nop
    ctx->pc = 0x4b0614u;
    // NOP
label_4b0618:
    // 0x4b0618: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0620u;
}
