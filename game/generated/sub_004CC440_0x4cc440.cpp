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

// Function: sub_004CC440
// Address: 0x4cc440 - 0x4ccf88
void sub_004CC440_0x4cc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC440_0x4cc440");
#endif

    switch (ctx->pc) {
        case 0x4cc480u: goto label_4cc480;
        case 0x4cc668u: goto label_4cc668;
        case 0x4cc678u: goto label_4cc678;
        case 0x4cc68cu: goto label_4cc68c;
        case 0x4cc6f0u: goto label_4cc6f0;
        case 0x4ccc0cu: goto label_4ccc0c;
        case 0x4ccc9cu: goto label_4ccc9c;
        case 0x4ccd3cu: goto label_4ccd3c;
        case 0x4ccd84u: goto label_4ccd84;
        case 0x4ccd94u: goto label_4ccd94;
        case 0x4cce9cu: goto label_4cce9c;
        case 0x4cceacu: goto label_4cceac;
        case 0x4ccec0u: goto label_4ccec0;
        case 0x4ccf40u: goto label_4ccf40;
        case 0x4ccf48u: goto label_4ccf48;
        case 0x4ccf50u: goto label_4ccf50;
        default: break;
    }

    ctx->pc = 0x4cc440u;

    // 0x4cc440: 0x2482014a  addiu       $v0, $a0, 0x14A
    ctx->pc = 0x4cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 330));
    // 0x4cc444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cc444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cc448: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cc448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cc44c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cc44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cc450: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cc450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4cc454: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4cc454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cc458: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CC458u;
    {
        const bool branch_taken_0x4cc458 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4CC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC458u;
        // 0x4cc45c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc458) {
            ctx->pc = 0x4CC470u;
            goto label_4cc470;
        }
    }
    ctx->pc = 0x4CC460u;
    // 0x4cc460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cc460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc464: 0x8133120  j           func_4CC480
    ctx->pc = 0x4CC464u;
    ctx->pc = 0x4CC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC464u;
    // 0x4cc468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC480u;
    goto label_4cc480;
    ctx->pc = 0x4CC46Cu;
    // 0x4cc46c: 0x0  nop
    ctx->pc = 0x4cc46cu;
    // NOP
label_4cc470:
    // 0x4cc470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cc470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc474: 0x8133370  j           func_4CCDC0
    ctx->pc = 0x4CC474u;
    ctx->pc = 0x4CC478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC474u;
    // 0x4cc478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCDC0u;
    goto label_4ccdc0;
    ctx->pc = 0x4CC47Cu;
    // 0x4cc47c: 0x0  nop
    ctx->pc = 0x4cc47cu;
    // NOP
label_4cc480:
    // 0x4cc480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cc480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cc484: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cc484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cc488: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4cc488u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc48c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cc48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cc490: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cc490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cc494: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4cc494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc498: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cc498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4cc49c: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4cc49cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4cc4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cc4a4: 0x26c3015e  addiu       $v1, $s6, 0x15E
    ctx->pc = 0x4cc4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 350));
    // 0x4cc4a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cc4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cc4ac: 0x27d50f60  addiu       $s5, $fp, 0xF60
    ctx->pc = 0x4cc4acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3936));
    // 0x4cc4b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cc4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cc4b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cc4b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cc4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cc4bc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4cc4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4cc4c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cc4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cc4c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4cc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cc4c8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cc4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cc4cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc4d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc4d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc4d4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4cc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc4d8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc4dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc4e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc4e4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4cc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4cc4e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc4ec: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4cc4ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc4f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4cc4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4cc4f4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc4f8: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x4cc4f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc4fc: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4cc4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4cc500: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4cc500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc504: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4CC504u;
    {
        const bool branch_taken_0x4cc504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC504u;
        // 0x4cc508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc504) {
            ctx->pc = 0x4CC538u;
            goto label_4cc538;
        }
    }
    ctx->pc = 0x4CC50Cu;
    // 0x4cc50c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cc50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cc510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cc510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc514: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cc514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cc518: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cc518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cc51c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cc51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cc520: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cc520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cc524: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cc524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cc528: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cc528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cc52c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cc52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cc530: 0x813335c  j           func_4CCD70
    ctx->pc = 0x4CC530u;
    ctx->pc = 0x4CC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC530u;
    // 0x4cc534: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCD70u;
    goto label_4ccd70;
    ctx->pc = 0x4CC538u;
label_4cc538:
    // 0x4cc538: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cc538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cc53c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cc53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cc540: 0x8c460f80  lw          $a2, 0xF80($v0)
    ctx->pc = 0x4cc540u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F80u));
    // 0x4cc544: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cc544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cc548: 0x24510f6c  addiu       $s1, $v0, 0xF6C
    ctx->pc = 0x4cc548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3948));
    // 0x4cc54c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cc54cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cc550: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cc550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc554: 0x24900f70  addiu       $s0, $a0, 0xF70
    ctx->pc = 0x4cc554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3952));
    // 0x4cc558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cc558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cc55c: 0x24f20f74  addiu       $s2, $a3, 0xF74
    ctx->pc = 0x4cc55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 3956));
    // 0x4cc560: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4cc564: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4cc564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cc568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc56c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc570: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc574: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4cc574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cc578: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc57c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cc57cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cc580: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cc580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cc584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc588: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc58c: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4cc58cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4cc590: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4cc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4cc594: 0x24f3d680  addiu       $s3, $a3, -0x2980
    ctx->pc = 0x4cc594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4cc598: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x4cc598u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cc59c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cc59cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cc5a0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4cc5a4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4cc5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4cc5a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc5ac: 0x25b70f64  addiu       $s7, $t5, 0xF64
    ctx->pc = 0x4cc5acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 13), 3940));
    // 0x4cc5b0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc5b4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cc5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cc5b8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4cc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4cc5bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cc5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cc5c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4cc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4cc5c4: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4cc5c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cc5c8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4cc5cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc5ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc5d0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc5d4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cc5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cc5d8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4cc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4cc5dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc5e0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4cc5e4: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4cc5e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cc5e8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4cc5ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc5ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc5f0: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4cc5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4cc5f4: 0x1344825  or          $t1, $t1, $s4
    ctx->pc = 0x4cc5f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 20));
    // 0x4cc5f8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4cc5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4cc5fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cc5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cc600: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4cc604: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4cc608: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc60c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4cc60cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cc610: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x4cc610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x4cc614: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4cc614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4cc618: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4cc618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4cc61c: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4cc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4cc620: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4cc624: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc628: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4cc628u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cc62c: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x4cc62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x4cc630: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4cc630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4cc634: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4cc634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4cc638: 0x86c20120  lh          $v0, 0x120($s6)
    ctx->pc = 0x4cc638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 288)));
    // 0x4cc63c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc640: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cc640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cc644: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4cc644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4cc648: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cc648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cc64c: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4cc64cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc650: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cc650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cc654: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc658: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cc658u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cc65c: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4cc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4cc660: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CC660u;
    SET_GPR_U32(ctx, 31, 0x4CC668u);
    ctx->pc = 0x4CC664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC660u;
    // 0x4cc664: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CC660u, 0x4CC668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC668u;
label_4cc668:
    // 0x4cc668: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cc668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc66c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4cc66cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4cc670: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CC670u;
    SET_GPR_U32(ctx, 31, 0x4CC678u);
    ctx->pc = 0x4CC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC670u;
    // 0x4cc674: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CC670u, 0x4CC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC678u;
label_4cc678:
    // 0x4cc678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cc678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc67c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4cc67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4cc680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc684: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CC684u;
    SET_GPR_U32(ctx, 31, 0x4CC68Cu);
    ctx->pc = 0x4CC688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC684u;
    // 0x4cc688: 0x8ee70000  lw          $a3, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CC684u, 0x4CC68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC68Cu;
label_4cc68c:
    // 0x4cc68c: 0x266a2494  addiu       $t2, $s3, 0x2494
    ctx->pc = 0x4cc68cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 9364));
    // 0x4cc690: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4cc690u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cc694: 0x26692498  addiu       $t1, $s3, 0x2498
    ctx->pc = 0x4cc694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 9368));
    // 0x4cc698: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4cc698u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cc69c: 0x2668249c  addiu       $t0, $s3, 0x249C
    ctx->pc = 0x4cc69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 9372));
    // 0x4cc6a0: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4cc6a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cc6a4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4cc6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cc6a8: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4cc6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4cc6ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4cc6acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4cc6b0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cc6b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4cc6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4cc6b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4cc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc6bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cc6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cc6c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cc6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cc6c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cc6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cc6c8: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4cc6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4cc6cc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4cc6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4cc6d0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc6d4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cc6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cc6d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cc6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cc6dc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cc6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cc6e0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4cc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4cc6e4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cc6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cc6e8: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CC6E8u;
    SET_GPR_U32(ctx, 31, 0x4CC6F0u);
    ctx->pc = 0x4CC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC6E8u;
    // 0x4cc6ec: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CC6E8u, 0x4CC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC6F0u;
label_4cc6f0:
    // 0x4cc6f0: 0x26cd011c  addiu       $t5, $s6, 0x11C
    ctx->pc = 0x4cc6f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 284));
    // 0x4cc6f4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4cc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc6f8: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4cc6f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cc6fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc700: 0x966424a2  lhu         $a0, 0x24A2($s3)
    ctx->pc = 0x4cc700u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 9378)));
    // 0x4cc704: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cc704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cc708: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc70c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4cc70cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4cc710: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4cc710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cc714: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4cc714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cc718: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc71c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CC71Cu;
    {
        const bool branch_taken_0x4cc71c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC71Cu;
        // 0x4cc720: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc71c) {
            ctx->pc = 0x4CC730u;
            goto label_4cc730;
        }
    }
    ctx->pc = 0x4CC724u;
    // 0x4cc724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4CC724u;
    {
        const bool branch_taken_0x4cc724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC724u;
        // 0x4cc728: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc724) {
            ctx->pc = 0x4CC734u;
            goto label_4cc734;
        }
    }
    ctx->pc = 0x4CC72Cu;
    // 0x4cc72c: 0x0  nop
    ctx->pc = 0x4cc72cu;
    // NOP
label_4cc730:
    // 0x4cc730: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4cc730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_4cc734:
    // 0x4cc734: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4cc734u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4cc738: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4cc738u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4cc73c: 0x25cc0f68  addiu       $t4, $t6, 0xF68
    ctx->pc = 0x4cc73cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 3944));
    // 0x4cc740: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4cc740u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc744: 0x86c20138  lh          $v0, 0x138($s6)
    ctx->pc = 0x4cc744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 312)));
    // 0x4cc748: 0x27c80f60  addiu       $t0, $fp, 0xF60
    ctx->pc = 0x4cc748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 3936));
    // 0x4cc74c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4cc74cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F68u));
    // 0x4cc750: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x4cc750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x4cc754: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cc754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cc758: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cc758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cc75c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc760: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4cc760u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc768: 0x252ad680  addiu       $t2, $t1, -0x2980
    ctx->pc = 0x4cc768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x4cc76c: 0x94890f64  lhu         $t1, 0xF64($a0)
    ctx->pc = 0x4cc76cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3940)));
    // 0x4cc770: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cc770u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cc774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc778: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4cc778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4cc77c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4cc77cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc780: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4cc780u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4cc784: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4cc784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc788: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4cc788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4cc78c: 0x954b24a2  lhu         $t3, 0x24A2($t2)
    ctx->pc = 0x4cc78cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 9378)));
    // 0x4cc790: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc794: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc798: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc79c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cc79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cc7a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc7a4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cc7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cc7a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc7ac: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4cc7acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc7b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4cc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cc7b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cc7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cc7b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc7bc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cc7c0: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4cc7c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc7c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cc7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cc7c8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4cc7c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4cc7cc: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4cc7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4cc7d0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4cc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4cc7d4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cc7d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc7d8: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4cc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4cc7dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc7e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CC7E0u;
    {
        const bool branch_taken_0x4cc7e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC7E0u;
        // 0x4cc7e4: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc7e0) {
            ctx->pc = 0x4CC7F0u;
            goto label_4cc7f0;
        }
    }
    ctx->pc = 0x4CC7E8u;
    // 0x4cc7e8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4cc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cc7ec: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4cc7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4cc7f0:
    // 0x4cc7f0: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cc7f4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cc7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cc7f8: 0x24e90f64  addiu       $t1, $a3, 0xF64
    ctx->pc = 0x4cc7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 3940));
    // 0x4cc7fc: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4cc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cc800: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cc800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F64u));
    // 0x4cc804: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x4cc804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x7F0F64u));
    // 0x4cc808: 0x91c20f68  lbu         $v0, 0xF68($t6)
    ctx->pc = 0x4cc808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3944)));
    // 0x4cc80c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cc80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cc810: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4cc810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4cc814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cc814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cc818: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cc818u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cc81c: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x4cc81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cc820: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4CC820u;
    {
        const bool branch_taken_0x4cc820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC820u;
        // 0x4cc824: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc820) {
            ctx->pc = 0x4CC84Cu;
            goto label_4cc84c;
        }
    }
    ctx->pc = 0x4CC828u;
    // 0x4cc828: 0x27c50f60  addiu       $a1, $fp, 0xF60
    ctx->pc = 0x4cc828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3936));
    // 0x4cc82c: 0x2462d680  addiu       $v0, $v1, -0x2980
    ctx->pc = 0x4cc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4cc830: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4cc830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc834: 0x844324a2  lh          $v1, 0x24A2($v0)
    ctx->pc = 0x4cc834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 9378)));
    // 0x4cc838: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cc83c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4cc83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4cc840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cc840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cc844: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cc844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cc848: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cc848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4cc84c:
    // 0x4cc84c: 0x97c20f60  lhu         $v0, 0xF60($fp)
    ctx->pc = 0x4cc84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3936)));
    // 0x4cc850: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4cc850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4cc854: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cc854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cc858: 0x2483d680  addiu       $v1, $a0, -0x2980
    ctx->pc = 0x4cc858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4cc85c: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4cc85cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cc860: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4cc860u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4cc864: 0x24e60f6c  addiu       $a2, $a3, 0xF6C
    ctx->pc = 0x4cc864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3948));
    // 0x4cc868: 0x25a70f74  addiu       $a3, $t5, 0xF74
    ctx->pc = 0x4cc868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 3956));
    // 0x4cc86c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cc870: 0x846424a0  lh          $a0, 0x24A0($v1)
    ctx->pc = 0x4cc870u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72FB20u));
    // 0x4cc874: 0x244b0f70  addiu       $t3, $v0, 0xF70
    ctx->pc = 0x4cc874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x4cc878: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cc878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cc87c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cc87cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc880: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x4cc880u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cc884: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4cc884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4cc888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cc888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cc88c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4cc88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4cc890: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cc890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc894: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cc894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cc898: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4cc898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4cc89c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc8a0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4cc8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc8a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4cc8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4cc8a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CC8A8u;
    {
        const bool branch_taken_0x4cc8a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8A8u;
        // 0x4cc8ac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc8a8) {
            ctx->pc = 0x4CC8C0u;
            goto label_4cc8c0;
        }
    }
    ctx->pc = 0x4CC8B0u;
    // 0x4cc8b0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4cc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc8b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CC8B4u;
    {
        const bool branch_taken_0x4cc8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8B4u;
        // 0x4cc8b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc8b4) {
            ctx->pc = 0x4CC8C8u;
            goto label_4cc8c8;
        }
    }
    ctx->pc = 0x4CC8BCu;
    // 0x4cc8bc: 0x0  nop
    ctx->pc = 0x4cc8bcu;
    // NOP
label_4cc8c0:
    // 0x4cc8c0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4cc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc8c4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4cc8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4cc8c8:
    // 0x4cc8c8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4cc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4cc8cc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cc8d0: 0x24650f6c  addiu       $a1, $v1, 0xF6C
    ctx->pc = 0x4cc8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3948));
    // 0x4cc8d4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cc8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cc8d8: 0x94860f70  lhu         $a2, 0xF70($a0)
    ctx->pc = 0x4cc8d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x7F0F70u));
    // 0x4cc8dc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cc8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc8e0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cc8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0F6Cu));
    // 0x4cc8e4: 0x27c70f60  addiu       $a3, $fp, 0xF60
    ctx->pc = 0x4cc8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 3936));
    // 0x4cc8e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cc8ec: 0x26cc0118  addiu       $t4, $s6, 0x118
    ctx->pc = 0x4cc8ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 280));
    // 0x4cc8f0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4cc8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4cc8f4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4cc8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc8f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc8fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc900: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc904: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc908: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc90c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4cc90cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4cc910: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc914: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cc914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cc918: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4cc918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc91c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4cc91cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cc920: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc924: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cc924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cc928: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4cc928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4cc92c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cc92cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc930: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4cc930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cc934: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc938: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CC938u;
    {
        const bool branch_taken_0x4cc938 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC938u;
        // 0x4cc93c: 0x25260f64  addiu       $a2, $t1, 0xF64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc938) {
            ctx->pc = 0x4CC950u;
            goto label_4cc950;
        }
    }
    ctx->pc = 0x4CC940u;
    // 0x4cc940: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cc940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CC944u;
    {
        const bool branch_taken_0x4cc944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC944u;
        // 0x4cc948: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc944) {
            ctx->pc = 0x4CC958u;
            goto label_4cc958;
        }
    }
    ctx->pc = 0x4CC94Cu;
    // 0x4cc94c: 0x0  nop
    ctx->pc = 0x4cc94cu;
    // NOP
label_4cc950:
    // 0x4cc950: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cc950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc954: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4cc954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4cc958:
    // 0x4cc958: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cc958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cc95c: 0x25cb0f68  addiu       $t3, $t6, 0xF68
    ctx->pc = 0x4cc95cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3944));
    // 0x4cc960: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4cc960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc964: 0x27c80f60  addiu       $t0, $fp, 0xF60
    ctx->pc = 0x4cc964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 3936));
    // 0x4cc968: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4cc968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc96c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4cc96cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4cc970: 0x86c20136  lh          $v0, 0x136($s6)
    ctx->pc = 0x4cc970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
    // 0x4cc974: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc978: 0x95a90f64  lhu         $t1, 0xF64($t5)
    ctx->pc = 0x4cc978u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x7F0F64u));
    // 0x4cc97c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cc97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cc980: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4cc980u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc988: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4cc988u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4cc98c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cc98cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cc990: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc994: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4cc994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4cc998: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4cc998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc99c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4cc99cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4cc9a0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4cc9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc9a4: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4cc9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4cc9a8: 0x95aa0f6c  lhu         $t2, 0xF6C($t5)
    ctx->pc = 0x4cc9a8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3948)));
    // 0x4cc9ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc9b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc9b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc9b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc9b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cc9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cc9bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc9c0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cc9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cc9c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc9c8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4cc9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc9cc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4cc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cc9d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cc9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cc9d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc9d8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cc9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cc9dc: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4cc9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc9e0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cc9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cc9e4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4cc9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4cc9e8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4cc9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4cc9ec: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4cc9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4cc9f0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cc9f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc9f4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4cc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4cc9f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc9fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CC9FCu;
    {
        const bool branch_taken_0x4cc9fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9FCu;
        // 0x4cca00: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc9fc) {
            ctx->pc = 0x4CCA0Cu;
            goto label_4cca0c;
        }
    }
    ctx->pc = 0x4CCA04u;
    // 0x4cca04: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4cca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cca08: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4cca08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4cca0c:
    // 0x4cca0c: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4cca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4cca10: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cca14: 0x24440f64  addiu       $a0, $v0, 0xF64
    ctx->pc = 0x4cca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3940));
    // 0x4cca18: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4cca18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cca1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F64u));
    // 0x4cca20: 0x91c20f68  lbu         $v0, 0xF68($t6)
    ctx->pc = 0x4cca20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3944)));
    // 0x4cca24: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4cca24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x7F0F64u));
    // 0x4cca28: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cca2c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4cca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4cca30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cca34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cca34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cca38: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4cca38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cca3c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4CCA3Cu;
    {
        const bool branch_taken_0x4cca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cca3c) {
            ctx->pc = 0x4CCA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CCA3Cu;
            // 0x4cca40: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCA80u;
            goto label_4cca80;
        }
    }
    ctx->pc = 0x4CCA44u;
    // 0x4cca44: 0x97c20f60  lhu         $v0, 0xF60($fp)
    ctx->pc = 0x4cca44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3936)));
    // 0x4cca48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cca4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cca4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cca50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cca50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cca54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cca54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cca58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cca58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cca5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cca5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cca60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cca60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cca64: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cca64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cca68: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cca68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cca6c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cca6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cca70: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cca70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cca74: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4cca74u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cca78: 0x813335c  j           func_4CCD70
    ctx->pc = 0x4CCA78u;
    ctx->pc = 0x4CCA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCA78u;
    // 0x4cca7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCD70u;
    goto label_4ccd70;
    ctx->pc = 0x4CCA80u;
label_4cca80:
    // 0x4cca80: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cca80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cca84: 0x94620f6c  lhu         $v0, 0xF6C($v1)
    ctx->pc = 0x4cca84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3948)));
    // 0x4cca88: 0x24e40f74  addiu       $a0, $a3, 0xF74
    ctx->pc = 0x4cca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3956));
    // 0x4cca8c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4cca8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4cca90: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cca90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cca94: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4cca94u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cca98: 0x95250f70  lhu         $a1, 0xF70($t1)
    ctx->pc = 0x4cca98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0F70u));
    // 0x4cca9c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cca9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0F74u));
    // 0x4ccaa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ccaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F74u));
    // 0x4ccaa4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ccaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ccaa8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ccaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ccaac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccab0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ccab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ccab4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ccab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ccab8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccabc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ccabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ccac0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ccac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ccac4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4CCAC4u;
    {
        const bool branch_taken_0x4ccac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCAC4u;
        // 0x4ccac8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccac4) {
            ctx->pc = 0x4CCB00u;
            goto label_4ccb00;
        }
    }
    ctx->pc = 0x4CCACCu;
    // 0x4ccacc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccaccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ccad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccad8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ccadc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ccae0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ccae4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ccae8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ccaec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ccaecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccaf0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ccaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ccaf4: 0x813335c  j           func_4CCD70
    ctx->pc = 0x4CCAF4u;
    ctx->pc = 0x4CCAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCAF4u;
    // 0x4ccaf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCD70u;
    goto label_4ccd70;
    ctx->pc = 0x4CCAFCu;
    // 0x4ccafc: 0x0  nop
    ctx->pc = 0x4ccafcu;
    // NOP
label_4ccb00:
    // 0x4ccb00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccb00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ccb04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccb04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccb08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccb0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccb0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ccb10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccb10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ccb14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccb14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ccb18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccb18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ccb1c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccb1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ccb20: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ccb20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccb24: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ccb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ccb28: 0x81332cc  j           func_4CCB30
    ctx->pc = 0x4CCB28u;
    ctx->pc = 0x4CCB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCB28u;
    // 0x4ccb2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCB30u;
    goto label_4ccb30;
    ctx->pc = 0x4CCB30u;
label_4ccb30:
    // 0x4ccb30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ccb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ccb34: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ccb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ccb38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ccb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ccb3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ccb3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccb40: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ccb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ccb44: 0x24760f60  addiu       $s6, $v1, 0xF60
    ctx->pc = 0x4ccb44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
    // 0x4ccb48: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ccb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ccb4c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4ccb4cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4ccb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ccb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ccb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ccb58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ccb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ccb5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ccb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ccb60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ccb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ccb64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ccb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ccb68: 0x86a2015e  lh          $v0, 0x15E($s5)
    ctx->pc = 0x4ccb68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 350)));
    // 0x4ccb6c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4ccb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4ccb70: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4ccb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4ccb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccb78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccb7c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4ccb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4ccb80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccb84: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4ccb84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ccb88: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x4ccb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x4ccb8c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4ccb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4ccb90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccb94: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4ccb94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4ccb98: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4ccb98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ccb9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4CCB9Cu;
    {
        const bool branch_taken_0x4ccb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCB9Cu;
        // 0x4ccba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccb9c) {
            ctx->pc = 0x4CCBD0u;
            goto label_4ccbd0;
        }
    }
    ctx->pc = 0x4CCBA4u;
    // 0x4ccba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ccbac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccbacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ccbb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccbb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ccbb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccbb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ccbb8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccbb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ccbbc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccbbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ccbc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ccbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccbc4: 0x813335c  j           func_4CCD70
    ctx->pc = 0x4CCBC4u;
    ctx->pc = 0x4CCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCBC4u;
    // 0x4ccbc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCD70u;
    goto label_4ccd70;
    ctx->pc = 0x4CCBCCu;
    // 0x4ccbcc: 0x0  nop
    ctx->pc = 0x4ccbccu;
    // NOP
label_4ccbd0:
    // 0x4ccbd0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ccbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ccbd4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ccbd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ccbd8: 0x26100f6c  addiu       $s0, $s0, 0xF6C
    ctx->pc = 0x4ccbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3948));
    // 0x4ccbdc: 0x26310f70  addiu       $s1, $s1, 0xF70
    ctx->pc = 0x4ccbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3952));
    // 0x4ccbe0: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ccbe0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ccbe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ccbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4ccbe8: 0x26940f64  addiu       $s4, $s4, 0xF64
    ctx->pc = 0x4ccbe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3940));
    // 0x4ccbec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4ccbecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F70u));
    // 0x4ccbf0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ccbf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ccbf4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4ccbf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccbf8: 0x26730f74  addiu       $s3, $s3, 0xF74
    ctx->pc = 0x4ccbf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3956));
    // 0x4ccbfc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4ccbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc00: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4ccc00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc04: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4CCC04u;
    SET_GPR_U32(ctx, 31, 0x4CCC0Cu);
    ctx->pc = 0x4CCC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCC04u;
    // 0x4ccc08: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4CCC04u, 0x4CCC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCC0Cu;
label_4ccc0c:
    // 0x4ccc0c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4ccc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ccc10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ccc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ccc14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ccc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ccc18: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4ccc18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ccc1c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4ccc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4ccc20: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x4ccc20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ccc24: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ccc24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ccc28: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4ccc28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ccc2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccc30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ccc30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ccc34: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4ccc34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4ccc38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccc3c: 0xf73824  and         $a3, $a3, $s7
    ctx->pc = 0x4ccc3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 23));
    // 0x4ccc40: 0xd73024  and         $a2, $a2, $s7
    ctx->pc = 0x4ccc40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 23));
    // 0x4ccc44: 0xa644233a  sh          $a0, 0x233A($s2)
    ctx->pc = 0x4ccc44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9018), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ccc48: 0xa645233c  sh          $a1, 0x233C($s2)
    ctx->pc = 0x4ccc48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9020), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ccc4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ccc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc50: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4ccc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4ccc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ccc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ccc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ccc5c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4ccc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4ccc60: 0xa640233e  sh          $zero, 0x233E($s2)
    ctx->pc = 0x4ccc60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ccc64: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4ccc64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ccc68: 0x86a2002a  lh          $v0, 0x2A($s5)
    ctx->pc = 0x4ccc68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
    // 0x4ccc6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ccc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ccc70: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4ccc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ccc74: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4ccc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4ccc78: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ccc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ccc7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccc80: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4ccc80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4ccc84: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x4ccc84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x4ccc88: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4ccc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4ccc8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccc90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4ccc90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4ccc94: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CCC94u;
    SET_GPR_U32(ctx, 31, 0x4CCC9Cu);
    ctx->pc = 0x4CCC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCC94u;
    // 0x4ccc98: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CCC94u, 0x4CCC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCC9Cu;
label_4ccc9c:
    // 0x4ccc9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ccc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ccca0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4ccca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4ccca4: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x4ccca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4ccca8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ccca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cccac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cccacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cccb0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4cccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4cccb4: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4cccb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cccb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cccb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cccbc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4cccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cccc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cccc4: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4cccc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cccc8: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4cccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4ccccc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4cccccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cccd0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cccd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cccd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cccd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cccd8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4cccdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccce0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ccce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ccce4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4ccce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4ccce8: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x4ccce8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cccec: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4cccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4cccf0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cccf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cccf4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cccf8: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x4cccf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x4cccfc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4cccfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4ccd00: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4ccd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4ccd04: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4ccd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4ccd08: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4ccd08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ccd0c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4ccd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4ccd10: 0xa64a2330  sh          $t2, 0x2330($s2)
    ctx->pc = 0x4ccd10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9008), (uint16_t)GPR_U32(ctx, 10));
    // 0x4ccd14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ccd14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ccd18: 0xa6492334  sh          $t1, 0x2334($s2)
    ctx->pc = 0x4ccd18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9012), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ccd1c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4ccd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ccd20: 0xa6432336  sh          $v1, 0x2336($s2)
    ctx->pc = 0x4ccd20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ccd24: 0x1174025  or          $t0, $t0, $s7
    ctx->pc = 0x4ccd24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x4ccd28: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4ccd28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4ccd2c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ccd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4ccd30: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ccd30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ccd34: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4CCD34u;
    SET_GPR_U32(ctx, 31, 0x4CCD3Cu);
    ctx->pc = 0x4CCD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCD34u;
    // 0x4ccd38: 0xa6422338  sh          $v0, 0x2338($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4CCD34u, 0x4CCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCD3Cu;
label_4ccd3c:
    // 0x4ccd3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ccd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccd44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccd48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccd48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ccd4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccd4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ccd50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccd50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ccd54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccd54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ccd58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccd58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ccd5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccd5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ccd60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ccd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccd64: 0x813335c  j           func_4CCD70
    ctx->pc = 0x4CCD64u;
    ctx->pc = 0x4CCD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCD64u;
    // 0x4ccd68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCD70u;
    goto label_4ccd70;
    ctx->pc = 0x4CCD6Cu;
    // 0x4ccd6c: 0x0  nop
    ctx->pc = 0x4ccd6cu;
    // NOP
label_4ccd70:
    // 0x4ccd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ccd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ccd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ccd78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ccd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ccd7c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4CCD7Cu;
    SET_GPR_U32(ctx, 31, 0x4CCD84u);
    ctx->pc = 0x4CCD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCD7Cu;
    // 0x4ccd80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4CCD7Cu, 0x4CCD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCD84u;
label_4ccd84:
    // 0x4ccd84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ccd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ccd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ccd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccd8c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4CCD8Cu;
    SET_GPR_U32(ctx, 31, 0x4CCD94u);
    ctx->pc = 0x4CCD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCD8Cu;
    // 0x4ccd90: 0x8c450f78  lw          $a1, 0xF78($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3960)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4CCD8Cu, 0x4CCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCD94u;
label_4ccd94:
    // 0x4ccd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ccd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ccd98: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CCD98u;
    {
        const bool branch_taken_0x4ccd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CCD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD98u;
        // 0x4ccd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccd98) {
            ctx->pc = 0x4CCDB0u;
            goto label_4ccdb0;
        }
    }
    ctx->pc = 0x4CCDA0u;
    // 0x4ccda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccda4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ccda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccda8: 0x8133370  j           func_4CCDC0
    ctx->pc = 0x4CCDA8u;
    ctx->pc = 0x4CCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCDA8u;
    // 0x4ccdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCDC0u;
    goto label_4ccdc0;
    ctx->pc = 0x4CCDB0u;
label_4ccdb0:
    // 0x4ccdb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccdb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ccdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CCDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDB8u;
        // 0x4ccdbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CCDC0u;
label_4ccdc0:
    // 0x4ccdc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ccdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ccdc4: 0x24020484  addiu       $v0, $zero, 0x484
    ctx->pc = 0x4ccdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
    // 0x4ccdc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ccdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ccdcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ccdccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccdd0: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x4ccdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4ccdd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ccdd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ccdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ccddc: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ccddcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ccde0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ccde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ccde4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ccde4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ccde8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ccde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ccdec: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ccdecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ccdf0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ccdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ccdf4: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4ccdf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4ccdf8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ccdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ccdfc: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4ccdfcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4cce00: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cce04: 0x2677012c  addiu       $s7, $s3, 0x12C
    ctx->pc = 0x4cce04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x4cce08: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4cce0c: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x4cce0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cce10: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4cce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4cce14: 0x26940f6c  addiu       $s4, $s4, 0xF6C
    ctx->pc = 0x4cce14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3948));
    // 0x4cce18: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x4cce18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cce1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cce20: 0xa6630024  sh          $v1, 0x24($s3)
    ctx->pc = 0x4cce20u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cce24: 0x26b50f70  addiu       $s5, $s5, 0xF70
    ctx->pc = 0x4cce24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3952));
    // 0x4cce28: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4cce28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cce2c: 0x26d60f74  addiu       $s6, $s6, 0xF74
    ctx->pc = 0x4cce2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3956));
    // 0x4cce30: 0xa6600022  sh          $zero, 0x22($s3)
    ctx->pc = 0x4cce30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cce34: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x4cce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x4cce38: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4cce38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4cce3c: 0x26310f64  addiu       $s1, $s1, 0xF64
    ctx->pc = 0x4cce3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3940));
    // 0x4cce40: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4cce40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cce44: 0x26100f60  addiu       $s0, $s0, 0xF60
    ctx->pc = 0x4cce44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3936));
    // 0x4cce48: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4cce48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F70u));
    // 0x4cce4c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4cce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F74u));
    // 0x4cce50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cce50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cce54: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cce54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cce58: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4cce58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4cce5c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cce5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cce60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cce60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cce64: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4cce64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4cce68: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cce68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cce6c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4cce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4cce70: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4cce70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4cce74: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4cce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cce78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cce7c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4cce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4cce80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cce80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cce84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cce84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cce88: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4cce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4cce8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cce90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cce94: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CCE94u;
    SET_GPR_U32(ctx, 31, 0x4CCE9Cu);
    ctx->pc = 0x4CCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCE94u;
    // 0x4cce98: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CCE94u, 0x4CCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCE9Cu;
label_4cce9c:
    // 0x4cce9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ccea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ccea4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CCEA4u;
    SET_GPR_U32(ctx, 31, 0x4CCEACu);
    ctx->pc = 0x4CCEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCEA4u;
    // 0x4ccea8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CCEA4u, 0x4CCEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCEACu;
label_4cceac:
    // 0x4cceac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cceb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4cceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cceb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cceb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cceb8: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CCEB8u;
    SET_GPR_U32(ctx, 31, 0x4CCEC0u);
    ctx->pc = 0x4CCEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCEB8u;
    // 0x4ccebc: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CCEB8u, 0x4CCEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCEC0u;
label_4ccec0:
    // 0x4ccec0: 0x26640124  addiu       $a0, $s3, 0x124
    ctx->pc = 0x4ccec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4ccec4: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4ccec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ccec8: 0x26660128  addiu       $a2, $s3, 0x128
    ctx->pc = 0x4ccec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4ccecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cced0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4cced0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4cced4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cced4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cced8: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4cced8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4ccedc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ccedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ccee0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ccee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ccee4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccee8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x4ccee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4cceec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cceecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ccef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ccef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccef4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4ccef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ccef8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4ccef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ccefc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ccefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ccf00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ccf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ccf04: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ccf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ccf08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ccf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ccf0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccf10: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ccf10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ccf14: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4ccf14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ccf18: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4ccf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ccf1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ccf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ccf20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ccf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ccf24: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ccf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ccf28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccf2c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4ccf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4ccf30: 0xa4be23c4  sh          $fp, 0x23C4($a1)
    ctx->pc = 0x4ccf30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 30));
    // 0x4ccf34: 0xa4a8232c  sh          $t0, 0x232C($a1)
    ctx->pc = 0x4ccf34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ccf38: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4CCF38u;
    SET_GPR_U32(ctx, 31, 0x4CCF40u);
    ctx->pc = 0x4CCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCF38u;
    // 0x4ccf3c: 0xa4a7232e  sh          $a3, 0x232E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4CCF38u, 0x4CCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCF40u;
label_4ccf40:
    // 0x4ccf40: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4CCF40u;
    SET_GPR_U32(ctx, 31, 0x4CCF48u);
    ctx->pc = 0x4CCF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCF40u;
    // 0x4ccf44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4CCF40u, 0x4CCF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCF48u;
label_4ccf48:
    // 0x4ccf48: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4CCF48u;
    SET_GPR_U32(ctx, 31, 0x4CCF50u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4CCF48u, 0x4CCF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCF50u;
label_4ccf50:
    // 0x4ccf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccf54: 0xa67e01bc  sh          $fp, 0x1BC($s3)
    ctx->pc = 0x4ccf54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 444), (uint16_t)GPR_U32(ctx, 30));
    // 0x4ccf58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ccf5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ccf60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccf60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ccf64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccf64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ccf68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccf68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ccf6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccf6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ccf70: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccf70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ccf74: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ccf74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccf78: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ccf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ccf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CCF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF7Cu;
        // 0x4ccf80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CCF84u;
    // 0x4ccf84: 0x0  nop
    ctx->pc = 0x4ccf84u;
    // NOP
    ctx->pc = 0x4ccf88u;
}
