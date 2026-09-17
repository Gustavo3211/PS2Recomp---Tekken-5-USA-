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

// Function: sub_0030A500
// Address: 0x30a500 - 0x30aa68
void sub_0030A500_0x30a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A500_0x30a500");
#endif

    switch (ctx->pc) {
        case 0x30a5b0u: goto label_30a5b0;
        case 0x30a5c8u: goto label_30a5c8;
        case 0x30a8e0u: goto label_30a8e0;
        case 0x30a970u: goto label_30a970;
        default: break;
    }

    ctx->pc = 0x30a500u;

    // 0x30a500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30a504: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30a504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30a508: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x30a50c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x30a50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30a510: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30a514: 0x3c123000  lui         $s2, 0x3000
    ctx->pc = 0x30a514u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12288 << 16));
    // 0x30a518: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x30a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x30a51c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30a51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a520: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x30a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x30a524: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x30a524u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
    // 0x30a528: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x30a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x30a52c: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x30a52cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30a530: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x30a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x30a534: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x30a534u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30a538: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x30a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x30a53c: 0x3c1e5100  lui         $fp, 0x5100
    ctx->pc = 0x30a53cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)20736 << 16));
    // 0x30a540: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x30a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30a544: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x30a544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x30a548: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x30a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x30a54c: 0x36520066  ori         $s2, $s2, 0x66
    ctx->pc = 0x30a54cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)102);
    // 0x30a550: 0x37de0066  ori         $fp, $fp, 0x66
    ctx->pc = 0x30a550u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)102);
    // 0x30a554: 0x8e620368  lw          $v0, 0x368($s3)
    ctx->pc = 0x30a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 872)));
    // 0x30a558: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x30a558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x30a55c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x30a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x30a560: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x30a564: 0x3403c8e0  ori         $v1, $zero, 0xC8E0
    ctx->pc = 0x30a564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51424);
    // 0x30a568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a56c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30a570: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x30a570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x30a574: 0x3403bc20  ori         $v1, $zero, 0xBC20
    ctx->pc = 0x30a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48160);
    // 0x30a578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a57c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30a580: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a584: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x30a584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x30a588: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x30a588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x30a58c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x30a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x30a590: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x30a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x30a594: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30a594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30a598: 0x3401c280  ori         $at, $zero, 0xC280
    ctx->pc = 0x30a598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49792);
    // 0x30a59c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x30a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x30a5a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30a5a4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x30a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x30a5a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x30a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x30a5ac: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x30a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_30a5b0:
    // 0x30a5b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a5b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30a5b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5b8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x30a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x30a5bc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x30a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a5c0: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x30a5c0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a5c4: 0x0  nop
    ctx->pc = 0x30a5c4u;
    // NOP
label_30a5c8:
    // 0x30a5c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30a5cc: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x30a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x30a5d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30a5d4: 0x3c055100  lui         $a1, 0x5100
    ctx->pc = 0x30a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20736 << 16));
    // 0x30a5d8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x30a5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x30a5dc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x30a5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x30a5e0: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x30a5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x30a5e4: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x30a5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x30a5e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x30a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x30a5ec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30a5ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30a5f0: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x30a5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x30a5f4: 0xaf040100  sw          $a0, 0x100($t8)
    ctx->pc = 0x30a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 4));
    // 0x30a5f8: 0xaf05010c  sw          $a1, 0x10C($t8)
    ctx->pc = 0x30a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 268), GPR_U32(ctx, 5));
    // 0x30a5fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x30a600: 0x34a500ff  ori         $a1, $a1, 0xFF
    ctx->pc = 0x30a600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    // 0x30a604: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30a604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30a608: 0xff060040  sd          $a2, 0x40($t8)
    ctx->pc = 0x30a608u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 6));
    // 0x30a60c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x30a60cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x30a610: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x30a610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x30a614: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30a614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30a618: 0xaf020030  sw          $v0, 0x30($t8)
    ctx->pc = 0x30a618u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 2));
    // 0x30a61c: 0x27190050  addiu       $t9, $t8, 0x50
    ctx->pc = 0x30a61cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
    // 0x30a620: 0xaf03003c  sw          $v1, 0x3C($t8)
    ctx->pc = 0x30a620u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 3));
    // 0x30a624: 0x3c071d30  lui         $a3, 0x1D30
    ctx->pc = 0x30a624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7472 << 16));
    // 0x30a628: 0xaf000034  sw          $zero, 0x34($t8)
    ctx->pc = 0x30a628u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 0));
    // 0x30a62c: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x30a62cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x30a630: 0xaf000038  sw          $zero, 0x38($t8)
    ctx->pc = 0x30a630u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 0));
    // 0x30a634: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x30a634u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x30a638: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x30a638u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x30a63c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x30a63cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x30a640: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x30a640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x30a644: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x30a644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x30a648: 0xaf120070  sw          $s2, 0x70($t8)
    ctx->pc = 0x30a648u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 112), GPR_U32(ctx, 18));
    // 0x30a64c: 0x2409ff00  addiu       $t1, $zero, -0x100
    ctx->pc = 0x30a64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30a650: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x30a650u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30a654: 0x3c0a108b  lui         $t2, 0x108B
    ctx->pc = 0x30a654u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4235 << 16));
    // 0x30a658: 0x354a4000  ori         $t2, $t2, 0x4000
    ctx->pc = 0x30a658u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x30a65c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x30a65cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30a660: 0x354a8008  ori         $t2, $t2, 0x8008
    ctx->pc = 0x30a660u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32776);
    // 0x30a664: 0x340bff00  ori         $t3, $zero, 0xFF00
    ctx->pc = 0x30a664u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30a668: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x30a668u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x30a66c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30a670: 0x3c041800  lui         $a0, 0x1800
    ctx->pc = 0x30a670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6144 << 16));
    // 0x30a674: 0xaf000078  sw          $zero, 0x78($t8)
    ctx->pc = 0x30a674u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 120), GPR_U32(ctx, 0));
    // 0x30a678: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x30a678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x30a67c: 0xaf020074  sw          $v0, 0x74($t8)
    ctx->pc = 0x30a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 116), GPR_U32(ctx, 2));
    // 0x30a680: 0x3c0c4000  lui         $t4, 0x4000
    ctx->pc = 0x30a680u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16384 << 16));
    // 0x30a684: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x30a684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x30a688: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x30a688u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x30a68c: 0x358c4000  ori         $t4, $t4, 0x4000
    ctx->pc = 0x30a68cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)16384);
    // 0x30a690: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x30a690u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x30a694: 0xaf1e007c  sw          $fp, 0x7C($t8)
    ctx->pc = 0x30a694u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 124), GPR_U32(ctx, 30));
    // 0x30a698: 0x240d003f  addiu       $t5, $zero, 0x3F
    ctx->pc = 0x30a698u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30a69c: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x30a69cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30a6a0: 0x3c0f0008  lui         $t7, 0x8
    ctx->pc = 0x30a6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8 << 16));
    // 0x30a6a4: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x30a6a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x30a6a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x30a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a6ac: 0x3c107200  lui         $s0, 0x7200
    ctx->pc = 0x30a6acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29184 << 16));
    // 0x30a6b0: 0x36106c00  ori         $s0, $s0, 0x6C00
    ctx->pc = 0x30a6b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)27648);
    // 0x30a6b4: 0xaf000084  sw          $zero, 0x84($t8)
    ctx->pc = 0x30a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 132), GPR_U32(ctx, 0));
    // 0x30a6b8: 0xaf030080  sw          $v1, 0x80($t8)
    ctx->pc = 0x30a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 128), GPR_U32(ctx, 3));
    // 0x30a6bc: 0xaf000088  sw          $zero, 0x88($t8)
    ctx->pc = 0x30a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 136), GPR_U32(ctx, 0));
    // 0x30a6c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30a6c4: 0xaf1200b0  sw          $s2, 0xB0($t8)
    ctx->pc = 0x30a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 18));
    // 0x30a6c8: 0xaf02008c  sw          $v0, 0x8C($t8)
    ctx->pc = 0x30a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 140), GPR_U32(ctx, 2));
    // 0x30a6cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x30a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a6d0: 0xaf0000b8  sw          $zero, 0xB8($t8)
    ctx->pc = 0x30a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 184), GPR_U32(ctx, 0));
    // 0x30a6d4: 0xaf0300b4  sw          $v1, 0xB4($t8)
    ctx->pc = 0x30a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 180), GPR_U32(ctx, 3));
    // 0x30a6d8: 0xaf1e00bc  sw          $fp, 0xBC($t8)
    ctx->pc = 0x30a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 188), GPR_U32(ctx, 30));
    // 0x30a6dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x30a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a6e0: 0xaf0000c4  sw          $zero, 0xC4($t8)
    ctx->pc = 0x30a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 196), GPR_U32(ctx, 0));
    // 0x30a6e4: 0xaf0200c0  sw          $v0, 0xC0($t8)
    ctx->pc = 0x30a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 2));
    // 0x30a6e8: 0xaf0000c8  sw          $zero, 0xC8($t8)
    ctx->pc = 0x30a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 200), GPR_U32(ctx, 0));
    // 0x30a6ec: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x30a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30a6f0: 0xaf1200f0  sw          $s2, 0xF0($t8)
    ctx->pc = 0x30a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 18));
    // 0x30a6f4: 0xaf0300cc  sw          $v1, 0xCC($t8)
    ctx->pc = 0x30a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 204), GPR_U32(ctx, 3));
    // 0x30a6f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30a6fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x30a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30a700: 0xaf0000f8  sw          $zero, 0xF8($t8)
    ctx->pc = 0x30a700u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 248), GPR_U32(ctx, 0));
    // 0x30a704: 0xaf0200f4  sw          $v0, 0xF4($t8)
    ctx->pc = 0x30a704u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 244), GPR_U32(ctx, 2));
    // 0x30a708: 0xaf1e00fc  sw          $fp, 0xFC($t8)
    ctx->pc = 0x30a708u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 252), GPR_U32(ctx, 30));
    // 0x30a70c: 0xaf000104  sw          $zero, 0x104($t8)
    ctx->pc = 0x30a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 260), GPR_U32(ctx, 0));
    // 0x30a710: 0xaf000108  sw          $zero, 0x108($t8)
    ctx->pc = 0x30a710u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 264), GPR_U32(ctx, 0));
    // 0x30a714: 0xff170048  sd          $s7, 0x48($t8)
    ctx->pc = 0x30a714u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 23));
    // 0x30a718: 0xff230008  sd          $v1, 0x8($t9)
    ctx->pc = 0x30a718u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 3));
    // 0x30a71c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x30a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x30a720: 0x9e630008  lwu         $v1, 0x8($s3)
    ctx->pc = 0x30a720u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x30a724: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30a728: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30a728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30a72c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x30a72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x30a730: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30a730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30a734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a738: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a73c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a740: 0x3c03108b  lui         $v1, 0x108B
    ctx->pc = 0x30a740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4235 << 16));
    // 0x30a744: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x30a744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x30a748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30a748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30a74c: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x30a74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x30a750: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30a750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30a754: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a754u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a758: 0x27190060  addiu       $t9, $t8, 0x60
    ctx->pc = 0x30a758u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x30a75c: 0xff360008  sd          $s6, 0x8($t9)
    ctx->pc = 0x30a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 22));
    // 0x30a760: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x30a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x30a764: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x30a764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x30a768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a76c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a770: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x30a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30a774: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a774u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a778: 0x271900a0  addiu       $t9, $t8, 0xA0
    ctx->pc = 0x30a778u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 160));
    // 0x30a77c: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30a780: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30a784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a788: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x30a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x30a78c: 0xff170098  sd          $s7, 0x98($t8)
    ctx->pc = 0x30a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 23));
    // 0x30a790: 0xff020090  sd          $v0, 0x90($t8)
    ctx->pc = 0x30a790u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 2));
    // 0x30a794: 0xff360008  sd          $s6, 0x8($t9)
    ctx->pc = 0x30a794u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 22));
    // 0x30a798: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x30a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x30a79c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x30a79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x30a7a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a7a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a7a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30a7ac: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a7b0: 0x271900e0  addiu       $t9, $t8, 0xE0
    ctx->pc = 0x30a7b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 224));
    // 0x30a7b4: 0xff0300d0  sd          $v1, 0xD0($t8)
    ctx->pc = 0x30a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 208), GPR_U64(ctx, 3));
    // 0x30a7b8: 0xff1700d8  sd          $s7, 0xD8($t8)
    ctx->pc = 0x30a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 216), GPR_U64(ctx, 23));
    // 0x30a7bc: 0xff360008  sd          $s6, 0x8($t9)
    ctx->pc = 0x30a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 22));
    // 0x30a7c0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x30a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x30a7c4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x30a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x30a7c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a7cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a7d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30a7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30a7d4: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a7d8: 0x27190120  addiu       $t9, $t8, 0x120
    ctx->pc = 0x30a7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 288));
    // 0x30a7dc: 0xff0a0110  sd          $t2, 0x110($t8)
    ctx->pc = 0x30a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 272), GPR_U64(ctx, 10));
    // 0x30a7e0: 0xff170118  sd          $s7, 0x118($t8)
    ctx->pc = 0x30a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 280), GPR_U64(ctx, 23));
    // 0x30a7e4: 0xff360008  sd          $s6, 0x8($t9)
    ctx->pc = 0x30a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 22));
    // 0x30a7e8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x30a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x30a7ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30a7f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30a7f4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x30a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x30a7f8: 0x2e83000c  sltiu       $v1, $s4, 0xC
    ctx->pc = 0x30a7f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x30a7fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a800: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a804: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x30a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x30a808: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a808u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a80c: 0x27190130  addiu       $t9, $t8, 0x130
    ctx->pc = 0x30a80cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 304));
    // 0x30a810: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30a814: 0xff220008  sd          $v0, 0x8($t9)
    ctx->pc = 0x30a814u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 2));
    // 0x30a818: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30a81c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30a820: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a828: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a82c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x30a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x30a830: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a830u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a834: 0x27190140  addiu       $t9, $t8, 0x140
    ctx->pc = 0x30a834u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 320));
    // 0x30a838: 0xff200000  sd          $zero, 0x0($t9)
    ctx->pc = 0x30a838u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 0));
    // 0x30a83c: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x30a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x30a840: 0x34420408  ori         $v0, $v0, 0x408
    ctx->pc = 0x30a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1032);
    // 0x30a844: 0xff2d0008  sd          $t5, 0x8($t9)
    ctx->pc = 0x30a844u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 13));
    // 0x30a848: 0x27190150  addiu       $t9, $t8, 0x150
    ctx->pc = 0x30a848u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 336));
    // 0x30a84c: 0xff310000  sd          $s1, 0x0($t9)
    ctx->pc = 0x30a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 17));
    // 0x30a850: 0xff2e0008  sd          $t6, 0x8($t9)
    ctx->pc = 0x30a850u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 14));
    // 0x30a854: 0x27190160  addiu       $t9, $t8, 0x160
    ctx->pc = 0x30a854u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 352));
    // 0x30a858: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x30a858u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
    // 0x30a85c: 0xff240008  sd          $a0, 0x8($t9)
    ctx->pc = 0x30a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 4));
    // 0x30a860: 0x27190170  addiu       $t9, $t8, 0x170
    ctx->pc = 0x30a860u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 368));
    // 0x30a864: 0xff300000  sd          $s0, 0x0($t9)
    ctx->pc = 0x30a864u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 16));
    // 0x30a868: 0xff310008  sd          $s1, 0x8($t9)
    ctx->pc = 0x30a868u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 17));
    // 0x30a86c: 0x27190180  addiu       $t9, $t8, 0x180
    ctx->pc = 0x30a86cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 384));
    // 0x30a870: 0xff240008  sd          $a0, 0x8($t9)
    ctx->pc = 0x30a870u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 4));
    // 0x30a874: 0x3c047400  lui         $a0, 0x7400
    ctx->pc = 0x30a874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29696 << 16));
    // 0x30a878: 0x34847000  ori         $a0, $a0, 0x7000
    ctx->pc = 0x30a878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x30a87c: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x30a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x30a880: 0x27190190  addiu       $t9, $t8, 0x190
    ctx->pc = 0x30a880u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 400));
    // 0x30a884: 0xff240000  sd          $a0, 0x0($t9)
    ctx->pc = 0x30a884u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 4));
    // 0x30a888: 0x27180170  addiu       $t8, $t8, 0x170
    ctx->pc = 0x30a888u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 368));
    // 0x30a88c: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x30A88Cu;
    {
        const bool branch_taken_0x30a88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A88Cu;
        // 0x30a890: 0xff310008  sd          $s1, 0x8($t9) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a88c) {
            ctx->pc = 0x30A5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a5c8;
        }
    }
    ctx->pc = 0x30A894u;
    // 0x30a894: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x30a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a898: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x30a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x30a89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a8a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30a8a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30a8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30a8a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30a8ac: 0x1440ff40  bnez        $v0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x30A8ACu;
    {
        const bool branch_taken_0x30a8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8ACu;
        // 0x30a8b0: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8ac) {
            ctx->pc = 0x30A5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a5b0;
        }
    }
    ctx->pc = 0x30A8B4u;
    // 0x30a8b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30a8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a8b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30a8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30a8bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30a8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a8c0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30a8c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30a8c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30a8c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a8c8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x30a8c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a8cc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x30a8ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a8d0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x30a8d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30a8d4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x30a8d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8D8u;
        // 0x30a8dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A8E0u;
label_30a8e0:
    // 0x30a8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30a8e4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x30a8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x30a8e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30a8ec: 0x3c104000  lui         $s0, 0x4000
    ctx->pc = 0x30a8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16384 << 16));
    // 0x30a8f0: 0x3610000d  ori         $s0, $s0, 0xD
    ctx->pc = 0x30a8f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13);
    // 0x30a8f4: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x30a8f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x30a8f8: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x30a8f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x30a8fc: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x30a8fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x30a900: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x30a900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30a904: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x30a904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x30a908: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x30a908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30a90c: 0x3c0c1d30  lui         $t4, 0x1D30
    ctx->pc = 0x30a90cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7472 << 16));
    // 0x30a910: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x30a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x30a914: 0x3c0b1800  lui         $t3, 0x1800
    ctx->pc = 0x30a914u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)6144 << 16));
    // 0x30a918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30a918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a91c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x30a91cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30a920: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x30a920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a924: 0x358c4000  ori         $t4, $t4, 0x4000
    ctx->pc = 0x30a924u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)16384);
    // 0x30a928: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x30a928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30a92c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x30a92cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x30a930: 0x2419ff00  addiu       $t9, $zero, -0x100
    ctx->pc = 0x30a930u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30a934: 0x19c83c  dsll32      $t9, $t9, 0
    ctx->pc = 0x30a934u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 0));
    // 0x30a938: 0x3c18ffff  lui         $t8, 0xFFFF
    ctx->pc = 0x30a938u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65535 << 16));
    // 0x30a93c: 0x371800ff  ori         $t8, $t8, 0xFF
    ctx->pc = 0x30a93cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)255);
    // 0x30a940: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x30a940u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
    // 0x30a944: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x30a944u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x30a948: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x30a948u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x30a94c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x30a94cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x30a950: 0x340eff00  ori         $t6, $zero, 0xFF00
    ctx->pc = 0x30a950u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30a954: 0xe743c  dsll32      $t6, $t6, 16
    ctx->pc = 0x30a954u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 16));
    // 0x30a958: 0x356b4000  ori         $t3, $t3, 0x4000
    ctx->pc = 0x30a958u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)16384);
    // 0x30a95c: 0x3c0d4000  lui         $t5, 0x4000
    ctx->pc = 0x30a95cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16384 << 16));
    // 0x30a960: 0x35ad000d  ori         $t5, $t5, 0xD
    ctx->pc = 0x30a960u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)13);
    // 0x30a964: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x30a964u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x30a968: 0x35ad4000  ori         $t5, $t5, 0x4000
    ctx->pc = 0x30a968u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16384);
    // 0x30a96c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x30a96cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
label_30a970:
    // 0x30a970: 0x24c50050  addiu       $a1, $a2, 0x50
    ctx->pc = 0x30a970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x30a974: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x30a974u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x30a978: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x30a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30a97c: 0x9c830008  lwu         $v1, 0x8($a0)
    ctx->pc = 0x30a97cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30a980: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x30a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30a984: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30a984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30a988: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x30a988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x30a98c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x30a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x30a990: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a994: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a99c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30a99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30a9a0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30a9a4: 0x24c50060  addiu       $a1, $a2, 0x60
    ctx->pc = 0x30a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x30a9a8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x30a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x30a9ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x30a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a9b0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30a9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30a9b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a9b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a9bc: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x30a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x30a9c0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30a9c4: 0x24c500a0  addiu       $a1, $a2, 0xA0
    ctx->pc = 0x30a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x30a9c8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x30a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x30a9cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x30a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a9d0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30a9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30a9d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a9d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a9dc: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x30a9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x30a9e0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30a9e4: 0x24c500e0  addiu       $a1, $a2, 0xE0
    ctx->pc = 0x30a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x30a9e8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x30a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x30a9ec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x30a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a9f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30a9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30a9f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a9f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a9fc: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x30a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x30aa00: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30aa04: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x30aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x30aa08: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x30aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x30aa0c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x30aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30aa10: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x30aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30aa14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30aa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30aa18: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30aa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30aa1c: 0x2ce3000c  sltiu       $v1, $a3, 0xC
    ctx->pc = 0x30aa1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x30aa20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30aa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30aa24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30aa28: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x30aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x30aa2c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30aa30: 0x24c50130  addiu       $a1, $a2, 0x130
    ctx->pc = 0x30aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x30aa34: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x30aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x30aa38: 0x24c60170  addiu       $a2, $a2, 0x170
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 368));
    // 0x30aa3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30aa40: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x30aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x30aa44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30aa48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30aa4c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x30aa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x30aa50: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x30AA50u;
    {
        const bool branch_taken_0x30aa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA50u;
        // 0x30aa54: 0xfca20000  sd          $v0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa50) {
            ctx->pc = 0x30A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a970;
        }
    }
    ctx->pc = 0x30AA58u;
    // 0x30aa58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30aa58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30aa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA5Cu;
        // 0x30aa60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AA64u;
    // 0x30aa64: 0x0  nop
    ctx->pc = 0x30aa64u;
    // NOP
    ctx->pc = 0x30aa68u;
}
