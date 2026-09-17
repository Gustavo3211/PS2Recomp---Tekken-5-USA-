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

// Function: sub_004CB558
// Address: 0x4cb558 - 0x4cbef8
void sub_004CB558_0x4cb558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB558_0x4cb558");
#endif

    switch (ctx->pc) {
        case 0x4cb598u: goto label_4cb598;
        case 0x4cb79cu: goto label_4cb79c;
        case 0x4cb7acu: goto label_4cb7ac;
        case 0x4cb7c0u: goto label_4cb7c0;
        case 0x4cb800u: goto label_4cb800;
        case 0x4cb810u: goto label_4cb810;
        case 0x4cb824u: goto label_4cb824;
        case 0x4cb89cu: goto label_4cb89c;
        case 0x4cbb98u: goto label_4cbb98;
        case 0x4cbbb4u: goto label_4cbbb4;
        case 0x4cbbecu: goto label_4cbbec;
        case 0x4cbbfcu: goto label_4cbbfc;
        case 0x4cbdb8u: goto label_4cbdb8;
        case 0x4cbdc8u: goto label_4cbdc8;
        case 0x4cbddcu: goto label_4cbddc;
        case 0x4cbe04u: goto label_4cbe04;
        case 0x4cbe14u: goto label_4cbe14;
        case 0x4cbe28u: goto label_4cbe28;
        case 0x4cbeb0u: goto label_4cbeb0;
        case 0x4cbeb8u: goto label_4cbeb8;
        case 0x4cbec0u: goto label_4cbec0;
        default: break;
    }

    ctx->pc = 0x4cb558u;

    // 0x4cb558: 0x2482014a  addiu       $v0, $a0, 0x14A
    ctx->pc = 0x4cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 330));
    // 0x4cb55c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cb55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cb560: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cb560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cb564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cb568: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cb568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4cb56c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4cb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cb570: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CB570u;
    {
        const bool branch_taken_0x4cb570 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4CB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB570u;
        // 0x4cb574: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb570) {
            ctx->pc = 0x4CB588u;
            goto label_4cb588;
        }
    }
    ctx->pc = 0x4CB578u;
    // 0x4cb578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cb578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb57c: 0x8132f0a  j           func_4CBC28
    ctx->pc = 0x4CB57Cu;
    ctx->pc = 0x4CB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB57Cu;
    // 0x4cb580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBC28u;
    goto label_4cbc28;
    ctx->pc = 0x4CB584u;
    // 0x4cb584: 0x0  nop
    ctx->pc = 0x4cb584u;
    // NOP
label_4cb588:
    // 0x4cb588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cb588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb58c: 0x8132d66  j           func_4CB598
    ctx->pc = 0x4CB58Cu;
    ctx->pc = 0x4CB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB58Cu;
    // 0x4cb590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB598u;
    goto label_4cb598;
    ctx->pc = 0x4CB594u;
    // 0x4cb594: 0x0  nop
    ctx->pc = 0x4cb594u;
    // NOP
label_4cb598:
    // 0x4cb598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cb598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cb59c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4cb59cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4cb5a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cb5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cb5a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cb5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cb5a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cb5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb5ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cb5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cb5b0: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4cb5b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4cb5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cb5b8: 0x2643015e  addiu       $v1, $s2, 0x15E
    ctx->pc = 0x4cb5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4cb5bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cb5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cb5c0: 0x26f10f60  addiu       $s1, $s7, 0xF60
    ctx->pc = 0x4cb5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 3936));
    // 0x4cb5c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cb5c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cb5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cb5cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cb5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cb5d0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cb5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4cb5d4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4cb5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4cb5d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cb5d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cb5dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4cb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cb5e0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cb5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cb5e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb5e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb5e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb5ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb5f0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb5f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb5f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb5fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cb5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cb600: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb604: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cb604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4cb608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4cb60c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb610: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4cb610u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb614: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4cb614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4cb618: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cb618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb61c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4CB61Cu;
    {
        const bool branch_taken_0x4cb61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB61Cu;
        // 0x4cb620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb61c) {
            ctx->pc = 0x4CB650u;
            goto label_4cb650;
        }
    }
    ctx->pc = 0x4CB624u;
    // 0x4cb624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb62c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cb62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb630: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cb630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb634: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cb634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cb638: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cb638u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb63c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cb63cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cb640: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cb640u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb644: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cb644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cb648: 0x8132ef6  j           func_4CBBD8
    ctx->pc = 0x4CB648u;
    ctx->pc = 0x4CB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB648u;
    // 0x4cb64c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBBD8u;
    goto label_4cbbd8;
    ctx->pc = 0x4CB650u;
label_4cb650:
    // 0x4cb650: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cb650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cb654: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cb654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cb658: 0x8c460f80  lw          $a2, 0xF80($v0)
    ctx->pc = 0x4cb658u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F80u));
    // 0x4cb65c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cb660: 0x24540f6c  addiu       $s4, $v0, 0xF6C
    ctx->pc = 0x4cb660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3948));
    // 0x4cb664: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4cb664u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4cb668: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cb668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb66c: 0x24950f70  addiu       $s5, $a0, 0xF70
    ctx->pc = 0x4cb66cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 3952));
    // 0x4cb670: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4cb670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cb674: 0x27d30f74  addiu       $s3, $fp, 0xF74
    ctx->pc = 0x4cb674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 3956));
    // 0x4cb678: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cb678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cb67c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4cb67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cb680: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb680u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb688: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb68c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4cb68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cb690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb694: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cb694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cb698: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cb698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cb69c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb6a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cb6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cb6a4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4cb6a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4cb6a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4cb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4cb6ac: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x4cb6acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cb6b0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cb6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cb6b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb6b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb6b8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb6bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cb6bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cb6c0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4cb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4cb6c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cb6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cb6c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4cb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4cb6cc: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4cb6ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cb6d0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cb6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cb6d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb6d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb6d8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb6dc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cb6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cb6e0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4cb6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4cb6e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cb6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cb6e8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4cb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4cb6ec: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4cb6ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cb6f0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cb6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cb6f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb6f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb6f8: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4cb6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4cb6fc: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x4cb6fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x4cb700: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4cb700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4cb704: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cb704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cb708: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4cb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4cb70c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cb70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cb710: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb714: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4cb714u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cb718: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4cb718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4cb71c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4cb71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4cb720: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4cb720u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4cb724: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4cb724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4cb728: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cb728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cb72c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb730: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4cb730u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cb734: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x4cb734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x4cb738: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4cb738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4cb73c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4cb73cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4cb740: 0x864201be  lh          $v0, 0x1BE($s2)
    ctx->pc = 0x4cb740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x4cb744: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb748: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4cb748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4cb74c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cb750: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cb750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb754: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x4cb754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4cb758: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4CB758u;
    {
        const bool branch_taken_0x4cb758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb758) {
            ctx->pc = 0x4CB75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB758u;
            // 0x4cb75c: 0x86420118  lh          $v0, 0x118($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CB7C8u;
            goto label_4cb7c8;
        }
    }
    ctx->pc = 0x4CB760u;
    // 0x4cb760: 0x86420120  lh          $v0, 0x120($s2)
    ctx->pc = 0x4cb760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x4cb764: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb768: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4cb768u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4cb76c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb770: 0x26d00f64  addiu       $s0, $s6, 0xF64
    ctx->pc = 0x4cb770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 3940));
    // 0x4cb774: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb778: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cb778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cb77c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb780: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cb780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb784: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cb784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cb788: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb78c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb790: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cb790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cb794: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CB794u;
    SET_GPR_U32(ctx, 31, 0x4CB79Cu);
    ctx->pc = 0x4CB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB794u;
    // 0x4cb798: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CB794u, 0x4CB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB79Cu;
label_4cb79c:
    // 0x4cb79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cb79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb7a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4cb7a4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CB7A4u;
    SET_GPR_U32(ctx, 31, 0x4CB7ACu);
    ctx->pc = 0x4CB7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB7A4u;
    // 0x4cb7a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CB7A4u, 0x4CB7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB7ACu;
label_4cb7ac:
    // 0x4cb7ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cb7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb7b0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4cb7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb7b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cb7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb7b8: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CB7B8u;
    SET_GPR_U32(ctx, 31, 0x4CB7C0u);
    ctx->pc = 0x4CB7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB7B8u;
    // 0x4cb7bc: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CB7B8u, 0x4CB7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB7C0u;
label_4cb7c0:
    // 0x4cb7c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4CB7C0u;
    {
        const bool branch_taken_0x4cb7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB7C0u;
        // 0x4cb7c4: 0x3c130073  lui         $s3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb7c0) {
            ctx->pc = 0x4CB828u;
            goto label_4cb828;
        }
    }
    ctx->pc = 0x4CB7C8u;
label_4cb7c8:
    // 0x4cb7c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb7cc: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4cb7ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4cb7d0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb7d4: 0x26d00f64  addiu       $s0, $s6, 0xF64
    ctx->pc = 0x4cb7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 3940));
    // 0x4cb7d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb7dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cb7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cb7e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb7e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cb7e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb7e8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cb7ec: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cb7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cb7f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb7f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cb7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cb7f8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CB7F8u;
    SET_GPR_U32(ctx, 31, 0x4CB800u);
    ctx->pc = 0x4CB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB7F8u;
    // 0x4cb7fc: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CB7F8u, 0x4CB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB800u;
label_4cb800:
    // 0x4cb800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cb800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb804: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cb804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4cb808: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CB808u;
    SET_GPR_U32(ctx, 31, 0x4CB810u);
    ctx->pc = 0x4CB80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB808u;
    // 0x4cb80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CB808u, 0x4CB810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB810u;
label_4cb810:
    // 0x4cb810: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cb810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb814: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4cb814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cb818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb81c: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4CB81Cu;
    SET_GPR_U32(ctx, 31, 0x4CB824u);
    ctx->pc = 0x4CB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB81Cu;
    // 0x4cb820: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4CB81Cu, 0x4CB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB824u;
label_4cb824:
    // 0x4cb824: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x4cb824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
label_4cb828:
    // 0x4cb828: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cb828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cb82c: 0x2670d680  addiu       $s0, $s3, -0x2980
    ctx->pc = 0x4cb82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4cb830: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cb830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cb834: 0x94470f6c  lhu         $a3, 0xF6C($v0)
    ctx->pc = 0x4cb834u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F0F6Cu));
    // 0x4cb838: 0x26082494  addiu       $t0, $s0, 0x2494
    ctx->pc = 0x4cb838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4cb83c: 0x94850f70  lhu         $a1, 0xF70($a0)
    ctx->pc = 0x4cb83cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0F70u));
    // 0x4cb840: 0x26092498  addiu       $t1, $s0, 0x2498
    ctx->pc = 0x4cb840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4cb844: 0x97c60f74  lhu         $a2, 0xF74($fp)
    ctx->pc = 0x4cb844u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3956)));
    // 0x4cb848: 0x260a249c  addiu       $t2, $s0, 0x249C
    ctx->pc = 0x4cb848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4cb84c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4cb84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb850: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4cb850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4cb854: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cb854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cb858: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4cb858u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cb85c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4cb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4cb860: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4cb860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4cb864: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4cb864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4cb868: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cb868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cb86c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cb86cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cb870: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cb870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cb874: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4cb874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4cb878: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4cb878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4cb87c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4cb87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4cb880: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4cb880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4cb884: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4cb884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4cb888: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cb888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cb88c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4cb88cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4cb890: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cb890u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cb894: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CB894u;
    SET_GPR_U32(ctx, 31, 0x4CB89Cu);
    ctx->pc = 0x4CB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB894u;
    // 0x4cb898: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CB894u, 0x4CB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB89Cu;
label_4cb89c:
    // 0x4cb89c: 0x26e40f60  addiu       $a0, $s7, 0xF60
    ctx->pc = 0x4cb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3936));
    // 0x4cb8a0: 0x264d011c  addiu       $t5, $s2, 0x11C
    ctx->pc = 0x4cb8a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x4cb8a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb8a8: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4cb8a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cb8ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb8b0: 0x960524a2  lhu         $a1, 0x24A2($s0)
    ctx->pc = 0x4cb8b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4cb8b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4cb8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4cb8b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb8bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cb8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cb8c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cb8c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb8c4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4cb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cb8c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb8cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CB8CCu;
    {
        const bool branch_taken_0x4cb8cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8CCu;
        // 0x4cb8d0: 0x26c60f64  addiu       $a2, $s6, 0xF64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 3940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb8cc) {
            ctx->pc = 0x4CB8E0u;
            goto label_4cb8e0;
        }
    }
    ctx->pc = 0x4CB8D4u;
    // 0x4cb8d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb8d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4CB8D8u;
    {
        const bool branch_taken_0x4cb8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8D8u;
        // 0x4cb8dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb8d8) {
            ctx->pc = 0x4CB8E8u;
            goto label_4cb8e8;
        }
    }
    ctx->pc = 0x4CB8E0u;
label_4cb8e0:
    // 0x4cb8e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb8e4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4cb8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4cb8e8:
    // 0x4cb8e8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cb8ec: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4cb8ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4cb8f0: 0x25cc0f68  addiu       $t4, $t6, 0xF68
    ctx->pc = 0x4cb8f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 3944));
    // 0x4cb8f4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4cb8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4cb8f8: 0x86420138  lh          $v0, 0x138($s2)
    ctx->pc = 0x4cb8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x4cb8fc: 0x26e80f60  addiu       $t0, $s7, 0xF60
    ctx->pc = 0x4cb8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 3936));
    // 0x4cb900: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4cb900u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F68u));
    // 0x4cb904: 0x266ad680  addiu       $t2, $s3, -0x2980
    ctx->pc = 0x4cb904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4cb908: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cb908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cb90c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4cb90cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb910: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb914: 0x96c90f64  lhu         $t1, 0xF64($s6)
    ctx->pc = 0x4cb914u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 3940)));
    // 0x4cb918: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb91c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cb91cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cb920: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb924: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4cb924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4cb928: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4cb928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb92c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4cb92cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4cb930: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4cb930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb934: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4cb934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4cb938: 0x954b24a2  lhu         $t3, 0x24A2($t2)
    ctx->pc = 0x4cb938u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 9378)));
    // 0x4cb93c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb940: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cb940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cb944: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb948: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cb948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cb94c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb950: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cb950u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cb954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb958: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4cb958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb95c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4cb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cb960: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cb960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cb964: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb968: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cb968u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cb96c: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4cb96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cb970: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cb970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cb974: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4cb974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4cb978: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4cb978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4cb97c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4cb97cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4cb980: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cb980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb984: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4cb984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4cb988: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb98c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CB98Cu;
    {
        const bool branch_taken_0x4cb98c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB98Cu;
        // 0x4cb990: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb98c) {
            ctx->pc = 0x4CB99Cu;
            goto label_4cb99c;
        }
    }
    ctx->pc = 0x4CB994u;
    // 0x4cb994: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4cb994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cb998: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4cb998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4cb99c:
    // 0x4cb99c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cb99cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cb9a0: 0x26c40f64  addiu       $a0, $s6, 0xF64
    ctx->pc = 0x4cb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3940));
    // 0x4cb9a4: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4cb9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cb9a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb9ac: 0x91c20f68  lbu         $v0, 0xF68($t6)
    ctx->pc = 0x4cb9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3944)));
    // 0x4cb9b0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4cb9b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb9b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cb9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cb9b8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4cb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4cb9bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cb9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cb9c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cb9c4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4cb9c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb9c8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CB9C8u;
    {
        const bool branch_taken_0x4cb9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cb9c8) {
            ctx->pc = 0x4CB9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB9C8u;
            // 0x4cb9cc: 0x2665d680  addiu       $a1, $s3, -0x2980 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CBA10u;
            goto label_4cba10;
        }
    }
    ctx->pc = 0x4CB9D0u;
    // 0x4cb9d0: 0x96e20f60  lhu         $v0, 0xF60($s7)
    ctx->pc = 0x4cb9d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3936)));
    // 0x4cb9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cb9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb9dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb9e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb9e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb9e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cb9e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb9e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cb9e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb9ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cb9ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cb9f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cb9f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb9f4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cb9f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cb9f8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cb9f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb9fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cb9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cba00: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4cba00u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cba04: 0x8132ef6  j           func_4CBBD8
    ctx->pc = 0x4CBA04u;
    ctx->pc = 0x4CBA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBA04u;
    // 0x4cba08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBBD8u;
    goto label_4cbbd8;
    ctx->pc = 0x4CBA0Cu;
    // 0x4cba0c: 0x0  nop
    ctx->pc = 0x4cba0cu;
    // NOP
label_4cba10:
    // 0x4cba10: 0x26e40f60  addiu       $a0, $s7, 0xF60
    ctx->pc = 0x4cba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3936));
    // 0x4cba14: 0x94a224a2  lhu         $v0, 0x24A2($a1)
    ctx->pc = 0x4cba14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9378)));
    // 0x4cba18: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cba18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cba1c: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4cba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cba20: 0x84a324a0  lh          $v1, 0x24A0($a1)
    ctx->pc = 0x4cba20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 9376)));
    // 0x4cba24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cba28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4cba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4cba2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cba30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cba34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cba34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cba38: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4cba38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cba3c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4CBA3Cu;
    {
        const bool branch_taken_0x4cba3c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4CBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA3Cu;
        // 0x4cba40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba3c) {
            ctx->pc = 0x4CBA78u;
            goto label_4cba78;
        }
    }
    ctx->pc = 0x4CBA44u;
    // 0x4cba44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cba44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cba48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cba48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cba4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cba4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cba50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cba50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cba54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cba54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cba58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cba58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cba5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cba5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cba60: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cba60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cba64: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cba64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cba68: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cba6c: 0x8132ef6  j           func_4CBBD8
    ctx->pc = 0x4CBA6Cu;
    ctx->pc = 0x4CBA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBA6Cu;
    // 0x4cba70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBBD8u;
    goto label_4cbbd8;
    ctx->pc = 0x4CBA74u;
    // 0x4cba74: 0x0  nop
    ctx->pc = 0x4cba74u;
    // NOP
label_4cba78:
    // 0x4cba78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cba78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cba7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cba7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cba80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cba80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cba84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cba84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cba88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cba88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cba8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cba8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cba90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cba90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cba94: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cba94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cba98: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cba98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cba9c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cbaa0: 0x8132eaa  j           func_4CBAA8
    ctx->pc = 0x4CBAA0u;
    ctx->pc = 0x4CBAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBAA0u;
    // 0x4cbaa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBAA8u;
    goto label_4cbaa8;
    ctx->pc = 0x4CBAA8u;
label_4cbaa8:
    // 0x4cbaa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cbaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cbaac: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cbab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cbab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cbab4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cbab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbab8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cbab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cbabc: 0x24730f60  addiu       $s3, $v1, 0xF60
    ctx->pc = 0x4cbabcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
    // 0x4cbac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cbac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cbac4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4cbac4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4cbac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cbac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cbacc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4cbaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbad0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cbad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cbad4: 0x8642015e  lh          $v0, 0x15E($s2)
    ctx->pc = 0x4cbad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x4cbad8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cbadc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cbadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cbae0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbae4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbae8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4cbaec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbaf0: 0x96450164  lhu         $a1, 0x164($s2)
    ctx->pc = 0x4cbaf0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x4cbaf4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4cbaf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cbaf8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cbaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cbafc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cbb00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cbb00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cbb04: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4cbb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4cbb08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbb0c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4cbb10: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4cbb10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cbb14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CBB14u;
    {
        const bool branch_taken_0x4cbb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB14u;
        // 0x4cbb18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbb14) {
            ctx->pc = 0x4CBB38u;
            goto label_4cbb38;
        }
    }
    ctx->pc = 0x4CBB1Cu;
    // 0x4cbb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbb20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cbb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cbb24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cbb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cbb28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cbb28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cbb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cbb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cbb30: 0x8132ef6  j           func_4CBBD8
    ctx->pc = 0x4CBB30u;
    ctx->pc = 0x4CBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBB30u;
    // 0x4cbb34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBBD8u;
    goto label_4cbbd8;
    ctx->pc = 0x4CBB38u;
label_4cbb38:
    // 0x4cbb38: 0x96430162  lhu         $v1, 0x162($s2)
    ctx->pc = 0x4cbb38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4cbb3c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4cbb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4cbb40: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4cbb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4cbb44: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4cbb44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4cbb48: 0xa6032330  sh          $v1, 0x2330($s0)
    ctx->pc = 0x4cbb48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4cbb4c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cbb50: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4cbb50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4cbb54: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4cbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4cbb58: 0x26310f64  addiu       $s1, $s1, 0xF64
    ctx->pc = 0x4cbb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3940));
    // 0x4cbb5c: 0x8c440f6c  lw          $a0, 0xF6C($v0)
    ctx->pc = 0x4cbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cbb60: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4cbb60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbb64: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4cbb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4cbb68: 0x8d250f70  lw          $a1, 0xF70($t1)
    ctx->pc = 0x4cbb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3952)));
    // 0x4cbb6c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4cbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4cbb70: 0xa6032334  sh          $v1, 0x2334($s0)
    ctx->pc = 0x4cbb70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cbb74: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4cbb78: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4cbb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4cbb7c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4cbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4cbb80: 0xa6022336  sh          $v0, 0x2336($s0)
    ctx->pc = 0x4cbb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbb84: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x4cbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4cbb88: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4cbb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4cbb8c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4cbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4cbb90: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4CBB90u;
    SET_GPR_U32(ctx, 31, 0x4CBB98u);
    ctx->pc = 0x4CBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBB90u;
    // 0x4cbb94: 0xa6032338  sh          $v1, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4CBB90u, 0x4CBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBB98u;
label_4cbb98:
    // 0x4cbb98: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4cbb98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cbb9c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cbb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cbba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cbba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbba4: 0xa603233a  sh          $v1, 0x233A($s0)
    ctx->pc = 0x4cbba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cbba8: 0xa602233c  sh          $v0, 0x233C($s0)
    ctx->pc = 0x4cbba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbbac: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4CBBACu;
    SET_GPR_U32(ctx, 31, 0x4CBBB4u);
    ctx->pc = 0x4CBBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBBACu;
    // 0x4cbbb0: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4CBBACu, 0x4CBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBBB4u;
label_4cbbb4:
    // 0x4cbbb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cbbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbbbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cbbbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cbbc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cbbc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cbbc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cbbc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cbbc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cbbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cbbcc: 0x8132ef6  j           func_4CBBD8
    ctx->pc = 0x4CBBCCu;
    ctx->pc = 0x4CBBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBBCCu;
    // 0x4cbbd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBBD8u;
    goto label_4cbbd8;
    ctx->pc = 0x4CBBD4u;
    // 0x4cbbd4: 0x0  nop
    ctx->pc = 0x4cbbd4u;
    // NOP
label_4cbbd8:
    // 0x4cbbd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cbbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cbbdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cbbe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4cbbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4cbbe4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4CBBE4u;
    SET_GPR_U32(ctx, 31, 0x4CBBECu);
    ctx->pc = 0x4CBBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBBE4u;
    // 0x4cbbe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4CBBE4u, 0x4CBBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBBECu;
label_4cbbec:
    // 0x4cbbec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cbbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbbf4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4CBBF4u;
    SET_GPR_U32(ctx, 31, 0x4CBBFCu);
    ctx->pc = 0x4CBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBBF4u;
    // 0x4cbbf8: 0x8c450f78  lw          $a1, 0xF78($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3960)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4CBBF4u, 0x4CBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBBFCu;
label_4cbbfc:
    // 0x4cbbfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cbc00: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CBC00u;
    {
        const bool branch_taken_0x4cbc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC00u;
        // 0x4cbc04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbc00) {
            ctx->pc = 0x4CBC18u;
            goto label_4cbc18;
        }
    }
    ctx->pc = 0x4CBC08u;
    // 0x4cbc08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbc0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cbc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cbc10: 0x8132f0a  j           func_4CBC28
    ctx->pc = 0x4CBC10u;
    ctx->pc = 0x4CBC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBC10u;
    // 0x4cbc14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBC28u;
    goto label_4cbc28;
    ctx->pc = 0x4CBC18u;
label_4cbc18:
    // 0x4cbc18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbc1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cbc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cbc20: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC20u;
        // 0x4cbc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CBC28u;
label_4cbc28:
    // 0x4cbc28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cbc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4cbc2c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4cbc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4cbc30: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4cbc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4cbc34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4cbc34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbc38: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x4cbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x4cbc3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4cbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4cbc40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4cbc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4cbc44: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4cbc44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4cbc48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4cbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4cbc4c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4cbc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4cbc50: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4cbc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4cbc54: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4cbc54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4cbc58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4cbc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4cbc5c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4cbc5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4cbc60: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4cbc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4cbc64: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4cbc64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4cbc68: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4cbc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4cbc6c: 0x26770124  addiu       $s7, $s3, 0x124
    ctx->pc = 0x4cbc6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4cbc70: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4cbc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4cbc74: 0x267e012c  addiu       $fp, $s3, 0x12C
    ctx->pc = 0x4cbc74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x4cbc78: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4cbc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4cbc7c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cbc80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4cbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4cbc84: 0x24840f7c  addiu       $a0, $a0, 0xF7C
    ctx->pc = 0x4cbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3964));
    // 0x4cbc88: 0x24a572a0  addiu       $a1, $a1, 0x72A0
    ctx->pc = 0x4cbc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29344));
    // 0x4cbc8c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4cbc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4cbc90: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4cbc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cbc94: 0x26100f60  addiu       $s0, $s0, 0xF60
    ctx->pc = 0x4cbc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3936));
    // 0x4cbc98: 0x26670162  addiu       $a3, $s3, 0x162
    ctx->pc = 0x4cbc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 354));
    // 0x4cbc9c: 0x26680166  addiu       $t0, $s3, 0x166
    ctx->pc = 0x4cbc9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4cbca0: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x4cbca0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbca4: 0x26b50f6c  addiu       $s5, $s5, 0xF6C
    ctx->pc = 0x4cbca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3948));
    // 0x4cbca8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4cbca8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F7Cu, _value); } while (0);
    // 0x4cbcac: 0x26940f70  addiu       $s4, $s4, 0xF70
    ctx->pc = 0x4cbcacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    // 0x4cbcb0: 0x26d60f74  addiu       $s6, $s6, 0xF74
    ctx->pc = 0x4cbcb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3956));
    // 0x4cbcb4: 0x26310f64  addiu       $s1, $s1, 0xF64
    ctx->pc = 0x4cbcb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3940));
    // 0x4cbcb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cbcbc: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4cbcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x4cbcc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbcc4: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4cbcc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4cbcc8: 0x2442ffb7  addiu       $v0, $v0, -0x49
    ctx->pc = 0x4cbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967223));
    // 0x4cbccc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4cbcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4cbcd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbcd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cbcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cbcd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbcdc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cbcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbce0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cbce4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4cbce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4cbce8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbcec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cbcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cbcf0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cbcf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbcf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cbcf8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cbcf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cbcfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cbd00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cbd04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cbd08: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4cbd08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cbd0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cbd10: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4cbd10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbd14: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cbd14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cbd18: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cbd1c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4cbd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cbd20: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4cbd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cbd24: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4cbd24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cbd28: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x4cbd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4cbd2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cbd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cbd30: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cbd30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cbd34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4cbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cbd38: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4cbd38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cbd3c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4cbd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4cbd40: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cbd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cbd44: 0xa6620164  sh          $v0, 0x164($s3)
    ctx->pc = 0x4cbd44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbd48: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4cbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4cbd4c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cbd4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cbd50: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4cbd50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbd54: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4cbd54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x4cbd58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4cbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cbd5c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4cbd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cbd60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cbd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cbd64: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4cbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cbd68: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4cbd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4cbd6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cbd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cbd70: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4cbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4cbd74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbd78: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4cbd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4cbd7c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4cbd7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cbd80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4cbd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbd84: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4cbd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4cbd88: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4cbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4cbd8c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cbd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cbd90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cbd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cbd94: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4cbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4cbd98: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cbd9c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4cbd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4cbda0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cbda0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cbda4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4cbda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4cbda8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cbda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cbdac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4cbdb0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CBDB0u;
    SET_GPR_U32(ctx, 31, 0x4CBDB8u);
    ctx->pc = 0x4CBDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBDB0u;
    // 0x4cbdb4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CBDB0u, 0x4CBDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBDB8u;
label_4cbdb8:
    // 0x4cbdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbdbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cbdc0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CBDC0u;
    SET_GPR_U32(ctx, 31, 0x4CBDC8u);
    ctx->pc = 0x4CBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBDC0u;
    // 0x4cbdc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CBDC0u, 0x4CBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBDC8u;
label_4cbdc8:
    // 0x4cbdc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cbdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbdcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4cbdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbdd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4cbdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbdd4: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4CBDD4u;
    SET_GPR_U32(ctx, 31, 0x4CBDDCu);
    ctx->pc = 0x4CBDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBDD4u;
    // 0x4cbdd8: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4CBDD4u, 0x4CBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBDDCu;
label_4cbddc:
    // 0x4cbddc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbde0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4cbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cbde4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbde8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4cbde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4cbdec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cbdecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cbdf0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4cbdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4cbdf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbdf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cbdfc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CBDFCu;
    SET_GPR_U32(ctx, 31, 0x4CBE04u);
    ctx->pc = 0x4CBE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBDFCu;
    // 0x4cbe00: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CBDFCu, 0x4CBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBE04u;
label_4cbe04:
    // 0x4cbe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbe08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cbe0c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CBE0Cu;
    SET_GPR_U32(ctx, 31, 0x4CBE14u);
    ctx->pc = 0x4CBE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBE0Cu;
    // 0x4cbe10: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CBE0Cu, 0x4CBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBE14u;
label_4cbe14:
    // 0x4cbe14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cbe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbe18: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4cbe18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbe1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cbe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbe20: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CBE20u;
    SET_GPR_U32(ctx, 31, 0x4CBE28u);
    ctx->pc = 0x4CBE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBE20u;
    // 0x4cbe24: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CBE20u, 0x4CBE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBE28u;
label_4cbe28:
    // 0x4cbe28: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4cbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cbe2c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4cbe2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cbe30: 0x26650128  addiu       $a1, $s3, 0x128
    ctx->pc = 0x4cbe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4cbe34: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4cbe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4cbe38: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cbe38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cbe3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cbe40: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4cbe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4cbe44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cbe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cbe48: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4cbe48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4cbe4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbe50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cbe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbe54: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4cbe54u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4cbe58: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4cbe58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cbe5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cbe60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cbe64: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4cbe64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4cbe68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cbe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cbe6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbe70: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cbe74: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4cbe74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cbe78: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4cbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cbe7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cbe80: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4cbe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4cbe84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cbe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cbe88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbe8c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4cbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4cbe90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4cbe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbe94: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4cbe94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cbe98: 0xa4c7232e  sh          $a3, 0x232E($a2)
    ctx->pc = 0x4cbe98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 7));
    // 0x4cbe9c: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4cbe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cbea0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4cbea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cbea4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cbea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cbea8: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4CBEA8u;
    SET_GPR_U32(ctx, 31, 0x4CBEB0u);
    ctx->pc = 0x4CBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBEA8u;
    // 0x4cbeac: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4CBEA8u, 0x4CBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBEB0u;
label_4cbeb0:
    // 0x4cbeb0: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4CBEB0u;
    SET_GPR_U32(ctx, 31, 0x4CBEB8u);
    ctx->pc = 0x4CBEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBEB0u;
    // 0x4cbeb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4CBEB0u, 0x4CBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBEB8u;
label_4cbeb8:
    // 0x4cbeb8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4CBEB8u;
    SET_GPR_U32(ctx, 31, 0x4CBEC0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4CBEB8u, 0x4CBEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBEC0u;
label_4cbec0:
    // 0x4cbec0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4cbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cbec4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4cbec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cbec8: 0xa66201bc  sh          $v0, 0x1BC($s3)
    ctx->pc = 0x4cbec8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbecc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4cbeccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cbed0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4cbed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cbed4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4cbed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cbed8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4cbed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cbedc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4cbedcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cbee0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4cbee0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cbee4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4cbee4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cbee8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4cbee8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cbeec: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4cbeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cbef0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBEF0u;
        // 0x4cbef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CBEF8u;
}
