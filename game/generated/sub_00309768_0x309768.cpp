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

// Function: sub_00309768
// Address: 0x309768 - 0x3099a0
void sub_00309768_0x309768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309768_0x309768");
#endif

    switch (ctx->pc) {
        case 0x3097f8u: goto label_3097f8;
        case 0x3098c0u: goto label_3098c0;
        case 0x3098e8u: goto label_3098e8;
        case 0x3098f0u: goto label_3098f0;
        case 0x30990cu: goto label_30990c;
        case 0x309928u: goto label_309928;
        case 0x309944u: goto label_309944;
        case 0x30994cu: goto label_30994c;
        case 0x309954u: goto label_309954;
        case 0x30995cu: goto label_30995c;
        case 0x309964u: goto label_309964;
        case 0x30996cu: goto label_30996c;
        default: break;
    }

    ctx->pc = 0x309768u;

    // 0x309768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x309768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30976c: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x30976cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x309770: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x309770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x309774: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x309774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309778: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x309778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x30977c: 0x2653036c  addiu       $s3, $s2, 0x36C
    ctx->pc = 0x30977cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 876));
    // 0x309780: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x309780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x309784: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x309784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x309788: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x309788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x30978c: 0x3c0c3000  lui         $t4, 0x3000
    ctx->pc = 0x30978cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)12288 << 16));
    // 0x309790: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x309790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x309794: 0x358c0086  ori         $t4, $t4, 0x86
    ctx->pc = 0x309794u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)134);
    // 0x309798: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x309798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x30979c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x30979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3097a0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3097a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3097a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3097a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3097a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3097a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3097ac: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3097acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3097b0: 0x9243037c  lbu         $v1, 0x37C($s2)
    ctx->pc = 0x3097b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 892)));
    // 0x3097b4: 0x8e510368  lw          $s1, 0x368($s2)
    ctx->pc = 0x3097b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 872)));
    // 0x3097b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3097bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3097bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3097c0: 0x34178640  ori         $s7, $zero, 0x8640
    ctx->pc = 0x3097c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34368);
    // 0x3097c4: 0x2f1b821  addu        $s7, $s7, $s1
    ctx->pc = 0x3097c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x3097c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3097c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3097cc: 0x3416cf40  ori         $s6, $zero, 0xCF40
    ctx->pc = 0x3097ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53056);
    // 0x3097d0: 0x2d1b021  addu        $s6, $s6, $s1
    ctx->pc = 0x3097d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3097d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3097d8: 0x3415bb00  ori         $s5, $zero, 0xBB00
    ctx->pc = 0x3097d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47872);
    // 0x3097dc: 0x2b1a821  addu        $s5, $s5, $s1
    ctx->pc = 0x3097dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x3097e0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3097e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3097e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3097e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3097e8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3097e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3097ec: 0x3414aa40  ori         $s4, $zero, 0xAA40
    ctx->pc = 0x3097ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43584);
    // 0x3097f0: 0x291a021  addu        $s4, $s4, $s1
    ctx->pc = 0x3097f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x3097f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3097f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3097f8:
    // 0x3097f8: 0x240b4320  addiu       $t3, $zero, 0x4320
    ctx->pc = 0x3097f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17184));
    // 0x3097fc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3097fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x309800: 0x3cb1018  mult        $v0, $fp, $t3
    ctx->pc = 0x309800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x309804: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x309804u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x309808: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x309808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x30980c: 0x3c065100  lui         $a2, 0x5100
    ctx->pc = 0x30980cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20736 << 16));
    // 0x309810: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x309810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x309814: 0x3c085100  lui         $t0, 0x5100
    ctx->pc = 0x309814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20736 << 16));
    // 0x309818: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x309818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x30981c: 0x3c0a5100  lui         $t2, 0x5100
    ctx->pc = 0x30981cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20736 << 16));
    // 0x309820: 0x515821  addu        $t3, $v0, $s1
    ctx->pc = 0x309820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x309824: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x309824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x309828: 0x34630432  ori         $v1, $v1, 0x432
    ctx->pc = 0x309828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1074);
    // 0x30982c: 0x34420086  ori         $v0, $v0, 0x86
    ctx->pc = 0x30982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)134);
    // 0x309830: 0x34c60432  ori         $a2, $a2, 0x432
    ctx->pc = 0x309830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1074);
    // 0x309834: 0x34e70009  ori         $a3, $a3, 0x9
    ctx->pc = 0x309834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9);
    // 0x309838: 0x35080009  ori         $t0, $t0, 0x9
    ctx->pc = 0x309838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)9);
    // 0x30983c: 0x35290120  ori         $t1, $t1, 0x120
    ctx->pc = 0x30983cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)288);
    // 0x309840: 0x354a0120  ori         $t2, $t2, 0x120
    ctx->pc = 0x309840u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)288);
    // 0x309844: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x309844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x309848: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x309848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x30984c: 0x26940860  addiu       $s4, $s4, 0x860
    ctx->pc = 0x30984cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2144));
    // 0x309850: 0xae150024  sw          $s5, 0x24($s0)
    ctx->pc = 0x309850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 21));
    // 0x309854: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x309854u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x309858: 0xae161174  sw          $s6, 0x1174($s0)
    ctx->pc = 0x309858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4468), GPR_U32(ctx, 22));
    // 0x30985c: 0x26d64f80  addiu       $s6, $s6, 0x4F80
    ctx->pc = 0x30985cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20352));
    // 0x309860: 0xae171184  sw          $s7, 0x1184($s0)
    ctx->pc = 0x309860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4484), GPR_U32(ctx, 23));
    // 0x309864: 0x26f71200  addiu       $s7, $s7, 0x1200
    ctx->pc = 0x309864u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4608));
    // 0x309868: 0xae0c0010  sw          $t4, 0x10($s0)
    ctx->pc = 0x309868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 12));
    // 0x30986c: 0x26041190  addiu       $a0, $s0, 0x1190
    ctx->pc = 0x30986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4496));
    // 0x309870: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x309870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x309874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309878: 0xae0b0004  sw          $t3, 0x4($s0)
    ctx->pc = 0x309878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 11));
    // 0x30987c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x30987cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x309880: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x309880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x309884: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x309884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x309888: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x309888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
    // 0x30988c: 0xae091180  sw          $t1, 0x1180($s0)
    ctx->pc = 0x30988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4480), GPR_U32(ctx, 9));
    // 0x309890: 0xae0a118c  sw          $t2, 0x118C($s0)
    ctx->pc = 0x309890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4492), GPR_U32(ctx, 10));
    // 0x309894: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x309894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x309898: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x309898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x30989c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x30989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x3098a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3098a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3098a4: 0xae001178  sw          $zero, 0x1178($s0)
    ctx->pc = 0x3098a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4472), GPR_U32(ctx, 0));
    // 0x3098a8: 0xae021170  sw          $v0, 0x1170($s0)
    ctx->pc = 0x3098a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4464), GPR_U32(ctx, 2));
    // 0x3098ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3098acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3098b0: 0xae001188  sw          $zero, 0x1188($s0)
    ctx->pc = 0x3098b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4488), GPR_U32(ctx, 0));
    // 0x3098b4: 0xae02117c  sw          $v0, 0x117C($s0)
    ctx->pc = 0x3098b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4476), GPR_U32(ctx, 2));
    // 0x3098b8: 0xc0cbf98  jal         func_32FE60
    ctx->pc = 0x3098B8u;
    SET_GPR_U32(ctx, 31, 0x3098C0u);
    ctx->pc = 0x3098BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098B8u;
    // 0x3098bc: 0x7fac0010  sq          $t4, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE60u, 0x3098B8u, 0x3098C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098C0u;
label_3098c0:
    // 0x3098c0: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x3098c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x3098c4: 0xae0311a0  sw          $v1, 0x11A0($s0)
    ctx->pc = 0x3098c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4512), GPR_U32(ctx, 3));
    // 0x3098c8: 0x2fc20002  sltiu       $v0, $fp, 0x2
    ctx->pc = 0x3098c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3098cc: 0xae0011ac  sw          $zero, 0x11AC($s0)
    ctx->pc = 0x3098ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4524), GPR_U32(ctx, 0));
    // 0x3098d0: 0xae0011a4  sw          $zero, 0x11A4($s0)
    ctx->pc = 0x3098d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 0));
    // 0x3098d4: 0xae0011a8  sw          $zero, 0x11A8($s0)
    ctx->pc = 0x3098d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4520), GPR_U32(ctx, 0));
    // 0x3098d8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3098D8u;
    {
        const bool branch_taken_0x3098d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3098DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098D8u;
        // 0x3098dc: 0x7bac0010  lq          $t4, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098d8) {
            ctx->pc = 0x3097F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3097f8;
        }
    }
    ctx->pc = 0x3098E0u;
    // 0x3098e0: 0xc0c2a9a  jal         func_30AA68
    ctx->pc = 0x3098E0u;
    SET_GPR_U32(ctx, 31, 0x3098E8u);
    ctx->pc = 0x3098E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098E0u;
    // 0x3098e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA68u, 0x3098E0u, 0x3098E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098E8u;
label_3098e8:
    // 0x3098e8: 0xc0c26ee  jal         func_309BB8
    ctx->pc = 0x3098E8u;
    SET_GPR_U32(ctx, 31, 0x3098F0u);
    ctx->pc = 0x3098ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098E8u;
    // 0x3098ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309BB8u, 0x3098E8u, 0x3098F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098F0u;
label_3098f0:
    // 0x3098f0: 0x3404bc20  ori         $a0, $zero, 0xBC20
    ctx->pc = 0x3098f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48160);
    // 0x3098f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3098f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3098f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3098f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3098fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309904: 0xc0c56c2  jal         func_315B08
    ctx->pc = 0x309904u;
    SET_GPR_U32(ctx, 31, 0x30990Cu);
    ctx->pc = 0x309908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309904u;
    // 0x309908: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315B08u, 0x309904u, 0x30990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30990Cu;
label_30990c:
    // 0x30990c: 0x3404c280  ori         $a0, $zero, 0xC280
    ctx->pc = 0x30990cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49792);
    // 0x309910: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x309910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x309914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30991c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30991cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309920: 0xc0c57a0  jal         func_315E80
    ctx->pc = 0x309920u;
    SET_GPR_U32(ctx, 31, 0x309928u);
    ctx->pc = 0x309924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309920u;
    // 0x309924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315E80u, 0x309920u, 0x309928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309928u;
label_309928:
    // 0x309928: 0x3404c8e0  ori         $a0, $zero, 0xC8E0
    ctx->pc = 0x309928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51424);
    // 0x30992c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x30992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x309930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30993c: 0xc0c587e  jal         func_3161F8
    ctx->pc = 0x30993Cu;
    SET_GPR_U32(ctx, 31, 0x309944u);
    ctx->pc = 0x309940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30993Cu;
    // 0x309940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3161F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3161F8u, 0x30993Cu, 0x309944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309944u;
label_309944:
    // 0x309944: 0xc0c28c6  jal         func_30A318
    ctx->pc = 0x309944u;
    SET_GPR_U32(ctx, 31, 0x30994Cu);
    ctx->pc = 0x309948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309944u;
    // 0x309948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A318u, 0x309944u, 0x30994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30994Cu;
label_30994c:
    // 0x30994c: 0xc0c2940  jal         func_30A500
    ctx->pc = 0x30994Cu;
    SET_GPR_U32(ctx, 31, 0x309954u);
    ctx->pc = 0x309950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30994Cu;
    // 0x309950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A500u, 0x30994Cu, 0x309954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309954u;
label_309954:
    // 0x309954: 0xc0c2e18  jal         func_30B860
    ctx->pc = 0x309954u;
    SET_GPR_U32(ctx, 31, 0x30995Cu);
    ctx->pc = 0x309958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309954u;
    // 0x309958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B860u, 0x309954u, 0x30995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30995Cu;
label_30995c:
    // 0x30995c: 0xc0c26a8  jal         func_309AA0
    ctx->pc = 0x30995Cu;
    SET_GPR_U32(ctx, 31, 0x309964u);
    ctx->pc = 0x309960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30995Cu;
    // 0x309960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309AA0u, 0x30995Cu, 0x309964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309964u;
label_309964:
    // 0x309964: 0xc0c26aa  jal         func_309AA8
    ctx->pc = 0x309964u;
    SET_GPR_U32(ctx, 31, 0x30996Cu);
    ctx->pc = 0x309968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309964u;
    // 0x309968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309AA8u, 0x309964u, 0x30996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30996Cu;
label_30996c:
    // 0x30996c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309970: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x309970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309974: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x309974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309978: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x309978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30997c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30997cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x309980: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x309980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309984: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x309984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x309988: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x309988u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30998c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x30998cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x309990: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x309990u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309994: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x309994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309998: 0x8043d88  j           func_10F620
    ctx->pc = 0x309998u;
    ctx->pc = 0x30999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309998u;
    // 0x30999c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    sub_0010F620_0x10f620(rdram, ctx, runtime); return;
    ctx->pc = 0x3099A0u;
}
