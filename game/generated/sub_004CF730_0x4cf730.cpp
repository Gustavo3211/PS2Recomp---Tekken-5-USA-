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

// Function: sub_004CF730
// Address: 0x4cf730 - 0x4cfb50
void sub_004CF730_0x4cf730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF730_0x4cf730");
#endif

    switch (ctx->pc) {
        case 0x4cf790u: goto label_4cf790;
        case 0x4cfa90u: goto label_4cfa90;
        case 0x4cfac8u: goto label_4cfac8;
        case 0x4cfb00u: goto label_4cfb00;
        case 0x4cfb24u: goto label_4cfb24;
        default: break;
    }

    ctx->pc = 0x4cf730u;

    // 0x4cf730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cf730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cf734: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cf734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cf738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cf738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cf73c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf73cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf740: 0x8c490fc8  lw          $t1, 0xFC8($v0)
    ctx->pc = 0x4cf740u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0FC8u));
    // 0x4cf744: 0x24e70fbc  addiu       $a3, $a3, 0xFBC
    ctx->pc = 0x4cf744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4028));
    // 0x4cf748: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4cf748u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0FBCu));
    // 0x4cf74c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cf74cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf750: 0x8525001c  lh          $a1, 0x1C($t1)
    ctx->pc = 0x4cf750u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x4cf754: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cf754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cf758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cf758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cf75c: 0x24c60fc0  addiu       $a2, $a2, 0xFC0
    ctx->pc = 0x4cf75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4032));
    // 0x4cf760: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4cf760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4cf764: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cf764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FC0u));
    // 0x4cf768: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cf768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cf76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cf76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf770: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4cf770u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4cf774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf778: 0x85220022  lh          $v0, 0x22($t1)
    ctx->pc = 0x4cf778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x4cf77c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cf77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cf780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf784: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cf784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cf788: 0x8133de4  j           func_4CF790
    ctx->pc = 0x4CF788u;
    ctx->pc = 0x4CF78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF788u;
    // 0x4cf78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF790u;
    goto label_4cf790;
    ctx->pc = 0x4CF790u;
label_4cf790:
    // 0x4cf790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cf790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cf794: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4cf794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cf798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cf79c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4cf79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4cf7a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cf7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cf7a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4cf7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cf7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cf7ac: 0x266d0164  addiu       $t5, $s3, 0x164
    ctx->pc = 0x4cf7acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x4cf7b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cf7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cf7b4: 0x26040fb0  addiu       $a0, $s0, 0xFB0
    ctx->pc = 0x4cf7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
    // 0x4cf7b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cf7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cf7bc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4cf7bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4cf7c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4cf7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4cf7c4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4cf7c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4cf7c8: 0x95850fbc  lhu         $a1, 0xFBC($t4)
    ctx->pc = 0x4cf7c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0FBCu));
    // 0x4cf7cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FB0u));
    // 0x4cf7d0: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4cf7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cf7d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf7d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cf7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cf7dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf7e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cf7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cf7e4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cf7e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf7e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4cf7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cf7ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf7f0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CF7F0u;
    {
        const bool branch_taken_0x4cf7f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF7F0u;
        // 0x4cf7f4: 0x25c60fb4  addiu       $a2, $t6, 0xFB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 4020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf7f0) {
            ctx->pc = 0x4CF808u;
            goto label_4cf808;
        }
    }
    ctx->pc = 0x4CF7F8u;
    // 0x4cf7f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cf7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cf7fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF7FCu;
    {
        const bool branch_taken_0x4cf7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF7FCu;
        // 0x4cf800: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf7fc) {
            ctx->pc = 0x4CF810u;
            goto label_4cf810;
        }
    }
    ctx->pc = 0x4CF804u;
    // 0x4cf804: 0x0  nop
    ctx->pc = 0x4cf804u;
    // NOP
label_4cf808:
    // 0x4cf808: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cf808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cf80c: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x4cf80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4cf810:
    // 0x4cf810: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4cf810u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4cf814: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cf814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf818: 0x25eb0fb8  addiu       $t3, $t7, 0xFB8
    ctx->pc = 0x4cf818u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 4024));
    // 0x4cf81c: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4cf81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4cf820: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4cf820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FB8u));
    // 0x4cf824: 0x26080fb0  addiu       $t0, $s0, 0xFB0
    ctx->pc = 0x4cf824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
    // 0x4cf828: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4cf828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4cf82c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4cf82cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf830: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf834: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf838: 0x95c70fb4  lhu         $a3, 0xFB4($t6)
    ctx->pc = 0x4cf838u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4020)));
    // 0x4cf83c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4cf83cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf840: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cf840u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cf844: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf848: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4cf848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cf84c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4cf84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf850: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4cf850u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4cf854: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4cf854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf858: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4cf858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4cf85c: 0x958a0fbc  lhu         $t2, 0xFBC($t4)
    ctx->pc = 0x4cf85cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4028)));
    // 0x4cf860: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf864: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cf864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cf868: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cf868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cf86c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf874: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cf874u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cf878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf87c: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4cf87cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf880: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4cf880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cf884: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf888: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf88c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cf88cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cf890: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4cf890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf894: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cf894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cf898: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4cf898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4cf89c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4cf89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4cf8a0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4cf8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4cf8a4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cf8a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf8a8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4cf8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4cf8ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf8b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CF8B0u;
    {
        const bool branch_taken_0x4cf8b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF8B0u;
        // 0x4cf8b4: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf8b0) {
            ctx->pc = 0x4CF8C0u;
            goto label_4cf8c0;
        }
    }
    ctx->pc = 0x4CF8B8u;
    // 0x4cf8b8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4cf8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cf8bc: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4cf8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4cf8c0:
    // 0x4cf8c0: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4cf8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4cf8c4: 0x25e40fb8  addiu       $a0, $t7, 0xFB8
    ctx->pc = 0x4cf8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4024));
    // 0x4cf8c8: 0x25c70fb4  addiu       $a3, $t6, 0xFB4
    ctx->pc = 0x4cf8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 4020));
    // 0x4cf8cc: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4cf8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cf8d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cf8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf8d4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4cf8d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf8d8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4cf8d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cf8dc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cf8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cf8e0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4cf8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4cf8e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cf8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cf8e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cf8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cf8ec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4cf8ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf8f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CF8F0u;
    {
        const bool branch_taken_0x4cf8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF8F0u;
        // 0x4cf8f4: 0x26040fb0  addiu       $a0, $s0, 0xFB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf8f0) {
            ctx->pc = 0x4CF910u;
            goto label_4cf910;
        }
    }
    ctx->pc = 0x4CF8F8u;
    // 0x4cf8f8: 0x95850fbc  lhu         $a1, 0xFBC($t4)
    ctx->pc = 0x4cf8f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4028)));
    // 0x4cf8fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cf8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf900: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cf900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf904: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cf904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cf908: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cf908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cf90c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cf90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cf910:
    // 0x4cf910: 0x26040fb0  addiu       $a0, $s0, 0xFB0
    ctx->pc = 0x4cf910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
    // 0x4cf914: 0x26740166  addiu       $s4, $s3, 0x166
    ctx->pc = 0x4cf914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4cf918: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cf918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf91c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cf91cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf920: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4cf920u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4cf924: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4cf924u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cf928: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cf928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf92c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4cf92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf930: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf934: 0x95850fc0  lhu         $a1, 0xFC0($t4)
    ctx->pc = 0x4cf934u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0FC0u));
    // 0x4cf938: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4cf938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4cf93c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf940: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cf940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cf944: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cf944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf948: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4cf948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cf94c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf950: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CF950u;
    {
        const bool branch_taken_0x4cf950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF950u;
        // 0x4cf954: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf950) {
            ctx->pc = 0x4CF960u;
            goto label_4cf960;
        }
    }
    ctx->pc = 0x4CF958u;
    // 0x4cf958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4CF958u;
    {
        const bool branch_taken_0x4cf958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF958u;
        // 0x4cf95c: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf958) {
            ctx->pc = 0x4CF964u;
            goto label_4cf964;
        }
    }
    ctx->pc = 0x4CF960u;
label_4cf960:
    // 0x4cf960: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4cf960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4cf964:
    // 0x4cf964: 0x25eb0fb8  addiu       $t3, $t7, 0xFB8
    ctx->pc = 0x4cf964u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 4024));
    // 0x4cf968: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cf968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf96c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4cf96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf970: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4cf970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4cf974: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4cf974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4cf978: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4cf978u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf97c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf980: 0x26080fb0  addiu       $t0, $s0, 0xFB0
    ctx->pc = 0x4cf980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
    // 0x4cf984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf988: 0x95c70fb4  lhu         $a3, 0xFB4($t6)
    ctx->pc = 0x4cf988u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4020)));
    // 0x4cf98c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cf98cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cf990: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf994: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x4cf994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cf998: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4cf998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf99c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4cf99cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4cf9a0: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4cf9a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf9a4: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4cf9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4cf9a8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4cf9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf9ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf9b0: 0x958a0fc0  lhu         $t2, 0xFC0($t4)
    ctx->pc = 0x4cf9b0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4032)));
    // 0x4cf9b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cf9b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cf9b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cf9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cf9bc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf9c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf9c4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cf9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cf9c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf9cc: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4cf9ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf9d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4cf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4cf9d4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf9d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf9dc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4cf9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4cf9e0: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4cf9e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cf9e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4cf9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4cf9e8: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4cf9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4cf9ec: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4cf9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4cf9f0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4cf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4cf9f4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cf9f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf9f8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4cf9fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cfa00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CFA00u;
    {
        const bool branch_taken_0x4cfa00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFA00u;
        // 0x4cfa04: 0x346600ff  ori         $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfa00) {
            ctx->pc = 0x4CFA10u;
            goto label_4cfa10;
        }
    }
    ctx->pc = 0x4CFA08u;
    // 0x4cfa08: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4cfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cfa0c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4cfa0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4cfa10:
    // 0x4cfa10: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4cfa10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4cfa14: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4cfa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4cfa18: 0x25e40fb8  addiu       $a0, $t7, 0xFB8
    ctx->pc = 0x4cfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4024));
    // 0x4cfa1c: 0x25d20fb4  addiu       $s2, $t6, 0xFB4
    ctx->pc = 0x4cfa1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), 4020));
    // 0x4cfa20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cfa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cfa24: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4cfa24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cfa28: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x4cfa28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfa2c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cfa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cfa30: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4cfa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4cfa34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cfa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cfa38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cfa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cfa3c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4cfa3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cfa40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CFA40u;
    {
        const bool branch_taken_0x4cfa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFA40u;
        // 0x4cfa44: 0x95850fc0  lhu         $a1, 0xFC0($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfa40) {
            ctx->pc = 0x4CFA60u;
            goto label_4cfa60;
        }
    }
    ctx->pc = 0x4CFA48u;
    // 0x4cfa48: 0x26040fb0  addiu       $a0, $s0, 0xFB0
    ctx->pc = 0x4cfa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
    // 0x4cfa4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cfa50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4cfa54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cfa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cfa58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cfa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cfa5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cfa60:
    // 0x4cfa60: 0x26100fb0  addiu       $s0, $s0, 0xFB0
    ctx->pc = 0x4cfa60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4016));
    // 0x4cfa64: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4cfa64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4cfa68: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cfa68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cfa6c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4cfa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfa70: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4cfa70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cfa74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cfa78: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4cfa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4cfa7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cfa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cfa80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cfa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cfa84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cfa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cfa88: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CFA88u;
    SET_GPR_U32(ctx, 31, 0x4CFA90u);
    ctx->pc = 0x4CFA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFA88u;
    // 0x4cfa8c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CFA88u, 0x4CFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFA90u;
label_4cfa90:
    // 0x4cfa90: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4cfa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4cfa94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4cfa94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4cfa98: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4cfa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4cfa9c: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4cfa9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cfaa0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4cfaa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfaa4: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4cfaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfaa8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4cfaa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfaac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4cfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cfab0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4cfab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4cfab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cfab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cfab8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cfab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cfabc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cfac0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CFAC0u;
    SET_GPR_U32(ctx, 31, 0x4CFAC8u);
    ctx->pc = 0x4CFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFAC0u;
    // 0x4cfac4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CFAC0u, 0x4CFAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFAC8u;
label_4cfac8:
    // 0x4cfac8: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4cfac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4cfacc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4cfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4cfad0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4cfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4cfad4: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4cfad4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cfad8: 0x86640120  lh          $a0, 0x120($s3)
    ctx->pc = 0x4cfad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4cfadc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4cfadcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfae0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4cfae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4cfae4: 0xa6630028  sh          $v1, 0x28($s3)
    ctx->pc = 0x4cfae4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cfae8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4cfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cfaec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cfaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cfaf0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4cfaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4cfaf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cfaf8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CFAF8u;
    SET_GPR_U32(ctx, 31, 0x4CFB00u);
    ctx->pc = 0x4CFAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFAF8u;
    // 0x4cfafc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CFAF8u, 0x4CFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFB00u;
label_4cfb00:
    // 0x4cfb00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cfb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfb04: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x4cfb04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4cfb08: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4cfb08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4cfb0c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x4cfb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x4cfb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cfb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfb14: 0xa671002a  sh          $s1, 0x2A($s3)
    ctx->pc = 0x4cfb14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x4cfb18: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4cfb18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfb1c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4CFB1Cu;
    SET_GPR_U32(ctx, 31, 0x4CFB24u);
    ctx->pc = 0x4CFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFB1Cu;
    // 0x4cfb20: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4CFB1Cu, 0x4CFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFB24u;
label_4cfb24:
    // 0x4cfb24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CFB24u;
    {
        const bool branch_taken_0x4cfb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFB24u;
        // 0x4cfb28: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfb24) {
            ctx->pc = 0x4CFB30u;
            goto label_4cfb30;
        }
    }
    ctx->pc = 0x4CFB2Cu;
    // 0x4cfb2c: 0xa6620148  sh          $v0, 0x148($s3)
    ctx->pc = 0x4cfb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 328), (uint16_t)GPR_U32(ctx, 2));
label_4cfb30:
    // 0x4cfb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cfb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cfb34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cfb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cfb38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cfb38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cfb3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cfb3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cfb40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cfb40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cfb44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4cfb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cfb48: 0x3e00008  jr          $ra
    ctx->pc = 0x4CFB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFB48u;
        // 0x4cfb4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CFB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CFB50u;
}
