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

// Function: sub_004F16D8
// Address: 0x4f16d8 - 0x4f1af8
void sub_004F16D8_0x4f16d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F16D8_0x4f16d8");
#endif

    switch (ctx->pc) {
        case 0x4f16f4u: goto label_4f16f4;
        case 0x4f1710u: goto label_4f1710;
        case 0x4f195cu: goto label_4f195c;
        case 0x4f19e0u: goto label_4f19e0;
        case 0x4f1a18u: goto label_4f1a18;
        case 0x4f1a2cu: goto label_4f1a2c;
        case 0x4f1ac8u: goto label_4f1ac8;
        default: break;
    }

    ctx->pc = 0x4f16d8u;

    // 0x4f16d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f16d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f16dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f16dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f16e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f16e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f16e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f16e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f16ec: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F16ECu;
    SET_GPR_U32(ctx, 31, 0x4F16F4u);
    ctx->pc = 0x4F16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F16ECu;
    // 0x4f16f0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F16ECu, 0x4F16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F16F4u;
label_4f16f4:
    // 0x4f16f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f16f8: 0xac62122c  sw          $v0, 0x122C($v1)
    ctx->pc = 0x4f16f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4f16fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f16fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f1700: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4F1700u;
    {
        const bool branch_taken_0x4f1700 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1700u;
        // 0x4f1704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1700) {
            ctx->pc = 0x4F1738u;
            goto label_4f1738;
        }
    }
    ctx->pc = 0x4F1708u;
    // 0x4f1708: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F1708u;
    SET_GPR_U32(ctx, 31, 0x4F1710u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F1708u, 0x4F1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1710u;
label_4f1710:
    // 0x4f1710: 0x2402a000  addiu       $v0, $zero, -0x6000
    ctx->pc = 0x4f1710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294942720));
    // 0x4f1714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1718: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4f1718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f171c: 0xa6030148  sh          $v1, 0x148($s0)
    ctx->pc = 0x4f171cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f1720: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4f1720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f1724: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4f1724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f1728: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4f1728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f172c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f172cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f1730: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f1730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f1734: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f1734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f1738:
    // 0x4f1738: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4f1738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4f173c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f1740: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4f1740u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f1744: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F1744u;
    {
        const bool branch_taken_0x4f1744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1744u;
        // 0x4f1748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1744) {
            ctx->pc = 0x4F1768u;
            goto label_4f1768;
        }
    }
    ctx->pc = 0x4F174Cu;
    // 0x4f174c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F174Cu;
    {
        const bool branch_taken_0x4f174c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F174Cu;
        // 0x4f1750: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f174c) {
            ctx->pc = 0x4F1780u;
            goto label_4f1780;
        }
    }
    ctx->pc = 0x4F1754u;
    // 0x4f1754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f175c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F175Cu;
        // 0x4f1760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1764u;
    // 0x4f1764: 0x0  nop
    ctx->pc = 0x4f1764u;
    // NOP
label_4f1768:
    // 0x4f1768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f1768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f176c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f176cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1778: 0x813c5e6  j           func_4F1798
    ctx->pc = 0x4F1778u;
    ctx->pc = 0x4F177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1778u;
    // 0x4f177c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1798u;
    goto label_4f1798;
    ctx->pc = 0x4F1780u;
label_4f1780:
    // 0x4f1780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f1780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f178c: 0x813c692  j           func_4F1A48
    ctx->pc = 0x4F178Cu;
    ctx->pc = 0x4F1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F178Cu;
    // 0x4f1790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1A48u;
    goto label_4f1a48;
    ctx->pc = 0x4F1794u;
    // 0x4f1794: 0x0  nop
    ctx->pc = 0x4f1794u;
    // NOP
label_4f1798:
    // 0x4f1798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f179c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4f179cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f17a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f17a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f17a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f17a8: 0x24451210  addiu       $a1, $v0, 0x1210
    ctx->pc = 0x4f17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4f17ac: 0x24c8015e  addiu       $t0, $a2, 0x15E
    ctx->pc = 0x4f17acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 350));
    // 0x4f17b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f17b4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4f17b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4f17b8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4f17b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f17bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f17bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f17c0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f17c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f17c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f17c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f17c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f17cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f17ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f17d0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f17d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f17d4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4f17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4f17d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f17d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f17dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f17e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f17e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4f17e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f17e8: 0x2c620900  sltiu       $v0, $v1, 0x900
    ctx->pc = 0x4f17e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2304) ? 1 : 0);
    // 0x4f17ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4F17ECu;
    {
        const bool branch_taken_0x4f17ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17ECu;
        // 0x4f17f0: 0x24c901bc  addiu       $t1, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f17ec) {
            ctx->pc = 0x4F1870u;
            goto label_4f1870;
        }
    }
    ctx->pc = 0x4F17F4u;
    // 0x4f17f4: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4f17f4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f17f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f17f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f17fc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4f17fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1800: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f1800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1804: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4f1804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4f1808: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f1808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f180c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1810: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1814: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1818: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f181c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f181cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f1820: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1824: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x4f1824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4f1828: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f182c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1830: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f1830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f1834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1838: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4f1838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f183c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1840: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1844: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f1844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f1848: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f184c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f184cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1850: 0x24420550  addiu       $v0, $v0, 0x550
    ctx->pc = 0x4f1850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x4f1854: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1858: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f185c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f185cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f1860: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4f1860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1864: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x4f1864u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1868: 0x813c624  j           func_4F1890
    ctx->pc = 0x4F1868u;
    ctx->pc = 0x4F186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1868u;
    // 0x4f186c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1890u;
    goto label_4f1890;
    ctx->pc = 0x4F1870u;
label_4f1870:
    // 0x4f1870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f1870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1878: 0xa4c3016a  sh          $v1, 0x16A($a2)
    ctx->pc = 0x4f1878u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f187c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4f187cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f1880: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f1880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f1884: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4f1884u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1888: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1888u;
        // 0x4f188c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1890u;
label_4f1890:
    // 0x4f1890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f1894: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4f1894u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4f1898: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f189c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f189cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f18a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f18a4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f18a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f18a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f18a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f18ac: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4f18acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4f18b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f18b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f18b4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f18b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f18b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f18bc: 0x2652122c  addiu       $s2, $s2, 0x122C
    ctx->pc = 0x4f18bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4652));
    // 0x4f18c0: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4f18c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f18c4: 0x26101210  addiu       $s0, $s0, 0x1210
    ctx->pc = 0x4f18c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
    // 0x4f18c8: 0x25081214  addiu       $t0, $t0, 0x1214
    ctx->pc = 0x4f18c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4628));
    // 0x4f18cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f18ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f18d0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4f18d0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F122Cu));
    // 0x4f18d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f18d8: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x4f18d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x4f18dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f18dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f18e0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1214u));
    // 0x4f18e4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f18e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f18e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f18e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f18ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f18ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f18f0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f18f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f18f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f18f8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4f18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4f18fc: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4f18fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1900: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f1900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1904: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1908: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f190c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f190cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1910: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f1910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f1914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1918: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4f1918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4f191c: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x4f191cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f1920: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f1920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1924: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1928: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4f1928u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f192c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4f192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4f1930: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4f1930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4f1934: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f1934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f1938: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4f1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4f193c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1940: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1944: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f1944u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f1948: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4f1948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4f194c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f1950: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f1950u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f1954: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4F1954u;
    SET_GPR_U32(ctx, 31, 0x4F195Cu);
    ctx->pc = 0x4F1958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1954u;
    // 0x4f1958: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4F1954u, 0x4F195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F195Cu;
label_4f195c:
    // 0x4f195c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f195cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1960: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4f1960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4f1964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f1964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1968: 0xa663011c  sh          $v1, 0x11C($s3)
    ctx->pc = 0x4f1968u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f196c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1974: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1978: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f197c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4f197cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1980: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1988: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f1988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f198c: 0x713824  and         $a3, $v1, $s1
    ctx->pc = 0x4f198cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4f1990: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1994: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4f1994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4f1998: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4f1998u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f199c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f19a0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f19a4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4f19a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f19a8: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x4f19a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x4f19ac: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x4f19acu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x4f19b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f19b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f19b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f19b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f19b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f19b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f19bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4f19bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x4f19c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f19c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f19c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f19c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f19c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f19cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f19ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f19d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f19d4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f19d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f19d8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F19D8u;
    SET_GPR_U32(ctx, 31, 0x4F19E0u);
    ctx->pc = 0x4F19DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F19D8u;
    // 0x4f19dc: 0xa6620120  sh          $v0, 0x120($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F19D8u, 0x4F19E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F19E0u;
label_4f19e0:
    // 0x4f19e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f19e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f19e4: 0x8662016a  lh          $v0, 0x16A($s3)
    ctx->pc = 0x4f19e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 362)));
    // 0x4f19e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F19E8u;
    {
        const bool branch_taken_0x4f19e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F19E8u;
        // 0x4f19ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f19e8) {
            ctx->pc = 0x4F1A10u;
            goto label_4f1a10;
        }
    }
    ctx->pc = 0x4F19F0u;
    // 0x4f19f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f19f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f19f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f19f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f19f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f19f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f19fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f19fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1a04: 0x813cab4  j           func_4F2AD0
    ctx->pc = 0x4F1A04u;
    ctx->pc = 0x4F1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1A04u;
    // 0x4f1a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    sub_004F2AD0_0x4f2ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F1A0Cu;
    // 0x4f1a0c: 0x0  nop
    ctx->pc = 0x4f1a0cu;
    // NOP
label_4f1a10:
    // 0x4f1a10: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4F1A10u;
    SET_GPR_U32(ctx, 31, 0x4F1A18u);
    ctx->pc = 0x4F1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1A10u;
    // 0x4f1a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4F1A10u, 0x4F1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1A18u;
label_4f1a18:
    // 0x4f1a18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1a1c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F1A1Cu;
    {
        const bool branch_taken_0x4f1a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A1Cu;
        // 0x4f1a20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1a1c) {
            ctx->pc = 0x4F1A2Cu;
            goto label_4f1a2c;
        }
    }
    ctx->pc = 0x4F1A24u;
    // 0x4f1a24: 0xc13caae  jal         func_4F2AB8
    ctx->pc = 0x4F1A24u;
    SET_GPR_U32(ctx, 31, 0x4F1A2Cu);
    ctx->pc = 0x4F2AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F2AB8u, 0x4F1A24u, 0x4F1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1A2Cu;
label_4f1a2c:
    // 0x4f1a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f1a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1a38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f1a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1a40: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A40u;
        // 0x4f1a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1A48u;
label_4f1a48:
    // 0x4f1a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f1a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f1a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f1a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f1a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f1a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1a58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f1a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f1a5c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4f1a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4f1a60: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4f1a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1a64: 0x24e7122c  addiu       $a3, $a3, 0x122C
    ctx->pc = 0x4f1a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4652));
    // 0x4f1a68: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x4f1a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4f1a6c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f1a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1a70: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4f1a70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F122Cu));
    // 0x4f1a74: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x4f1a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4f1a78: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4f1a78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f1a7c: 0x260b0018  addiu       $t3, $s0, 0x18
    ctx->pc = 0x4f1a7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4f1a80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f1a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1a88: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f1a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f1a8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f1a90: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f1a94: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f1a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f1a98: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4f1a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f1a9c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4f1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4f1aa0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f1aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f1aa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f1aa8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4f1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4f1aac: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f1aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f1ab0: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4f1ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f1ab4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4f1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4f1ab8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f1ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f1abc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f1ac0: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4F1AC0u;
    SET_GPR_U32(ctx, 31, 0x4F1AC8u);
    ctx->pc = 0x4F1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1AC0u;
    // 0x4f1ac4: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4F1AC0u, 0x4F1AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1AC8u;
label_4f1ac8:
    // 0x4f1ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1acc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F1ACCu;
    {
        const bool branch_taken_0x4f1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1ACCu;
        // 0x4f1ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1acc) {
            ctx->pc = 0x4F1AE8u;
            goto label_4f1ae8;
        }
    }
    ctx->pc = 0x4F1AD4u;
    // 0x4f1ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f1ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1adc: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F1ADCu;
    ctx->pc = 0x4F1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1ADCu;
    // 0x4f1ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F1AE4u;
    // 0x4f1ae4: 0x0  nop
    ctx->pc = 0x4f1ae4u;
    // NOP
label_4f1ae8:
    // 0x4f1ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1aec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f1aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1af0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1AF0u;
        // 0x4f1af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1AF8u;
}
