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

// Function: sub_00321748
// Address: 0x321748 - 0x321860
void sub_00321748_0x321748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321748_0x321748");
#endif

    switch (ctx->pc) {
        case 0x321748u: goto label_321748;
        case 0x32174cu: goto label_32174c;
        case 0x321750u: goto label_321750;
        case 0x321754u: goto label_321754;
        case 0x321758u: goto label_321758;
        case 0x32175cu: goto label_32175c;
        case 0x321760u: goto label_321760;
        case 0x321764u: goto label_321764;
        case 0x321768u: goto label_321768;
        case 0x32176cu: goto label_32176c;
        case 0x321770u: goto label_321770;
        case 0x321774u: goto label_321774;
        case 0x321778u: goto label_321778;
        case 0x32177cu: goto label_32177c;
        case 0x321780u: goto label_321780;
        case 0x321784u: goto label_321784;
        case 0x321788u: goto label_321788;
        case 0x32178cu: goto label_32178c;
        case 0x321790u: goto label_321790;
        case 0x321794u: goto label_321794;
        case 0x321798u: goto label_321798;
        case 0x32179cu: goto label_32179c;
        case 0x3217a0u: goto label_3217a0;
        case 0x3217a4u: goto label_3217a4;
        case 0x3217a8u: goto label_3217a8;
        case 0x3217acu: goto label_3217ac;
        case 0x3217b0u: goto label_3217b0;
        case 0x3217b4u: goto label_3217b4;
        case 0x3217b8u: goto label_3217b8;
        case 0x3217bcu: goto label_3217bc;
        case 0x3217c0u: goto label_3217c0;
        case 0x3217c4u: goto label_3217c4;
        case 0x3217c8u: goto label_3217c8;
        case 0x3217ccu: goto label_3217cc;
        case 0x3217d0u: goto label_3217d0;
        case 0x3217d4u: goto label_3217d4;
        case 0x3217d8u: goto label_3217d8;
        case 0x3217dcu: goto label_3217dc;
        case 0x3217e0u: goto label_3217e0;
        case 0x3217e4u: goto label_3217e4;
        case 0x3217e8u: goto label_3217e8;
        case 0x3217ecu: goto label_3217ec;
        case 0x3217f0u: goto label_3217f0;
        case 0x3217f4u: goto label_3217f4;
        case 0x3217f8u: goto label_3217f8;
        case 0x3217fcu: goto label_3217fc;
        case 0x321800u: goto label_321800;
        case 0x321804u: goto label_321804;
        case 0x321808u: goto label_321808;
        case 0x32180cu: goto label_32180c;
        case 0x321810u: goto label_321810;
        case 0x321814u: goto label_321814;
        case 0x321818u: goto label_321818;
        case 0x32181cu: goto label_32181c;
        case 0x321820u: goto label_321820;
        case 0x321824u: goto label_321824;
        case 0x321828u: goto label_321828;
        case 0x32182cu: goto label_32182c;
        case 0x321830u: goto label_321830;
        case 0x321834u: goto label_321834;
        case 0x321838u: goto label_321838;
        case 0x32183cu: goto label_32183c;
        case 0x321840u: goto label_321840;
        case 0x321844u: goto label_321844;
        case 0x321848u: goto label_321848;
        case 0x32184cu: goto label_32184c;
        case 0x321850u: goto label_321850;
        case 0x321854u: goto label_321854;
        case 0x321858u: goto label_321858;
        case 0x32185cu: goto label_32185c;
        default: break;
    }

    ctx->pc = 0x321748u;

label_321748:
    // 0x321748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32174c:
    // 0x32174c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_321750:
    // 0x321750: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_321754:
    // 0x321754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321758:
    // 0x321758: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32175c:
    // 0x32175c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32175cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321760:
    // 0x321760: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x321760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_321764:
    // 0x321764: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x321764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_321768:
    // 0x321768: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x321768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32176c:
    // 0x32176c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_321770:
    // 0x321770: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x321770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_321774:
    // 0x321774: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321778:
    // 0x321778: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32177c:
    // 0x32177c: 0x40f809  jalr        $v0
label_321780:
    if (ctx->pc == 0x321780u) {
        ctx->pc = 0x321780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32177Cu;
        // 0x321780: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321784u;
        goto label_321784;
    }
    ctx->pc = 0x32177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321784u);
        ctx->pc = 0x321780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32177Cu;
        // 0x321780: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32177Cu, 0x321784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321784u;
label_321784:
    // 0x321784: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x321784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321788:
    // 0x321788: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_32178c:
    if (ctx->pc == 0x32178Cu) {
        ctx->pc = 0x32178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321788u;
        // 0x32178c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321790u;
        goto label_321790;
    }
    ctx->pc = 0x321788u;
    {
        const bool branch_taken_0x321788 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x32178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321788u;
        // 0x32178c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321788) {
            ctx->pc = 0x3217A0u;
            goto label_3217a0;
        }
    }
    ctx->pc = 0x321790u;
label_321790:
    // 0x321790: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_321794:
    // 0x321794: 0x1000002b  b           . + 4 + (0x2B << 2)
label_321798:
    if (ctx->pc == 0x321798u) {
        ctx->pc = 0x321798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321794u;
        // 0x321798: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32179Cu;
        goto label_32179c;
    }
    ctx->pc = 0x321794u;
    {
        const bool branch_taken_0x321794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321794u;
        // 0x321798: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321794) {
            ctx->pc = 0x321844u;
            goto label_321844;
        }
    }
    ctx->pc = 0x32179Cu;
label_32179c:
    // 0x32179c: 0x0  nop
    ctx->pc = 0x32179cu;
    // NOP
label_3217a0:
    // 0x3217a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3217a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3217a4:
    // 0x3217a4: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x3217a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_3217a8:
    // 0x3217a8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3217a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3217ac:
    // 0x3217ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3217acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3217b0:
    // 0x3217b0: 0x40f809  jalr        $v0
label_3217b4:
    if (ctx->pc == 0x3217B4u) {
        ctx->pc = 0x3217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217B0u;
        // 0x3217b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3217B8u;
        goto label_3217b8;
    }
    ctx->pc = 0x3217B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3217B8u);
        ctx->pc = 0x3217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217B0u;
        // 0x3217b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3217B0u, 0x3217B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3217B8u;
label_3217b8:
    // 0x3217b8: 0x26241280  addiu       $a0, $s1, 0x1280
    ctx->pc = 0x3217b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4736));
label_3217bc:
    // 0x3217bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3217bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3217c0:
    // 0x3217c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3217c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3217c4:
    // 0x3217c4: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
label_3217c8:
    if (ctx->pc == 0x3217C8u) {
        ctx->pc = 0x3217C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217C4u;
        // 0x3217c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3217CCu;
        goto label_3217cc;
    }
    ctx->pc = 0x3217C4u;
    {
        const bool branch_taken_0x3217c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3217C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217C4u;
        // 0x3217c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217c4) {
            ctx->pc = 0x321820u;
            goto label_321820;
        }
    }
    ctx->pc = 0x3217CCu;
label_3217cc:
    // 0x3217cc: 0xc0cf142  jal         func_33C508
label_3217d0:
    if (ctx->pc == 0x3217D0u) {
        ctx->pc = 0x3217D4u;
        goto label_3217d4;
    }
    ctx->pc = 0x3217CCu;
    SET_GPR_U32(ctx, 31, 0x3217D4u);
    ctx->pc = 0x33C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C508u, 0x3217CCu, 0x3217D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3217D4u;
label_3217d4:
    // 0x3217d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3217d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3217d8:
    // 0x3217d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3217d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3217dc:
    // 0x3217dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3217dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3217e0:
    // 0x3217e0: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x3217e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_3217e4:
    // 0x3217e4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x3217e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_3217e8:
    // 0x3217e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3217e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3217ec:
    // 0x3217ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3217ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3217f0:
    // 0x3217f0: 0x60f809  jalr        $v1
label_3217f4:
    if (ctx->pc == 0x3217F4u) {
        ctx->pc = 0x3217F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217F0u;
        // 0x3217f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3217F8u;
        goto label_3217f8;
    }
    ctx->pc = 0x3217F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3217F8u);
        ctx->pc = 0x3217F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217F0u;
        // 0x3217f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3217F0u, 0x3217F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3217F8u;
label_3217f8:
    // 0x3217f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3217f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3217fc:
    // 0x3217fc: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_321800:
    // 0x321800: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x321800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_321804:
    // 0x321804: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321808:
    // 0x321808: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32180c:
    // 0x32180c: 0x40f809  jalr        $v0
label_321810:
    if (ctx->pc == 0x321810u) {
        ctx->pc = 0x321810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32180Cu;
        // 0x321810: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321814u;
        goto label_321814;
    }
    ctx->pc = 0x32180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321814u);
        ctx->pc = 0x321810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32180Cu;
        // 0x321810: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32180Cu, 0x321814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321814u;
label_321814:
    // 0x321814: 0x1000000b  b           . + 4 + (0xB << 2)
label_321818:
    if (ctx->pc == 0x321818u) {
        ctx->pc = 0x321818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321814u;
        // 0x321818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32181Cu;
        goto label_32181c;
    }
    ctx->pc = 0x321814u;
    {
        const bool branch_taken_0x321814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321814u;
        // 0x321818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321814) {
            ctx->pc = 0x321844u;
            goto label_321844;
        }
    }
    ctx->pc = 0x32181Cu;
label_32181c:
    // 0x32181c: 0x0  nop
    ctx->pc = 0x32181cu;
    // NOP
label_321820:
    // 0x321820: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321824:
    // 0x321824: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x321824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_321828:
    // 0x321828: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_32182c:
    // 0x32182c: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x32182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_321830:
    // 0x321830: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x321830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_321834:
    // 0x321834: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x321834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_321838:
    // 0x321838: 0x60f809  jalr        $v1
label_32183c:
    if (ctx->pc == 0x32183Cu) {
        ctx->pc = 0x32183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321838u;
        // 0x32183c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321840u;
        goto label_321840;
    }
    ctx->pc = 0x321838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x321840u);
        ctx->pc = 0x32183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321838u;
        // 0x32183c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321838u, 0x321840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321840u;
label_321840:
    // 0x321840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321844:
    // 0x321844: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321848:
    // 0x321848: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32184c:
    // 0x32184c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32184cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_321850:
    // 0x321850: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x321850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_321854:
    // 0x321854: 0x3e00008  jr          $ra
label_321858:
    if (ctx->pc == 0x321858u) {
        ctx->pc = 0x321858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321854u;
        // 0x321858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32185Cu;
        goto label_32185c;
    }
    ctx->pc = 0x321854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321854u;
        // 0x321858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32185Cu;
label_32185c:
    // 0x32185c: 0x0  nop
    ctx->pc = 0x32185cu;
    // NOP
    ctx->pc = 0x321860u;
}
