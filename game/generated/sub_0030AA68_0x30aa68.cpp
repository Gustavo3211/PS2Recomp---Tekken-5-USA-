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

// Function: sub_0030AA68
// Address: 0x30aa68 - 0x30b5c0
void sub_0030AA68_0x30aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AA68_0x30aa68");
#endif

    switch (ctx->pc) {
        case 0x30aca0u: goto label_30aca0;
        case 0x30ae40u: goto label_30ae40;
        case 0x30aea0u: goto label_30aea0;
        case 0x30b1a0u: goto label_30b1a0;
        case 0x30b208u: goto label_30b208;
        case 0x30b490u: goto label_30b490;
        case 0x30b4e0u: goto label_30b4e0;
        default: break;
    }

    ctx->pc = 0x30aa68u;

    // 0x30aa68: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x30aa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x30aa6c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x30aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x30aa70: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x30aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x30aa74: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x30aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x30aa78: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x30aa78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30aa7c: 0x118cf8  dsll        $s1, $s1, 19
    ctx->pc = 0x30aa7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 19);
    // 0x30aa80: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x30aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x30aa84: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x30aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x30aa88: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x30aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x30aa8c: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x30aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x30aa90: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x30aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x30aa94: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x30aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x30aa98: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x30aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x30aa9c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x30aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x30aaa0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x30aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x30aaa4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x30aaa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aaa8: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x30aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x30aaac: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x30aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x30aab0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x30aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30aab4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x30aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x30aab8: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x30aab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30aabc: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x30aabcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30aac0: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x30aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x30aac4: 0x653818  mult        $a3, $v1, $a1
    ctx->pc = 0x30aac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x30aac8: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x30aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x30aacc: 0x8c8a0060  lw          $t2, 0x60($a0)
    ctx->pc = 0x30aaccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x30aad0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x30aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x30aad4: 0x8c940010  lw          $s4, 0x10($a0)
    ctx->pc = 0x30aad4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30aad8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x30aad8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x30aadc: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x30aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x30aae0: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x30aae0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aae4: 0x26eaffff  addiu       $t2, $s7, -0x1
    ctx->pc = 0x30aae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x30aae8: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x30aae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30aaec: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x30aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30aaf0: 0xa63b8  dsll        $t4, $t2, 14
    ctx->pc = 0x30aaf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 14);
    // 0x30aaf4: 0x8c960058  lw          $s6, 0x58($a0)
    ctx->pc = 0x30aaf4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x30aaf8: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x30aaf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30aafc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30aafcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30ab00: 0x8c820368  lw          $v0, 0x368($a0)
    ctx->pc = 0x30ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30ab04: 0x8c93000c  lw          $s3, 0xC($a0)
    ctx->pc = 0x30ab04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30ab08: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30ab08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30ab0c: 0x8c92001c  lw          $s2, 0x1C($a0)
    ctx->pc = 0x30ab0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x30ab10: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30ab10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30ab14: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x30ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x30ab18: 0x910bc  dsll32      $v0, $t1, 2
    ctx->pc = 0x30ab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 2));
    // 0x30ab1c: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x30ab1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x30ab20: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x30ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30ab24: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x30ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x30ab28: 0x8c970040  lw          $s7, 0x40($a0)
    ctx->pc = 0x30ab28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30ab2c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30ab2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30ab30: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x30ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x30ab34: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x30ab34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x30ab38: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x30ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x30ab3c: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x30ab3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x30ab40: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x30ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x30ab44: 0xe4438  dsll        $t0, $t6, 16
    ctx->pc = 0x30ab44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) << 16);
    // 0x30ab48: 0x8c970064  lw          $s7, 0x64($a0)
    ctx->pc = 0x30ab48u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x30ab4c: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30ab4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30ab50: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30ab50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30ab54: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30ab54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30ab58: 0xafb7001c  sw          $s7, 0x1C($sp)
    ctx->pc = 0x30ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 23));
    // 0x30ab5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30ab60: 0x368bc  dsll32      $t5, $v1, 2
    ctx->pc = 0x30ab60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 2));
    // 0x30ab64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30ab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30ab68: 0x8c97003c  lw          $s7, 0x3C($a0)
    ctx->pc = 0x30ab68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x30ab6c: 0x57bb8  dsll        $t7, $a1, 14
    ctx->pc = 0x30ab6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) << 14);
    // 0x30ab70: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30ab70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30ab74: 0x14583c  dsll32      $t3, $s4, 0
    ctx->pc = 0x30ab74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 20) << (32 + 0));
    // 0x30ab78: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x30ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x30ab7c: 0x12b83c  dsll32      $s7, $s2, 0
    ctx->pc = 0x30ab7cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << (32 + 0));
    // 0x30ab80: 0xffa60028  sd          $a2, 0x28($sp)
    ctx->pc = 0x30ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 6));
    // 0x30ab84: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x30ab84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30ab88: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x30ab88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x30ab8c: 0x78040  sll         $s0, $a3, 1
    ctx->pc = 0x30ab8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30ab90: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x30ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x30ab94: 0x1685825  or          $t3, $t3, $t0
    ctx->pc = 0x30ab94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x30ab98: 0xffaa0078  sd          $t2, 0x78($sp)
    ctx->pc = 0x30ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 10));
    // 0x30ab9c: 0x1643b8  dsll        $t0, $s6, 14
    ctx->pc = 0x30ab9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) << 14);
    // 0x30aba0: 0xffa200d8  sd          $v0, 0xD8($sp)
    ctx->pc = 0x30aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 2));
    // 0x30aba4: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x30aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x30aba8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x30aba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x30abac: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x30abacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x30abb0: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x30abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x30abb4: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x30abb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x30abb8: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x30abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x30abbc: 0x34059000  ori         $a1, $zero, 0x9000
    ctx->pc = 0x30abbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x30abc0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x30abc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x30abc4: 0xffa60100  sd          $a2, 0x100($sp)
    ctx->pc = 0x30abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 6));
    // 0x30abc8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x30abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30abcc: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x30abccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x30abd0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x30abd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30abd4: 0x8c8a0048  lw          $t2, 0x48($a0)
    ctx->pc = 0x30abd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x30abd8: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x30abd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x30abdc: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x30abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x30abe0: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x30abe0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x30abe4: 0xffaa00f8  sd          $t2, 0xF8($sp)
    ctx->pc = 0x30abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 10));
    // 0x30abe8: 0xe73b8  dsll        $t6, $t6, 14
    ctx->pc = 0x30abe8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 14);
    // 0x30abec: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x30abecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30abf0: 0x156bb8  dsll        $t5, $s5, 14
    ctx->pc = 0x30abf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 21) << 14);
    // 0x30abf4: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x30abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x30abf8: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x30abf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30abfc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30abfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30ac00: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x30ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x30ac04: 0x14a140  sll         $s4, $s4, 5
    ctx->pc = 0x30ac04u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x30ac08: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x30ac08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30ac0c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x30ac0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x30ac10: 0x8faa000c  lw          $t2, 0xC($sp)
    ctx->pc = 0x30ac10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30ac14: 0x1d17025  or          $t6, $t6, $s1
    ctx->pc = 0x30ac14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 17));
    // 0x30ac18: 0xffa400f0  sd          $a0, 0xF0($sp)
    ctx->pc = 0x30ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 4));
    // 0x30ac1c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x30ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30ac20: 0x1846025  or          $t4, $t4, $a0
    ctx->pc = 0x30ac20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x30ac24: 0x1b16825  or          $t5, $t5, $s1
    ctx->pc = 0x30ac24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 17));
    // 0x30ac28: 0x1e47825  or          $t7, $t7, $a0
    ctx->pc = 0x30ac28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 4));
    // 0x30ac2c: 0x15ac38  dsll        $s5, $s5, 16
    ctx->pc = 0x30ac2cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
    // 0x30ac30: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x30ac30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x30ac34: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x30ac34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x30ac38: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x30ac38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x30ac3c: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x30ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x30ac40: 0x28e70000  slti        $a3, $a3, 0x0
    ctx->pc = 0x30ac40u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ac44: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x30ac44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x30ac48: 0x294a0000  slti        $t2, $t2, 0x0
    ctx->pc = 0x30ac48u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ac4c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x30ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x30ac50: 0xafb400b0  sw          $s4, 0xB0($sp)
    ctx->pc = 0x30ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 20));
    // 0x30ac54: 0x16b438  dsll        $s6, $s6, 16
    ctx->pc = 0x30ac54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 16);
    // 0x30ac58: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x30ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x30ac5c: 0xffab0020  sd          $t3, 0x20($sp)
    ctx->pc = 0x30ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 11));
    // 0x30ac60: 0xffac0030  sd          $t4, 0x30($sp)
    ctx->pc = 0x30ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 12));
    // 0x30ac64: 0xffae0060  sd          $t6, 0x60($sp)
    ctx->pc = 0x30ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 14));
    // 0x30ac68: 0xffad0040  sd          $t5, 0x40($sp)
    ctx->pc = 0x30ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 13));
    // 0x30ac6c: 0xffaf0058  sd          $t7, 0x58($sp)
    ctx->pc = 0x30ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 15));
    // 0x30ac70: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x30ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x30ac74: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x30ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x30ac78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x30ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x30ac7c: 0xafb200c0  sw          $s2, 0xC0($sp)
    ctx->pc = 0x30ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 18));
    // 0x30ac80: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x30ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x30ac84: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x30ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x30ac88: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x30ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x30ac8c: 0xafa8009c  sw          $t0, 0x9C($sp)
    ctx->pc = 0x30ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 8));
    // 0x30ac90: 0xafaa00d4  sw          $t2, 0xD4($sp)
    ctx->pc = 0x30ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 10));
    // 0x30ac94: 0x8fb70190  lw          $s7, 0x190($sp)
    ctx->pc = 0x30ac94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x30ac98: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x30ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x30ac9c: 0xafb70180  sw          $s7, 0x180($sp)
    ctx->pc = 0x30ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 23));
label_30aca0:
    // 0x30aca0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x30aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x30aca4: 0x24024320  addiu       $v0, $zero, 0x4320
    ctx->pc = 0x30aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17184));
    // 0x30aca8: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30acac: 0x3c03108b  lui         $v1, 0x108B
    ctx->pc = 0x30acacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4235 << 16));
    // 0x30acb0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x30acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x30acb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30acb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30acb8: 0x3463800a  ori         $v1, $v1, 0x800A
    ctx->pc = 0x30acb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32778);
    // 0x30acbc: 0x800013  mtlo        $a0
    ctx->pc = 0x30acbcu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x30acc0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x30acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30acc4: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x30acc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30acc8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x30acc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30accc: 0x70828800  madd        $s1, $a0, $v0
    ctx->pc = 0x30acccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x30acd0: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x30acd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30acd4: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x30acd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30acd8: 0x24067200  addiu       $a2, $zero, 0x7200
    ctx->pc = 0x30acd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
    // 0x30acdc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30acdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30ace0: 0x34c66c00  ori         $a2, $a2, 0x6C00
    ctx->pc = 0x30ace0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)27648);
    // 0x30ace4: 0x1727b8  dsll        $a0, $s7, 30
    ctx->pc = 0x30ace4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << 30);
    // 0x30ace8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x30ace8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30acec: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x30acecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x30acf0: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x30acf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x30acf4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x30acf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30acf8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30acfc: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30ad00: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x30ad00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30ad04: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x30ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x30ad08: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x30ad08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30ad0c: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x30ad0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x30ad10: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ad14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ad18: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30ad1c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x30ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30ad20: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x30ad20u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad24: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x30ad24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x30ad28: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x30ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x30ad2c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ad2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ad30: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30ad34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30ad34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30ad38: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x30ad38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x30ad3c: 0x171eb8  dsll        $v1, $s7, 26
    ctx->pc = 0x30ad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << 26);
    // 0x30ad40: 0xdfa60020  ld          $a2, 0x20($sp)
    ctx->pc = 0x30ad40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ad44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30ad44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30ad48: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x30ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30ad4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30ad4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ad50: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x30ad50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x30ad54: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x30ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x30ad58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ad58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ad5c: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x30ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x30ad60: 0xdfa70040  ld          $a3, 0x40($sp)
    ctx->pc = 0x30ad60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ad64: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x30ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x30ad68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ad68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ad6c: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x30ad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x30ad70: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30ad74: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30ad78: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x30ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ad7c: 0xdfa80028  ld          $t0, 0x28($sp)
    ctx->pc = 0x30ad7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ad80: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x30ad80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30ad84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30ad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30ad88: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30ad8c: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x30ad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x30ad90: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ad94: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30ad98: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x30ad98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30ad9c: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x30ad9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30ada0: 0xdfb70030  ld          $s7, 0x30($sp)
    ctx->pc = 0x30ada0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ada4: 0xfe170000  sd          $s7, 0x0($s0)
    ctx->pc = 0x30ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 23));
    // 0x30ada8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ada8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30adac: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x30adacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x30adb0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x30adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30adb4: 0xdfa60038  ld          $a2, 0x38($sp)
    ctx->pc = 0x30adb4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30adb8: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x30adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x30adbc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30adbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30adc0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x30adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x30adc4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x30adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30adc8: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x30adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x30adcc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30adccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30add0: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x30add0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x30add4: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x30add4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x30add8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30add8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30addc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30addcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30ade0: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30ade4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ade4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ade8: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30adec: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x30adecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30adf0: 0x34018640  ori         $at, $zero, 0x8640
    ctx->pc = 0x30adf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34368);
    // 0x30adf4: 0x37b821  addu        $s7, $at, $s7
    ctx->pc = 0x30adf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 23)));
    // 0x30adf8: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x30adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x30adfc: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x30adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x30ae00: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30ae00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30ae04: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30ae08: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x30ae08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ae0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30ae10: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x30ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ae14: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x30AE14u;
    {
        const bool branch_taken_0x30ae14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE14u;
        // 0x30ae18: 0x263000c0  addiu       $s0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae14) {
            ctx->pc = 0x30AFB0u;
            goto label_30afb0;
        }
    }
    ctx->pc = 0x30AE1Cu;
    // 0x30ae1c: 0x24046c0f  addiu       $a0, $zero, 0x6C0F
    ctx->pc = 0x30ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27663));
    // 0x30ae20: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x30ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30ae24: 0x24066dff  addiu       $a2, $zero, 0x6DFF
    ctx->pc = 0x30ae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28159));
    // 0x30ae28: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x30ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x30ae2c: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x30ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x30ae30: 0x24160410  addiu       $s6, $zero, 0x410
    ctx->pc = 0x30ae30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x30ae34: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x30ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x30ae38: 0x241e6bff  addiu       $fp, $zero, 0x6BFF
    ctx->pc = 0x30ae38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 27647));
    // 0x30ae3c: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x30ae3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30ae40:
    // 0x30ae40: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x30ae40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30ae44: 0x10e0004a  beqz        $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x30AE44u;
    {
        const bool branch_taken_0x30ae44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE44u;
        // 0x30ae48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae44) {
            ctx->pc = 0x30AF70u;
            goto label_30af70;
        }
    }
    ctx->pc = 0x30AE4Cu;
    // 0x30ae4c: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x30ae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30ae50: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x30ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x30ae54: 0x8faa0160  lw          $t2, 0x160($sp)
    ctx->pc = 0x30ae54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30ae58: 0x1e183c  dsll32      $v1, $fp, 0
    ctx->pc = 0x30ae58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 0));
    // 0x30ae5c: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x30ae5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30ae60: 0x8fa80150  lw          $t0, 0x150($sp)
    ctx->pc = 0x30ae60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30ae64: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x30ae64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30ae68: 0x3503e  dsrl32      $t2, $v1, 0
    ctx->pc = 0x30ae68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30ae6c: 0x16203c  dsll32      $a0, $s6, 0
    ctx->pc = 0x30ae6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 0));
    // 0x30ae70: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x30ae70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30ae74: 0x2603e  dsrl32      $t4, $v0, 0
    ctx->pc = 0x30ae74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30ae78: 0x4c83e  dsrl32      $t9, $a0, 0
    ctx->pc = 0x30ae78u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30ae7c: 0x5c03e  dsrl32      $t8, $a1, 0
    ctx->pc = 0x30ae7cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30ae80: 0x6483e  dsrl32      $t1, $a2, 0
    ctx->pc = 0x30ae80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30ae84: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x30ae84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30ae88: 0x241572ff  addiu       $s5, $zero, 0x72FF
    ctx->pc = 0x30ae88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29439));
    // 0x30ae8c: 0x24140210  addiu       $s4, $zero, 0x210
    ctx->pc = 0x30ae8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x30ae90: 0x2413720f  addiu       $s3, $zero, 0x720F
    ctx->pc = 0x30ae90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 29199));
    // 0x30ae94: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x30ae94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30ae98: 0x240e71ff  addiu       $t6, $zero, 0x71FF
    ctx->pc = 0x30ae98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 29183));
    // 0x30ae9c: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x30ae9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30aea0:
    // 0x30aea0: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x30aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x30aea4: 0x25ad0200  addiu       $t5, $t5, 0x200
    ctx->pc = 0x30aea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 512));
    // 0x30aea8: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x30aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x30aeac: 0x25ce0100  addiu       $t6, $t6, 0x100
    ctx->pc = 0x30aeacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 256));
    // 0x30aeb0: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x30aeb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x30aeb4: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x30aeb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x30aeb8: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x30aeb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x30aebc: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x30aec0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x30aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30aec4: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x30aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x30aec8: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x30aec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x30aecc: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x30aeccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x30aed0: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x30aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x30aed4: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x30aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x30aed8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30aedc: 0x3241025  or          $v0, $t9, $a0
    ctx->pc = 0x30aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) | GPR_U64(ctx, 4));
    // 0x30aee0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30aee4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30aee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30aee8: 0x3051825  or          $v1, $t8, $a1
    ctx->pc = 0x30aee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 5));
    // 0x30aeec: 0x14383c  dsll32      $a3, $s4, 0
    ctx->pc = 0x30aeecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) << (32 + 0));
    // 0x30aef0: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x30aef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
    // 0x30aef4: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x30aef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x30aef8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30aefc: 0x1241025  or          $v0, $t1, $a0
    ctx->pc = 0x30aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x30af00: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30af00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30af04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30af04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30af08: 0x1051825  or          $v1, $t0, $a1
    ctx->pc = 0x30af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x30af0c: 0x1452825  or          $a1, $t2, $a1
    ctx->pc = 0x30af0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x30af10: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x30af10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x30af14: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x30af14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x30af18: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30af18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30af1c: 0x3271025  or          $v0, $t9, $a3
    ctx->pc = 0x30af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) | GPR_U64(ctx, 7));
    // 0x30af20: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30af20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30af24: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30af24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30af28: 0x3061825  or          $v1, $t8, $a2
    ctx->pc = 0x30af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 6));
    // 0x30af2c: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x30af2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x30af30: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30af30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30af34: 0x1842025  or          $a0, $t4, $a0
    ctx->pc = 0x30af34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x30af38: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30af38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30af3c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30af3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30af40: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x30af40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x30af44: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30af44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30af48: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30af48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30af4c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30af4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30af50: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x30af50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x30af54: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x30af54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x30af58: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x30af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30af5c: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x30af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x30af60: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x30af60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30af64: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x30af64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x30af68: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x30AF68u;
    {
        const bool branch_taken_0x30af68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF68u;
        // 0x30af6c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af68) {
            ctx->pc = 0x30AEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30aea0;
        }
    }
    ctx->pc = 0x30AF70u;
label_30af70:
    // 0x30af70: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x30af70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30af74: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30af74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30af78: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x30af78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30af7c: 0x26d60400  addiu       $s6, $s6, 0x400
    ctx->pc = 0x30af7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
    // 0x30af80: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x30af80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30af84: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x30af84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x30af88: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x30af88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30af8c: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x30af90: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x30af90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x30af94: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x30af94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x30af98: 0x1e5102b  sltu        $v0, $t7, $a1
    ctx->pc = 0x30af98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30af9c: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x30af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
    // 0x30afa0: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x30afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
    // 0x30afa4: 0x27de0200  addiu       $fp, $fp, 0x200
    ctx->pc = 0x30afa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 512));
    // 0x30afa8: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x30AFA8u;
    {
        const bool branch_taken_0x30afa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFA8u;
        // 0x30afac: 0x26f70400  addiu       $s7, $s7, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afa8) {
            ctx->pc = 0x30AE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ae40;
        }
    }
    ctx->pc = 0x30AFB0u;
label_30afb0:
    // 0x30afb0: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30afb4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30afb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30afbc: 0x3442800a  ori         $v0, $v0, 0x800A
    ctx->pc = 0x30afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32778);
    // 0x30afc0: 0xdfa80088  ld          $t0, 0x88($sp)
    ctx->pc = 0x30afc0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x30afc4: 0xdfaa0050  ld          $t2, 0x50($sp)
    ctx->pc = 0x30afc4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30afc8: 0x26303550  addiu       $s0, $s1, 0x3550
    ctx->pc = 0x30afc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13648));
    // 0x30afcc: 0xfe223540  sd          $v0, 0x3540($s1)
    ctx->pc = 0x30afccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 13632), GPR_U64(ctx, 2));
    // 0x30afd0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30afd4: 0xfe223548  sd          $v0, 0x3548($s1)
    ctx->pc = 0x30afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 13640), GPR_U64(ctx, 2));
    // 0x30afd8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x30afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x30afdc: 0x24047200  addiu       $a0, $zero, 0x7200
    ctx->pc = 0x30afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
    // 0x30afe0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30afe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30afe4: 0x34846c00  ori         $a0, $a0, 0x6C00
    ctx->pc = 0x30afe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27648);
    // 0x30afe8: 0x8183e  dsrl32      $v1, $t0, 0
    ctx->pc = 0x30afe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x30afec: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x30afecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30aff0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x30aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30aff4: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x30aff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x30aff8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x30aff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x30affc: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x30affcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x30b000: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x30b000u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30b004: 0x17bc3c  dsll32      $s7, $s7, 16
    ctx->pc = 0x30b004u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 16));
    // 0x30b008: 0xc74018  mult        $t0, $a2, $a3
    ctx->pc = 0x30b008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30b00c: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x30b00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x30b010: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x30b010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b014: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x30b014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30b018: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30b018u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30b01c: 0x26303560  addiu       $s0, $s1, 0x3560
    ctx->pc = 0x30b01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13664));
    // 0x30b020: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30b020u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b024: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x30b024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30b028: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x30b028u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x30b02c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x30b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30b030: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30b030u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30b034: 0x26303570  addiu       $s0, $s1, 0x3570
    ctx->pc = 0x30b034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13680));
    // 0x30b038: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x30b038u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30b03c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x30b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30b040: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x30b044: 0x8faa009c  lw          $t2, 0x9C($sp)
    ctx->pc = 0x30b044u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x30b048: 0xb7300b  movn        $a2, $a1, $s7
    ctx->pc = 0x30b048u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x30b04c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b050: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x30b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x30b054: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30b054u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30b058: 0x26303580  addiu       $s0, $s1, 0x3580
    ctx->pc = 0x30b058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13696));
    // 0x30b05c: 0x147200b  movn        $a0, $t2, $a3
    ctx->pc = 0x30b05cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x30b060: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x30b060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b064: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x30b064u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30b068: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30b068u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x30b06c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x30b06cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x30b070: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x30b070u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x30b074: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30b078: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30b07c: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x30b07cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30b080: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30b080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30b084: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30b084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30b088: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x30b088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x30b08c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b08cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b090: 0x26303590  addiu       $s0, $s1, 0x3590
    ctx->pc = 0x30b090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13712));
    // 0x30b094: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x30b094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x30b098: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x30b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30b09c: 0xdfa50058  ld          $a1, 0x58($sp)
    ctx->pc = 0x30b09cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b0a0: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x30b0a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b0a4: 0xa53fc  dsll32      $t2, $t2, 15
    ctx->pc = 0x30b0a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 15));
    // 0x30b0a8: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x30b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x30b0ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b0b0: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x30b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x30b0b4: 0x263035a0  addiu       $s0, $s1, 0x35A0
    ctx->pc = 0x30b0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13728));
    // 0x30b0b8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x30b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x30b0bc: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x30b0bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30b0c0: 0xdfa200f8  ld          $v0, 0xF8($sp)
    ctx->pc = 0x30b0c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x30b0c4: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x30b0c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x30b0c8: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x30b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x30b0cc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x30b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30b0d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30b0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30b0d4: 0x34840064  ori         $a0, $a0, 0x64
    ctx->pc = 0x30b0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)100);
    // 0x30b0d8: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x30b0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x30b0dc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x30b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30b0e0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x30b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30b0e4: 0xdfa80060  ld          $t0, 0x60($sp)
    ctx->pc = 0x30b0e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30b0e8: 0x173fb8  dsll        $a3, $s7, 30
    ctx->pc = 0x30b0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) << 30);
    // 0x30b0ec: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x30b0ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b0f0: 0x17bd38  dsll        $s7, $s7, 20
    ctx->pc = 0x30b0f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 20);
    // 0x30b0f4: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x30b0f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x30b0f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0fc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x30b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x30b100: 0x263035b0  addiu       $s0, $s1, 0x35B0
    ctx->pc = 0x30b100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13744));
    // 0x30b104: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x30b104u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x30b108: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x30b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30b10c: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x30b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x30b110: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x30b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30b114: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30b114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x30b118: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30b118u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30b11c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30b120: 0x263035c0  addiu       $s0, $s1, 0x35C0
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13760));
    // 0x30b124: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x30b124u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x30b128: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x30b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x30b12c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x30b12cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x30b130: 0x263035d0  addiu       $s0, $s1, 0x35D0
    ctx->pc = 0x30b130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13776));
    // 0x30b134: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30b134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x30b138: 0x34069000  ori         $a2, $zero, 0x9000
    ctx->pc = 0x30b138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x30b13c: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x30b13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x30b140: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x30b140u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x30b144: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x30b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30b148: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30b148u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30b14c: 0x263035e0  addiu       $s0, $s1, 0x35E0
    ctx->pc = 0x30b14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13792));
    // 0x30b150: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x30b150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30b154: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x30b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30b158: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x30b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30b15c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b160: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30b160u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30b164: 0xfe2535f0  sd          $a1, 0x35F0($s1)
    ctx->pc = 0x30b164u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 13808), GPR_U64(ctx, 5));
    // 0x30b168: 0xfe2435f8  sd          $a0, 0x35F8($s1)
    ctx->pc = 0x30b168u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 13816), GPR_U64(ctx, 4));
    // 0x30b16c: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x30b16cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x30b170: 0x10e0006b  beqz        $a3, . + 4 + (0x6B << 2)
    ctx->pc = 0x30B170u;
    {
        const bool branch_taken_0x30b170 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B170u;
        // 0x30b174: 0x26303600  addiu       $s0, $s1, 0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b170) {
            ctx->pc = 0x30B320u;
            goto label_30b320;
        }
    }
    ctx->pc = 0x30B178u;
    // 0x30b178: 0x240871ff  addiu       $t0, $zero, 0x71FF
    ctx->pc = 0x30b178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29183));
    // 0x30b17c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x30b17cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30b180: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x30b184: 0x241772ff  addiu       $s7, $zero, 0x72FF
    ctx->pc = 0x30b184u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 29439));
    // 0x30b188: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x30b188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
    // 0x30b18c: 0x241e720f  addiu       $fp, $zero, 0x720F
    ctx->pc = 0x30b18cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 29199));
    // 0x30b190: 0xafaa0120  sw          $t2, 0x120($sp)
    ctx->pc = 0x30b190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 10));
    // 0x30b194: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x30b194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x30b198: 0xafb70130  sw          $s7, 0x130($sp)
    ctx->pc = 0x30b198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 23));
    // 0x30b19c: 0x24170030  addiu       $s7, $zero, 0x30
    ctx->pc = 0x30b19cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_30b1a0:
    // 0x30b1a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30b1a4: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x30B1A4u;
    {
        const bool branch_taken_0x30b1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1A4u;
        // 0x30b1a8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1a4) {
            ctx->pc = 0x30B2D8u;
            goto label_30b2d8;
        }
    }
    ctx->pc = 0x30B1ACu;
    // 0x30b1ac: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x30b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30b1b0: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x30b1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x30b1b4: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x30b1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30b1b8: 0x1e183c  dsll32      $v1, $fp, 0
    ctx->pc = 0x30b1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 0));
    // 0x30b1bc: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x30b1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30b1c0: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x30b1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30b1c4: 0x8fa80110  lw          $t0, 0x110($sp)
    ctx->pc = 0x30b1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30b1c8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x30b1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30b1cc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x30b1ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30b1d0: 0x2c43a  dsrl        $t8, $v0, 16
    ctx->pc = 0x30b1d0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> 16);
    // 0x30b1d4: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x30b1d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30b1d8: 0x38c3a  dsrl        $s1, $v1, 16
    ctx->pc = 0x30b1d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> 16);
    // 0x30b1dc: 0x4543a  dsrl        $t2, $a0, 16
    ctx->pc = 0x30b1dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) >> 16);
    // 0x30b1e0: 0x5cc3a  dsrl        $t9, $a1, 16
    ctx->pc = 0x30b1e0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) >> 16);
    // 0x30b1e4: 0x6b43a  dsrl        $s6, $a2, 16
    ctx->pc = 0x30b1e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) >> 16);
    // 0x30b1e8: 0x7ac3a  dsrl        $s5, $a3, 16
    ctx->pc = 0x30b1e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) >> 16);
    // 0x30b1ec: 0x24146bff  addiu       $s4, $zero, 0x6BFF
    ctx->pc = 0x30b1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27647));
    // 0x30b1f0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x30b1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30b1f4: 0x24126dff  addiu       $s2, $zero, 0x6DFF
    ctx->pc = 0x30b1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28159));
    // 0x30b1f8: 0x240e0410  addiu       $t6, $zero, 0x410
    ctx->pc = 0x30b1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x30b1fc: 0x240d6c0f  addiu       $t5, $zero, 0x6C0F
    ctx->pc = 0x30b1fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 27663));
    // 0x30b200: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x30b200u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30b204: 0x0  nop
    ctx->pc = 0x30b204u;
    // NOP
label_30b208:
    // 0x30b208: 0xc483c  dsll32      $t1, $t4, 0
    ctx->pc = 0x30b208u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) << (32 + 0));
    // 0x30b20c: 0x258c0400  addiu       $t4, $t4, 0x400
    ctx->pc = 0x30b20cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1024));
    // 0x30b210: 0xd403c  dsll32      $t0, $t5, 0
    ctx->pc = 0x30b210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) << (32 + 0));
    // 0x30b214: 0x25ad0200  addiu       $t5, $t5, 0x200
    ctx->pc = 0x30b214u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 512));
    // 0x30b218: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x30b218u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x30b21c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x30b21cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x30b220: 0xe303c  dsll32      $a2, $t6, 0
    ctx->pc = 0x30b220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) << (32 + 0));
    // 0x30b224: 0x25ce0400  addiu       $t6, $t6, 0x400
    ctx->pc = 0x30b224u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1024));
    // 0x30b228: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x30b228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x30b22c: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x30b22cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x30b230: 0x1381025  or          $v0, $t1, $t8
    ctx->pc = 0x30b230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 24));
    // 0x30b234: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x30b234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x30b238: 0x1111825  or          $v1, $t0, $s1
    ctx->pc = 0x30b238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x30b23c: 0x1194025  or          $t0, $t0, $t9
    ctx->pc = 0x30b23cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 25));
    // 0x30b240: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30b240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30b244: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30b244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30b248: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x30b248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x30b24c: 0x26730400  addiu       $s3, $s3, 0x400
    ctx->pc = 0x30b24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x30b250: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x30b250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x30b254: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x30b254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x30b258: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b258u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b25c: 0xca1025  or          $v0, $a2, $t2
    ctx->pc = 0x30b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x30b260: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30b260u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30b264: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b268: 0x991825  or          $v1, $a0, $t9
    ctx->pc = 0x30b268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
    // 0x30b26c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x30b26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x30b270: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30b270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30b274: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30b274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30b278: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b278u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b27c: 0xf61025  or          $v0, $a3, $s6
    ctx->pc = 0x30b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 22));
    // 0x30b280: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30b280u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30b284: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b288: 0xb51825  or          $v1, $a1, $s5
    ctx->pc = 0x30b288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x30b28c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x30b28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x30b290: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b294: 0xd83025  or          $a2, $a2, $t8
    ctx->pc = 0x30b294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 24));
    // 0x30b298: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x30b298u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x30b29c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b2a0: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x30b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x30b2a4: 0xf83825  or          $a3, $a3, $t8
    ctx->pc = 0x30b2a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 24));
    // 0x30b2a8: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x30b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x30b2ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b2b0: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x30b2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x30b2b4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30b2b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30b2b8: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30b2bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b2c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30b2c4: 0xfe090000  sd          $t1, 0x0($s0)
    ctx->pc = 0x30b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 9));
    // 0x30b2c8: 0x1e3102b  sltu        $v0, $t7, $v1
    ctx->pc = 0x30b2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30b2cc: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x30b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x30b2d0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x30B2D0u;
    {
        const bool branch_taken_0x30b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2D0u;
        // 0x30b2d4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2d0) {
            ctx->pc = 0x30B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b208;
        }
    }
    ctx->pc = 0x30B2D8u;
label_30b2d8:
    // 0x30b2d8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x30b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30b2dc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30b2dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30b2e0: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x30b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30b2e4: 0x27de0100  addiu       $fp, $fp, 0x100
    ctx->pc = 0x30b2e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 256));
    // 0x30b2e8: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x30b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30b2ec: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x30b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x30b2f0: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x30b2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30b2f4: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x30b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x30b2f8: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x30b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x30b2fc: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x30b2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x30b300: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x30b300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x30b304: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x30b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x30b308: 0x165102b  sltu        $v0, $t3, $a1
    ctx->pc = 0x30b308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30b30c: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x30b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
    // 0x30b310: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x30b310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x30b314: 0x26f70200  addiu       $s7, $s7, 0x200
    ctx->pc = 0x30b314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 512));
    // 0x30b318: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x30B318u;
    {
        const bool branch_taken_0x30b318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B318u;
        // 0x30b31c: 0xafa80140  sw          $t0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b318) {
            ctx->pc = 0x30B1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b1a0;
        }
    }
    ctx->pc = 0x30B320u;
label_30b320:
    // 0x30b320: 0x8faa00a0  lw          $t2, 0xA0($sp)
    ctx->pc = 0x30b320u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30b324: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x30b324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b328: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x30b328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x30b32c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x30b32cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30b330: 0x3c0810ab  lui         $t0, 0x10AB
    ctx->pc = 0x30b330u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4267 << 16));
    // 0x30b334: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x30b334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x30b338: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x30b338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30b33c: 0x35088006  ori         $t0, $t0, 0x8006
    ctx->pc = 0x30b33cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32774);
    // 0x30b340: 0xdfa30068  ld          $v1, 0x68($sp)
    ctx->pc = 0x30b340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30b344: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x30b344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30b348: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x30b348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b34c: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x30b34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x30b350: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30b350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30b354: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x30b354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30b358: 0xdfa600f0  ld          $a2, 0xF0($sp)
    ctx->pc = 0x30b358u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x30b35c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x30b35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30b360: 0xdfaa00e8  ld          $t2, 0xE8($sp)
    ctx->pc = 0x30b360u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30b364: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30b368: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x30b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b36c: 0x63fb8  dsll        $a3, $a2, 30
    ctx->pc = 0x30b36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 30);
    // 0x30b370: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x30b370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30b374: 0xa36b8  dsll        $a2, $t2, 26
    ctx->pc = 0x30b374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << 26);
    // 0x30b378: 0xfe170008  sd          $s7, 0x8($s0)
    ctx->pc = 0x30b378u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 23));
    // 0x30b37c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x30b37cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30b380: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x30b380u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x30b384: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b388: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x30b388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30b38c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x30b38cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x30b390: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x30b390u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b394: 0xdfa80070  ld          $t0, 0x70($sp)
    ctx->pc = 0x30b394u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30b398: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x30b398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x30b39c: 0x8faa00d0  lw          $t2, 0xD0($sp)
    ctx->pc = 0x30b39cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30b3a0: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x30b3a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30b3a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30b3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30b3a8: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x30b3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x30b3ac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30b3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30b3b0: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x30b3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x30b3b4: 0x2ea180b  movn        $v1, $s7, $t2
    ctx->pc = 0x30b3b4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 23));
    // 0x30b3b8: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x30b3b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30b3bc: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x30b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x30b3c0: 0x106200b  movn        $a0, $t0, $a2
    ctx->pc = 0x30b3c0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x30b3c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x30b3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30b3c8: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30b3cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b3d0: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x30b3d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b3d4: 0x17bd38  dsll        $s7, $s7, 20
    ctx->pc = 0x30b3d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 20);
    // 0x30b3d8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x30b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30b3dc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x30b3dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x30b3e0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x30b3e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x30b3e4: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30b3e8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x30b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x30b3ec: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x30b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x30b3f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b3f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30b3f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30b3fc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b400: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x30b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x30b404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b408: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x30b408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x30b40c: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x30b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x30b410: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b414: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x30b414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x30b418: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30b418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30b41c: 0x24080042  addiu       $t0, $zero, 0x42
    ctx->pc = 0x30b41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30b420: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b420u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b424: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x30b424u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x30b428: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b42c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30b42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30b430: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x30b430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30b434: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x30b434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b43c: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x30b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x30b440: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b444: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30b444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x30b448: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x30b448u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30b44c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x30b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x30b450: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x30b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30b454: 0xfe170008  sd          $s7, 0x8($s0)
    ctx->pc = 0x30b454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 23));
    // 0x30b458: 0xdfa30078  ld          $v1, 0x78($sp)
    ctx->pc = 0x30b458u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b45c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x30b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x30b460: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b464: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x30b464u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x30b468: 0xdfa40080  ld          $a0, 0x80($sp)
    ctx->pc = 0x30b468u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30b46c: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x30b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x30b470: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x30b470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b474: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x30b474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b478: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x30B478u;
    {
        const bool branch_taken_0x30b478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B478u;
        // 0x30b47c: 0x24b00080  addiu       $s0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b478) {
            ctx->pc = 0x30B570u;
            goto label_30b570;
        }
    }
    ctx->pc = 0x30B480u;
    // 0x30b480: 0x240c7000  addiu       $t4, $zero, 0x7000
    ctx->pc = 0x30b480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x30b484: 0x240a6bff  addiu       $t2, $zero, 0x6BFF
    ctx->pc = 0x30b484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 27647));
    // 0x30b488: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30b488u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b48c: 0x2417fff7  addiu       $s7, $zero, -0x9
    ctx->pc = 0x30b48cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_30b490:
    // 0x30b490: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x30b490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30b494: 0x10e0002f  beqz        $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x30B494u;
    {
        const bool branch_taken_0x30b494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B494u;
        // 0x30b498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b494) {
            ctx->pc = 0x30B554u;
            goto label_30b554;
        }
    }
    ctx->pc = 0x30B49Cu;
    // 0x30b49c: 0x191082  srl         $v0, $t9, 2
    ctx->pc = 0x30b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 25), 2));
    // 0x30b4a0: 0x27230040  addiu       $v1, $t9, 0x40
    ctx->pc = 0x30b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 64));
    // 0x30b4a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b4a8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x30b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x30b4ac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x30b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x30b4b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30b4b4: 0x1972821  addu        $a1, $t4, $s7
    ctx->pc = 0x30b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
    // 0x30b4b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b4bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30b4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30b4c0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30b4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30b4c4: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x30b4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30b4c8: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x30b4c8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30b4cc: 0x4883e  dsrl32      $s1, $a0, 0
    ctx->pc = 0x30b4ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30b4d0: 0x3483e  dsrl32      $t1, $v1, 0
    ctx->pc = 0x30b4d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b4d4: 0x5403e  dsrl32      $t0, $a1, 0
    ctx->pc = 0x30b4d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30b4d8: 0x240773f7  addiu       $a3, $zero, 0x73F7
    ctx->pc = 0x30b4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29687));
    // 0x30b4dc: 0x240671ff  addiu       $a2, $zero, 0x71FF
    ctx->pc = 0x30b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29183));
label_30b4e0:
    // 0x30b4e0: 0xb1940  sll         $v1, $t3, 5
    ctx->pc = 0x30b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x30b4e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30b4e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30b4e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30b4ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x30b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x30b4f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x30b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x30b4f4: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x30b4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30b4f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b4fc: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x30b4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x30b500: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x30b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30b504: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x30b504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x30b508: 0x3021025  or          $v0, $t8, $v0
    ctx->pc = 0x30b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x30b50c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x30b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x30b510: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30b510u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30b514: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30b518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30b51c: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x30b51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30b520: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x30b520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30b524: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30b524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30b528: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x30b528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x30b52c: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x30b52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x30b530: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x30b530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30b534: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x30b534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x30b538: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x30b538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30b53c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x30b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x30b540: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x30b540u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x30b544: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x30b544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30b548: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x30b548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x30b54c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30B54Cu;
    {
        const bool branch_taken_0x30b54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B54Cu;
        // 0x30b550: 0x24c60200  addiu       $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b54c) {
            ctx->pc = 0x30B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b4e0;
        }
    }
    ctx->pc = 0x30B554u;
label_30b554:
    // 0x30b554: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x30b554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b558: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30b558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30b55c: 0x258c0400  addiu       $t4, $t4, 0x400
    ctx->pc = 0x30b55cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1024));
    // 0x30b560: 0x254a0400  addiu       $t2, $t2, 0x400
    ctx->pc = 0x30b560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x30b564: 0x1e5102b  sltu        $v0, $t7, $a1
    ctx->pc = 0x30b564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30b568: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x30B568u;
    {
        const bool branch_taken_0x30b568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B568u;
        // 0x30b56c: 0x27390040  addiu       $t9, $t9, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b568) {
            ctx->pc = 0x30B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b490;
        }
    }
    ctx->pc = 0x30B570u;
label_30b570:
    // 0x30b570: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x30b570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30b574: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x30b574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30b578: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30b578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30b57c: 0x24e71200  addiu       $a3, $a3, 0x1200
    ctx->pc = 0x30b57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4608));
    // 0x30b580: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x30b580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30b584: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x30b584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x30b588: 0x1440fdc5  bnez        $v0, . + 4 + (-0x23B << 2)
    ctx->pc = 0x30B588u;
    {
        const bool branch_taken_0x30b588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B588u;
        // 0x30b58c: 0xafa70180  sw          $a3, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b588) {
            ctx->pc = 0x30ACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30aca0;
        }
    }
    ctx->pc = 0x30B590u;
    // 0x30b590: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x30b590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30b594: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x30b594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x30b598: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x30b598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x30b59c: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x30b59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x30b5a0: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x30b5a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x30b5a4: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x30b5a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x30b5a8: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x30b5a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x30b5ac: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x30b5acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x30b5b0: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x30b5b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x30b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x30B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5B4u;
        // 0x30b5b8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B5BCu;
    // 0x30b5bc: 0x0  nop
    ctx->pc = 0x30b5bcu;
    // NOP
    ctx->pc = 0x30b5c0u;
}
