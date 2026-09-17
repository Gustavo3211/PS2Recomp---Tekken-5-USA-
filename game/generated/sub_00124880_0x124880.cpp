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

// Function: sub_00124880
// Address: 0x124880 - 0x124ca8
void sub_00124880_0x124880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124880_0x124880");
#endif

    switch (ctx->pc) {
        case 0x1248e4u: goto label_1248e4;
        case 0x1249ccu: goto label_1249cc;
        case 0x1249d8u: goto label_1249d8;
        case 0x124a24u: goto label_124a24;
        case 0x124a44u: goto label_124a44;
        case 0x124a50u: goto label_124a50;
        case 0x124a84u: goto label_124a84;
        case 0x124a90u: goto label_124a90;
        case 0x124ab4u: goto label_124ab4;
        case 0x124ad4u: goto label_124ad4;
        case 0x124b04u: goto label_124b04;
        case 0x124b20u: goto label_124b20;
        case 0x124b28u: goto label_124b28;
        case 0x124b48u: goto label_124b48;
        case 0x124b54u: goto label_124b54;
        case 0x124ba0u: goto label_124ba0;
        case 0x124bdcu: goto label_124bdc;
        case 0x124bf8u: goto label_124bf8;
        case 0x124c44u: goto label_124c44;
        case 0x124c64u: goto label_124c64;
        case 0x124c70u: goto label_124c70;
        default: break;
    }

    ctx->pc = 0x124880u;

    // 0x124880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124884: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12488c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x124890: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124898: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12489c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1248a0: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1248a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1248a4: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1248a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1248a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1248A8u;
    {
        const bool branch_taken_0x1248a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248A8u;
        // 0x1248ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248a8) {
            ctx->pc = 0x1248C8u;
            goto label_1248c8;
        }
    }
    ctx->pc = 0x1248B0u;
    // 0x1248b0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1248b4: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x1248b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1248b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1248b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1248bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1248BCu;
    {
        const bool branch_taken_0x1248bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248BCu;
        // 0x1248c0: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248bc) {
            ctx->pc = 0x124994u;
            goto label_124994;
        }
    }
    ctx->pc = 0x1248C4u;
    // 0x1248c4: 0x0  nop
    ctx->pc = 0x1248c4u;
    // NOP
label_1248c8:
    // 0x1248c8: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1248c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1248cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1248CCu;
    {
        const bool branch_taken_0x1248cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248CCu;
        // 0x1248d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248cc) {
            ctx->pc = 0x124910u;
            goto label_124910;
        }
    }
    ctx->pc = 0x1248D4u;
    // 0x1248d4: 0x30a7003f  andi        $a3, $a1, 0x3F
    ctx->pc = 0x1248d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1248d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1248d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248dc: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x1248DCu;
    SET_GPR_U32(ctx, 31, 0x1248E4u);
    ctx->pc = 0x1248E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1248DCu;
    // 0x1248e0: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x1248DCu, 0x1248E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248E4u;
label_1248e4:
    // 0x1248e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1248e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e8: 0x962203f8  lhu         $v0, 0x3F8($s1)
    ctx->pc = 0x1248e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1016)));
    // 0x1248ec: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1248ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1248f0: 0x10e200ef  beq         $a3, $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x1248F0u;
    {
        const bool branch_taken_0x1248f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1248F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248F0u;
        // 0x1248f4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248f0) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x1248F8u;
    // 0x1248f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1248f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1248fc: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1248fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x124900: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x124900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x124904: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x124904u;
    {
        const bool branch_taken_0x124904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124904u;
        // 0x124908: 0xf12821  addu        $a1, $a3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124904) {
            ctx->pc = 0x1249FCu;
            goto label_1249fc;
        }
    }
    ctx->pc = 0x12490Cu;
    // 0x12490c: 0x0  nop
    ctx->pc = 0x12490cu;
    // NOP
label_124910:
    // 0x124910: 0x30a200c0  andi        $v0, $a1, 0xC0
    ctx->pc = 0x124910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)192);
    // 0x124914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124914u;
    {
        const bool branch_taken_0x124914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124914u;
        // 0x124918: 0x2ca20030  sltiu       $v0, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124914) {
            ctx->pc = 0x124930u;
            goto label_124930;
        }
    }
    ctx->pc = 0x12491Cu;
    // 0x12491c: 0x30a7003f  andi        $a3, $a1, 0x3F
    ctx->pc = 0x12491cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x124920: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x124920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x124924: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x124924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x124928: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x124928u;
    {
        const bool branch_taken_0x124928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124928u;
        // 0x12492c: 0xa04003fc  sb          $zero, 0x3FC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124928) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124930u;
label_124930:
    // 0x124930: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x124930u;
    {
        const bool branch_taken_0x124930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124930u;
        // 0x124934: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124930) {
            ctx->pc = 0x124CA8u;
            return;
        }
    }
    ctx->pc = 0x124938u;
    // 0x124938: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x12493c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124940: 0x8c63f230  lw          $v1, -0xDD0($v1)
    ctx->pc = 0x124940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963760)));
    // 0x124944: 0x600008  jr          $v1
    ctx->pc = 0x124944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124950u: goto label_124950;
            case 0x124968u: goto label_124968;
            case 0x124978u: goto label_124978;
            case 0x1249A0u: goto label_1249a0;
            case 0x1249C0u: goto label_1249c0;
            case 0x124A18u: goto label_124a18;
            case 0x124A38u: goto label_124a38;
            case 0x124A78u: goto label_124a78;
            case 0x124AA8u: goto label_124aa8;
            case 0x124AC8u: goto label_124ac8;
            case 0x124AE8u: goto label_124ae8;
            case 0x124B40u: goto label_124b40;
            case 0x124B90u: goto label_124b90;
            case 0x124BE8u: goto label_124be8;
            case 0x124C38u: goto label_124c38;
            case 0x124C58u: goto label_124c58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12494Cu;
    // 0x12494c: 0x0  nop
    ctx->pc = 0x12494cu;
    // NOP
label_124950:
    // 0x124950: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x124950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x124954: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x124954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x124958: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x124958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x12495c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x12495Cu;
    {
        const bool branch_taken_0x12495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12495Cu;
        // 0x124960: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12495c) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124964u;
    // 0x124964: 0x0  nop
    ctx->pc = 0x124964u;
    // NOP
label_124968:
    // 0x124968: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x124968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12496c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12496Cu;
    {
        const bool branch_taken_0x12496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12496Cu;
        // 0x124970: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12496c) {
            ctx->pc = 0x1249ACu;
            goto label_1249ac;
        }
    }
    ctx->pc = 0x124974u;
    // 0x124974: 0x0  nop
    ctx->pc = 0x124974u;
    // NOP
label_124978:
    // 0x124978: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x124978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x12497c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x12497cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124980: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x124984: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x124988: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12498c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124990: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x124990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_124994:
    // 0x124994: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124998: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x124998u;
    {
        const bool branch_taken_0x124998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124998u;
        // 0x12499c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124998) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x1249A0u;
label_1249a0:
    // 0x1249a0: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x1249a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1249a4: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x1249a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1249a8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1249a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1249ac:
    // 0x1249ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1249acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1249b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1249b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1249b4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1249B4u;
    {
        const bool branch_taken_0x1249b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249B4u;
        // 0x1249b8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249b4) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x1249BCu;
    // 0x1249bc: 0x0  nop
    ctx->pc = 0x1249bcu;
    // NOP
label_1249c0:
    // 0x1249c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1249c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249c4: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x1249C4u;
    SET_GPR_U32(ctx, 31, 0x1249CCu);
    ctx->pc = 0x1249C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1249C4u;
    // 0x1249c8: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x1249C4u, 0x1249CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249CCu;
label_1249cc:
    // 0x1249cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1249ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d0: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x1249D0u;
    SET_GPR_U32(ctx, 31, 0x1249D8u);
    ctx->pc = 0x1249D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1249D0u;
    // 0x1249d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x1249D0u, 0x1249D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249D8u;
label_1249d8:
    // 0x1249d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1249d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249dc: 0x962203f8  lhu         $v0, 0x3F8($s1)
    ctx->pc = 0x1249dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1016)));
    // 0x1249e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1249e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1249e4: 0x10a200b2  beq         $a1, $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1249E4u;
    {
        const bool branch_taken_0x1249e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1249E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249E4u;
        // 0x1249e8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249e4) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x1249ECu;
    // 0x1249ec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1249f0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1249f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1249f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249f8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1249f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1249fc:
    // 0x1249fc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1249fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x124a00: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x124a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x124a04: 0xa0a203fc  sb          $v0, 0x3FC($a1)
    ctx->pc = 0x124a04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1020), (uint8_t)GPR_U32(ctx, 2));
    // 0x124a08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x124a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a0c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x124a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x124a10: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x124A10u;
    {
        const bool branch_taken_0x124a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A10u;
        // 0x124a14: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a10) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124A18u;
label_124a18:
    // 0x124a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a1c: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124A1Cu;
    SET_GPR_U32(ctx, 31, 0x124A24u);
    ctx->pc = 0x124A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A1Cu;
    // 0x124a20: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124A1Cu, 0x124A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A24u;
label_124a24:
    // 0x124a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a28: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x124a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124a2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x124a30: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x124A30u;
    {
        const bool branch_taken_0x124a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A30u;
        // 0x124a34: 0xa04003fc  sb          $zero, 0x3FC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a30) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124A38u;
label_124a38:
    // 0x124a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a3c: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124A3Cu;
    SET_GPR_U32(ctx, 31, 0x124A44u);
    ctx->pc = 0x124A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A3Cu;
    // 0x124a40: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124A3Cu, 0x124A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A44u;
label_124a44:
    // 0x124a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a48: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124A48u;
    SET_GPR_U32(ctx, 31, 0x124A50u);
    ctx->pc = 0x124A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A48u;
    // 0x124a4c: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124A48u, 0x124A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A50u;
label_124a50:
    // 0x124a50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x124a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124a5c: 0x9fa40008  lwu         $a0, 0x8($sp)
    ctx->pc = 0x124a5cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124a60: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x124a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x124a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x124a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x124a68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x124a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x124a6c: 0xa04503fc  sb          $a1, 0x3FC($v0)
    ctx->pc = 0x124a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 5));
    // 0x124a70: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x124A70u;
    {
        const bool branch_taken_0x124a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A70u;
        // 0x124a74: 0xfc640020  sd          $a0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a70) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124A78u;
label_124a78:
    // 0x124a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a7c: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124A7Cu;
    SET_GPR_U32(ctx, 31, 0x124A84u);
    ctx->pc = 0x124A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A7Cu;
    // 0x124a80: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124A7Cu, 0x124A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A84u;
label_124a84:
    // 0x124a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a88: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124A88u;
    SET_GPR_U32(ctx, 31, 0x124A90u);
    ctx->pc = 0x124A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A88u;
    // 0x124a8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124A88u, 0x124A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A90u;
label_124a90:
    // 0x124a90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x124a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a98: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x124a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124a9c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x124a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x124aa0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x124AA0u;
    {
        const bool branch_taken_0x124aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AA0u;
        // 0x124aa4: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124aa0) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124AA8u;
label_124aa8:
    // 0x124aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124aac: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124AACu;
    SET_GPR_U32(ctx, 31, 0x124AB4u);
    ctx->pc = 0x124AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AACu;
    // 0x124ab0: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124AACu, 0x124AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AB4u;
label_124ab4:
    // 0x124ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ab8: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x124ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124abc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x124ABCu;
    {
        const bool branch_taken_0x124abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ABCu;
        // 0x124ac0: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124abc) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124AC4u;
    // 0x124ac4: 0x0  nop
    ctx->pc = 0x124ac4u;
    // NOP
label_124ac8:
    // 0x124ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124acc: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124ACCu;
    SET_GPR_U32(ctx, 31, 0x124AD4u);
    ctx->pc = 0x124AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124ACCu;
    // 0x124ad0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124ACCu, 0x124AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AD4u;
label_124ad4:
    // 0x124ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ad8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124adc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x124ADCu;
    {
        const bool branch_taken_0x124adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ADCu;
        // 0x124ae0: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124adc) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124AE4u;
    // 0x124ae4: 0x0  nop
    ctx->pc = 0x124ae4u;
    // NOP
label_124ae8:
    // 0x124ae8: 0xa62003f8  sh          $zero, 0x3F8($s1)
    ctx->pc = 0x124ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 0));
    // 0x124aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124af0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x124af0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x124af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124af8: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x124af8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x124afc: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124AFCu;
    SET_GPR_U32(ctx, 31, 0x124B04u);
    ctx->pc = 0x124B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AFCu;
    // 0x124b00: 0xa2200477  sb          $zero, 0x477($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124AFCu, 0x124B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B04u;
label_124b04:
    // 0x124b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124b0c: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x124b10: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x124b10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x124b14: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x124B14u;
    {
        const bool branch_taken_0x124b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B14u;
        // 0x124b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b14) {
            ctx->pc = 0x124CB4u;
            return;
        }
    }
    ctx->pc = 0x124B1Cu;
    // 0x124b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124b20:
    // 0x124b20: 0xc0491d8  jal         func_124760
    ctx->pc = 0x124B20u;
    SET_GPR_U32(ctx, 31, 0x124B28u);
    ctx->pc = 0x124B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B20u;
    // 0x124b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124760u, 0x124B20u, 0x124B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B28u;
label_124b28:
    // 0x124b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b2c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x124b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x124b30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x124B30u;
    {
        const bool branch_taken_0x124b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B30u;
        // 0x124b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b30) {
            ctx->pc = 0x124B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124b20;
        }
    }
    ctx->pc = 0x124B38u;
    // 0x124b38: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x124B38u;
    {
        const bool branch_taken_0x124b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B38u;
        // 0x124b3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b38) {
            ctx->pc = 0x124CB4u;
            return;
        }
    }
    ctx->pc = 0x124B40u;
label_124b40:
    // 0x124b40: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x124B40u;
    SET_GPR_U32(ctx, 31, 0x124B48u);
    ctx->pc = 0x124B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B40u;
    // 0x124b44: 0x24040480  addiu       $a0, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x124B40u, 0x124B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B48u;
label_124b48:
    // 0x124b48: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b50: 0x26250480  addiu       $a1, $s1, 0x480
    ctx->pc = 0x124b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
label_124b54:
    // 0x124b54: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x124b54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124b58: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x124b58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124b5c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x124b5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x124b60: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x124b60u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x124b64: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x124b64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x124b68: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x124b68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x124b6c: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x124b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x124b70: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x124b70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x124b74: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x124b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x124b78: 0x0  nop
    ctx->pc = 0x124b78u;
    // NOP
    // 0x124b7c: 0x0  nop
    ctx->pc = 0x124b7cu;
    // NOP
    // 0x124b80: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x124B80u;
    {
        const bool branch_taken_0x124b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x124B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B80u;
        // 0x124b84: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b80) {
            ctx->pc = 0x124B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124b54;
        }
    }
    ctx->pc = 0x124B88u;
    // 0x124b88: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x124B88u;
    {
        const bool branch_taken_0x124b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B88u;
        // 0x124b8c: 0xae220478  sw          $v0, 0x478($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b88) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124B90u;
label_124b90:
    // 0x124b90: 0x8e240478  lw          $a0, 0x478($s1)
    ctx->pc = 0x124b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x124b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b98: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x124b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b9c: 0x24820480  addiu       $v0, $a0, 0x480
    ctx->pc = 0x124b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_124ba0:
    // 0x124ba0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x124ba0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124ba4: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x124ba4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124ba8: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x124ba8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x124bac: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x124bacu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x124bb0: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x124bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x124bb4: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x124bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x124bb8: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x124bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x124bbc: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x124bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x124bc0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x124bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x124bc4: 0x0  nop
    ctx->pc = 0x124bc4u;
    // NOP
    // 0x124bc8: 0x0  nop
    ctx->pc = 0x124bc8u;
    // NOP
    // 0x124bcc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x124BCCu;
    {
        const bool branch_taken_0x124bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x124BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BCCu;
        // 0x124bd0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bcc) {
            ctx->pc = 0x124BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124ba0;
        }
    }
    ctx->pc = 0x124BD4u;
    // 0x124bd4: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x124BD4u;
    SET_GPR_U32(ctx, 31, 0x124BDCu);
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x124BD4u, 0x124BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BDCu;
label_124bdc:
    // 0x124bdc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x124BDCu;
    {
        const bool branch_taken_0x124bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BDCu;
        // 0x124be0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bdc) {
            ctx->pc = 0x124CB4u;
            return;
        }
    }
    ctx->pc = 0x124BE4u;
    // 0x124be4: 0x0  nop
    ctx->pc = 0x124be4u;
    // NOP
label_124be8:
    // 0x124be8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x124be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124bec: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x124becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x124bf0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x124bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x124bf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124bf8:
    // 0x124bf8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x124bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124bfc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x124bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x124c00: 0xa04703f0  sb          $a3, 0x3F0($v0)
    ctx->pc = 0x124c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 7));
    // 0x124c04: 0x2483fff0  addiu       $v1, $a0, -0x10
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x124c08: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x124c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x124c0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x124c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x124c10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x124c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x124c14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x124c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x124c18: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x124c1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x124c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x124c20: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x124c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x124c24: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x124c24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x124c28: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x124C28u;
    {
        const bool branch_taken_0x124c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C28u;
        // 0x124c2c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c28) {
            ctx->pc = 0x124BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124bf8;
        }
    }
    ctx->pc = 0x124C30u;
    // 0x124c30: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x124C30u;
    {
        const bool branch_taken_0x124c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C30u;
        // 0x124c34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c30) {
            ctx->pc = 0x124CB4u;
            return;
        }
    }
    ctx->pc = 0x124C38u;
label_124c38:
    // 0x124c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c3c: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124C3Cu;
    SET_GPR_U32(ctx, 31, 0x124C44u);
    ctx->pc = 0x124C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C3Cu;
    // 0x124c40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124C3Cu, 0x124C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C44u;
label_124c44:
    // 0x124c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124c4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x124C4Cu;
    {
        const bool branch_taken_0x124c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C4Cu;
        // 0x124c50: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c4c) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124C54u;
    // 0x124c54: 0x0  nop
    ctx->pc = 0x124c54u;
    // NOP
label_124c58:
    // 0x124c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c5c: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124C5Cu;
    SET_GPR_U32(ctx, 31, 0x124C64u);
    ctx->pc = 0x124C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C5Cu;
    // 0x124c60: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124C5Cu, 0x124C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C64u;
label_124c64:
    // 0x124c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c68: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124C68u;
    SET_GPR_U32(ctx, 31, 0x124C70u);
    ctx->pc = 0x124C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C68u;
    // 0x124c6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124C68u, 0x124C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C70u;
label_124c70:
    // 0x124c70: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x124c74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x124c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c7c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x124c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c84: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x124c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x124c88: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x124c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x124c8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x124c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x124c90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x124c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x124c94: 0xa04603fc  sb          $a2, 0x3FC($v0)
    ctx->pc = 0x124c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 6));
    // 0x124c98: 0x42823  negu        $a1, $a0
    ctx->pc = 0x124c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x124c9c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x124c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x124ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124CA0u;
    {
        const bool branch_taken_0x124ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CA0u;
        // 0x124ca4: 0xfc650020  sd          $a1, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ca0) {
            ctx->pc = 0x124CB0u;
            return;
        }
    }
    ctx->pc = 0x124CA8u;
}
