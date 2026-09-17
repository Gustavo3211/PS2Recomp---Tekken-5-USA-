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

// Function: sub_004A1738
// Address: 0x4a1738 - 0x4a1908
void sub_004A1738_0x4a1738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1738_0x4a1738");
#endif

    ctx->pc = 0x4a1738u;

    // 0x4a1738: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a1738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a173c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a1740: 0x24490bec  addiu       $t1, $v0, 0xBEC
    ctx->pc = 0x4a1740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 3052));
    // 0x4a1744: 0x946e0bf0  lhu         $t6, 0xBF0($v1)
    ctx->pc = 0x4a1744u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)FAST_READ16(0x7F0BF0u));
    // 0x4a1748: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a1748u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0BECu));
    // 0x4a174c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a174cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1750: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4a1750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4a1754: 0x4e2825  or          $a1, $v0, $t6
    ctx->pc = 0x4a1754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x4a1758: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4a1758u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4a175c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4a175cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a1760: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A1760u;
    {
        const bool branch_taken_0x4a1760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1760u;
        // 0x4a1764: 0x95240000  lhu         $a0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1760) {
            ctx->pc = 0x4A17A0u;
            goto label_4a17a0;
        }
    }
    ctx->pc = 0x4A1768u;
    // 0x4a1768: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a1768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a176c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a176cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a1770: 0x24a50c04  addiu       $a1, $a1, 0xC04
    ctx->pc = 0x4a1770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3076));
    // 0x4a1774: 0x24c60bf4  addiu       $a2, $a2, 0xBF4
    ctx->pc = 0x4a1774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3060));
    // 0x4a1778: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a1778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C04u));
    // 0x4a177c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a177cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BF4u));
    // 0x4a1780: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4a1780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a1784: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a1788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a178c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a178cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C04u, _value); } while (0);
    // 0x4a1790: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4a1790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4a1794: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a1794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a1798: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1798u;
        // 0x4a179c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A17A0u;
label_4a17a0:
    // 0x4a17a0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a17a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a17a4: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x4a17a4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x4a17a8: 0x8ce60c04  lw          $a2, 0xC04($a3)
    ctx->pc = 0x4a17a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0C04u));
    // 0x4a17ac: 0x270b0bf4  addiu       $t3, $t8, 0xBF4
    ctx->pc = 0x4a17acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 3060));
    // 0x4a17b0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4a17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BF4u));
    // 0x4a17b4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4a17b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a17b8: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x4a17b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4a17bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a17bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a17c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a17c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a17c4: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4a17c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4a17c8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a17c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a17cc: 0xa46824  and         $t5, $a1, $a0
    ctx->pc = 0x4a17ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4a17d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a17d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a17d4: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4a17d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4a17d8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4a17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4a17dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a17e0: 0x25ec0bf8  addiu       $t4, $t7, 0xBF8
    ctx->pc = 0x4a17e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 3064));
    // 0x4a17e4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4a17e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a17e8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4a17e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a17ec: 0xad2d0000  sw          $t5, 0x0($t1)
    ctx->pc = 0x4a17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 13));
    // 0x4a17f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4a17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a17f4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a17f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a17f8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4a17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a17fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a17fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1800: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4a1800u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a1804: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4a1804u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4a1808: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a180c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a180cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1810: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4a1810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a1814: 0x8a3024  and         $a2, $a0, $t2
    ctx->pc = 0x4a1814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x4a1818: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4a1818u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4a181c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a181cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1820: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x4a1820u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a1824: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1828: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a182c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a182cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a1830: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a1830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a1834: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x4a1834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1838: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4A1838u;
    {
        const bool branch_taken_0x4a1838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1838u;
        // 0x4a183c: 0xad680000  sw          $t0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1838) {
            ctx->pc = 0x4A18ACu;
            goto label_4a18ac;
        }
    }
    ctx->pc = 0x4A1840u;
    // 0x4a1840: 0x1aa2024  and         $a0, $t5, $t2
    ctx->pc = 0x4a1840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x4a1844: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x4a1844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4a1848: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x4a1848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x4a184c: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x4a184cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x4a1850: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4a1850u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4a1854: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1858: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4a1858u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4a185c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a185cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a1860: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4a1860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a1864: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4a1864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a1868: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4a1868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4a186c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1870: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4a1870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4a1874: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a1874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a1878: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x4a1878u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a187c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a187cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1880: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4a1880u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4a1884: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a1888: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a1888u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a188c: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4a188cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a1890: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a1890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a1894: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a1894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a1898: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1898u;
    {
        const bool branch_taken_0x4a1898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1898u;
        // 0x4a189c: 0xad850000  sw          $a1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1898) {
            ctx->pc = 0x4A18ACu;
            goto label_4a18ac;
        }
    }
    ctx->pc = 0x4A18A0u;
    // 0x4a18a0: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x4a18a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a18a4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4a18a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4a18a8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4a18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4a18ac:
    // 0x4a18ac: 0x27050bf4  addiu       $a1, $t8, 0xBF4
    ctx->pc = 0x4a18acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 3060));
    // 0x4a18b0: 0x85e60bf8  lh          $a2, 0xBF8($t7)
    ctx->pc = 0x4a18b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3064)));
    // 0x4a18b4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a18b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a18b8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a18b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a18bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a18c0: 0x24e70c04  addiu       $a3, $a3, 0xC04
    ctx->pc = 0x4a18c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3076));
    // 0x4a18c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a18c8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4a18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a18cc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a18d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a18d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a18d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a18d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a18d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a18dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a18dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a18e0: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4a18e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a18e4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4a18e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4a18e8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a18e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a18ec: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4a18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4a18f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a18f4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a18f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a18f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a18f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a18fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A18FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18FCu;
        // 0x4a1900: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A18FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1904u;
    // 0x4a1904: 0x0  nop
    ctx->pc = 0x4a1904u;
    // NOP
    ctx->pc = 0x4a1908u;
}
