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

// Function: sub_0030CDF0
// Address: 0x30cdf0 - 0x30d1e8
void sub_0030CDF0_0x30cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CDF0_0x30cdf0");
#endif

    switch (ctx->pc) {
        case 0x30ceb0u: goto label_30ceb0;
        case 0x30d0fcu: goto label_30d0fc;
        case 0x30d104u: goto label_30d104;
        case 0x30d10cu: goto label_30d10c;
        case 0x30d114u: goto label_30d114;
        case 0x30d11cu: goto label_30d11c;
        case 0x30d124u: goto label_30d124;
        case 0x30d12cu: goto label_30d12c;
        case 0x30d134u: goto label_30d134;
        case 0x30d13cu: goto label_30d13c;
        case 0x30d144u: goto label_30d144;
        case 0x30d14cu: goto label_30d14c;
        case 0x30d154u: goto label_30d154;
        case 0x30d15cu: goto label_30d15c;
        case 0x30d164u: goto label_30d164;
        case 0x30d16cu: goto label_30d16c;
        case 0x30d174u: goto label_30d174;
        case 0x30d17cu: goto label_30d17c;
        case 0x30d184u: goto label_30d184;
        case 0x30d18cu: goto label_30d18c;
        case 0x30d194u: goto label_30d194;
        case 0x30d19cu: goto label_30d19c;
        case 0x30d1a4u: goto label_30d1a4;
        case 0x30d1acu: goto label_30d1ac;
        case 0x30d1b4u: goto label_30d1b4;
        default: break;
    }

    ctx->pc = 0x30cdf0u;

    // 0x30cdf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30cdf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30cdf8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x30cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x30cdfc: 0x3c115100  lui         $s1, 0x5100
    ctx->pc = 0x30cdfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)20736 << 16));
    // 0x30ce00: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x30ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x30ce04: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x30ce08: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x30ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x30ce0c: 0x36310011  ori         $s1, $s1, 0x11
    ctx->pc = 0x30ce0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)17);
    // 0x30ce10: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x30ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x30ce14: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x30ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x30ce18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30ce1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ce1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30ce24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30ce24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x30ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x30ce2c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x30ce2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x30ce30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x30ce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x30ce34: 0x3c145100  lui         $s4, 0x5100
    ctx->pc = 0x30ce34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)20736 << 16));
    // 0x30ce38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x30ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x30ce3c: 0x3c153000  lui         $s5, 0x3000
    ctx->pc = 0x30ce3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)12288 << 16));
    // 0x30ce40: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x30ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x30ce44: 0x3c165100  lui         $s6, 0x5100
    ctx->pc = 0x30ce44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)20736 << 16));
    // 0x30ce48: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x30ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x30ce4c: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x30ce4cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x30ce50: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x30ce50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x30ce54: 0x3c1e5100  lui         $fp, 0x5100
    ctx->pc = 0x30ce54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)20736 << 16));
    // 0x30ce58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x30ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x30ce5c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x30ce5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x30ce60: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x30ce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x30ce64: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x30ce64u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x30ce68: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x30ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30ce6c: 0x3c185100  lui         $t8, 0x5100
    ctx->pc = 0x30ce6cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20736 << 16));
    // 0x30ce70: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x30ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x30ce74: 0x37de0003  ori         $fp, $fp, 0x3
    ctx->pc = 0x30ce74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3);
    // 0x30ce78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x30ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x30ce7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30ce80: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x30ce80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x30ce84: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x30ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x30ce88: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x30ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x30ce8c: 0x37390006  ori         $t9, $t9, 0x6
    ctx->pc = 0x30ce8cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)6);
    // 0x30ce90: 0x37180006  ori         $t8, $t8, 0x6
    ctx->pc = 0x30ce90u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)6);
    // 0x30ce94: 0x36f7001a  ori         $s7, $s7, 0x1A
    ctx->pc = 0x30ce94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)26);
    // 0x30ce98: 0x36d6001a  ori         $s6, $s6, 0x1A
    ctx->pc = 0x30ce98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)26);
    // 0x30ce9c: 0x36b5000b  ori         $s5, $s5, 0xB
    ctx->pc = 0x30ce9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)11);
    // 0x30cea0: 0x3694000b  ori         $s4, $s4, 0xB
    ctx->pc = 0x30cea0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)11);
    // 0x30cea4: 0x36730011  ori         $s3, $s3, 0x11
    ctx->pc = 0x30cea4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)17);
    // 0x30cea8: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x30cea8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ceac: 0x0  nop
    ctx->pc = 0x30ceacu;
    // NOP
label_30ceb0:
    // 0x30ceb0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x30ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x30ceb4: 0x25ee0340  addiu       $t6, $t7, 0x340
    ctx->pc = 0x30ceb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 832));
    // 0x30ceb8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x30ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x30cebc: 0xadd1000c  sw          $s1, 0xC($t6)
    ctx->pc = 0x30cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 17));
    // 0x30cec0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x30cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x30cec4: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x30cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x30cec8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30cecc: 0x34420058  ori         $v0, $v0, 0x58
    ctx->pc = 0x30ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)88);
    // 0x30ced0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x30ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ced4: 0x34630058  ori         $v1, $v1, 0x58
    ctx->pc = 0x30ced4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)88);
    // 0x30ced8: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cedc: 0x25eb22a0  addiu       $t3, $t7, 0x22A0
    ctx->pc = 0x30cedcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 8864));
    // 0x30cee0: 0xadc50004  sw          $a1, 0x4($t6)
    ctx->pc = 0x30cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 5));
    // 0x30cee4: 0x25ee0350  addiu       $t6, $t7, 0x350
    ctx->pc = 0x30cee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 848));
    // 0x30cee8: 0x25ec2540  addiu       $t4, $t7, 0x2540
    ctx->pc = 0x30cee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 9536));
    // 0x30ceec: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x30ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x30cef0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x30cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cef4: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x30cef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x30cef8: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x30cef8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x30cefc: 0x3c075100  lui         $a3, 0x5100
    ctx->pc = 0x30cefcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20736 << 16));
    // 0x30cf00: 0xadc4000c  sw          $a0, 0xC($t6)
    ctx->pc = 0x30cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 4));
    // 0x30cf04: 0x35290014  ori         $t1, $t1, 0x14
    ctx->pc = 0x30cf04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20);
    // 0x30cf08: 0x34e70014  ori         $a3, $a3, 0x14
    ctx->pc = 0x30cf08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20);
    // 0x30cf0c: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x30cf0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x30cf10: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x30cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30cf14: 0x3c085100  lui         $t0, 0x5100
    ctx->pc = 0x30cf14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20736 << 16));
    // 0x30cf18: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cf1c: 0x354a0057  ori         $t2, $t2, 0x57
    ctx->pc = 0x30cf1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)87);
    // 0x30cf20: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x30cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x30cf24: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x30cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x30cf28: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cf2c: 0x25ee0380  addiu       $t6, $t7, 0x380
    ctx->pc = 0x30cf2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 896));
    // 0x30cf30: 0xadde000c  sw          $fp, 0xC($t6)
    ctx->pc = 0x30cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 30));
    // 0x30cf34: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x30cf34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x30cf38: 0x35080057  ori         $t0, $t0, 0x57
    ctx->pc = 0x30cf38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)87);
    // 0x30cf3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30cf3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30cf40: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x30cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30cf44: 0x2a4d0002  slti        $t5, $s2, 0x2
    ctx->pc = 0x30cf44u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30cf48: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cf4c: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x30cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x30cf50: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x30cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x30cf54: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cf58: 0x25ee0640  addiu       $t6, $t7, 0x640
    ctx->pc = 0x30cf58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 1600));
    // 0x30cf5c: 0xadc2000c  sw          $v0, 0xC($t6)
    ctx->pc = 0x30cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 2));
    // 0x30cf60: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x30cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x30cf64: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x30cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x30cf68: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x30cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x30cf6c: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cf70: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x30cf70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x30cf74: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cf78: 0x25ee0bd0  addiu       $t6, $t7, 0xBD0
    ctx->pc = 0x30cf78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3024));
    // 0x30cf7c: 0xadd8000c  sw          $t8, 0xC($t6)
    ctx->pc = 0x30cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 24));
    // 0x30cf80: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x30cf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x30cf84: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x30cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
    // 0x30cf88: 0x34630044  ori         $v1, $v1, 0x44
    ctx->pc = 0x30cf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)68);
    // 0x30cf8c: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cf90: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cf94: 0x25ee0c40  addiu       $t6, $t7, 0xC40
    ctx->pc = 0x30cf94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3136));
    // 0x30cf98: 0xadd6000c  sw          $s6, 0xC($t6)
    ctx->pc = 0x30cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 22));
    // 0x30cf9c: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x30cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
    // 0x30cfa0: 0xadcb0004  sw          $t3, 0x4($t6)
    ctx->pc = 0x30cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 11));
    // 0x30cfa4: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cfa8: 0x25ee0c50  addiu       $t6, $t7, 0xC50
    ctx->pc = 0x30cfa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3152));
    // 0x30cfac: 0xadd4000c  sw          $s4, 0xC($t6)
    ctx->pc = 0x30cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 20));
    // 0x30cfb0: 0xadd50000  sw          $s5, 0x0($t6)
    ctx->pc = 0x30cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 21));
    // 0x30cfb4: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x30cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
    // 0x30cfb8: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cfbc: 0x25ee0d40  addiu       $t6, $t7, 0xD40
    ctx->pc = 0x30cfbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3392));
    // 0x30cfc0: 0xadc4000c  sw          $a0, 0xC($t6)
    ctx->pc = 0x30cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 4));
    // 0x30cfc4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30cfc8: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x30cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x30cfcc: 0x34840044  ori         $a0, $a0, 0x44
    ctx->pc = 0x30cfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)68);
    // 0x30cfd0: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cfd4: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cfd8: 0x25ee0e50  addiu       $t6, $t7, 0xE50
    ctx->pc = 0x30cfd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3664));
    // 0x30cfdc: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x30cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
    // 0x30cfe0: 0xadd8000c  sw          $t8, 0xC($t6)
    ctx->pc = 0x30cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 24));
    // 0x30cfe4: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cfe8: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30cfec: 0x25ee0ec0  addiu       $t6, $t7, 0xEC0
    ctx->pc = 0x30cfecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3776));
    // 0x30cff0: 0xadde000c  sw          $fp, 0xC($t6)
    ctx->pc = 0x30cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 30));
    // 0x30cff4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x30cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30cff8: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30cffc: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x30cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x30d000: 0x3c056000  lui         $a1, 0x6000
    ctx->pc = 0x30d000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24576 << 16));
    // 0x30d004: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d004u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d008: 0x25ee1180  addiu       $t6, $t7, 0x1180
    ctx->pc = 0x30d008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4480));
    // 0x30d00c: 0xadc2000c  sw          $v0, 0xC($t6)
    ctx->pc = 0x30d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 2));
    // 0x30d010: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x30d010u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x30d014: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d014u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d018: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d018u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d01c: 0x25ee1260  addiu       $t6, $t7, 0x1260
    ctx->pc = 0x30d01cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4704));
    // 0x30d020: 0xadd8000c  sw          $t8, 0xC($t6)
    ctx->pc = 0x30d020u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 24));
    // 0x30d024: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x30d024u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
    // 0x30d028: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d028u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d02c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d030: 0x25ee12d0  addiu       $t6, $t7, 0x12D0
    ctx->pc = 0x30d030u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4816));
    // 0x30d034: 0xadd6000c  sw          $s6, 0xC($t6)
    ctx->pc = 0x30d034u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 22));
    // 0x30d038: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x30d038u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
    // 0x30d03c: 0xadcb0004  sw          $t3, 0x4($t6)
    ctx->pc = 0x30d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 11));
    // 0x30d040: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d040u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d044: 0x25ee12e0  addiu       $t6, $t7, 0x12E0
    ctx->pc = 0x30d044u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4832));
    // 0x30d048: 0xadc7000c  sw          $a3, 0xC($t6)
    ctx->pc = 0x30d048u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 7));
    // 0x30d04c: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x30d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x30d050: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d050u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d054: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d054u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d058: 0x25ee1430  addiu       $t6, $t7, 0x1430
    ctx->pc = 0x30d058u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 5168));
    // 0x30d05c: 0xadd4000c  sw          $s4, 0xC($t6)
    ctx->pc = 0x30d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 20));
    // 0x30d060: 0xadd50000  sw          $s5, 0x0($t6)
    ctx->pc = 0x30d060u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 21));
    // 0x30d064: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x30d064u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
    // 0x30d068: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d068u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d06c: 0x25ee1520  addiu       $t6, $t7, 0x1520
    ctx->pc = 0x30d06cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 5408));
    // 0x30d070: 0xadc8000c  sw          $t0, 0xC($t6)
    ctx->pc = 0x30d070u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 8));
    // 0x30d074: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x30d074u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x30d078: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d078u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d07c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d080: 0x25ee1aa0  addiu       $t6, $t7, 0x1AA0
    ctx->pc = 0x30d080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 6816));
    // 0x30d084: 0xadd30000  sw          $s3, 0x0($t6)
    ctx->pc = 0x30d084u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 19));
    // 0x30d088: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d088u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d08c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d090: 0xadd1000c  sw          $s1, 0xC($t6)
    ctx->pc = 0x30d090u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 17));
    // 0x30d094: 0x25ee1bc0  addiu       $t6, $t7, 0x1BC0
    ctx->pc = 0x30d094u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 7104));
    // 0x30d098: 0xadc3000c  sw          $v1, 0xC($t6)
    ctx->pc = 0x30d098u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 3));
    // 0x30d09c: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x30d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x30d0a0: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d0a4: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d0a8: 0x25ee2010  addiu       $t6, $t7, 0x2010
    ctx->pc = 0x30d0a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8208));
    // 0x30d0ac: 0xadd1000c  sw          $s1, 0xC($t6)
    ctx->pc = 0x30d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 17));
    // 0x30d0b0: 0xadd30000  sw          $s3, 0x0($t6)
    ctx->pc = 0x30d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 19));
    // 0x30d0b4: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d0b8: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d0bc: 0x25ee2130  addiu       $t6, $t7, 0x2130
    ctx->pc = 0x30d0bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8496));
    // 0x30d0c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x30d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d0c4: 0xadc2000c  sw          $v0, 0xC($t6)
    ctx->pc = 0x30d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 2));
    // 0x30d0c8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x30d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30d0cc: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d0d0: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x30d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x30d0d4: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x30d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x30d0d8: 0x25ee2170  addiu       $t6, $t7, 0x2170
    ctx->pc = 0x30d0d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8560));
    // 0x30d0dc: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x30d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x30d0e0: 0x25ef22c0  addiu       $t7, $t7, 0x22C0
    ctx->pc = 0x30d0e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8896));
    // 0x30d0e4: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x30d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x30d0e8: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x30d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x30d0ec: 0x15a0ff70  bnez        $t5, . + 4 + (-0x90 << 2)
    ctx->pc = 0x30D0ECu;
    {
        const bool branch_taken_0x30d0ec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0ECu;
        // 0x30d0f0: 0xadc00008  sw          $zero, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0ec) {
            ctx->pc = 0x30CEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ceb0;
        }
    }
    ctx->pc = 0x30D0F4u;
    // 0x30d0f4: 0xc0c34f0  jal         func_30D3C0
    ctx->pc = 0x30D0F4u;
    SET_GPR_U32(ctx, 31, 0x30D0FCu);
    ctx->pc = 0x30D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0F4u;
    // 0x30d0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3C0u, 0x30D0F4u, 0x30D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0FCu;
label_30d0fc:
    // 0x30d0fc: 0xc0c34fe  jal         func_30D3F8
    ctx->pc = 0x30D0FCu;
    SET_GPR_U32(ctx, 31, 0x30D104u);
    ctx->pc = 0x30D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0FCu;
    // 0x30d100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3F8u, 0x30D0FCu, 0x30D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D104u;
label_30d104:
    // 0x30d104: 0xc0c3516  jal         func_30D458
    ctx->pc = 0x30D104u;
    SET_GPR_U32(ctx, 31, 0x30D10Cu);
    ctx->pc = 0x30D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D104u;
    // 0x30d108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D458u, 0x30D104u, 0x30D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D10Cu;
label_30d10c:
    // 0x30d10c: 0xc0c3534  jal         func_30D4D0
    ctx->pc = 0x30D10Cu;
    SET_GPR_U32(ctx, 31, 0x30D114u);
    ctx->pc = 0x30D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D10Cu;
    // 0x30d110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4D0u, 0x30D10Cu, 0x30D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D114u;
label_30d114:
    // 0x30d114: 0xc0c3554  jal         func_30D550
    ctx->pc = 0x30D114u;
    SET_GPR_U32(ctx, 31, 0x30D11Cu);
    ctx->pc = 0x30D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D114u;
    // 0x30d118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D550u, 0x30D114u, 0x30D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D11Cu;
label_30d11c:
    // 0x30d11c: 0xc0c359c  jal         func_30D670
    ctx->pc = 0x30D11Cu;
    SET_GPR_U32(ctx, 31, 0x30D124u);
    ctx->pc = 0x30D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D11Cu;
    // 0x30d120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D670u, 0x30D11Cu, 0x30D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D124u;
label_30d124:
    // 0x30d124: 0xc0c35c6  jal         func_30D718
    ctx->pc = 0x30D124u;
    SET_GPR_U32(ctx, 31, 0x30D12Cu);
    ctx->pc = 0x30D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D124u;
    // 0x30d128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D718u, 0x30D124u, 0x30D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D12Cu;
label_30d12c:
    // 0x30d12c: 0xc0c362a  jal         func_30D8A8
    ctx->pc = 0x30D12Cu;
    SET_GPR_U32(ctx, 31, 0x30D134u);
    ctx->pc = 0x30D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D12Cu;
    // 0x30d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8A8u, 0x30D12Cu, 0x30D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D134u;
label_30d134:
    // 0x30d134: 0xc0c3686  jal         func_30DA18
    ctx->pc = 0x30D134u;
    SET_GPR_U32(ctx, 31, 0x30D13Cu);
    ctx->pc = 0x30D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D134u;
    // 0x30d138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DA18u, 0x30D134u, 0x30D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D13Cu;
label_30d13c:
    // 0x30d13c: 0xc0c3698  jal         func_30DA60
    ctx->pc = 0x30D13Cu;
    SET_GPR_U32(ctx, 31, 0x30D144u);
    ctx->pc = 0x30D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D13Cu;
    // 0x30d140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DA60u, 0x30D13Cu, 0x30D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D144u;
label_30d144:
    // 0x30d144: 0xc0c3716  jal         func_30DC58
    ctx->pc = 0x30D144u;
    SET_GPR_U32(ctx, 31, 0x30D14Cu);
    ctx->pc = 0x30D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D144u;
    // 0x30d148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC58u, 0x30D144u, 0x30D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D14Cu;
label_30d14c:
    // 0x30d14c: 0xc0c3752  jal         func_30DD48
    ctx->pc = 0x30D14Cu;
    SET_GPR_U32(ctx, 31, 0x30D154u);
    ctx->pc = 0x30D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D14Cu;
    // 0x30d150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DD48u, 0x30D14Cu, 0x30D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D154u;
label_30d154:
    // 0x30d154: 0xc0c379a  jal         func_30DE68
    ctx->pc = 0x30D154u;
    SET_GPR_U32(ctx, 31, 0x30D15Cu);
    ctx->pc = 0x30D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D154u;
    // 0x30d158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DE68u, 0x30D154u, 0x30D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D15Cu;
label_30d15c:
    // 0x30d15c: 0xc0c37b2  jal         func_30DEC8
    ctx->pc = 0x30D15Cu;
    SET_GPR_U32(ctx, 31, 0x30D164u);
    ctx->pc = 0x30D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D15Cu;
    // 0x30d160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DEC8u, 0x30D15Cu, 0x30D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D164u;
label_30d164:
    // 0x30d164: 0xc0c37d0  jal         func_30DF40
    ctx->pc = 0x30D164u;
    SET_GPR_U32(ctx, 31, 0x30D16Cu);
    ctx->pc = 0x30D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D164u;
    // 0x30d168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DF40u, 0x30D164u, 0x30D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D16Cu;
label_30d16c:
    // 0x30d16c: 0xc0c3836  jal         func_30E0D8
    ctx->pc = 0x30D16Cu;
    SET_GPR_U32(ctx, 31, 0x30D174u);
    ctx->pc = 0x30D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D16Cu;
    // 0x30d170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E0D8u, 0x30D16Cu, 0x30D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D174u;
label_30d174:
    // 0x30d174: 0xc0c3860  jal         func_30E180
    ctx->pc = 0x30D174u;
    SET_GPR_U32(ctx, 31, 0x30D17Cu);
    ctx->pc = 0x30D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D174u;
    // 0x30d178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E180u, 0x30D174u, 0x30D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D17Cu;
label_30d17c:
    // 0x30d17c: 0xc0c388c  jal         func_30E230
    ctx->pc = 0x30D17Cu;
    SET_GPR_U32(ctx, 31, 0x30D184u);
    ctx->pc = 0x30D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D17Cu;
    // 0x30d180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E230u, 0x30D17Cu, 0x30D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D184u;
label_30d184:
    // 0x30d184: 0xc0c389e  jal         func_30E278
    ctx->pc = 0x30D184u;
    SET_GPR_U32(ctx, 31, 0x30D18Cu);
    ctx->pc = 0x30D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D184u;
    // 0x30d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E278u, 0x30D184u, 0x30D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D18Cu;
label_30d18c:
    // 0x30d18c: 0xc0c38f6  jal         func_30E3D8
    ctx->pc = 0x30D18Cu;
    SET_GPR_U32(ctx, 31, 0x30D194u);
    ctx->pc = 0x30D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D18Cu;
    // 0x30d190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3D8u, 0x30D18Cu, 0x30D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D194u;
label_30d194:
    // 0x30d194: 0xc0c394c  jal         func_30E530
    ctx->pc = 0x30D194u;
    SET_GPR_U32(ctx, 31, 0x30D19Cu);
    ctx->pc = 0x30D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D194u;
    // 0x30d198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E530u, 0x30D194u, 0x30D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D19Cu;
label_30d19c:
    // 0x30d19c: 0xc0c3978  jal         func_30E5E0
    ctx->pc = 0x30D19Cu;
    SET_GPR_U32(ctx, 31, 0x30D1A4u);
    ctx->pc = 0x30D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D19Cu;
    // 0x30d1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5E0u, 0x30D19Cu, 0x30D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1A4u;
label_30d1a4:
    // 0x30d1a4: 0xc0c39ce  jal         func_30E738
    ctx->pc = 0x30D1A4u;
    SET_GPR_U32(ctx, 31, 0x30D1ACu);
    ctx->pc = 0x30D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1A4u;
    // 0x30d1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E738u, 0x30D1A4u, 0x30D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1ACu;
label_30d1ac:
    // 0x30d1ac: 0xc043d88  jal         func_10F620
    ctx->pc = 0x30D1ACu;
    SET_GPR_U32(ctx, 31, 0x30D1B4u);
    ctx->pc = 0x30D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1ACu;
    // 0x30d1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x30D1ACu, 0x30D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1B4u;
label_30d1b4:
    // 0x30d1b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30d1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d1b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x30d1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30d1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d1c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x30d1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d1c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x30d1c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d1c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x30d1c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30d1cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x30d1ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d1d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x30d1d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30d1d4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x30d1d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d1d8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x30d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30d1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1DCu;
        // 0x30d1e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D1E4u;
    // 0x30d1e4: 0x0  nop
    ctx->pc = 0x30d1e4u;
    // NOP
    ctx->pc = 0x30d1e8u;
}
