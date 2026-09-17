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

// Function: sub_004DC970
// Address: 0x4dc970 - 0x4dd3a0
void sub_004DC970_0x4dc970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC970_0x4dc970");
#endif

    switch (ctx->pc) {
        case 0x4dcb6cu: goto label_4dcb6c;
        case 0x4dcbb8u: goto label_4dcbb8;
        case 0x4dcd98u: goto label_4dcd98;
        case 0x4dce2cu: goto label_4dce2c;
        case 0x4dce6cu: goto label_4dce6c;
        case 0x4dce8cu: goto label_4dce8c;
        case 0x4dceacu: goto label_4dceac;
        case 0x4dcf04u: goto label_4dcf04;
        case 0x4dcf0cu: goto label_4dcf0c;
        case 0x4dcf98u: goto label_4dcf98;
        case 0x4dcfa0u: goto label_4dcfa0;
        case 0x4dd04cu: goto label_4dd04c;
        case 0x4dd05cu: goto label_4dd05c;
        case 0x4dd070u: goto label_4dd070;
        case 0x4dd090u: goto label_4dd090;
        case 0x4dd0a0u: goto label_4dd0a0;
        case 0x4dd0b4u: goto label_4dd0b4;
        case 0x4dd1f8u: goto label_4dd1f8;
        case 0x4dd208u: goto label_4dd208;
        case 0x4dd288u: goto label_4dd288;
        case 0x4dd2b8u: goto label_4dd2b8;
        case 0x4dd2c0u: goto label_4dd2c0;
        case 0x4dd2c8u: goto label_4dd2c8;
        case 0x4dd2f8u: goto label_4dd2f8;
        case 0x4dd348u: goto label_4dd348;
        case 0x4dd378u: goto label_4dd378;
        case 0x4dd380u: goto label_4dd380;
        case 0x4dd388u: goto label_4dd388;
        default: break;
    }

    ctx->pc = 0x4dc970u;

    // 0x4dc970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dc970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4dc974: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x4dc974u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4dc978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4dc97c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4dc97cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4dc980: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4dc980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4dc984: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dc984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dc988: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4dc988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4dc98c: 0x25ae0164  addiu       $t6, $t5, 0x164
    ctx->pc = 0x4dc98cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 356));
    // 0x4dc990: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4dc990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4dc994: 0x3c19007f  lui         $t9, 0x7F
    ctx->pc = 0x4dc994u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)127 << 16));
    // 0x4dc998: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4dc998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4dc99c: 0x2454112c  addiu       $s4, $v0, 0x112C
    ctx->pc = 0x4dc99cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4396));
    // 0x4dc9a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4dc9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4dc9a4: 0x25b50162  addiu       $s5, $t5, 0x162
    ctx->pc = 0x4dc9a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 354));
    // 0x4dc9a8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4dc9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4dc9ac: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4dc9acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4dc9b0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4dc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4dc9b4: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4dc9b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4dc9b8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4dc9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4dc9bc: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4dc9bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4dc9c0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4dc9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4dc9c4: 0x26f11120  addiu       $s1, $s7, 0x1120
    ctx->pc = 0x4dc9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4384));
    // 0x4dc9c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4dc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F112Cu));
    // 0x4dc9cc: 0x27331130  addiu       $s3, $t9, 0x1130
    ctx->pc = 0x4dc9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 25), 4400));
    // 0x4dc9d0: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4dc9d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4dc9d4: 0x27d21124  addiu       $s2, $fp, 0x1124
    ctx->pc = 0x4dc9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4388));
    // 0x4dc9d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dc9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dc9dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4dc9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dc9e0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4dc9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4dc9e4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4dc9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1130u));
    // 0x4dc9e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc9ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4dc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4dc9f0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4dc9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4dc9f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dc9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dc9f8: 0x8c6f1140  lw          $t7, 0x1140($v1)
    ctx->pc = 0x4dc9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dc9fc: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4dc9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4dca00: 0x85c60000  lh          $a2, 0x0($t6)
    ctx->pc = 0x4dca00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dca04: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dca04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dca08: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4dca08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dca0c: 0x26cc1128  addiu       $t4, $s6, 0x1128
    ctx->pc = 0x4dca0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 4392));
    // 0x4dca10: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4dca10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4dca14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4dca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4dca18: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4dca18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dca1c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4dca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4dca20: 0x35081555  ori         $t0, $t0, 0x1555
    ctx->pc = 0x4dca20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5461);
    // 0x4dca24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dca28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4dca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dca2c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4dca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4dca30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4dca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4dca34: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4dca34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4dca38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dca38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dca3c: 0x85e20162  lh          $v0, 0x162($t7)
    ctx->pc = 0x4dca3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 354)));
    // 0x4dca40: 0x34aaffff  ori         $t2, $a1, 0xFFFF
    ctx->pc = 0x4dca40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dca44: 0x30691555  andi        $t1, $v1, 0x1555
    ctx->pc = 0x4dca44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5461);
    // 0x4dca48: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x4dca48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4dca4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dca50: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4dca50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4dca54: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4dca54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dca58: 0x684024  and         $t0, $v1, $t0
    ctx->pc = 0x4dca58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4dca5c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4dca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4dca60: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dca60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dca64: 0x85ab016a  lh          $t3, 0x16A($t5)
    ctx->pc = 0x4dca64u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 362)));
    // 0x4dca68: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4dca68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dca6c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4dca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4dca70: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4dca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4dca74: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4dca74u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4dca78: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dca7c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4dca7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dca80: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4dca80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dca84: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4dca84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4dca88: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4dca88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4dca8c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dca8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dca90: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4dca90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dca94: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4dca94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dca98: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4dca98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dca9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4dca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4dcaa0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4dcaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4dcaa4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4dcaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4dcaa8: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4dcaa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4dcaac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4dcaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4dcab0: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x4dcab0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x4dcab4: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x4dcab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
    // 0x4dcab8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4dcab8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4dcabc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4dcabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcac0: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4dcac0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4dcac4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4dcac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4dcac8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dcac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dcacc: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4dcaccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dcad0: 0x1422824  and         $a1, $t2, $v0
    ctx->pc = 0x4dcad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4dcad4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4dcad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4dcad8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dcad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcadc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4dcadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4dcae0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4DCAE0u;
    {
        const bool branch_taken_0x4dcae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCAE0u;
        // 0x4dcae4: 0x85c20000  lh          $v0, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcae0) {
            ctx->pc = 0x4DCB80u;
            goto label_4dcb80;
        }
    }
    ctx->pc = 0x4DCAE8u;
    // 0x4dcae8: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x4dcae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dcaec: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4dcaecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4dcaf0: 0x1103024  and         $a2, $t0, $s0
    ctx->pc = 0x4dcaf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 16));
    // 0x4dcaf4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dcaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dcaf8: 0x25291134  addiu       $t1, $t1, 0x1134
    ctx->pc = 0x4dcaf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4404));
    // 0x4dcafc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dcafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dcb00: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4dcb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dcb04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dcb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dcb08: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dcb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dcb0c: 0x85e20164  lh          $v0, 0x164($t7)
    ctx->pc = 0x4dcb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 356)));
    // 0x4dcb10: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dcb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dcb14: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4dcb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4dcb18: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4dcb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4dcb1c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4dcb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4dcb20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4dcb20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4dcb24: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dcb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dcb28: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4dcb28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4dcb2c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dcb2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dcb30: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dcb30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dcb34: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4dcb34u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dcb38: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4dcb38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4dcb3c: 0x24480003  addiu       $t0, $v0, 0x3
    ctx->pc = 0x4dcb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4dcb40: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x4dcb40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x4dcb44: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4dcb44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4dcb48: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dcb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dcb4c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4dcb4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4dcb50: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4dcb50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4dcb54: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dcb54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dcb58: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4dcb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4dcb5c: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4dcb5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4dcb60: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4dcb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4dcb64: 0xc1374e8  jal         func_4DD3A0
    ctx->pc = 0x4DCB64u;
    SET_GPR_U32(ctx, 31, 0x4DCB6Cu);
    ctx->pc = 0x4DCB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCB64u;
    // 0x4dcb68: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD3A0u, 0x4DCB64u, 0x4DCB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCB6Cu;
label_4dcb6c:
    // 0x4dcb6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4dcb6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcb70: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4dcb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4dcb74: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x4DCB74u;
    {
        const bool branch_taken_0x4dcb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCB74u;
        // 0x4dcb78: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcb74) {
            ctx->pc = 0x4DCD64u;
            goto label_4dcd64;
        }
    }
    ctx->pc = 0x4DCB7Cu;
    // 0x4dcb7c: 0x0  nop
    ctx->pc = 0x4dcb7cu;
    // NOP
label_4dcb80:
    // 0x4dcb80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dcb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dcb84: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4dcb84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4dcb88: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dcb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dcb8c: 0x24c61134  addiu       $a2, $a2, 0x1134
    ctx->pc = 0x4dcb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4404));
    // 0x4dcb90: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4dcb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4dcb94: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dcb98: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4dcb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4dcb9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dcb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dcba0: 0x85e20164  lh          $v0, 0x164($t7)
    ctx->pc = 0x4dcba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 356)));
    // 0x4dcba4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4dcba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4dcba8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dcba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dcbac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dcbb0: 0xc1374e8  jal         func_4DD3A0
    ctx->pc = 0x4DCBB0u;
    SET_GPR_U32(ctx, 31, 0x4DCBB8u);
    ctx->pc = 0x4DCBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCBB0u;
    // 0x4dcbb4: 0x7fb90000  sq          $t9, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD3A0u, 0x4DCBB0u, 0x4DCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCBB8u;
label_4dcbb8:
    // 0x4dcbb8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4dcbb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dcbbc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4dcbbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dcbc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4dcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dcbc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dcbc8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DCBC8u;
    {
        const bool branch_taken_0x4dcbc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCBC8u;
        // 0x4dcbcc: 0x7bb90000  lq          $t9, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcbc8) {
            ctx->pc = 0x4DCBE0u;
            goto label_4dcbe0;
        }
    }
    ctx->pc = 0x4DCBD0u;
    // 0x4dcbd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dcbd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DCBD4u;
    {
        const bool branch_taken_0x4dcbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCBD4u;
        // 0x4dcbd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcbd4) {
            ctx->pc = 0x4DCBE8u;
            goto label_4dcbe8;
        }
    }
    ctx->pc = 0x4DCBDCu;
    // 0x4dcbdc: 0x0  nop
    ctx->pc = 0x4dcbdcu;
    // NOP
label_4dcbe0:
    // 0x4dcbe0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dcbe4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4dcbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4dcbe8:
    // 0x4dcbe8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dcbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dcbec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dcbf0: 0x8c431140  lw          $v1, 0x1140($v0)
    ctx->pc = 0x4dcbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dcbf4: 0x26c61128  addiu       $a2, $s6, 0x1128
    ctx->pc = 0x4dcbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4392));
    // 0x4dcbf8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4dcbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dcbfc: 0x26e51120  addiu       $a1, $s7, 0x1120
    ctx->pc = 0x4dcbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4384));
    // 0x4dcc00: 0x84620164  lh          $v0, 0x164($v1)
    ctx->pc = 0x4dcc00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x4dcc04: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4dcc04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcc08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dcc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dcc0c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dcc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dcc10: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4dcc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4dcc14: 0x97271130  lhu         $a3, 0x1130($t9)
    ctx->pc = 0x4dcc14u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 4400)));
    // 0x4dcc18: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4dcc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4dcc1c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4dcc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4dcc20: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4dcc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4dcc24: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4dcc24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4dcc28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4dcc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4dcc2c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dcc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dcc30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dcc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dcc34: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dcc34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dcc38: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4dcc38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4dcc3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4dcc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dcc40: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4dcc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4dcc44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dcc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dcc48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dcc48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dcc4c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dcc4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dcc50: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4dcc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4dcc54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dcc58: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DCC58u;
    {
        const bool branch_taken_0x4dcc58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCC58u;
        // 0x4dcc5c: 0x27c91124  addiu       $t1, $fp, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcc58) {
            ctx->pc = 0x4DCC70u;
            goto label_4dcc70;
        }
    }
    ctx->pc = 0x4DCC60u;
    // 0x4dcc60: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4dcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dcc64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DCC64u;
    {
        const bool branch_taken_0x4dcc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCC64u;
        // 0x4dcc68: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcc64) {
            ctx->pc = 0x4DCC78u;
            goto label_4dcc78;
        }
    }
    ctx->pc = 0x4DCC6Cu;
    // 0x4dcc6c: 0x0  nop
    ctx->pc = 0x4dcc6cu;
    // NOP
label_4dcc70:
    // 0x4dcc70: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4dcc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dcc74: 0x482024  and         $a0, $v0, $t0
    ctx->pc = 0x4dcc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4dcc78:
    // 0x4dcc78: 0x26ca1128  addiu       $t2, $s6, 0x1128
    ctx->pc = 0x4dcc78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 4392));
    // 0x4dcc7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcc80: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4dcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dcc84: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4dcc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4dcc88: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4dcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4dcc8c: 0x27c41124  addiu       $a0, $fp, 0x1124
    ctx->pc = 0x4dcc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4388));
    // 0x4dcc90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dcc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dcc94: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4dcc94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcc98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dcc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dcc9c: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x4dcc9cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dcca0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4dcca0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4dcca4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dcca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dcca8: 0x26e61120  addiu       $a2, $s7, 0x1120
    ctx->pc = 0x4dcca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4384));
    // 0x4dccac: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4dccacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dccb0: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x4dccb0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dccb4: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4dccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4dccb8: 0x97281130  lhu         $t0, 0x1130($t9)
    ctx->pc = 0x4dccb8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 4400)));
    // 0x4dccbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dccc0: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4dccc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dccc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dccc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dccc8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4dccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dcccc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dccd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dccd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dccd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dccd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dccd8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4dccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4dccdc: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4dccdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4dcce0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4dcce0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4dcce4: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4dcce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dcce8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4dcce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4dccec: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4dccecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4dccf0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4dccf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4dccf4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4dccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4dccf8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dccf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dccfc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4dcd00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dcd04: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DCD04u;
    {
        const bool branch_taken_0x4dcd04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD04u;
        // 0x4dcd08: 0x346900ff  ori         $t1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcd04) {
            ctx->pc = 0x4DCD14u;
            goto label_4dcd14;
        }
    }
    ctx->pc = 0x4DCD0Cu;
    // 0x4dcd0c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4dcd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4dcd10: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4dcd10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4dcd14:
    // 0x4dcd14: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4dcd14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4dcd18: 0x26c41128  addiu       $a0, $s6, 0x1128
    ctx->pc = 0x4dcd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4392));
    // 0x4dcd1c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4dcd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4dcd20: 0x93c31124  lbu         $v1, 0x1124($fp)
    ctx->pc = 0x4dcd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4388)));
    // 0x4dcd24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4dcd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dcd28: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4dcd28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dcd2c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4dcd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4dcd30: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4dcd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4dcd34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dcd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4dcd38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4dcd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4dcd3c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4dcd3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dcd40: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DCD40u;
    {
        const bool branch_taken_0x4dcd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD40u;
        // 0x4dcd44: 0x26e41120  addiu       $a0, $s7, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcd40) {
            ctx->pc = 0x4DCD60u;
            goto label_4dcd60;
        }
    }
    ctx->pc = 0x4DCD48u;
    // 0x4dcd48: 0x97251130  lhu         $a1, 0x1130($t9)
    ctx->pc = 0x4dcd48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 4400)));
    // 0x4dcd4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4dcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dcd50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4dcd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcd54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dcd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dcd58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4dcd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4dcd5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4dcd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4dcd60:
    // 0x4dcd60: 0x96e21120  lhu         $v0, 0x1120($s7)
    ctx->pc = 0x4dcd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4384)));
label_4dcd64:
    // 0x4dcd64: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4dcd64u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dcd68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4dcd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dcd6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4dcd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dcd70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4dcd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dcd74: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4dcd74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dcd78: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4dcd78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dcd7c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4dcd7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4dcd80: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4dcd80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4dcd84: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4dcd84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4dcd88: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4dcd88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4dcd8c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4dcd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4dcd90: 0x3e00008  jr          $ra
    ctx->pc = 0x4DCD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD90u;
        // 0x4dcd94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCD98u;
label_4dcd98:
    // 0x4dcd98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dcd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4dcd9c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dcda0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dcda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dcda4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4dcda4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4dcda8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4dcda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4dcdac: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4dcdacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4dcdb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4dcdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4dcdb4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4dcdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4dcdb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4dcdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4dcdbc: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4dcdbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4dcdc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4dcdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4dcdc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4dcdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcdc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4dcdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4dcdcc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4dcdccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dcdd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4dcdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4dcdd4: 0x24561120  addiu       $s6, $v0, 0x1120
    ctx->pc = 0x4dcdd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x4dcdd8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4dcdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4dcddc: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4dcddcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcde0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4dcde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4dcde4: 0x26be0010  addiu       $fp, $s5, 0x10
    ctx->pc = 0x4dcde4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4dcde8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4dcde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4dcdec: 0x34630300  ori         $v1, $v1, 0x300
    ctx->pc = 0x4dcdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x4dcdf0: 0x26a5011c  addiu       $a1, $s5, 0x11C
    ctx->pc = 0x4dcdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 284));
    // 0x4dcdf4: 0x2631112c  addiu       $s1, $s1, 0x112C
    ctx->pc = 0x4dcdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4396));
    // 0x4dcdf8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dcdfc: 0x26731130  addiu       $s3, $s3, 0x1130
    ctx->pc = 0x4dcdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4400));
    // 0x4dce00: 0x26101134  addiu       $s0, $s0, 0x1134
    ctx->pc = 0x4dce00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4404));
    // 0x4dce04: 0x26521124  addiu       $s2, $s2, 0x1124
    ctx->pc = 0x4dce04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4388));
    // 0x4dce08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dce0c: 0x26b40018  addiu       $s4, $s5, 0x18
    ctx->pc = 0x4dce0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4dce10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dce14: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4dce14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4dce18: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4dce18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dce1c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dce1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dce20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4dce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dce24: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4DCE24u;
    SET_GPR_U32(ctx, 31, 0x4DCE2Cu);
    ctx->pc = 0x4DCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCE24u;
    // 0x4dce28: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4DCE24u, 0x4DCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCE2Cu;
label_4dce2c:
    // 0x4dce2c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4dce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dce30: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4dce30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dce34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dce38: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4dce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4dce3c: 0x34420512  ori         $v0, $v0, 0x512
    ctx->pc = 0x4dce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1298);
    // 0x4dce40: 0x346304f2  ori         $v1, $v1, 0x4F2
    ctx->pc = 0x4dce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1266);
    // 0x4dce44: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dce44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dce48: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4dce48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4dce4c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4dce4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dce50: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4dce50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4dce54: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4dce54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4dce58: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4dce58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4dce5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4dce5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dce60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4dce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dce64: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4DCE64u;
    SET_GPR_U32(ctx, 31, 0x4DCE6Cu);
    ctx->pc = 0x4DCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCE64u;
    // 0x4dce68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4DCE64u, 0x4DCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCE6Cu;
label_4dce6c:
    // 0x4dce6c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4dce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dce70: 0x86a20162  lh          $v0, 0x162($s5)
    ctx->pc = 0x4dce70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 354)));
    // 0x4dce74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dce74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dce78: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dce7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dce7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dce80: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4dce80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4dce84: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DCE84u;
    SET_GPR_U32(ctx, 31, 0x4DCE8Cu);
    ctx->pc = 0x4DCE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCE84u;
    // 0x4dce88: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DCE84u, 0x4DCE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCE8Cu;
label_4dce8c:
    // 0x4dce8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dce90: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4dce90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4dce94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dce94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dce98: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x4dce98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x4dce9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4dce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dcea0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4dcea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4dcea4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DCEA4u;
    SET_GPR_U32(ctx, 31, 0x4DCEACu);
    ctx->pc = 0x4DCEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCEA4u;
    // 0x4dcea8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DCEA4u, 0x4DCEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCEACu;
label_4dceac:
    // 0x4dceac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4dceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dceb0: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4dceb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dceb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dceb8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4dceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4dcebc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4dcebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dcec0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4dcec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4dcec4: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4dcec4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dcec8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dcec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4dcecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dced0: 0x86a20166  lh          $v0, 0x166($s5)
    ctx->pc = 0x4dced0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x4dced4: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4dced4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dced8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dcedc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dcedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dcee0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4dcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4dcee4: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4dcee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dcee8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4dcee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4dceec: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x4dceecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4dcef0: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4dcef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4dcef4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4dcef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4dcef8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4dcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4dcefc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DCEFCu;
    SET_GPR_U32(ctx, 31, 0x4DCF04u);
    ctx->pc = 0x4DCF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCEFCu;
    // 0x4dcf00: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DCEFCu, 0x4DCF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCF04u;
label_4dcf04:
    // 0x4dcf04: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DCF04u;
    SET_GPR_U32(ctx, 31, 0x4DCF0Cu);
    ctx->pc = 0x4DCF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCF04u;
    // 0x4dcf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DCF04u, 0x4DCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCF0Cu;
label_4dcf0c:
    // 0x4dcf0c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dcf10: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4dcf10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4dcf14: 0x24a51138  addiu       $a1, $a1, 0x1138
    ctx->pc = 0x4dcf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4408));
    // 0x4dcf18: 0x24e7113c  addiu       $a3, $a3, 0x113C
    ctx->pc = 0x4dcf18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4412));
    // 0x4dcf1c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4dcf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcf20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4dcf20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F113Cu));
    // 0x4dcf24: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4dcf24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4dcf28: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4dcf28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dcf2c: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x4dcf2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4dcf30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1138u));
    // 0x4dcf34: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4dcf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4dcf38: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x4dcf38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4dcf3c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4dcf3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4dcf40: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x4dcf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x4dcf44: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4dcf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4dcf48: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dcf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dcf4c: 0x258c1140  addiu       $t4, $t4, 0x1140
    ctx->pc = 0x4dcf4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4416));
    // 0x4dcf50: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4dcf50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dcf54: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dcf54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dcf58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dcf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dcf5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dcf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dcf60: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4dcf60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4dcf64: 0x8565011a  lh          $a1, 0x11A($t3)
    ctx->pc = 0x4dcf64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 282)));
    // 0x4dcf68: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4dcf68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcf6c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4dcf6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dcf70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4dcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dcf74: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dcf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dcf78: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4dcf78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4dcf7c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4dcf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4dcf80: 0x85620122  lh          $v0, 0x122($t3)
    ctx->pc = 0x4dcf80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 290)));
    // 0x4dcf84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dcf88: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4dcf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4dcf8c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4dcf8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4dcf90: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DCF90u;
    SET_GPR_U32(ctx, 31, 0x4DCF98u);
    ctx->pc = 0x4DCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCF90u;
    // 0x4dcf94: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DCF90u, 0x4DCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCF98u;
label_4dcf98:
    // 0x4dcf98: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DCF98u;
    SET_GPR_U32(ctx, 31, 0x4DCFA0u);
    ctx->pc = 0x4DCF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCF98u;
    // 0x4dcf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DCF98u, 0x4DCFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCFA0u;
label_4dcfa0:
    // 0x4dcfa0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4dcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4dcfa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dcfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcfa8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4dcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4dcfac: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4dcfacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4dcfb0: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x4dcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x4dcfb4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4dcfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4dcfb8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4dcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dcfbc: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x4dcfbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x4dcfc0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4dcfc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1128u, _value); } while (0);
    // 0x4dcfc4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4dcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4dcfc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dcfcc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4dcfccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4dcfd0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4dcfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dcfd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dcfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dcfd8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4dcfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dcfdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dcfe0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4dcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4dcfe4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4dcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dcfe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dcfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4dcfec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dcfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dcff0: 0xaea30124  sw          $v1, 0x124($s5)
    ctx->pc = 0x4dcff0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 3));
    // 0x4dcff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dcff8: 0xaea2012c  sw          $v0, 0x12C($s5)
    ctx->pc = 0x4dcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 2));
    // 0x4dcffc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dcffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dd000: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4dd000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dd004: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4dd004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dd008: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd00c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd010: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x4dd010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x4dd014: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dd014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dd018: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4dd018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4dd01c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4dd01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4dd020: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dd020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dd024: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4dd024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4dd028: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4dd028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4dd02c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4dd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd030: 0x86a20138  lh          $v0, 0x138($s5)
    ctx->pc = 0x4dd030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 312)));
    // 0x4dd034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd038: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dd038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dd03c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd040: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4dd040u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4dd044: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DD044u;
    SET_GPR_U32(ctx, 31, 0x4DD04Cu);
    ctx->pc = 0x4DD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD044u;
    // 0x4dd048: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DD044u, 0x4DD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD04Cu;
label_4dd04c:
    // 0x4dd04c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4dd04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd050: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4dd050u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4dd054: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DD054u;
    SET_GPR_U32(ctx, 31, 0x4DD05Cu);
    ctx->pc = 0x4DD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD054u;
    // 0x4dd058: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DD054u, 0x4DD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD05Cu;
label_4dd05c:
    // 0x4dd05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dd05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd060: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4dd060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dd064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd068: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4DD068u;
    SET_GPR_U32(ctx, 31, 0x4DD070u);
    ctx->pc = 0x4DD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD068u;
    // 0x4dd06c: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4DD068u, 0x4DD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD070u;
label_4dd070:
    // 0x4dd070: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4dd070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd074: 0x86a20136  lh          $v0, 0x136($s5)
    ctx->pc = 0x4dd074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 310)));
    // 0x4dd078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd07c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dd07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dd080: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd084: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4dd084u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4dd088: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DD088u;
    SET_GPR_U32(ctx, 31, 0x4DD090u);
    ctx->pc = 0x4DD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD088u;
    // 0x4dd08c: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DD088u, 0x4DD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD090u;
label_4dd090:
    // 0x4dd090: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4dd090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd094: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4dd094u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4dd098: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DD098u;
    SET_GPR_U32(ctx, 31, 0x4DD0A0u);
    ctx->pc = 0x4DD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD098u;
    // 0x4dd09c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DD098u, 0x4DD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD0A0u;
label_4dd0a0:
    // 0x4dd0a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4dd0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd0a4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4dd0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd0a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dd0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd0ac: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4DD0ACu;
    SET_GPR_U32(ctx, 31, 0x4DD0B4u);
    ctx->pc = 0x4DD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD0ACu;
    // 0x4dd0b0: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4DD0ACu, 0x4DD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD0B4u;
label_4dd0b4:
    // 0x4dd0b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4dd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dd0b8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dd0bc: 0x26a80014  addiu       $t0, $s5, 0x14
    ctx->pc = 0x4dd0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4dd0c0: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x4dd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x4dd0c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd0c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dd0cc: 0x26a60128  addiu       $a2, $s5, 0x128
    ctx->pc = 0x4dd0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 296));
    // 0x4dd0d0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4dd0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dd0d4: 0x26a701ba  addiu       $a3, $s5, 0x1BA
    ctx->pc = 0x4dd0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 442));
    // 0x4dd0d8: 0x8485011e  lh          $a1, 0x11E($a0)
    ctx->pc = 0x4dd0d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 286)));
    // 0x4dd0dc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4dd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dd0e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4dd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dd0e4: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dd0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dd0e8: 0x972024  and         $a0, $a0, $s7
    ctx->pc = 0x4dd0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x4dd0ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd0f0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x4dd0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4dd0f4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4dd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4dd0f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4dd0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4dd0fc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4dd0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4dd100: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dd100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dd104: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dd104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dd108: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4dd108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dd10c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4dd10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4dd110: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dd110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dd114: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4dd114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dd118: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4dd118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4dd11c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dd11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dd120: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4dd120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4dd124: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dd124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dd128: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dd128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd12c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd134: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4dd134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4dd138: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd13c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dd13cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dd140: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4dd140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dd144: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dd144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dd148: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd14c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd150: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4dd150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4dd154: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd158: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4dd158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4dd15c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4dd15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dd160: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4dd160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4dd164: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4dd164u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dd168: 0x86a201b8  lh          $v0, 0x1B8($s5)
    ctx->pc = 0x4dd168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 440)));
    // 0x4dd16c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4DD16Cu;
    {
        const bool branch_taken_0x4dd16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD16Cu;
        // 0x4dd170: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd16c) {
            ctx->pc = 0x4DD1F8u;
            goto label_4dd1f8;
        }
    }
    ctx->pc = 0x4DD174u;
    // 0x4dd174: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4dd174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd178: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dd178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dd17c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dd17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dd180: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd184: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd188: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4dd188u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4dd18c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd190: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4dd190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd194: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4dd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4dd198: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4dd198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4dd19c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd1a0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4dd1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4dd1a4: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4dd1a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dd1a8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4DD1A8u;
    {
        const bool branch_taken_0x4dd1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD1A8u;
        // 0x4dd1ac: 0x3c0c007f  lui         $t4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd1a8) {
            ctx->pc = 0x4DD1FCu;
            goto label_4dd1fc;
        }
    }
    ctx->pc = 0x4DD1B0u;
    // 0x4dd1b0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4dd1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4dd1b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4dd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4dd1b8: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4dd1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4dd1bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4dd1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd1c0: 0xa4a32330  sh          $v1, 0x2330($a1)
    ctx->pc = 0x4dd1c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4dd1c4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4dd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4dd1c8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4dd1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4dd1cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4dd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4dd1d0: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4dd1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dd1d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dd1d8: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x4dd1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x4dd1dc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4dd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4dd1e0: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4dd1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dd1e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4dd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dd1e8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4dd1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4dd1ec: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4dd1f0: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4DD1F0u;
    SET_GPR_U32(ctx, 31, 0x4DD1F8u);
    ctx->pc = 0x4DD1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD1F0u;
    // 0x4dd1f4: 0xa4a22338  sh          $v0, 0x2338($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4DD1F0u, 0x4DD1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD1F8u;
label_4dd1f8:
    // 0x4dd1f8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4dd1f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4dd1fc:
    // 0x4dd1fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4dd1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd200: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4DD200u;
    SET_GPR_U32(ctx, 31, 0x4DD208u);
    ctx->pc = 0x4DD204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD200u;
    // 0x4dd204: 0x8d851140  lw          $a1, 0x1140($t4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4DD200u, 0x4DD208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD208u;
label_4dd208:
    // 0x4dd208: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4DD208u;
    {
        const bool branch_taken_0x4dd208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd208) {
            ctx->pc = 0x4DD20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD208u;
            // 0x4dd20c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD248u;
            goto label_4dd248;
        }
    }
    ctx->pc = 0x4DD210u;
    // 0x4dd210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4dd210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd214: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4dd214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dd218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dd218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dd21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dd220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4dd220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dd224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4dd224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dd228: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4dd228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dd22c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4dd22cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dd230: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4dd230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4dd234: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4dd234u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4dd238: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4dd238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4dd23c: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DD23Cu;
    ctx->pc = 0x4DD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD23Cu;
    // 0x4dd240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DD23Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DD244u;
    // 0x4dd244: 0x0  nop
    ctx->pc = 0x4dd244u;
    // NOP
label_4dd248:
    // 0x4dd248: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4dd248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4dd24c: 0xa6a2000e  sh          $v0, 0xE($s5)
    ctx->pc = 0x4dd24cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dd250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4dd250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd254: 0xa6a301bc  sh          $v1, 0x1BC($s5)
    ctx->pc = 0x4dd254u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 444), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dd258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dd258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dd25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dd260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4dd260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dd264: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4dd264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dd268: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4dd268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dd26c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4dd26cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dd270: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4dd270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dd274: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4dd274u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4dd278: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4dd278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4dd27c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4dd27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4dd280: 0x81374a2  j           func_4DD288
    ctx->pc = 0x4DD280u;
    ctx->pc = 0x4DD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD280u;
    // 0x4dd284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD288u;
    goto label_4dd288;
    ctx->pc = 0x4DD288u;
label_4dd288:
    // 0x4dd288: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4dd288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4dd28c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd28cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd290: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4dd290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4dd294: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4dd294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4dd298: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4dd298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4dd29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dd29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dd2a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dd2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dd2a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dd2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd2a8: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4dd2a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4dd2ac: 0xa44523c4  sh          $a1, 0x23C4($v0)
    ctx->pc = 0x4dd2acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4dd2b0: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4DD2B0u;
    SET_GPR_U32(ctx, 31, 0x4DD2B8u);
    ctx->pc = 0x4DD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD2B0u;
    // 0x4dd2b4: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4DD2B0u, 0x4DD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD2B8u;
label_4dd2b8:
    // 0x4dd2b8: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4DD2B8u;
    SET_GPR_U32(ctx, 31, 0x4DD2C0u);
    ctx->pc = 0x4DD2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD2B8u;
    // 0x4dd2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4DD2B8u, 0x4DD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD2C0u;
label_4dd2c0:
    // 0x4dd2c0: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DD2C0u;
    SET_GPR_U32(ctx, 31, 0x4DD2C8u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DD2C0u, 0x4DD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD2C8u;
label_4dd2c8:
    // 0x4dd2c8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4dd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4dd2cc: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4dd2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4dd2d0: 0xa60301c2  sh          $v1, 0x1C2($s0)
    ctx->pc = 0x4dd2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dd2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dd2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd2d8: 0xa603014a  sh          $v1, 0x14A($s0)
    ctx->pc = 0x4dd2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dd2dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dd2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dd2e0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dd2e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dd2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dd2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd2e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4dd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4dd2ec: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4dd2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dd2f0: 0x81374be  j           func_4DD2F8
    ctx->pc = 0x4DD2F0u;
    ctx->pc = 0x4DD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD2F0u;
    // 0x4dd2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD2F8u;
    goto label_4dd2f8;
    ctx->pc = 0x4DD2F8u;
label_4dd2f8:
    // 0x4dd2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd2fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4dd2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dd304: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4dd304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4dd308: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4dd308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4dd30c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4dd30cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4dd310: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4dd310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4dd314: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4dd314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dd318: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DD318u;
    {
        const bool branch_taken_0x4dd318 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4DD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD318u;
        // 0x4dd31c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd318) {
            ctx->pc = 0x4DD330u;
            goto label_4dd330;
        }
    }
    ctx->pc = 0x4DD320u;
    // 0x4dd320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd324: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DD324u;
    ctx->pc = 0x4DD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD324u;
    // 0x4dd328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DD324u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DD32Cu;
    // 0x4dd32c: 0x0  nop
    ctx->pc = 0x4dd32cu;
    // NOP
label_4dd330:
    // 0x4dd330: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dd330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd338: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4dd338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4dd33c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4dd33cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dd340: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DD340u;
    ctx->pc = 0x4DD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD340u;
    // 0x4dd344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DD340u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DD348u;
label_4dd348:
    // 0x4dd348: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4dd348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4dd34c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd350: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4dd350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4dd354: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4dd354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4dd358: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4dd358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4dd35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dd35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dd360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dd360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dd364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dd364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd368: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4dd368u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4dd36c: 0xa44523c4  sh          $a1, 0x23C4($v0)
    ctx->pc = 0x4dd36cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4dd370: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4DD370u;
    SET_GPR_U32(ctx, 31, 0x4DD378u);
    ctx->pc = 0x4DD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD370u;
    // 0x4dd374: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4DD370u, 0x4DD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD378u;
label_4dd378:
    // 0x4dd378: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4DD378u;
    SET_GPR_U32(ctx, 31, 0x4DD380u);
    ctx->pc = 0x4DD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD378u;
    // 0x4dd37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4DD378u, 0x4DD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD380u;
label_4dd380:
    // 0x4dd380: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DD380u;
    SET_GPR_U32(ctx, 31, 0x4DD388u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DD380u, 0x4DD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD388u;
label_4dd388:
    // 0x4dd388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dd388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dd38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dd38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dd390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd394: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DD394u;
    ctx->pc = 0x4DD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD394u;
    // 0x4dd398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DD39Cu;
    // 0x4dd39c: 0x0  nop
    ctx->pc = 0x4dd39cu;
    // NOP
    ctx->pc = 0x4dd3a0u;
}
