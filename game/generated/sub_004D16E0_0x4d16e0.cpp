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

// Function: sub_004D16E0
// Address: 0x4d16e0 - 0x4d1a58
void sub_004D16E0_0x4d16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D16E0_0x4d16e0");
#endif

    switch (ctx->pc) {
        case 0x4d17f4u: goto label_4d17f4;
        case 0x4d191cu: goto label_4d191c;
        case 0x4d1924u: goto label_4d1924;
        case 0x4d192cu: goto label_4d192c;
        case 0x4d1934u: goto label_4d1934;
        default: break;
    }

    ctx->pc = 0x4d16e0u;

    // 0x4d16e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d16e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d16e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d16e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4d16ec: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d16ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4d16f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d16f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4d16f4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d16f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d16f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d16fc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d16fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d1700: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d1700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4d1704: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d1704u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d1708: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d1708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4d170c: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d170cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d1710: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d1710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4d1714: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d1714u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d1718: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d1718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4d171c: 0x26520ff8  addiu       $s2, $s2, 0xFF8
    ctx->pc = 0x4d171cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4088));
    // 0x4d1720: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d1720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4d1724: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4d1724u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1728: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d1728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4d172c: 0x26730ffc  addiu       $s3, $s3, 0xFFC
    ctx->pc = 0x4d172cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4092));
    // 0x4d1730: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d1730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4d1734: 0x26311000  addiu       $s1, $s1, 0x1000
    ctx->pc = 0x4d1734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4096));
    // 0x4d1738: 0x8c45100c  lw          $a1, 0x100C($v0)
    ctx->pc = 0x4d1738u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F100Cu));
    // 0x4d173c: 0x26b50fec  addiu       $s5, $s5, 0xFEC
    ctx->pc = 0x4d173cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4076));
    // 0x4d1740: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d1740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FF8u));
    // 0x4d1744: 0x26940ff0  addiu       $s4, $s4, 0xFF0
    ctx->pc = 0x4d1744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4080));
    // 0x4d1748: 0x8cbe0008  lw          $fp, 0x8($a1)
    ctx->pc = 0x4d1748u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4d174c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1750: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1754: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4d1754u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0FFCu));
    // 0x4d1758: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d1758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d175c: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d175cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d1760: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d1760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d1764: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d1764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d1768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d176c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d176cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d1770: 0x26e30026  addiu       $v1, $s7, 0x26
    ctx->pc = 0x4d1770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 38));
    // 0x4d1774: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d1774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d1778: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d1778u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d177c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4d177cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d1780: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d1780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d1784: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4d1784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4d1788: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d1788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d178c: 0x26e30028  addiu       $v1, $s7, 0x28
    ctx->pc = 0x4d178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
    // 0x4d1790: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d1790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d1794: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d1794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d1798: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4d1798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4d179c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d17a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d17a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d17a4: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d17a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d17a8: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d17a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d17ac: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4d17acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4d17b0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d17b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d17b4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d17b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d17b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d17bc: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4d17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4d17c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d17c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d17c4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4d17c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d17c8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d17c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d17cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d17ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d17d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d17d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d17d4: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d17d8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d17d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d17dc: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d17dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d17e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d17e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d17e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d17e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d17e8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4d17ec: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D17ECu;
    SET_GPR_U32(ctx, 31, 0x4D17F4u);
    ctx->pc = 0x4D17F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D17ECu;
    // 0x4d17f0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D17ECu, 0x4D17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D17F4u;
label_4d17f4:
    // 0x4d17f4: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4d17f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d17f8: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x4d17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x4d17fc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4d17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4d1800: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4d1800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1804: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d1804u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d1808: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d1808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d180c: 0x866a0000  lh          $t2, 0x0($s3)
    ctx->pc = 0x4d180cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1810: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d1810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d1814: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4d1814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d1818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d181c: 0x862b0000  lh          $t3, 0x0($s1)
    ctx->pc = 0x4d181cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d1820: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d1820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d1824: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4d1824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d1828: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4d1828u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4d182c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d182cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d1830: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4d1830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4d1834: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d1834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d1838: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d1838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d183c: 0x2496d680  addiu       $s6, $a0, -0x2980
    ctx->pc = 0x4d183cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4d1840: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4d1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4d1844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d1844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1848: 0x964d0000  lhu         $t5, 0x0($s2)
    ctx->pc = 0x4d1848u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d184c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1850: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d1850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d1854: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d1854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d1858: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d1858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d185c: 0x8e8c0000  lw          $t4, 0x0($s4)
    ctx->pc = 0x4d185cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d1860: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d1860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d1864: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d1864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d1868: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4d1868u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4d186c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4d186cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4d1870: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x4d1870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x4d1874: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d1874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d1878: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d1878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d187c: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4d187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4d1880: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d1880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1884: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d1884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d1888: 0xa6cd2334  sh          $t5, 0x2334($s6)
    ctx->pc = 0x4d1888u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9012), (uint16_t)GPR_U32(ctx, 13));
    // 0x4d188c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d188cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d1890: 0xa6c32336  sh          $v1, 0x2336($s6)
    ctx->pc = 0x4d1890u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d1894: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d1894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d1898: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4d1898u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4d189c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x4d189cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x4d18a0: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4d18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4d18a4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d18a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d18a8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d18a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d18ac: 0xa6c32338  sh          $v1, 0x2338($s6)
    ctx->pc = 0x4d18acu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d18b0: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d18b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d18b4: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d18b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d18b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d18bc: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4d18bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d18c0: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4d18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4d18c4: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d18c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d18c8: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d18c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d18cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d18d0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4d18d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4d18d4: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d18d8: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d18d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d18dc: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x4d18dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x4d18e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d18e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d18e4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d18e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d18e8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4d18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4d18ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d18f0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d18f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d18f4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d18f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d18f8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d18f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d18fc: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d18fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d1900: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d1900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d1904: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d1904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d1908: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d1908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d190c: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x4d190cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x4d1910: 0xae8c0000  sw          $t4, 0x0($s4)
    ctx->pc = 0x4d1910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 12));
    // 0x4d1914: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D1914u;
    SET_GPR_U32(ctx, 31, 0x4D191Cu);
    ctx->pc = 0x4D1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1914u;
    // 0x4d1918: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D1914u, 0x4D191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D191Cu;
label_4d191c:
    // 0x4d191c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D191Cu;
    SET_GPR_U32(ctx, 31, 0x4D1924u);
    ctx->pc = 0x4D1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D191Cu;
    // 0x4d1920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D191Cu, 0x4D1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1924u;
label_4d1924:
    // 0x4d1924: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D1924u;
    SET_GPR_U32(ctx, 31, 0x4D192Cu);
    ctx->pc = 0x4D1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1924u;
    // 0x4d1928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D1924u, 0x4D192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D192Cu;
label_4d192c:
    // 0x4d192c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D192Cu;
    SET_GPR_U32(ctx, 31, 0x4D1934u);
    ctx->pc = 0x4D1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D192Cu;
    // 0x4d1930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D192Cu, 0x4D1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1934u;
label_4d1934:
    // 0x4d1934: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d1934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1938: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4d1938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d193c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4d193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d1940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1944: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d1944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d1948: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d1948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4d194c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d194cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d1950: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4d1950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4d1954: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4d1954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4d1958: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d1958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d195c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4d195cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4d1960: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4d1960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4d1964: 0x8ee20124  lw          $v0, 0x124($s7)
    ctx->pc = 0x4d1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 292)));
    // 0x4d1968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d196c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d196cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d1970: 0x8ee20128  lw          $v0, 0x128($s7)
    ctx->pc = 0x4d1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 296)));
    // 0x4d1974: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d1974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d1978: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4d1978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4d197c: 0x8ee2012c  lw          $v0, 0x12C($s7)
    ctx->pc = 0x4d197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
    // 0x4d1980: 0xaec32340  sw          $v1, 0x2340($s6)
    ctx->pc = 0x4d1980u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9024), GPR_U32(ctx, 3));
    // 0x4d1984: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d1984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d1988: 0xaec42344  sw          $a0, 0x2344($s6)
    ctx->pc = 0x4d1988u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9028), GPR_U32(ctx, 4));
    // 0x4d198c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4d198cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4d1990: 0xaec52348  sw          $a1, 0x2348($s6)
    ctx->pc = 0x4d1990u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9032), GPR_U32(ctx, 5));
    // 0x4d1994: 0x96e201b6  lhu         $v0, 0x1B6($s7)
    ctx->pc = 0x4d1994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 438)));
    // 0x4d1998: 0xa6c22332  sh          $v0, 0x2332($s6)
    ctx->pc = 0x4d1998u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d199c: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4d199cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d19a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4D19A0u;
    {
        const bool branch_taken_0x4d19a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19A0u;
        // 0x4d19a4: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19a0) {
            ctx->pc = 0x4D19E0u;
            goto label_4d19e0;
        }
    }
    ctx->pc = 0x4D19A8u;
    // 0x4d19a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d19ac: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4D19ACu;
    {
        const bool branch_taken_0x4d19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19ACu;
        // 0x4d19b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19ac) {
            ctx->pc = 0x4D1A20u;
            goto label_4d1a20;
        }
    }
    ctx->pc = 0x4D19B4u;
    // 0x4d19b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d19b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d19b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d19b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d19bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d19bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d19c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d19c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d19c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d19c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d19c8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d19c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d19cc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d19ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d19d0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d19d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d19d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d19d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d19d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D19D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19D8u;
        // 0x4d19dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D19D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D19E0u;
label_4d19e0:
    // 0x4d19e0: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4d19e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d19e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4d19e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d19e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d19e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d19ec: 0xa6c2232c  sh          $v0, 0x232C($s6)
    ctx->pc = 0x4d19ecu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9004), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d19f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d19f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d19f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d19f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d19f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d19f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d19fc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d19fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d1a00: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d1a00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d1a04: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d1a04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d1a08: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d1a08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d1a0c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d1a0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d1a10: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d1a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d1a14: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4D1A14u;
    ctx->pc = 0x4D1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1A14u;
    // 0x4d1a18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4D1A1Cu;
    // 0x4d1a1c: 0x0  nop
    ctx->pc = 0x4d1a1cu;
    // NOP
label_4d1a20:
    // 0x4d1a20: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4d1a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d1a24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4d1a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1a28: 0xa6c2232e  sh          $v0, 0x232E($s6)
    ctx->pc = 0x4d1a28u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d1a2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d1a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d1a30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d1a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d1a34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d1a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d1a38: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d1a38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d1a3c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d1a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d1a40: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d1a40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d1a44: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d1a44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d1a48: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d1a48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d1a4c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d1a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d1a50: 0x8122e2c  j           func_48B8B0
    ctx->pc = 0x4D1A50u;
    ctx->pc = 0x4D1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1A50u;
    // 0x4d1a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B8B0u, 0x4D1A50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D1A58u;
}
