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

// Function: sub_004E1778
// Address: 0x4e1778 - 0x4e1cf8
void sub_004E1778_0x4e1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1778_0x4e1778");
#endif

    switch (ctx->pc) {
        case 0x4e17bcu: goto label_4e17bc;
        case 0x4e17c4u: goto label_4e17c4;
        case 0x4e1948u: goto label_4e1948;
        case 0x4e1950u: goto label_4e1950;
        case 0x4e19e4u: goto label_4e19e4;
        case 0x4e19ecu: goto label_4e19ec;
        case 0x4e19f4u: goto label_4e19f4;
        case 0x4e1b8cu: goto label_4e1b8c;
        case 0x4e1bd8u: goto label_4e1bd8;
        case 0x4e1bf8u: goto label_4e1bf8;
        case 0x4e1c00u: goto label_4e1c00;
        case 0x4e1c08u: goto label_4e1c08;
        case 0x4e1c3cu: goto label_4e1c3c;
        case 0x4e1c44u: goto label_4e1c44;
        case 0x4e1c50u: goto label_4e1c50;
        case 0x4e1c90u: goto label_4e1c90;
        default: break;
    }

    ctx->pc = 0x4e1778u;

    // 0x4e1778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e177c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e1780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e1780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e1788: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4e1788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4e178c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e1790: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e1794: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e1798: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e1798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e179c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e17a0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e17a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e17a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e17a8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e17a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e17ac: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4E17ACu;
    {
        const bool branch_taken_0x4e17ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17ACu;
        // 0x4e17b0: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e17ac) {
            ctx->pc = 0x4E1880u;
            goto label_4e1880;
        }
    }
    ctx->pc = 0x4E17B4u;
    // 0x4e17b4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E17B4u;
    SET_GPR_U32(ctx, 31, 0x4E17BCu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E17B4u, 0x4E17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E17BCu;
label_4e17bc:
    // 0x4e17bc: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E17BCu;
    SET_GPR_U32(ctx, 31, 0x4E17C4u);
    ctx->pc = 0x4E17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E17BCu;
    // 0x4e17c0: 0x26701168  addiu       $s0, $s3, 0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E17BCu, 0x4E17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E17C4u;
label_4e17c4:
    // 0x4e17c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e17c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4e17cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e17ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e17d0: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4e17d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4e17d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e17d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e17d8: 0x262a0160  addiu       $t2, $s1, 0x160
    ctx->pc = 0x4e17d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4e17dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e17e0: 0x262b0162  addiu       $t3, $s1, 0x162
    ctx->pc = 0x4e17e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
    // 0x4e17e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e17e8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e17e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4e17ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e17ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e17f0: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4e17f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e17f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e17f8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e17f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e17fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e17fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1800: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e1800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e1804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1808: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e180c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1810: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1814: 0x2442ff8a  addiu       $v0, $v0, -0x76
    ctx->pc = 0x4e1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967178));
    // 0x4e1818: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e1818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e181c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1820: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1828: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e182c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e1830: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e1830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e1834: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1838: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e183c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e183cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1840: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1844: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e1848: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e184c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e1850: 0x24217cb8  addiu       $at, $at, 0x7CB8
    ctx->pc = 0x4e1850u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31928));
    // 0x4e1854: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e1854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e1858: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e1858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e185c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4e185cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1860: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4e1860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e1864: 0xa5640000  sh          $a0, 0x0($t3)
    ctx->pc = 0x4e1864u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e1868: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x4e1868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x4e186c: 0xa6230158  sh          $v1, 0x158($s1)
    ctx->pc = 0x4e186cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1870: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e1870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e1874: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e1874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e1878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1878u;
    {
        const bool branch_taken_0x4e1878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1878u;
        // 0x4e187c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1878) {
            ctx->pc = 0x4E1890u;
            goto label_4e1890;
        }
    }
    ctx->pc = 0x4E1880u;
label_4e1880:
    // 0x4e1880: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4e1880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4e1884: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e1884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4e1888: 0x262a0160  addiu       $t2, $s1, 0x160
    ctx->pc = 0x4e1888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4e188c: 0x262b0162  addiu       $t3, $s1, 0x162
    ctx->pc = 0x4e188cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
label_4e1890:
    // 0x4e1890: 0x26701168  addiu       $s0, $s3, 0x1168
    ctx->pc = 0x4e1890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4456));
    // 0x4e1894: 0x24d37cb8  addiu       $s3, $a2, 0x7CB8
    ctx->pc = 0x4e1894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 31928));
    // 0x4e1898: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e1898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e189c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4e189cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4e18a0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4e18a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e18a4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e18a8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e18a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e18ac: 0x24751170  addiu       $s5, $v1, 0x1170
    ctx->pc = 0x4e18acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4464));
    // 0x4e18b0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e18b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e18b4: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4e18b4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1170u));
    // 0x4e18b8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e18b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e18bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e18c0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4e18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4e18c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e18c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e18c8: 0x24741174  addiu       $s4, $v1, 0x1174
    ctx->pc = 0x4e18c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4468));
    // 0x4e18cc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e18ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e18d0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e18d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e18d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e18d8: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e18d8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F1174u));
    // 0x4e18dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e18dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e18e0: 0x2442ff8a  addiu       $v0, $v0, -0x76
    ctx->pc = 0x4e18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967178));
    // 0x4e18e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e18e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e18e8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e18ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e18ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e18f0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e18f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e18f4: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4e18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4e18f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e18f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e18fc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e18fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1900: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e1900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e1904: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1908: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e1908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e190c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4e190cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4e1910: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4e1910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e1914: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1918: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e1918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e191c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4e191cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4e1920: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1924: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4e1924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4e1928: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e192c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e192cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e1930: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4e1930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e1934: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x4e1934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4e1938: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e1938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e193c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e193cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e1940: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4E1940u;
    SET_GPR_U32(ctx, 31, 0x4E1948u);
    ctx->pc = 0x4E1944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1940u;
    // 0x4e1944: 0xae890000  sw          $t1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4E1940u, 0x4E1948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1948u;
label_4e1948:
    // 0x4e1948: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4E1948u;
    SET_GPR_U32(ctx, 31, 0x4E1950u);
    ctx->pc = 0x4E194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1948u;
    // 0x4e194c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4E1948u, 0x4E1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1950u;
label_4e1950:
    // 0x4e1950: 0x504000de  beql        $v0, $zero, . + 4 + (0xDE << 2)
    ctx->pc = 0x4E1950u;
    {
        const bool branch_taken_0x4e1950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1950) {
            ctx->pc = 0x4E1954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1950u;
            // 0x4e1954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1CCCu;
            goto label_4e1ccc;
        }
    }
    ctx->pc = 0x4E1958u;
    // 0x4e1958: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e1958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e195c: 0x862201b6  lh          $v0, 0x1B6($s1)
    ctx->pc = 0x4e195cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4e1960: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1964: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e196c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e196cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1970: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1974: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e1974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e1978: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x4E1978u;
    {
        const bool branch_taken_0x4e1978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1978) {
            ctx->pc = 0x4E197Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1978u;
            // 0x4e197c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E19F8u;
            goto label_4e19f8;
        }
    }
    ctx->pc = 0x4E1980u;
    // 0x4e1980: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4e1980u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4e1984: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4e1984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e1988: 0x256b1178  addiu       $t3, $t3, 0x1178
    ctx->pc = 0x4e1988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4472));
    // 0x4e198c: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e198cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1990: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4e1990u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1178u));
    // 0x4e1994: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4e1994u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4e1998: 0x86630004  lh          $v1, 0x4($s3)
    ctx->pc = 0x4e1998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4e199c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e199cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e19a0: 0x86640006  lh          $a0, 0x6($s3)
    ctx->pc = 0x4e19a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x4e19a4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e19a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e19a8: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4e19a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4e19ac: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e19acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e19b0: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4e19b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4e19b4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4e19b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4e19b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e19b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e19bc: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4e19bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4e19c0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e19c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4e19c4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4e19c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e19c8: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4e19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4e19cc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4e19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e19d0: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x4e19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x4e19d4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e19d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e19d8: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x4e19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x4e19dc: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4E19DCu;
    SET_GPR_U32(ctx, 31, 0x4E19E4u);
    ctx->pc = 0x4E19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E19DCu;
    // 0x4e19e0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4E19DCu, 0x4E19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E19E4u;
label_4e19e4:
    // 0x4e19e4: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E19E4u;
    SET_GPR_U32(ctx, 31, 0x4E19ECu);
    ctx->pc = 0x4E19E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E19E4u;
    // 0x4e19e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E19E4u, 0x4E19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E19ECu;
label_4e19ec:
    // 0x4e19ec: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E19ECu;
    SET_GPR_U32(ctx, 31, 0x4E19F4u);
    ctx->pc = 0x4E19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E19ECu;
    // 0x4e19f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E19ECu, 0x4E19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E19F4u;
label_4e19f4:
    // 0x4e19f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e19f8:
    // 0x4e19f8: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4e19f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4e19fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e19fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1a00: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1a04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1a08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1a10: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1a14: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e1a18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1a1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e1a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e1a20: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1a24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1a28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1a2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1a30: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x4E1A30u;
    {
        const bool branch_taken_0x4e1a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1A30u;
        // 0x4e1a34: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1a30) {
            ctx->pc = 0x4E1BF8u;
            goto label_4e1bf8;
        }
    }
    ctx->pc = 0x4E1A38u;
    // 0x4e1a38: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x4e1a38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4e1a3c: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4e1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4e1a40: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1a44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1a48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1a4c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4e1a4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1a50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4e1a54: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x4e1a54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e1a58: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1a5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1a60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e1a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e1a64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1a68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1a6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e1a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e1a70: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1a74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1a78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1a7c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1a80: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x4E1A80u;
    {
        const bool branch_taken_0x4e1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1A80u;
        // 0x4e1a84: 0x3c080073  lui         $t0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1a80) {
            ctx->pc = 0x4E1BF8u;
            goto label_4e1bf8;
        }
    }
    ctx->pc = 0x4E1A88u;
    // 0x4e1a88: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x4e1a88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4e1a8c: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x4e1a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
    // 0x4e1a90: 0x3469ffff  ori         $t1, $v1, 0xFFFF
    ctx->pc = 0x4e1a90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1a94: 0xa5022330  sh          $v0, 0x2330($t0)
    ctx->pc = 0x4e1a94u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1a98: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e1a98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4e1a9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e1a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e1aa0: 0x258c1178  addiu       $t4, $t4, 0x1178
    ctx->pc = 0x4e1aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4472));
    // 0x4e1aa4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4e1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4e1aa8: 0x2473116c  addiu       $s3, $v1, 0x116C
    ctx->pc = 0x4e1aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4460));
    // 0x4e1aac: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e1aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e1ab0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1ab4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e1ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e1ab8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e1ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1abc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e1ac0: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x4e1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x4e1ac4: 0xa5022334  sh          $v0, 0x2334($t0)
    ctx->pc = 0x4e1ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1ac8: 0x2516233a  addiu       $s6, $t0, 0x233A
    ctx->pc = 0x4e1ac8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 9018));
    // 0x4e1acc: 0x2517233c  addiu       $s7, $t0, 0x233C
    ctx->pc = 0x4e1accu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 9020));
    // 0x4e1ad0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e1ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e1ad4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4e1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4e1ad8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e1ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e1adc: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4e1adcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e1ae0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e1ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e1ae4: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x4e1ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e1ae8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e1aec: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4e1aecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4e1af0: 0xa5022336  sh          $v0, 0x2336($t0)
    ctx->pc = 0x4e1af0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1af4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4e1af4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4e1af8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4e1af8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4e1afc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4e1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4e1b00: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4e1b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1b04: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e1b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e1b08: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e1b0c: 0xa5022338  sh          $v0, 0x2338($t0)
    ctx->pc = 0x4e1b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1b10: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x4e1b10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4e1b14: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x4e1b14u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1b18: 0x9627011c  lhu         $a3, 0x11C($s1)
    ctx->pc = 0x4e1b18u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4e1b1c: 0xa6e70000  sh          $a3, 0x0($s7)
    ctx->pc = 0x4e1b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4e1b20: 0x86220120  lh          $v0, 0x120($s1)
    ctx->pc = 0x4e1b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4e1b24: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1b28: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e1b28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e1b2c: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4e1b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4e1b30: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e1b30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e1b34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1b38: 0x24422aaa  addiu       $v0, $v0, 0x2AAA
    ctx->pc = 0x4e1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10922));
    // 0x4e1b3c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1b40: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e1b40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e1b44: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4e1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4e1b48: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e1b48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1b4c: 0xa503233e  sh          $v1, 0x233E($t0)
    ctx->pc = 0x4e1b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9022), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1b50: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4e1b50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4e1b54: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1b58: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e1b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e1b5c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e1b60: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4e1b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4e1b64: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1b68: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e1b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e1b6c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e1b70: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4e1b70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4e1b74: 0xae6a0000  sw          $t2, 0x0($s3)
    ctx->pc = 0x4e1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    // 0x4e1b78: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1b7c: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4e1b7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4e1b80: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x4e1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x4e1b84: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E1B84u;
    SET_GPR_U32(ctx, 31, 0x4E1B8Cu);
    ctx->pc = 0x4E1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1B84u;
    // 0x4e1b88: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E1B84u, 0x4E1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1B8Cu;
label_4e1b8c:
    // 0x4e1b8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e1b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1b94: 0x16420016  bne         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4E1B94u;
    {
        const bool branch_taken_0x4e1b94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B94u;
        // 0x4e1b98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1b94) {
            ctx->pc = 0x4E1BF0u;
            goto label_4e1bf0;
        }
    }
    ctx->pc = 0x4E1B9Cu;
    // 0x4e1b9c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e1ba0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1ba4: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e1ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1ba8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4e1ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x4e1bac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e1bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e1bb0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e1bb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e1bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e1bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e1bb8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e1bb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e1bbc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4e1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4e1bc0: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x4e1bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x4e1bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e1bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1bc8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4e1bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1bcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4e1bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1bd0: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4E1BD0u;
    SET_GPR_U32(ctx, 31, 0x4E1BD8u);
    ctx->pc = 0x4E1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1BD0u;
    // 0x4e1bd4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4E1BD0u, 0x4E1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1BD8u;
label_4e1bd8:
    // 0x4e1bd8: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1BD8u;
    {
        const bool branch_taken_0x4e1bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4e1bd8) {
            ctx->pc = 0x4E1BF0u;
            goto label_4e1bf0;
        }
    }
    ctx->pc = 0x4E1BE0u;
    // 0x4e1be0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1be4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4e1be4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e1be8: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4e1be8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1bec: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4e1becu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e1bf0:
    // 0x4e1bf0: 0xc127a8c  jal         func_49EA30
    ctx->pc = 0x4E1BF0u;
    SET_GPR_U32(ctx, 31, 0x4E1BF8u);
    ctx->pc = 0x4E1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1BF0u;
    // 0x4e1bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA30u, 0x4E1BF0u, 0x4E1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1BF8u;
label_4e1bf8:
    // 0x4e1bf8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E1BF8u;
    SET_GPR_U32(ctx, 31, 0x4E1C00u);
    ctx->pc = 0x4E1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1BF8u;
    // 0x4e1bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E1BF8u, 0x4E1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1C00u;
label_4e1c00:
    // 0x4e1c00: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E1C00u;
    SET_GPR_U32(ctx, 31, 0x4E1C08u);
    ctx->pc = 0x4E1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1C00u;
    // 0x4e1c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E1C00u, 0x4E1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1C08u;
label_4e1c08:
    // 0x4e1c08: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4E1C08u;
    {
        const bool branch_taken_0x4e1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C08u;
        // 0x4e1c0c: 0x3c06007f  lui         $a2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c08) {
            ctx->pc = 0x4E1CC8u;
            goto label_4e1cc8;
        }
    }
    ctx->pc = 0x4E1C10u;
    // 0x4e1c10: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1c14: 0x24c6117c  addiu       $a2, $a2, 0x117C
    ctx->pc = 0x4e1c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4476));
    // 0x4e1c18: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4e1c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x4e1c1c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e1c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e1c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1c24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4e1c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1c28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e1c2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e1c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e1c30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e1c34: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4E1C34u;
    SET_GPR_U32(ctx, 31, 0x4E1C3Cu);
    ctx->pc = 0x4E1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1C34u;
    // 0x4e1c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4E1C34u, 0x4E1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1C3Cu;
label_4e1c3c:
    // 0x4e1c3c: 0xc12b3d4  jal         func_4ACF50
    ctx->pc = 0x4E1C3Cu;
    SET_GPR_U32(ctx, 31, 0x4E1C44u);
    ctx->pc = 0x4E1C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1C3Cu;
    // 0x4e1c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF50u, 0x4E1C3Cu, 0x4E1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1C44u;
label_4e1c44:
    // 0x4e1c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e1c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1c48: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E1C48u;
    SET_GPR_U32(ctx, 31, 0x4E1C50u);
    ctx->pc = 0x4E1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1C48u;
    // 0x4e1c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E1C48u, 0x4E1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1C50u;
label_4e1c50:
    // 0x4e1c50: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E1C50u;
    {
        const bool branch_taken_0x4e1c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C50u;
        // 0x4e1c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c50) {
            ctx->pc = 0x4E1C88u;
            goto label_4e1c88;
        }
    }
    ctx->pc = 0x4E1C58u;
    // 0x4e1c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e1c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1c64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e1c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e1c68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e1c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1c6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1c6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1c70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1c70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1c74: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e1c74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e1c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e1c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1c7c: 0x8138490  j           func_4E1240
    ctx->pc = 0x4E1C7Cu;
    ctx->pc = 0x4E1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1C7Cu;
    // 0x4e1c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1240u;
    sub_004E1240_0x4e1240(rdram, ctx, runtime); return;
    ctx->pc = 0x4E1C84u;
    // 0x4e1c84: 0x0  nop
    ctx->pc = 0x4e1c84u;
    // NOP
label_4e1c88:
    // 0x4e1c88: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E1C88u;
    SET_GPR_U32(ctx, 31, 0x4E1C90u);
    ctx->pc = 0x4E1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1C88u;
    // 0x4e1c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E1C88u, 0x4E1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1C90u;
label_4e1c90:
    // 0x4e1c90: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E1C90u;
    {
        const bool branch_taken_0x4e1c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C90u;
        // 0x4e1c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c90) {
            ctx->pc = 0x4E1CCCu;
            goto label_4e1ccc;
        }
    }
    ctx->pc = 0x4E1C98u;
    // 0x4e1c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e1c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e1c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1ca4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e1ca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e1ca8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e1ca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1cac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1cacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1cb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1cb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1cb4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e1cb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e1cb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e1cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1cbc: 0x81384a8  j           func_4E12A0
    ctx->pc = 0x4E1CBCu;
    ctx->pc = 0x4E1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1CBCu;
    // 0x4e1cc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E12A0u;
    sub_004E12A0_0x4e12a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E1CC4u;
    // 0x4e1cc4: 0x0  nop
    ctx->pc = 0x4e1cc4u;
    // NOP
label_4e1cc8:
    // 0x4e1cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1ccc:
    // 0x4e1ccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e1cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1cd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1cd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e1cd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e1cd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e1cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1cdc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1cdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1ce0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1ce0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1ce4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e1ce4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e1ce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e1ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1cec: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1CECu;
        // 0x4e1cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E1CF4u;
    // 0x4e1cf4: 0x0  nop
    ctx->pc = 0x4e1cf4u;
    // NOP
    ctx->pc = 0x4e1cf8u;
}
