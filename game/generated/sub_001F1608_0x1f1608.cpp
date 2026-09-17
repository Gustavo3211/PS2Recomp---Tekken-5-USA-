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

// Function: sub_001F1608
// Address: 0x1f1608 - 0x1f19f8
void sub_001F1608_0x1f1608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1608_0x1f1608");
#endif

    switch (ctx->pc) {
        case 0x1f1608u: goto label_1f1608;
        case 0x1f160cu: goto label_1f160c;
        case 0x1f1610u: goto label_1f1610;
        case 0x1f1614u: goto label_1f1614;
        case 0x1f1618u: goto label_1f1618;
        case 0x1f161cu: goto label_1f161c;
        case 0x1f1620u: goto label_1f1620;
        case 0x1f1624u: goto label_1f1624;
        case 0x1f1628u: goto label_1f1628;
        case 0x1f162cu: goto label_1f162c;
        case 0x1f1630u: goto label_1f1630;
        case 0x1f1634u: goto label_1f1634;
        case 0x1f1638u: goto label_1f1638;
        case 0x1f163cu: goto label_1f163c;
        case 0x1f1640u: goto label_1f1640;
        case 0x1f1644u: goto label_1f1644;
        case 0x1f1648u: goto label_1f1648;
        case 0x1f164cu: goto label_1f164c;
        case 0x1f1650u: goto label_1f1650;
        case 0x1f1654u: goto label_1f1654;
        case 0x1f1658u: goto label_1f1658;
        case 0x1f165cu: goto label_1f165c;
        case 0x1f1660u: goto label_1f1660;
        case 0x1f1664u: goto label_1f1664;
        case 0x1f1668u: goto label_1f1668;
        case 0x1f166cu: goto label_1f166c;
        case 0x1f1670u: goto label_1f1670;
        case 0x1f1674u: goto label_1f1674;
        case 0x1f1678u: goto label_1f1678;
        case 0x1f167cu: goto label_1f167c;
        case 0x1f1680u: goto label_1f1680;
        case 0x1f1684u: goto label_1f1684;
        case 0x1f1688u: goto label_1f1688;
        case 0x1f168cu: goto label_1f168c;
        case 0x1f1690u: goto label_1f1690;
        case 0x1f1694u: goto label_1f1694;
        case 0x1f1698u: goto label_1f1698;
        case 0x1f169cu: goto label_1f169c;
        case 0x1f16a0u: goto label_1f16a0;
        case 0x1f16a4u: goto label_1f16a4;
        case 0x1f16a8u: goto label_1f16a8;
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16b0u: goto label_1f16b0;
        case 0x1f16b4u: goto label_1f16b4;
        case 0x1f16b8u: goto label_1f16b8;
        case 0x1f16bcu: goto label_1f16bc;
        case 0x1f16c0u: goto label_1f16c0;
        case 0x1f16c4u: goto label_1f16c4;
        case 0x1f16c8u: goto label_1f16c8;
        case 0x1f16ccu: goto label_1f16cc;
        case 0x1f16d0u: goto label_1f16d0;
        case 0x1f16d4u: goto label_1f16d4;
        case 0x1f16d8u: goto label_1f16d8;
        case 0x1f16dcu: goto label_1f16dc;
        case 0x1f16e0u: goto label_1f16e0;
        case 0x1f16e4u: goto label_1f16e4;
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f16ecu: goto label_1f16ec;
        case 0x1f16f0u: goto label_1f16f0;
        case 0x1f16f4u: goto label_1f16f4;
        case 0x1f16f8u: goto label_1f16f8;
        case 0x1f16fcu: goto label_1f16fc;
        case 0x1f1700u: goto label_1f1700;
        case 0x1f1704u: goto label_1f1704;
        case 0x1f1708u: goto label_1f1708;
        case 0x1f170cu: goto label_1f170c;
        case 0x1f1710u: goto label_1f1710;
        case 0x1f1714u: goto label_1f1714;
        case 0x1f1718u: goto label_1f1718;
        case 0x1f171cu: goto label_1f171c;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1724u: goto label_1f1724;
        case 0x1f1728u: goto label_1f1728;
        case 0x1f172cu: goto label_1f172c;
        case 0x1f1730u: goto label_1f1730;
        case 0x1f1734u: goto label_1f1734;
        case 0x1f1738u: goto label_1f1738;
        case 0x1f173cu: goto label_1f173c;
        case 0x1f1740u: goto label_1f1740;
        case 0x1f1744u: goto label_1f1744;
        case 0x1f1748u: goto label_1f1748;
        case 0x1f174cu: goto label_1f174c;
        case 0x1f1750u: goto label_1f1750;
        case 0x1f1754u: goto label_1f1754;
        case 0x1f1758u: goto label_1f1758;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f1760u: goto label_1f1760;
        case 0x1f1764u: goto label_1f1764;
        case 0x1f1768u: goto label_1f1768;
        case 0x1f176cu: goto label_1f176c;
        case 0x1f1770u: goto label_1f1770;
        case 0x1f1774u: goto label_1f1774;
        case 0x1f1778u: goto label_1f1778;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f1780u: goto label_1f1780;
        case 0x1f1784u: goto label_1f1784;
        case 0x1f1788u: goto label_1f1788;
        case 0x1f178cu: goto label_1f178c;
        case 0x1f1790u: goto label_1f1790;
        case 0x1f1794u: goto label_1f1794;
        case 0x1f1798u: goto label_1f1798;
        case 0x1f179cu: goto label_1f179c;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f17a4u: goto label_1f17a4;
        case 0x1f17a8u: goto label_1f17a8;
        case 0x1f17acu: goto label_1f17ac;
        case 0x1f17b0u: goto label_1f17b0;
        case 0x1f17b4u: goto label_1f17b4;
        case 0x1f17b8u: goto label_1f17b8;
        case 0x1f17bcu: goto label_1f17bc;
        case 0x1f17c0u: goto label_1f17c0;
        case 0x1f17c4u: goto label_1f17c4;
        case 0x1f17c8u: goto label_1f17c8;
        case 0x1f17ccu: goto label_1f17cc;
        case 0x1f17d0u: goto label_1f17d0;
        case 0x1f17d4u: goto label_1f17d4;
        case 0x1f17d8u: goto label_1f17d8;
        case 0x1f17dcu: goto label_1f17dc;
        case 0x1f17e0u: goto label_1f17e0;
        case 0x1f17e4u: goto label_1f17e4;
        case 0x1f17e8u: goto label_1f17e8;
        case 0x1f17ecu: goto label_1f17ec;
        case 0x1f17f0u: goto label_1f17f0;
        case 0x1f17f4u: goto label_1f17f4;
        case 0x1f17f8u: goto label_1f17f8;
        case 0x1f17fcu: goto label_1f17fc;
        case 0x1f1800u: goto label_1f1800;
        case 0x1f1804u: goto label_1f1804;
        case 0x1f1808u: goto label_1f1808;
        case 0x1f180cu: goto label_1f180c;
        case 0x1f1810u: goto label_1f1810;
        case 0x1f1814u: goto label_1f1814;
        case 0x1f1818u: goto label_1f1818;
        case 0x1f181cu: goto label_1f181c;
        case 0x1f1820u: goto label_1f1820;
        case 0x1f1824u: goto label_1f1824;
        case 0x1f1828u: goto label_1f1828;
        case 0x1f182cu: goto label_1f182c;
        case 0x1f1830u: goto label_1f1830;
        case 0x1f1834u: goto label_1f1834;
        case 0x1f1838u: goto label_1f1838;
        case 0x1f183cu: goto label_1f183c;
        case 0x1f1840u: goto label_1f1840;
        case 0x1f1844u: goto label_1f1844;
        case 0x1f1848u: goto label_1f1848;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1850u: goto label_1f1850;
        case 0x1f1854u: goto label_1f1854;
        case 0x1f1858u: goto label_1f1858;
        case 0x1f185cu: goto label_1f185c;
        case 0x1f1860u: goto label_1f1860;
        case 0x1f1864u: goto label_1f1864;
        case 0x1f1868u: goto label_1f1868;
        case 0x1f186cu: goto label_1f186c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1874u: goto label_1f1874;
        case 0x1f1878u: goto label_1f1878;
        case 0x1f187cu: goto label_1f187c;
        case 0x1f1880u: goto label_1f1880;
        case 0x1f1884u: goto label_1f1884;
        case 0x1f1888u: goto label_1f1888;
        case 0x1f188cu: goto label_1f188c;
        case 0x1f1890u: goto label_1f1890;
        case 0x1f1894u: goto label_1f1894;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f189cu: goto label_1f189c;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18a4u: goto label_1f18a4;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18acu: goto label_1f18ac;
        case 0x1f18b0u: goto label_1f18b0;
        case 0x1f18b4u: goto label_1f18b4;
        case 0x1f18b8u: goto label_1f18b8;
        case 0x1f18bcu: goto label_1f18bc;
        case 0x1f18c0u: goto label_1f18c0;
        case 0x1f18c4u: goto label_1f18c4;
        case 0x1f18c8u: goto label_1f18c8;
        case 0x1f18ccu: goto label_1f18cc;
        case 0x1f18d0u: goto label_1f18d0;
        case 0x1f18d4u: goto label_1f18d4;
        case 0x1f18d8u: goto label_1f18d8;
        case 0x1f18dcu: goto label_1f18dc;
        case 0x1f18e0u: goto label_1f18e0;
        case 0x1f18e4u: goto label_1f18e4;
        case 0x1f18e8u: goto label_1f18e8;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f18f0u: goto label_1f18f0;
        case 0x1f18f4u: goto label_1f18f4;
        case 0x1f18f8u: goto label_1f18f8;
        case 0x1f18fcu: goto label_1f18fc;
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1904u: goto label_1f1904;
        case 0x1f1908u: goto label_1f1908;
        case 0x1f190cu: goto label_1f190c;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f1914u: goto label_1f1914;
        case 0x1f1918u: goto label_1f1918;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1920u: goto label_1f1920;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1928u: goto label_1f1928;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1934u: goto label_1f1934;
        case 0x1f1938u: goto label_1f1938;
        case 0x1f193cu: goto label_1f193c;
        case 0x1f1940u: goto label_1f1940;
        case 0x1f1944u: goto label_1f1944;
        case 0x1f1948u: goto label_1f1948;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1950u: goto label_1f1950;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f195cu: goto label_1f195c;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1964u: goto label_1f1964;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1970u: goto label_1f1970;
        case 0x1f1974u: goto label_1f1974;
        case 0x1f1978u: goto label_1f1978;
        case 0x1f197cu: goto label_1f197c;
        case 0x1f1980u: goto label_1f1980;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f1994u: goto label_1f1994;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a0u: goto label_1f19a0;
        case 0x1f19a4u: goto label_1f19a4;
        case 0x1f19a8u: goto label_1f19a8;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19b8u: goto label_1f19b8;
        case 0x1f19bcu: goto label_1f19bc;
        case 0x1f19c0u: goto label_1f19c0;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19c8u: goto label_1f19c8;
        case 0x1f19ccu: goto label_1f19cc;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d4u: goto label_1f19d4;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19e0u: goto label_1f19e0;
        case 0x1f19e4u: goto label_1f19e4;
        case 0x1f19e8u: goto label_1f19e8;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f19f0u: goto label_1f19f0;
        case 0x1f19f4u: goto label_1f19f4;
        default: break;
    }

    ctx->pc = 0x1f1608u;

label_1f1608:
    // 0x1f1608: 0x27bdf950  addiu       $sp, $sp, -0x6B0
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965584));
label_1f160c:
    // 0x1f160c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f1610:
    // 0x1f1610: 0xffb00660  sd          $s0, 0x660($sp)
    ctx->pc = 0x1f1610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 16));
label_1f1614:
    // 0x1f1614: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f1614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_1f1618:
    // 0x1f1618: 0xffb10668  sd          $s1, 0x668($sp)
    ctx->pc = 0x1f1618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1640), GPR_U64(ctx, 17));
label_1f161c:
    // 0x1f161c: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x1f161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
label_1f1620:
    // 0x1f1620: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x1f1620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_1f1624:
    // 0x1f1624: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1f1624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f1628:
    // 0x1f1628: 0xffb40680  sd          $s4, 0x680($sp)
    ctx->pc = 0x1f1628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 20));
label_1f162c:
    // 0x1f162c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f162cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1630:
    // 0x1f1630: 0xffb50688  sd          $s5, 0x688($sp)
    ctx->pc = 0x1f1630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1672), GPR_U64(ctx, 21));
label_1f1634:
    // 0x1f1634: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1f1634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f1638:
    // 0x1f1638: 0xffb60690  sd          $s6, 0x690($sp)
    ctx->pc = 0x1f1638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 22));
label_1f163c:
    // 0x1f163c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f1640:
    // 0x1f1640: 0xffb70698  sd          $s7, 0x698($sp)
    ctx->pc = 0x1f1640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1688), GPR_U64(ctx, 23));
label_1f1644:
    // 0x1f1644: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x1f1644u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
label_1f1648:
    // 0x1f1648: 0xe7b406a8  swc1        $f20, 0x6A8($sp)
    ctx->pc = 0x1f1648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_1f164c:
    // 0x1f164c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f164cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f1650:
    // 0x1f1650: 0xffb30678  sd          $s3, 0x678($sp)
    ctx->pc = 0x1f1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1656), GPR_U64(ctx, 19));
label_1f1654:
    // 0x1f1654: 0x26f023b0  addiu       $s0, $s7, 0x23B0
    ctx->pc = 0x1f1654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 9136));
label_1f1658:
    // 0x1f1658: 0xffbf06a0  sd          $ra, 0x6A0($sp)
    ctx->pc = 0x1f1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 31));
label_1f165c:
    // 0x1f165c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f1660:
    // 0x1f1660: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1664:
    // 0x1f1664: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f1664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1f1668:
    // 0x1f1668: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1f1668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_1f166c:
    // 0x1f166c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1670:
    // 0x1f1670: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1f1670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1f1674:
    // 0x1f1674: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1f1674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1f1678:
    // 0x1f1678: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1f1678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f167c:
    // 0x1f167c: 0xc097f3a  jal         func_25FCE8
label_1f1680:
    if (ctx->pc == 0x1F1680u) {
        ctx->pc = 0x1F1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F167Cu;
        // 0x1f1680: 0xb7a20000  sdr         $v0, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1684u;
        goto label_1f1684;
    }
    ctx->pc = 0x1F167Cu;
    SET_GPR_U32(ctx, 31, 0x1F1684u);
    ctx->pc = 0x1F1680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F167Cu;
    // 0x1f1680: 0xb7a20000  sdr         $v0, 0x0($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x1F167Cu, 0x1F1684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1684u;
label_1f1684:
    // 0x1f1684: 0x27b60190  addiu       $s6, $sp, 0x190
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1f1688:
    // 0x1f1688: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f168c:
    // 0x1f168c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f1690:
    // 0x1f1690: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1f1690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f1694:
    // 0x1f1694: 0xc097f3a  jal         func_25FCE8
label_1f1698:
    if (ctx->pc == 0x1F1698u) {
        ctx->pc = 0x1F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1694u;
        // 0x1f1698: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F169Cu;
        goto label_1f169c;
    }
    ctx->pc = 0x1F1694u;
    SET_GPR_U32(ctx, 31, 0x1F169Cu);
    ctx->pc = 0x1F1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1694u;
    // 0x1f1698: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x1F1694u, 0x1F169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F169Cu;
label_1f169c:
    // 0x1f169c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f16a0:
    // 0x1f16a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f16a4:
    // 0x1f16a4: 0xc0915b6  jal         func_2456D8
label_1f16a8:
    if (ctx->pc == 0x1F16A8u) {
        ctx->pc = 0x1F16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16A4u;
        // 0x1f16a8: 0xc4540014  lwc1        $f20, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16ACu;
        goto label_1f16ac;
    }
    ctx->pc = 0x1F16A4u;
    SET_GPR_U32(ctx, 31, 0x1F16ACu);
    ctx->pc = 0x1F16A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16A4u;
    // 0x1f16a8: 0xc4540014  lwc1        $f20, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2456D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2456D8u, 0x1F16A4u, 0x1F16ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16ACu;
label_1f16ac:
    // 0x1f16ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f16acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f16b0:
    // 0x1f16b0: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1f16b4:
    // 0x1f16b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1f16b8:
    if (ctx->pc == 0x1F16B8u) {
        ctx->pc = 0x1F16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16B4u;
        // 0x1f16b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16BCu;
        goto label_1f16bc;
    }
    ctx->pc = 0x1F16B4u;
    {
        const bool branch_taken_0x1f16b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16B4u;
        // 0x1f16b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16b4) {
            ctx->pc = 0x1F16C8u;
            goto label_1f16c8;
        }
    }
    ctx->pc = 0x1F16BCu;
label_1f16bc:
    // 0x1f16bc: 0x260200b8  addiu       $v0, $s0, 0xB8
    ctx->pc = 0x1f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_1f16c0:
    // 0x1f16c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f16c4:
    if (ctx->pc == 0x1F16C4u) {
        ctx->pc = 0x1F16C8u;
        goto label_1f16c8;
    }
    ctx->pc = 0x1F16C0u;
    {
        const bool branch_taken_0x1f16c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f16c0) {
            ctx->pc = 0x1F16CCu;
            goto label_1f16cc;
        }
    }
    ctx->pc = 0x1F16C8u;
label_1f16c8:
    // 0x1f16c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f16c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f16cc:
    // 0x1f16cc: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_1f16d0:
    if (ctx->pc == 0x1F16D0u) {
        ctx->pc = 0x1F16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16CCu;
        // 0x1f16d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16D4u;
        goto label_1f16d4;
    }
    ctx->pc = 0x1F16CCu;
    {
        const bool branch_taken_0x1f16cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16CCu;
        // 0x1f16d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16cc) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F16D4u;
label_1f16d4:
    // 0x1f16d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f16d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f16d8:
    // 0x1f16d8: 0xc098790  jal         func_261E40
label_1f16dc:
    if (ctx->pc == 0x1F16DCu) {
        ctx->pc = 0x1F16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16D8u;
        // 0x1f16dc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16E0u;
        goto label_1f16e0;
    }
    ctx->pc = 0x1F16D8u;
    SET_GPR_U32(ctx, 31, 0x1F16E0u);
    ctx->pc = 0x1F16DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16D8u;
    // 0x1f16dc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261E40u, 0x1F16D8u, 0x1F16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E0u;
label_1f16e0:
    // 0x1f16e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f16e4:
    // 0x1f16e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1f16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f16e8:
    // 0x1f16e8: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
label_1f16ec:
    if (ctx->pc == 0x1F16ECu) {
        ctx->pc = 0x1F16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16E8u;
        // 0x1f16ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16F0u;
        goto label_1f16f0;
    }
    ctx->pc = 0x1F16E8u;
    {
        const bool branch_taken_0x1f16e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16E8u;
        // 0x1f16ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16e8) {
            ctx->pc = 0x1F1828u;
            goto label_1f1828;
        }
    }
    ctx->pc = 0x1F16F0u;
label_1f16f0:
    // 0x1f16f0: 0xc7808010  lwc1        $f0, -0x7FF0($gp)
    ctx->pc = 0x1f16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f16f4:
    // 0x1f16f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f16f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f16f8:
    // 0x1f16f8: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
label_1f16fc:
    if (ctx->pc == 0x1F16FCu) {
        ctx->pc = 0x1F1700u;
        goto label_1f1700;
    }
    ctx->pc = 0x1F16F8u;
    {
        const bool branch_taken_0x1f16f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f16f8) {
            ctx->pc = 0x1F1828u;
            goto label_1f1828;
        }
    }
    ctx->pc = 0x1F1700u;
label_1f1700:
    // 0x1f1700: 0xc097fee  jal         func_25FFB8
label_1f1704:
    if (ctx->pc == 0x1F1704u) {
        ctx->pc = 0x1F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1700u;
        // 0x1f1704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1708u;
        goto label_1f1708;
    }
    ctx->pc = 0x1F1700u;
    SET_GPR_U32(ctx, 31, 0x1F1708u);
    ctx->pc = 0x1F1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1700u;
    // 0x1f1704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FFB8u, 0x1F1700u, 0x1F1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1708u;
label_1f1708:
    // 0x1f1708: 0x86260022  lh          $a2, 0x22($s1)
    ctx->pc = 0x1f1708u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_1f170c:
    // 0x1f170c: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
label_1f1710:
    if (ctx->pc == 0x1F1710u) {
        ctx->pc = 0x1F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F170Cu;
        // 0x1f1710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1714u;
        goto label_1f1714;
    }
    ctx->pc = 0x1F170Cu;
    {
        const bool branch_taken_0x1f170c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F170Cu;
        // 0x1f1710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f170c) {
            ctx->pc = 0x1F1740u;
            goto label_1f1740;
        }
    }
    ctx->pc = 0x1F1714u;
label_1f1714:
    // 0x1f1714: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_1f1718:
    // 0x1f1718: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1f1718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f171c:
    // 0x1f171c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f1720:
    // 0x1f1720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1724:
    // 0x1f1724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f1724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1728:
    // 0x1f1728: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x1f1728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1f172c:
    // 0x1f172c: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x1f172cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1f1730:
    // 0x1f1730: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x1f1730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f1734:
    // 0x1f1734: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x1f1734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f1738:
    // 0x1f1738: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f173c:
    if (ctx->pc == 0x1F173Cu) {
        ctx->pc = 0x1F173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1738u;
        // 0x1f173c: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1740u;
        goto label_1f1740;
    }
    ctx->pc = 0x1F1738u;
    {
        const bool branch_taken_0x1f1738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1738u;
        // 0x1f173c: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1738) {
            ctx->pc = 0x1F1744u;
            goto label_1f1744;
        }
    }
    ctx->pc = 0x1F1740u;
label_1f1740:
    // 0x1f1740: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x1f1740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1f1744:
    // 0x1f1744: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_1f1748:
    if (ctx->pc == 0x1F1748u) {
        ctx->pc = 0x1F1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1744u;
        // 0x1f1748: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F174Cu;
        goto label_1f174c;
    }
    ctx->pc = 0x1F1744u;
    {
        const bool branch_taken_0x1f1744 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1744u;
        // 0x1f1748: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1744) {
            ctx->pc = 0x1F1758u;
            goto label_1f1758;
        }
    }
    ctx->pc = 0x1F174Cu;
label_1f174c:
    // 0x1f174c: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x1f174cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1750:
    // 0x1f1750: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f1754:
    if (ctx->pc == 0x1F1754u) {
        ctx->pc = 0x1F1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1750u;
        // 0x1f1754: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1758u;
        goto label_1f1758;
    }
    ctx->pc = 0x1F1750u;
    {
        const bool branch_taken_0x1f1750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1750u;
        // 0x1f1754: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1750) {
            ctx->pc = 0x1F175Cu;
            goto label_1f175c;
        }
    }
    ctx->pc = 0x1F1758u;
label_1f1758:
    // 0x1f1758: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f1758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f175c:
    // 0x1f175c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f175cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f1760:
    // 0x1f1760: 0xe0f809  jalr        $a3
label_1f1764:
    if (ctx->pc == 0x1F1764u) {
        ctx->pc = 0x1F1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1760u;
        // 0x1f1764: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1768u;
        goto label_1f1768;
    }
    ctx->pc = 0x1F1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1F1768u);
        ctx->pc = 0x1F1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1760u;
        // 0x1f1764: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1760u, 0x1F1768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1768u;
label_1f1768:
    // 0x1f1768: 0xc097fee  jal         func_25FFB8
label_1f176c:
    if (ctx->pc == 0x1F176Cu) {
        ctx->pc = 0x1F176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1768u;
        // 0x1f176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1770u;
        goto label_1f1770;
    }
    ctx->pc = 0x1F1768u;
    SET_GPR_U32(ctx, 31, 0x1F1770u);
    ctx->pc = 0x1F176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1768u;
    // 0x1f176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FFB8u, 0x1F1768u, 0x1F1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1770u;
label_1f1770:
    // 0x1f1770: 0x86260022  lh          $a2, 0x22($s1)
    ctx->pc = 0x1f1770u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_1f1774:
    // 0x1f1774: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
label_1f1778:
    if (ctx->pc == 0x1F1778u) {
        ctx->pc = 0x1F1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1774u;
        // 0x1f1778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F177Cu;
        goto label_1f177c;
    }
    ctx->pc = 0x1F1774u;
    {
        const bool branch_taken_0x1f1774 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1774u;
        // 0x1f1778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1774) {
            ctx->pc = 0x1F17A8u;
            goto label_1f17a8;
        }
    }
    ctx->pc = 0x1F177Cu;
label_1f177c:
    // 0x1f177c: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_1f1780:
    // 0x1f1780: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f1784:
    // 0x1f1784: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f1788:
    // 0x1f1788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f178c:
    // 0x1f178c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1790:
    // 0x1f1790: 0x6869ffff  ldl         $t1, -0x1($v1)
    ctx->pc = 0x1f1790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1f1794:
    // 0x1f1794: 0x6c69fff8  ldr         $t1, -0x8($v1)
    ctx->pc = 0x1f1794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1f1798:
    // 0x1f1798: 0xb3a901c7  sdl         $t1, 0x1C7($sp)
    ctx->pc = 0x1f1798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f179c:
    // 0x1f179c: 0xb7a901c0  sdr         $t1, 0x1C0($sp)
    ctx->pc = 0x1f179cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f17a0:
    // 0x1f17a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f17a4:
    if (ctx->pc == 0x1F17A4u) {
        ctx->pc = 0x1F17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17A0u;
        // 0x1f17a4: 0x8fa701c4  lw          $a3, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17A8u;
        goto label_1f17a8;
    }
    ctx->pc = 0x1F17A0u;
    {
        const bool branch_taken_0x1f17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17A0u;
        // 0x1f17a4: 0x8fa701c4  lw          $a3, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17a0) {
            ctx->pc = 0x1F17ACu;
            goto label_1f17ac;
        }
    }
    ctx->pc = 0x1F17A8u;
label_1f17a8:
    // 0x1f17a8: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1f17ac:
    // 0x1f17ac: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_1f17b0:
    if (ctx->pc == 0x1F17B0u) {
        ctx->pc = 0x1F17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17ACu;
        // 0x1f17b0: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17B4u;
        goto label_1f17b4;
    }
    ctx->pc = 0x1F17ACu;
    {
        const bool branch_taken_0x1f17ac = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17ACu;
        // 0x1f17b0: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17ac) {
            ctx->pc = 0x1F17C0u;
            goto label_1f17c0;
        }
    }
    ctx->pc = 0x1F17B4u;
label_1f17b4:
    // 0x1f17b4: 0x87a201c0  lh          $v0, 0x1C0($sp)
    ctx->pc = 0x1f17b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 448)));
label_1f17b8:
    // 0x1f17b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f17bc:
    if (ctx->pc == 0x1F17BCu) {
        ctx->pc = 0x1F17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B8u;
        // 0x1f17bc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17C0u;
        goto label_1f17c0;
    }
    ctx->pc = 0x1F17B8u;
    {
        const bool branch_taken_0x1f17b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B8u;
        // 0x1f17bc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17b8) {
            ctx->pc = 0x1F17C4u;
            goto label_1f17c4;
        }
    }
    ctx->pc = 0x1F17C0u;
label_1f17c0:
    // 0x1f17c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f17c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f17c4:
    // 0x1f17c4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1f17c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f17c8:
    // 0x1f17c8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f17c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f17cc:
    // 0x1f17cc: 0xe0f809  jalr        $a3
label_1f17d0:
    if (ctx->pc == 0x1F17D0u) {
        ctx->pc = 0x1F17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17CCu;
        // 0x1f17d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17D4u;
        goto label_1f17d4;
    }
    ctx->pc = 0x1F17CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1F17D4u);
        ctx->pc = 0x1F17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17CCu;
        // 0x1f17d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F17CCu, 0x1F17D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F17D4u;
label_1f17d4:
    // 0x1f17d4: 0x3c133f80  lui         $s3, 0x3F80
    ctx->pc = 0x1f17d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16256 << 16));
label_1f17d8:
    // 0x1f17d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1f17dc:
    // 0x1f17dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f17dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f17e0:
    // 0x1f17e0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1f17e4:
    // 0x1f17e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f17e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f17e8:
    // 0x1f17e8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1f17e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f17ec:
    // 0x1f17ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f17ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f17f0:
    // 0x1f17f0: 0xc09887c  jal         func_2621F0
label_1f17f4:
    if (ctx->pc == 0x1F17F4u) {
        ctx->pc = 0x1F17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17F0u;
        // 0x1f17f4: 0x26100720  addiu       $s0, $s0, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17F8u;
        goto label_1f17f8;
    }
    ctx->pc = 0x1F17F0u;
    SET_GPR_U32(ctx, 31, 0x1F17F8u);
    ctx->pc = 0x1F17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F17F0u;
    // 0x1f17f4: 0x26100720  addiu       $s0, $s0, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2621F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2621F0u, 0x1F17F0u, 0x1F17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17F8u;
label_1f17f8:
    // 0x1f17f8: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1f17f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
label_1f17fc:
    // 0x1f17fc: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1f17fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
label_1f1800:
    // 0x1f1800: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x1f1800u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
label_1f1804:
    // 0x1f1804: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1f1804u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1f1808:
    // 0x1f1808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f1808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f180c:
    // 0x1f180c: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x1f180cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
label_1f1810:
    // 0x1f1810: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f1810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1814:
    // 0x1f1814: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1f1814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1f1818:
    // 0x1f1818: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1f181c:
    if (ctx->pc == 0x1F181Cu) {
        ctx->pc = 0x1F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1818u;
        // 0x1f181c: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1820u;
        goto label_1f1820;
    }
    ctx->pc = 0x1F1818u;
    {
        const bool branch_taken_0x1f1818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1818u;
        // 0x1f181c: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1818) {
            ctx->pc = 0x1F17D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f17d8;
        }
    }
    ctx->pc = 0x1F1820u;
label_1f1820:
    // 0x1f1820: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f1824:
    if (ctx->pc == 0x1F1824u) {
        ctx->pc = 0x1F1828u;
        goto label_1f1828;
    }
    ctx->pc = 0x1F1820u;
    {
        const bool branch_taken_0x1f1820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1820) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F1828u;
label_1f1828:
    // 0x1f1828: 0xc09884e  jal         func_262138
label_1f182c:
    if (ctx->pc == 0x1F182Cu) {
        ctx->pc = 0x1F182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1828u;
        // 0x1f182c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1830u;
        goto label_1f1830;
    }
    ctx->pc = 0x1F1828u;
    SET_GPR_U32(ctx, 31, 0x1F1830u);
    ctx->pc = 0x1F182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1828u;
    // 0x1f182c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262138u, 0x1F1828u, 0x1F1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1830u;
label_1f1830:
    // 0x1f1830: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_1f1834:
    if (ctx->pc == 0x1F1834u) {
        ctx->pc = 0x1F1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1830u;
        // 0x1f1834: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1838u;
        goto label_1f1838;
    }
    ctx->pc = 0x1F1830u;
    {
        const bool branch_taken_0x1f1830 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1830u;
        // 0x1f1834: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1830) {
            ctx->pc = 0x1F1844u;
            goto label_1f1844;
        }
    }
    ctx->pc = 0x1F1838u;
label_1f1838:
    // 0x1f1838: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f1838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1f183c:
    // 0x1f183c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f1840:
    if (ctx->pc == 0x1F1840u) {
        ctx->pc = 0x1F1844u;
        goto label_1f1844;
    }
    ctx->pc = 0x1F183Cu;
    {
        const bool branch_taken_0x1f183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f183c) {
            ctx->pc = 0x1F184Cu;
            goto label_1f184c;
        }
    }
    ctx->pc = 0x1F1844u;
label_1f1844:
    // 0x1f1844: 0xc0af7a8  jal         func_2BDEA0
label_1f1848:
    if (ctx->pc == 0x1F1848u) {
        ctx->pc = 0x1F1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1844u;
        // 0x1f1848: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F184Cu;
        goto label_1f184c;
    }
    ctx->pc = 0x1F1844u;
    SET_GPR_U32(ctx, 31, 0x1F184Cu);
    ctx->pc = 0x1F1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1844u;
    // 0x1f1848: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDEA0u, 0x1F1844u, 0x1F184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F184Cu;
label_1f184c:
    // 0x1f184c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_1f1850:
    if (ctx->pc == 0x1F1850u) {
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F184Cu;
        // 0x1f1850: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1854u;
        goto label_1f1854;
    }
    ctx->pc = 0x1F184Cu;
    {
        const bool branch_taken_0x1f184c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F184Cu;
        // 0x1f1850: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f184c) {
            ctx->pc = 0x1F1860u;
            goto label_1f1860;
        }
    }
    ctx->pc = 0x1F1854u;
label_1f1854:
    // 0x1f1854: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1f1858:
    // 0x1f1858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f185c:
    if (ctx->pc == 0x1F185Cu) {
        ctx->pc = 0x1F185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1858u;
        // 0x1f185c: 0x26e323b0  addiu       $v1, $s7, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 9136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1860u;
        goto label_1f1860;
    }
    ctx->pc = 0x1F1858u;
    {
        const bool branch_taken_0x1f1858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1858u;
        // 0x1f185c: 0x26e323b0  addiu       $v1, $s7, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1858) {
            ctx->pc = 0x1F186Cu;
            goto label_1f186c;
        }
    }
    ctx->pc = 0x1F1860u;
label_1f1860:
    // 0x1f1860: 0xc0af7a8  jal         func_2BDEA0
label_1f1864:
    if (ctx->pc == 0x1F1864u) {
        ctx->pc = 0x1F1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1860u;
        // 0x1f1864: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1868u;
        goto label_1f1868;
    }
    ctx->pc = 0x1F1860u;
    SET_GPR_U32(ctx, 31, 0x1F1868u);
    ctx->pc = 0x1F1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1860u;
    // 0x1f1864: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDEA0u, 0x1F1860u, 0x1F1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1868u;
label_1f1868:
    // 0x1f1868: 0x26e323b0  addiu       $v1, $s7, 0x23B0
    ctx->pc = 0x1f1868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 9136));
label_1f186c:
    // 0x1f186c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f1870:
    // 0x1f1870: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1f1874:
    // 0x1f1874: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_1f1878:
    if (ctx->pc == 0x1F1878u) {
        ctx->pc = 0x1F1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1874u;
        // 0x1f1878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F187Cu;
        goto label_1f187c;
    }
    ctx->pc = 0x1F1874u;
    {
        const bool branch_taken_0x1f1874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1874u;
        // 0x1f1878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1874) {
            ctx->pc = 0x1F1888u;
            goto label_1f1888;
        }
    }
    ctx->pc = 0x1F187Cu;
label_1f187c:
    // 0x1f187c: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_1f1880:
    // 0x1f1880: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_1f1884:
    if (ctx->pc == 0x1F1884u) {
        ctx->pc = 0x1F1888u;
        goto label_1f1888;
    }
    ctx->pc = 0x1F1880u;
    {
        const bool branch_taken_0x1f1880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1880) {
            ctx->pc = 0x1F188Cu;
            goto label_1f188c;
        }
    }
    ctx->pc = 0x1F1888u;
label_1f1888:
    // 0x1f1888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f188c:
    // 0x1f188c: 0x50a0002e  beql        $a1, $zero, . + 4 + (0x2E << 2)
label_1f1890:
    if (ctx->pc == 0x1F1890u) {
        ctx->pc = 0x1F1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F188Cu;
        // 0x1f1890: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1894u;
        goto label_1f1894;
    }
    ctx->pc = 0x1F188Cu;
    {
        const bool branch_taken_0x1f188c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f188c) {
            ctx->pc = 0x1F1890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F188Cu;
            // 0x1f1890: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1948u;
            goto label_1f1948;
        }
    }
    ctx->pc = 0x1F1894u;
label_1f1894:
    // 0x1f1894: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f1894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f1898:
    // 0x1f1898: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f189c:
    // 0x1f189c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_1f18a0:
    if (ctx->pc == 0x1F18A0u) {
        ctx->pc = 0x1F18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F189Cu;
        // 0x1f18a0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18A4u;
        goto label_1f18a4;
    }
    ctx->pc = 0x1F189Cu;
    {
        const bool branch_taken_0x1f189c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F189Cu;
        // 0x1f18a0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f189c) {
            ctx->pc = 0x1F18E8u;
            goto label_1f18e8;
        }
    }
    ctx->pc = 0x1F18A4u;
label_1f18a4:
    // 0x1f18a4: 0xc7808014  lwc1        $f0, -0x7FEC($gp)
    ctx->pc = 0x1f18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f18a8:
    // 0x1f18a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f18a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f18ac:
    // 0x1f18ac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1f18b0:
    if (ctx->pc == 0x1F18B0u) {
        ctx->pc = 0x1F18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18ACu;
        // 0x1f18b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18B4u;
        goto label_1f18b4;
    }
    ctx->pc = 0x1F18ACu;
    {
        const bool branch_taken_0x1f18ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18ACu;
        // 0x1f18b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18ac) {
            ctx->pc = 0x1F18E8u;
            goto label_1f18e8;
        }
    }
    ctx->pc = 0x1F18B4u;
label_1f18b4:
    // 0x1f18b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f18b8:
    // 0x1f18b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f18bc:
    // 0x1f18bc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1f18c0:
    // 0x1f18c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f18c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f18c4:
    // 0x1f18c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f18c8:
    // 0x1f18c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f18c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f18cc:
    // 0x1f18cc: 0xc098886  jal         func_262218
label_1f18d0:
    if (ctx->pc == 0x1F18D0u) {
        ctx->pc = 0x1F18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18CCu;
        // 0x1f18d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18D4u;
        goto label_1f18d4;
    }
    ctx->pc = 0x1F18CCu;
    SET_GPR_U32(ctx, 31, 0x1F18D4u);
    ctx->pc = 0x1F18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18CCu;
    // 0x1f18d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x262218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262218u, 0x1F18CCu, 0x1F18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18D4u;
label_1f18d4:
    // 0x1f18d4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f18d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f18d8:
    // 0x1f18d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1f18dc:
    if (ctx->pc == 0x1F18DCu) {
        ctx->pc = 0x1F18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18D8u;
        // 0x1f18dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18E0u;
        goto label_1f18e0;
    }
    ctx->pc = 0x1F18D8u;
    {
        const bool branch_taken_0x1f18d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18D8u;
        // 0x1f18dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18d8) {
            ctx->pc = 0x1F18B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f18b8;
        }
    }
    ctx->pc = 0x1F18E0u;
label_1f18e0:
    // 0x1f18e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f18e4:
    if (ctx->pc == 0x1F18E4u) {
        ctx->pc = 0x1F18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18E0u;
        // 0x1f18e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18E8u;
        goto label_1f18e8;
    }
    ctx->pc = 0x1F18E0u;
    {
        const bool branch_taken_0x1f18e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18E0u;
        // 0x1f18e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18e0) {
            ctx->pc = 0x1F18F4u;
            goto label_1f18f4;
        }
    }
    ctx->pc = 0x1F18E8u;
label_1f18e8:
    // 0x1f18e8: 0xc09886a  jal         func_2621A8
label_1f18ec:
    if (ctx->pc == 0x1F18ECu) {
        ctx->pc = 0x1F18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18E8u;
        // 0x1f18ec: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18F0u;
        goto label_1f18f0;
    }
    ctx->pc = 0x1F18E8u;
    SET_GPR_U32(ctx, 31, 0x1F18F0u);
    ctx->pc = 0x1F18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18E8u;
    // 0x1f18ec: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2621A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2621A8u, 0x1F18E8u, 0x1F18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18F0u;
label_1f18f0:
    // 0x1f18f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f18f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f18f4:
    // 0x1f18f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f18f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f18f8:
    // 0x1f18f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f18f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f18fc:
    // 0x1f18fc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f18fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f1900:
    // 0x1f1900: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f1904:
    // 0x1f1904: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f1904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1f1908:
    // 0x1f1908: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f190c:
    // 0x1f190c: 0x84830180  lh          $v1, 0x180($a0)
    ctx->pc = 0x1f190cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 384)));
label_1f1910:
    // 0x1f1910: 0x10680009  beq         $v1, $t0, . + 4 + (0x9 << 2)
label_1f1914:
    if (ctx->pc == 0x1F1914u) {
        ctx->pc = 0x1F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1910u;
        // 0x1f1914: 0x28a60002  slti        $a2, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1918u;
        goto label_1f1918;
    }
    ctx->pc = 0x1F1910u;
    {
        const bool branch_taken_0x1f1910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1910u;
        // 0x1f1914: 0x28a60002  slti        $a2, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1910) {
            ctx->pc = 0x1F1938u;
            goto label_1f1938;
        }
    }
    ctx->pc = 0x1F1918u;
label_1f1918:
    // 0x1f1918: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1f191c:
    if (ctx->pc == 0x1F191Cu) {
        ctx->pc = 0x1F191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1918u;
        // 0x1f191c: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1920u;
        goto label_1f1920;
    }
    ctx->pc = 0x1F1918u;
    {
        const bool branch_taken_0x1f1918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1918u;
        // 0x1f191c: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1918) {
            ctx->pc = 0x1F1938u;
            goto label_1f1938;
        }
    }
    ctx->pc = 0x1F1920u;
label_1f1920:
    // 0x1f1920: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1f1920u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1f1924:
    // 0x1f1924: 0x1810  mfhi        $v1
    ctx->pc = 0x1f1924u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f1928:
    // 0x1f1928: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1f192c:
    if (ctx->pc == 0x1F192Cu) {
        ctx->pc = 0x1F192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1928u;
        // 0x1f192c: 0xa08701bb  sb          $a3, 0x1BB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 443), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1930u;
        goto label_1f1930;
    }
    ctx->pc = 0x1F1928u;
    {
        const bool branch_taken_0x1f1928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1928) {
            ctx->pc = 0x1F192Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1928u;
            // 0x1f192c: 0xa08701bb  sb          $a3, 0x1BB($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 443), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F193Cu;
            goto label_1f193c;
        }
    }
    ctx->pc = 0x1F1930u;
label_1f1930:
    // 0x1f1930: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f1934:
    if (ctx->pc == 0x1F1934u) {
        ctx->pc = 0x1F1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1930u;
        // 0x1f1934: 0xa08001bb  sb          $zero, 0x1BB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1938u;
        goto label_1f1938;
    }
    ctx->pc = 0x1F1930u;
    {
        const bool branch_taken_0x1f1930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1930u;
        // 0x1f1934: 0xa08001bb  sb          $zero, 0x1BB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1930) {
            ctx->pc = 0x1F193Cu;
            goto label_1f193c;
        }
    }
    ctx->pc = 0x1F1938u;
label_1f1938:
    // 0x1f1938: 0xa08701bb  sb          $a3, 0x1BB($a0)
    ctx->pc = 0x1f1938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 443), (uint8_t)GPR_U32(ctx, 7));
label_1f193c:
    // 0x1f193c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_1f1940:
    if (ctx->pc == 0x1F1940u) {
        ctx->pc = 0x1F1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F193Cu;
        // 0x1f1940: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1944u;
        goto label_1f1944;
    }
    ctx->pc = 0x1F193Cu;
    {
        const bool branch_taken_0x1f193c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F193Cu;
        // 0x1f1940: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f193c) {
            ctx->pc = 0x1F1900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1900;
        }
    }
    ctx->pc = 0x1F1944u;
label_1f1944:
    // 0x1f1944: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1948:
    // 0x1f1948: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x1f1948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f194c:
    // 0x1f194c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f1950:
    // 0x1f1950: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f1954:
    // 0x1f1954: 0x0  nop
    ctx->pc = 0x1f1954u;
    // NOP
label_1f1958:
    // 0x1f1958: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f1958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1f195c:
    // 0x1f195c: 0x1680000c  bnez        $s4, . + 4 + (0xC << 2)
label_1f1960:
    if (ctx->pc == 0x1F1960u) {
        ctx->pc = 0x1F1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F195Cu;
        // 0x1f1960: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1964u;
        goto label_1f1964;
    }
    ctx->pc = 0x1F195Cu;
    {
        const bool branch_taken_0x1f195c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F195Cu;
        // 0x1f1960: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f195c) {
            ctx->pc = 0x1F1990u;
            goto label_1f1990;
        }
    }
    ctx->pc = 0x1F1964u;
label_1f1964:
    // 0x1f1964: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x1f1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
label_1f1968:
    // 0x1f1968: 0x2331804  sllv        $v1, $s3, $s1
    ctx->pc = 0x1f1968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 17) & 0x1F));
label_1f196c:
    // 0x1f196c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f1970:
    // 0x1f1970: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f1974:
    if (ctx->pc == 0x1F1974u) {
        ctx->pc = 0x1F1978u;
        goto label_1f1978;
    }
    ctx->pc = 0x1F1970u;
    {
        const bool branch_taken_0x1f1970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1970) {
            ctx->pc = 0x1F1990u;
            goto label_1f1990;
        }
    }
    ctx->pc = 0x1F1978u;
label_1f1978:
    // 0x1f1978: 0x920201bb  lbu         $v0, 0x1BB($s0)
    ctx->pc = 0x1f1978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 443)));
label_1f197c:
    // 0x1f197c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1f1980:
    if (ctx->pc == 0x1F1980u) {
        ctx->pc = 0x1F1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F197Cu;
        // 0x1f1980: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1984u;
        goto label_1f1984;
    }
    ctx->pc = 0x1F197Cu;
    {
        const bool branch_taken_0x1f197c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f197c) {
            ctx->pc = 0x1F1980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F197Cu;
            // 0x1f1980: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19A4u;
            goto label_1f19a4;
        }
    }
    ctx->pc = 0x1F1984u;
label_1f1984:
    // 0x1f1984: 0x86020180  lh          $v0, 0x180($s0)
    ctx->pc = 0x1f1984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 384)));
label_1f1988:
    // 0x1f1988: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
label_1f198c:
    if (ctx->pc == 0x1F198Cu) {
        ctx->pc = 0x1F198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1988u;
        // 0x1f198c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1990u;
        goto label_1f1990;
    }
    ctx->pc = 0x1F1988u;
    {
        const bool branch_taken_0x1f1988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1f1988) {
            ctx->pc = 0x1F198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1988u;
            // 0x1f198c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19A4u;
            goto label_1f19a4;
        }
    }
    ctx->pc = 0x1F1990u;
label_1f1990:
    // 0x1f1990: 0xc0af1d4  jal         func_2BC750
label_1f1994:
    if (ctx->pc == 0x1F1994u) {
        ctx->pc = 0x1F1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1990u;
        // 0x1f1994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1998u;
        goto label_1f1998;
    }
    ctx->pc = 0x1F1990u;
    SET_GPR_U32(ctx, 31, 0x1F1998u);
    ctx->pc = 0x1F1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1990u;
    // 0x1f1994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC750u, 0x1F1990u, 0x1F1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1998u;
label_1f1998:
    // 0x1f1998: 0xc0af050  jal         func_2BC140
label_1f199c:
    if (ctx->pc == 0x1F199Cu) {
        ctx->pc = 0x1F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1998u;
        // 0x1f199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19A0u;
        goto label_1f19a0;
    }
    ctx->pc = 0x1F1998u;
    SET_GPR_U32(ctx, 31, 0x1F19A0u);
    ctx->pc = 0x1F199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1998u;
    // 0x1f199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x1F1998u, 0x1F19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19A0u;
label_1f19a0:
    // 0x1f19a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f19a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f19a4:
    // 0x1f19a4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f19a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f19a8:
    // 0x1f19a8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1f19ac:
    if (ctx->pc == 0x1F19ACu) {
        ctx->pc = 0x1F19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19A8u;
        // 0x1f19ac: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19B0u;
        goto label_1f19b0;
    }
    ctx->pc = 0x1F19A8u;
    {
        const bool branch_taken_0x1f19a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19A8u;
        // 0x1f19ac: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19a8) {
            ctx->pc = 0x1F1958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1958;
        }
    }
    ctx->pc = 0x1F19B0u;
label_1f19b0:
    // 0x1f19b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f19b4:
    // 0x1f19b4: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x1f19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936748)));
label_1f19b8:
    // 0x1f19b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f19bc:
    if (ctx->pc == 0x1F19BCu) {
        ctx->pc = 0x1F19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B8u;
        // 0x1f19bc: 0x8f82972c  lw          $v0, -0x68D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19C0u;
        goto label_1f19c0;
    }
    ctx->pc = 0x1F19B8u;
    {
        const bool branch_taken_0x1f19b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B8u;
        // 0x1f19bc: 0x8f82972c  lw          $v0, -0x68D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19b8) {
            ctx->pc = 0x1F19C8u;
            goto label_1f19c8;
        }
    }
    ctx->pc = 0x1F19C0u;
label_1f19c0:
    // 0x1f19c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f19c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f19c4:
    // 0x1f19c4: 0xaf82972c  sw          $v0, -0x68D4($gp)
    ctx->pc = 0x1f19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940460), GPR_U32(ctx, 2));
label_1f19c8:
    // 0x1f19c8: 0xdfb00660  ld          $s0, 0x660($sp)
    ctx->pc = 0x1f19c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_1f19cc:
    // 0x1f19cc: 0xdfb10668  ld          $s1, 0x668($sp)
    ctx->pc = 0x1f19ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1640)));
label_1f19d0:
    // 0x1f19d0: 0xdfb20670  ld          $s2, 0x670($sp)
    ctx->pc = 0x1f19d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_1f19d4:
    // 0x1f19d4: 0xdfb30678  ld          $s3, 0x678($sp)
    ctx->pc = 0x1f19d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1656)));
label_1f19d8:
    // 0x1f19d8: 0xdfb40680  ld          $s4, 0x680($sp)
    ctx->pc = 0x1f19d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_1f19dc:
    // 0x1f19dc: 0xdfb50688  ld          $s5, 0x688($sp)
    ctx->pc = 0x1f19dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1672)));
label_1f19e0:
    // 0x1f19e0: 0xdfb60690  ld          $s6, 0x690($sp)
    ctx->pc = 0x1f19e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_1f19e4:
    // 0x1f19e4: 0xdfb70698  ld          $s7, 0x698($sp)
    ctx->pc = 0x1f19e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1688)));
label_1f19e8:
    // 0x1f19e8: 0xdfbf06a0  ld          $ra, 0x6A0($sp)
    ctx->pc = 0x1f19e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1696)));
label_1f19ec:
    // 0x1f19ec: 0xc7b406a8  lwc1        $f20, 0x6A8($sp)
    ctx->pc = 0x1f19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f19f0:
    // 0x1f19f0: 0x3e00008  jr          $ra
label_1f19f4:
    if (ctx->pc == 0x1F19F4u) {
        ctx->pc = 0x1F19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19F0u;
        // 0x1f19f4: 0x27bd06b0  addiu       $sp, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19F8u;
        goto label_fallthrough_0x1f19f0;
    }
    ctx->pc = 0x1F19F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19F0u;
        // 0x1f19f4: 0x27bd06b0  addiu       $sp, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F19F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f19f0:
    ctx->pc = 0x1F19F8u;
}
