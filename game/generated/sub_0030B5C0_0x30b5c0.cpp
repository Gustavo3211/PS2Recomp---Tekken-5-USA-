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

// Function: sub_0030B5C0
// Address: 0x30b5c0 - 0x30b860
void sub_0030B5C0_0x30b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B5C0_0x30b5c0");
#endif

    switch (ctx->pc) {
        case 0x30b760u: goto label_30b760;
        case 0x30b7a8u: goto label_30b7a8;
        case 0x30b7d0u: goto label_30b7d0;
        default: break;
    }

    ctx->pc = 0x30b5c0u;

    // 0x30b5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b5c4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x30b5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x30b5c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30b5cc: 0x3412ff00  ori         $s2, $zero, 0xFF00
    ctx->pc = 0x30b5ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30b5d0: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x30b5d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30b5d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30b5d8: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x30b5d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b5dc: 0x139bfc  dsll32      $s3, $s3, 15
    ctx->pc = 0x30b5dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 15));
    // 0x30b5e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30b5e4: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x30b5e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b5e8: 0x14a4f8  dsll        $s4, $s4, 19
    ctx->pc = 0x30b5e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 19);
    // 0x30b5ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30b5f0: 0x3c153000  lui         $s5, 0x3000
    ctx->pc = 0x30b5f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)12288 << 16));
    // 0x30b5f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30b5f8: 0x240b4320  addiu       $t3, $zero, 0x4320
    ctx->pc = 0x30b5f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17184));
    // 0x30b5fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30b5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30b600: 0xab5818  mult        $t3, $a1, $t3
    ctx->pc = 0x30b600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x30b604: 0x570c0  sll         $t6, $a1, 3
    ctx->pc = 0x30b604u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30b608: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x30b608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30b60c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x30b60cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x30b610: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x30b610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30b614: 0xe7240  sll         $t6, $t6, 9
    ctx->pc = 0x30b614u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 9));
    // 0x30b618: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x30b618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x30b61c: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x30b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x30b620: 0x8c8d0368  lw          $t5, 0x368($a0)
    ctx->pc = 0x30b620u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30b624: 0x83140  sll         $a2, $t0, 5
    ctx->pc = 0x30b624u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x30b628: 0x8c8c0058  lw          $t4, 0x58($a0)
    ctx->pc = 0x30b628u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x30b62c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b630: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x30b630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x30b634: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30b634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30b638: 0x8c89004c  lw          $t1, 0x4C($a0)
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x30b63c: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x30b63cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x30b640: 0x8c910040  lw          $s1, 0x40($a0)
    ctx->pc = 0x30b640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30b644: 0x37bb8  dsll        $t7, $v1, 14
    ctx->pc = 0x30b644u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << 14);
    // 0x30b648: 0x8c8a0044  lw          $t2, 0x44($a0)
    ctx->pc = 0x30b648u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x30b64c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30b64cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30b650: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30b654: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30b658: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30b658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30b65c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x30b65cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30b660: 0x1755825  or          $t3, $t3, $s5
    ctx->pc = 0x30b660u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x30b664: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x30b664u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x30b668: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x30b668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30b66c: 0x9083037e  lbu         $v1, 0x37E($a0)
    ctx->pc = 0x30b66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 894)));
    // 0x30b670: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x30b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x30b674: 0x1086b8  dsll        $s0, $s0, 26
    ctx->pc = 0x30b674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 26);
    // 0x30b678: 0xc2bb8  dsll        $a1, $t4, 14
    ctx->pc = 0x30b678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << 14);
    // 0x30b67c: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x30b67cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x30b680: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x30b680u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x30b684: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x30b684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x30b688: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30b688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30b68c: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x30b68cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x30b690: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x30b690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x30b694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30b694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b698: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x30b698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x30b69c: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x30b69cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x30b6a0: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x30b6a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x30b6a4: 0x908c037d  lbu         $t4, 0x37D($a0)
    ctx->pc = 0x30b6a4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 893)));
    // 0x30b6a8: 0x256e0020  addiu       $t6, $t3, 0x20
    ctx->pc = 0x30b6a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x30b6ac: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x30b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x30b6b0: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x30b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30b6b4: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x30b6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x30b6b8: 0x118eb8  dsll        $s1, $s1, 26
    ctx->pc = 0x30b6b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 26);
    // 0x30b6bc: 0xa57b8  dsll        $t2, $t2, 30
    ctx->pc = 0x30b6bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 30);
    // 0x30b6c0: 0xfdc40008  sd          $a0, 0x8($t6)
    ctx->pc = 0x30b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 4));
    // 0x30b6c4: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x30b6c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x30b6c8: 0xfdc70000  sd          $a3, 0x0($t6)
    ctx->pc = 0x30b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 7));
    // 0x30b6cc: 0x256e3560  addiu       $t6, $t3, 0x3560
    ctx->pc = 0x30b6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 13664));
    // 0x30b6d0: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x30b6d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x30b6d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30b6d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b6d8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x30b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30b6dc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x30b6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30b6e0: 0x34018640  ori         $at, $zero, 0x8640
    ctx->pc = 0x30b6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34368);
    // 0x30b6e4: 0x2d6821  addu        $t5, $at, $t5
    ctx->pc = 0x30b6e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 13)));
    // 0x30b6e8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30b6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b6ec: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x30b6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x30b6f0: 0xfdc40008  sd          $a0, 0x8($t6)
    ctx->pc = 0x30b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 4));
    // 0x30b6f4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30b6f8: 0xfdc80000  sd          $t0, 0x0($t6)
    ctx->pc = 0x30b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 8));
    // 0x30b6fc: 0x256e35d0  addiu       $t6, $t3, 0x35D0
    ctx->pc = 0x30b6fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 13776));
    // 0x30b700: 0x1b56825  or          $t5, $t5, $s5
    ctx->pc = 0x30b700u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 21));
    // 0x30b704: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30b704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30b708: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30b70c: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x30b70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x30b710: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x30b710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x30b714: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x30b714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x30b718: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x30b718u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x30b71c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x30b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x30b720: 0xfdc40008  sd          $a0, 0x8($t6)
    ctx->pc = 0x30b720u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 4));
    // 0x30b724: 0x25ae0030  addiu       $t6, $t5, 0x30
    ctx->pc = 0x30b724u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x30b728: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x30b728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30b72c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x30b72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x30b730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30b730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b734: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30b734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30b738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30b738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b73c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x30b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30b740: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30b740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30b744: 0xfdc60000  sd          $a2, 0x0($t6)
    ctx->pc = 0x30b744u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 6));
    // 0x30b748: 0xfdc40008  sd          $a0, 0x8($t6)
    ctx->pc = 0x30b748u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 4));
    // 0x30b74c: 0x25ae0040  addiu       $t6, $t5, 0x40
    ctx->pc = 0x30b74cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x30b750: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x30b750u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x30b754: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x30b754u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x30b758: 0x3e00008  jr          $ra
    ctx->pc = 0x30B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B758u;
        // 0x30b75c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B760u;
label_30b760:
    // 0x30b760: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x30b760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x30b764: 0x8c820368  lw          $v0, 0x368($a0)
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30b768: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x30b768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30b76c: 0x8c980050  lw          $t8, 0x50($a0)
    ctx->pc = 0x30b76cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x30b770: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30b774: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x30b774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x30b778: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x30b778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x30b77c: 0x8c8d0054  lw          $t5, 0x54($a0)
    ctx->pc = 0x30b77cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x30b780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b784: 0x8c8e0380  lw          $t6, 0x380($a0)
    ctx->pc = 0x30b784u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x30b788: 0x34018640  ori         $at, $zero, 0x8640
    ctx->pc = 0x30b788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34368);
    // 0x30b78c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x30b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x30b790: 0x8c8c0384  lw          $t4, 0x384($a0)
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x30b794: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30b798: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x30b798u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b79c: 0x1300002d  beqz        $t8, . + 4 + (0x2D << 2)
    ctx->pc = 0x30B79Cu;
    {
        const bool branch_taken_0x30b79c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B79Cu;
        // 0x30b7a0: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b79c) {
            ctx->pc = 0x30B854u;
            goto label_30b854;
        }
    }
    ctx->pc = 0x30B7A4u;
    // 0x30b7a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30b7a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b7a8:
    // 0x30b7a8: 0x11a00026  beqz        $t5, . + 4 + (0x26 << 2)
    ctx->pc = 0x30B7A8u;
    {
        const bool branch_taken_0x30b7a8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7A8u;
        // 0x30b7ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7a8) {
            ctx->pc = 0x30B844u;
            goto label_30b844;
        }
    }
    ctx->pc = 0x30B7B0u;
    // 0x30b7b0: 0x25620040  addiu       $v0, $t3, 0x40
    ctx->pc = 0x30b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x30b7b4: 0xb1882  srl         $v1, $t3, 2
    ctx->pc = 0x30b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 2));
    // 0x30b7b8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x30b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x30b7bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30b7c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b7c4: 0x6e5023  subu        $t2, $v1, $t6
    ctx->pc = 0x30b7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x30b7c8: 0x4e4823  subu        $t1, $v0, $t6
    ctx->pc = 0x30b7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x30b7cc: 0x0  nop
    ctx->pc = 0x30b7ccu;
    // NOP
label_30b7d0:
    // 0x30b7d0: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x30b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x30b7d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30b7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30b7d8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x30b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x30b7dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30b7e0: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x30b7e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30b7e8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x30b7ec: 0x8c2023  subu        $a0, $a0, $t4
    ctx->pc = 0x30b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x30b7f0: 0x2484fffa  addiu       $a0, $a0, -0x6
    ctx->pc = 0x30b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
    // 0x30b7f4: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x30b7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30b7f8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x30b7f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x30b7fc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x30b7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30b800: 0x25450002  addiu       $a1, $t2, 0x2
    ctx->pc = 0x30b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x30b804: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x30b804u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x30b808: 0x2526fffa  addiu       $a2, $t1, -0x6
    ctx->pc = 0x30b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967290));
    // 0x30b80c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x30b80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30b810: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30b810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30b814: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x30b814u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x30b818: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x30b818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30b81c: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x30b81cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x30b820: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x30b820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30b824: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30b824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30b828: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x30b828u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x30b82c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x30b82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x30b830: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x30b830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x30b834: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x30b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x30b838: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x30b838u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x30b83c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30B83Cu;
    {
        const bool branch_taken_0x30b83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B83Cu;
        // 0x30b840: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b83c) {
            ctx->pc = 0x30B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b7d0;
        }
    }
    ctx->pc = 0x30B844u;
label_30b844:
    // 0x30b844: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30b844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30b848: 0x1f8102b  sltu        $v0, $t7, $t8
    ctx->pc = 0x30b848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x30b84c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x30B84Cu;
    {
        const bool branch_taken_0x30b84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B84Cu;
        // 0x30b850: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b84c) {
            ctx->pc = 0x30B7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b7a8;
        }
    }
    ctx->pc = 0x30B854u;
label_30b854:
    // 0x30b854: 0x3e00008  jr          $ra
    ctx->pc = 0x30B854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B85Cu;
    // 0x30b85c: 0x0  nop
    ctx->pc = 0x30b85cu;
    // NOP
    ctx->pc = 0x30b860u;
}
