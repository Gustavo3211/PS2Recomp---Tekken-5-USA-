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

// Function: sub_0023A310
// Address: 0x23a310 - 0x23a470
void sub_0023A310_0x23a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A310_0x23a310");
#endif

    switch (ctx->pc) {
        case 0x23a344u: goto label_23a344;
        case 0x23a368u: goto label_23a368;
        case 0x23a378u: goto label_23a378;
        case 0x23a390u: goto label_23a390;
        case 0x23a3a8u: goto label_23a3a8;
        case 0x23a3c0u: goto label_23a3c0;
        case 0x23a3d4u: goto label_23a3d4;
        case 0x23a3e8u: goto label_23a3e8;
        case 0x23a3fcu: goto label_23a3fc;
        case 0x23a410u: goto label_23a410;
        case 0x23a450u: goto label_23a450;
        default: break;
    }

    ctx->pc = 0x23a310u;

    // 0x23a310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a328: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23a32c: 0x920201ee  lbu         $v0, 0x1EE($s0)
    ctx->pc = 0x23a32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
    // 0x23a330: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A330u;
    {
        const bool branch_taken_0x23a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A330u;
        // 0x23a334: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a330) {
            ctx->pc = 0x23A348u;
            goto label_23a348;
        }
    }
    ctx->pc = 0x23A338u;
    // 0x23a338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a33c: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A33Cu;
    SET_GPR_U32(ctx, 31, 0x23A344u);
    ctx->pc = 0x23A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A33Cu;
    // 0x23a340: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A33Cu, 0x23A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A344u;
label_23a344:
    // 0x23a344: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23a344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a348:
    // 0x23a348: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x23a34c: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23A34Cu;
    {
        const bool branch_taken_0x23a34c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23a34c) {
            ctx->pc = 0x23A350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A34Cu;
            // 0x23a350: 0x920201ed  lbu         $v0, 0x1ED($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 493)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A3B0u;
            goto label_23a3b0;
        }
    }
    ctx->pc = 0x23A354u;
    // 0x23a354: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x23a354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x23a358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A358u;
    {
        const bool branch_taken_0x23a358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A358u;
        // 0x23a35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a358) {
            ctx->pc = 0x23A370u;
            goto label_23a370;
        }
    }
    ctx->pc = 0x23A360u;
    // 0x23a360: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A360u;
    SET_GPR_U32(ctx, 31, 0x23A368u);
    ctx->pc = 0x23A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A360u;
    // 0x23a364: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A360u, 0x23A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A368u;
label_23a368:
    // 0x23a368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A368u;
    {
        const bool branch_taken_0x23a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A368u;
        // 0x23a36c: 0x36520002  ori         $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a368) {
            ctx->pc = 0x23A37Cu;
            goto label_23a37c;
        }
    }
    ctx->pc = 0x23A370u;
label_23a370:
    // 0x23a370: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A370u;
    SET_GPR_U32(ctx, 31, 0x23A378u);
    ctx->pc = 0x23A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A370u;
    // 0x23a374: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A370u, 0x23A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A378u;
label_23a378:
    // 0x23a378: 0x36520004  ori         $s2, $s2, 0x4
    ctx->pc = 0x23a378u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_23a37c:
    // 0x23a37c: 0x920201f3  lbu         $v0, 0x1F3($s0)
    ctx->pc = 0x23a37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 499)));
    // 0x23a380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A380u;
    {
        const bool branch_taken_0x23a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A380u;
        // 0x23a384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a380) {
            ctx->pc = 0x23A394u;
            goto label_23a394;
        }
    }
    ctx->pc = 0x23A388u;
    // 0x23a388: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A388u;
    SET_GPR_U32(ctx, 31, 0x23A390u);
    ctx->pc = 0x23A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A388u;
    // 0x23a38c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A388u, 0x23A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A390u;
label_23a390:
    // 0x23a390: 0x36520008  ori         $s2, $s2, 0x8
    ctx->pc = 0x23a390u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
label_23a394:
    // 0x23a394: 0x920201f2  lbu         $v0, 0x1F2($s0)
    ctx->pc = 0x23a394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 498)));
    // 0x23a398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A398u;
    {
        const bool branch_taken_0x23a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A398u;
        // 0x23a39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a398) {
            ctx->pc = 0x23A3ACu;
            goto label_23a3ac;
        }
    }
    ctx->pc = 0x23A3A0u;
    // 0x23a3a0: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A3A0u;
    SET_GPR_U32(ctx, 31, 0x23A3A8u);
    ctx->pc = 0x23A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3A0u;
    // 0x23a3a4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A3A0u, 0x23A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3A8u;
label_23a3a8:
    // 0x23a3a8: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x23a3a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_23a3ac:
    // 0x23a3ac: 0x920201ed  lbu         $v0, 0x1ED($s0)
    ctx->pc = 0x23a3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 493)));
label_23a3b0:
    // 0x23a3b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A3B0u;
    {
        const bool branch_taken_0x23a3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3B0u;
        // 0x23a3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3b0) {
            ctx->pc = 0x23A3C0u;
            goto label_23a3c0;
        }
    }
    ctx->pc = 0x23A3B8u;
    // 0x23a3b8: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A3B8u;
    SET_GPR_U32(ctx, 31, 0x23A3C0u);
    ctx->pc = 0x23A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3B8u;
    // 0x23a3bc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A3B8u, 0x23A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3C0u;
label_23a3c0:
    // 0x23a3c0: 0x920201fb  lbu         $v0, 0x1FB($s0)
    ctx->pc = 0x23a3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 507)));
    // 0x23a3c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A3C4u;
    {
        const bool branch_taken_0x23a3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3C4u;
        // 0x23a3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3c4) {
            ctx->pc = 0x23A3D4u;
            goto label_23a3d4;
        }
    }
    ctx->pc = 0x23A3CCu;
    // 0x23a3cc: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A3CCu;
    SET_GPR_U32(ctx, 31, 0x23A3D4u);
    ctx->pc = 0x23A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3CCu;
    // 0x23a3d0: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A3CCu, 0x23A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3D4u;
label_23a3d4:
    // 0x23a3d4: 0x920201fc  lbu         $v0, 0x1FC($s0)
    ctx->pc = 0x23a3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x23a3d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A3D8u;
    {
        const bool branch_taken_0x23a3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3D8u;
        // 0x23a3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3d8) {
            ctx->pc = 0x23A3E8u;
            goto label_23a3e8;
        }
    }
    ctx->pc = 0x23A3E0u;
    // 0x23a3e0: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A3E0u;
    SET_GPR_U32(ctx, 31, 0x23A3E8u);
    ctx->pc = 0x23A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3E0u;
    // 0x23a3e4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A3E0u, 0x23A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3E8u;
label_23a3e8:
    // 0x23a3e8: 0x920201fd  lbu         $v0, 0x1FD($s0)
    ctx->pc = 0x23a3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 509)));
    // 0x23a3ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A3ECu;
    {
        const bool branch_taken_0x23a3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3ECu;
        // 0x23a3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3ec) {
            ctx->pc = 0x23A3FCu;
            goto label_23a3fc;
        }
    }
    ctx->pc = 0x23A3F4u;
    // 0x23a3f4: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A3F4u;
    SET_GPR_U32(ctx, 31, 0x23A3FCu);
    ctx->pc = 0x23A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3F4u;
    // 0x23a3f8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A3F4u, 0x23A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3FCu;
label_23a3fc:
    // 0x23a3fc: 0x9202020a  lbu         $v0, 0x20A($s0)
    ctx->pc = 0x23a3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x23a400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A400u;
    {
        const bool branch_taken_0x23a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A400u;
        // 0x23a404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a400) {
            ctx->pc = 0x23A410u;
            goto label_23a410;
        }
    }
    ctx->pc = 0x23A408u;
    // 0x23a408: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A408u;
    SET_GPR_U32(ctx, 31, 0x23A410u);
    ctx->pc = 0x23A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A408u;
    // 0x23a40c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A408u, 0x23A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A410u;
label_23a410:
    // 0x23a410: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x23a414: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23a418: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23A418u;
    {
        const bool branch_taken_0x23a418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A418u;
        // 0x23a41c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a418) {
            ctx->pc = 0x23A458u;
            goto label_23a458;
        }
    }
    ctx->pc = 0x23A420u;
    // 0x23a420: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x23a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x23a424: 0x24047eb4  addiu       $a0, $zero, 0x7EB4
    ctx->pc = 0x23a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32436));
    // 0x23a428: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x23a428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23a42c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23A42Cu;
    {
        const bool branch_taken_0x23a42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A42Cu;
        // 0x23a430: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a42c) {
            ctx->pc = 0x23A458u;
            goto label_23a458;
        }
    }
    ctx->pc = 0x23A434u;
    // 0x23a434: 0x8603009e  lh          $v1, 0x9E($s0)
    ctx->pc = 0x23a434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x23a438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a43c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A43Cu;
    {
        const bool branch_taken_0x23a43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a43c) {
            ctx->pc = 0x23A440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A43Cu;
            // 0x23a440: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A458u;
            goto label_23a458;
        }
    }
    ctx->pc = 0x23A444u;
    // 0x23a444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a448: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A448u;
    SET_GPR_U32(ctx, 31, 0x23A450u);
    ctx->pc = 0x23A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A448u;
    // 0x23a44c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A448u, 0x23A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A450u;
label_23a450:
    // 0x23a450: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x23a450u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x23a454: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23a454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a458:
    // 0x23a458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a464: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23a464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a468: 0x3e00008  jr          $ra
    ctx->pc = 0x23A468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A468u;
        // 0x23a46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A470u;
}
