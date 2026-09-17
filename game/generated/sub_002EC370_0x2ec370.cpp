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

// Function: sub_002EC370
// Address: 0x2ec370 - 0x2ec690
void sub_002EC370_0x2ec370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC370_0x2ec370");
#endif

    switch (ctx->pc) {
        case 0x2ec3bcu: goto label_2ec3bc;
        case 0x2ec3fcu: goto label_2ec3fc;
        case 0x2ec43cu: goto label_2ec43c;
        case 0x2ec47cu: goto label_2ec47c;
        case 0x2ec4bcu: goto label_2ec4bc;
        case 0x2ec4fcu: goto label_2ec4fc;
        case 0x2ec53cu: goto label_2ec53c;
        case 0x2ec57cu: goto label_2ec57c;
        case 0x2ec5bcu: goto label_2ec5bc;
        case 0x2ec5fcu: goto label_2ec5fc;
        case 0x2ec63cu: goto label_2ec63c;
        case 0x2ec67cu: goto label_2ec67c;
        default: break;
    }

    ctx->pc = 0x2ec370u;

    // 0x2ec370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec37c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ec37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ec380: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x2ec380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2ec384: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec388: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC388u;
    {
        const bool branch_taken_0x2ec388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec388) {
            ctx->pc = 0x2EC38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC388u;
            // 0x2ec38c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC3A4u;
            goto label_2ec3a4;
        }
    }
    ctx->pc = 0x2EC390u;
    // 0x2ec390: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec394: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec398: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC398u;
    {
        const bool branch_taken_0x2ec398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec398) {
            ctx->pc = 0x2EC39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC398u;
            // 0x2ec39c: 0x3c060007  lui         $a2, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC3B0u;
            goto label_2ec3b0;
        }
    }
    ctx->pc = 0x2EC3A0u;
    // 0x2ec3a0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec3a4:
    // 0x2ec3a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3a8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec3ac: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec3acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
label_2ec3b0:
    // 0x2ec3b0: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x2ec3b4: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC3B4u;
    SET_GPR_U32(ctx, 31, 0x2EC3BCu);
    ctx->pc = 0x2EC3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3B4u;
    // 0x2ec3b8: 0x34c6000c  ori         $a2, $a2, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC3B4u, 0x2EC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3BCu;
label_2ec3bc:
    // 0x2ec3bc: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x2ec3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2ec3c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec3c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC3C4u;
    {
        const bool branch_taken_0x2ec3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3c4) {
            ctx->pc = 0x2EC3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC3C4u;
            // 0x2ec3c8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC3E0u;
            goto label_2ec3e0;
        }
    }
    ctx->pc = 0x2EC3CCu;
    // 0x2ec3cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec3d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec3d4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC3D4u;
    {
        const bool branch_taken_0x2ec3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec3d4) {
            ctx->pc = 0x2EC3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC3D4u;
            // 0x2ec3d8: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC3ECu;
            goto label_2ec3ec;
        }
    }
    ctx->pc = 0x2EC3DCu;
    // 0x2ec3dc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec3e0:
    // 0x2ec3e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec3e8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec3ec:
    // 0x2ec3ec: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec3f0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2ec3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2ec3f4: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC3F4u;
    SET_GPR_U32(ctx, 31, 0x2EC3FCu);
    ctx->pc = 0x2EC3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3F4u;
    // 0x2ec3f8: 0x34c6000d  ori         $a2, $a2, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC3F4u, 0x2EC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3FCu;
label_2ec3fc:
    // 0x2ec3fc: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x2ec3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2ec400: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec404: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC404u;
    {
        const bool branch_taken_0x2ec404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec404) {
            ctx->pc = 0x2EC408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC404u;
            // 0x2ec408: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC420u;
            goto label_2ec420;
        }
    }
    ctx->pc = 0x2EC40Cu;
    // 0x2ec40c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec410: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec414: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC414u;
    {
        const bool branch_taken_0x2ec414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec414) {
            ctx->pc = 0x2EC418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC414u;
            // 0x2ec418: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC42Cu;
            goto label_2ec42c;
        }
    }
    ctx->pc = 0x2EC41Cu;
    // 0x2ec41c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec41cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec420:
    // 0x2ec420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec424: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec428: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec42c:
    // 0x2ec42c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec42cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec430: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x2ec430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x2ec434: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC434u;
    SET_GPR_U32(ctx, 31, 0x2EC43Cu);
    ctx->pc = 0x2EC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC434u;
    // 0x2ec438: 0x34c6000e  ori         $a2, $a2, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC434u, 0x2EC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC43Cu;
label_2ec43c:
    // 0x2ec43c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2ec43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2ec440: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec444: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC444u;
    {
        const bool branch_taken_0x2ec444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec444) {
            ctx->pc = 0x2EC448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC444u;
            // 0x2ec448: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC460u;
            goto label_2ec460;
        }
    }
    ctx->pc = 0x2EC44Cu;
    // 0x2ec44c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec450: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec454: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC454u;
    {
        const bool branch_taken_0x2ec454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec454) {
            ctx->pc = 0x2EC458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC454u;
            // 0x2ec458: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC46Cu;
            goto label_2ec46c;
        }
    }
    ctx->pc = 0x2EC45Cu;
    // 0x2ec45c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec45cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec460:
    // 0x2ec460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec464: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec468: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec46c:
    // 0x2ec46c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec46cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec470: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x2ec470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2ec474: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC474u;
    SET_GPR_U32(ctx, 31, 0x2EC47Cu);
    ctx->pc = 0x2EC478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC474u;
    // 0x2ec478: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC474u, 0x2EC47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC47Cu;
label_2ec47c:
    // 0x2ec47c: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x2ec47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ec480: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec484: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC484u;
    {
        const bool branch_taken_0x2ec484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec484) {
            ctx->pc = 0x2EC488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC484u;
            // 0x2ec488: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC4A0u;
            goto label_2ec4a0;
        }
    }
    ctx->pc = 0x2EC48Cu;
    // 0x2ec48c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec490: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec494: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC494u;
    {
        const bool branch_taken_0x2ec494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec494) {
            ctx->pc = 0x2EC498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC494u;
            // 0x2ec498: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC4ACu;
            goto label_2ec4ac;
        }
    }
    ctx->pc = 0x2EC49Cu;
    // 0x2ec49c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec4a0:
    // 0x2ec4a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec4a4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec4a8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec4ac:
    // 0x2ec4ac: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec4b0: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x2ec4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x2ec4b4: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC4B4u;
    SET_GPR_U32(ctx, 31, 0x2EC4BCu);
    ctx->pc = 0x2EC4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4B4u;
    // 0x2ec4b8: 0x34c60010  ori         $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC4B4u, 0x2EC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4BCu;
label_2ec4bc:
    // 0x2ec4bc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2ec4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2ec4c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec4c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC4C4u;
    {
        const bool branch_taken_0x2ec4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4c4) {
            ctx->pc = 0x2EC4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC4C4u;
            // 0x2ec4c8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC4E0u;
            goto label_2ec4e0;
        }
    }
    ctx->pc = 0x2EC4CCu;
    // 0x2ec4cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec4d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec4d4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC4D4u;
    {
        const bool branch_taken_0x2ec4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec4d4) {
            ctx->pc = 0x2EC4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC4D4u;
            // 0x2ec4d8: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC4ECu;
            goto label_2ec4ec;
        }
    }
    ctx->pc = 0x2EC4DCu;
    // 0x2ec4dc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec4e0:
    // 0x2ec4e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec4e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec4e8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec4ec:
    // 0x2ec4ec: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec4f0: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x2ec4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x2ec4f4: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC4F4u;
    SET_GPR_U32(ctx, 31, 0x2EC4FCu);
    ctx->pc = 0x2EC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4F4u;
    // 0x2ec4f8: 0x34c60011  ori         $a2, $a2, 0x11 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC4F4u, 0x2EC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4FCu;
label_2ec4fc:
    // 0x2ec4fc: 0x26050088  addiu       $a1, $s0, 0x88
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2ec500: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec504: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC504u;
    {
        const bool branch_taken_0x2ec504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec504) {
            ctx->pc = 0x2EC508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC504u;
            // 0x2ec508: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC520u;
            goto label_2ec520;
        }
    }
    ctx->pc = 0x2EC50Cu;
    // 0x2ec50c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec510: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec514: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC514u;
    {
        const bool branch_taken_0x2ec514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec514) {
            ctx->pc = 0x2EC518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC514u;
            // 0x2ec518: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC52Cu;
            goto label_2ec52c;
        }
    }
    ctx->pc = 0x2EC51Cu;
    // 0x2ec51c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec520:
    // 0x2ec520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec524: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec528: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec52c:
    // 0x2ec52c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec52cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec530: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x2ec530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x2ec534: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC534u;
    SET_GPR_U32(ctx, 31, 0x2EC53Cu);
    ctx->pc = 0x2EC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC534u;
    // 0x2ec538: 0x34c60012  ori         $a2, $a2, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC534u, 0x2EC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC53Cu;
label_2ec53c:
    // 0x2ec53c: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2ec53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ec540: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec544: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC544u;
    {
        const bool branch_taken_0x2ec544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec544) {
            ctx->pc = 0x2EC548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC544u;
            // 0x2ec548: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC560u;
            goto label_2ec560;
        }
    }
    ctx->pc = 0x2EC54Cu;
    // 0x2ec54c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec550: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec554: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC554u;
    {
        const bool branch_taken_0x2ec554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec554) {
            ctx->pc = 0x2EC558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC554u;
            // 0x2ec558: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC56Cu;
            goto label_2ec56c;
        }
    }
    ctx->pc = 0x2EC55Cu;
    // 0x2ec55c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec560:
    // 0x2ec560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec564: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec568: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec56c:
    // 0x2ec56c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec56cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec570: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x2ec570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x2ec574: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC574u;
    SET_GPR_U32(ctx, 31, 0x2EC57Cu);
    ctx->pc = 0x2EC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC574u;
    // 0x2ec578: 0x34c60013  ori         $a2, $a2, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC574u, 0x2EC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC57Cu;
label_2ec57c:
    // 0x2ec57c: 0x26050098  addiu       $a1, $s0, 0x98
    ctx->pc = 0x2ec57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x2ec580: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec584: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC584u;
    {
        const bool branch_taken_0x2ec584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec584) {
            ctx->pc = 0x2EC588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC584u;
            // 0x2ec588: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC5A0u;
            goto label_2ec5a0;
        }
    }
    ctx->pc = 0x2EC58Cu;
    // 0x2ec58c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec590: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec594: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC594u;
    {
        const bool branch_taken_0x2ec594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec594) {
            ctx->pc = 0x2EC598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC594u;
            // 0x2ec598: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC5ACu;
            goto label_2ec5ac;
        }
    }
    ctx->pc = 0x2EC59Cu;
    // 0x2ec59c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec59cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec5a0:
    // 0x2ec5a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5a4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec5a8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec5ac:
    // 0x2ec5ac: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec5b0: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x2ec5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2ec5b4: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC5B4u;
    SET_GPR_U32(ctx, 31, 0x2EC5BCu);
    ctx->pc = 0x2EC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5B4u;
    // 0x2ec5b8: 0x34c60014  ori         $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC5B4u, 0x2EC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5BCu;
label_2ec5bc:
    // 0x2ec5bc: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x2ec5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2ec5c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec5c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC5C4u;
    {
        const bool branch_taken_0x2ec5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5c4) {
            ctx->pc = 0x2EC5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC5C4u;
            // 0x2ec5c8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC5E0u;
            goto label_2ec5e0;
        }
    }
    ctx->pc = 0x2EC5CCu;
    // 0x2ec5cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec5d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec5d4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC5D4u;
    {
        const bool branch_taken_0x2ec5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec5d4) {
            ctx->pc = 0x2EC5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC5D4u;
            // 0x2ec5d8: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC5ECu;
            goto label_2ec5ec;
        }
    }
    ctx->pc = 0x2EC5DCu;
    // 0x2ec5dc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec5e0:
    // 0x2ec5e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec5e8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec5ec:
    // 0x2ec5ec: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec5f0: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x2ec5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x2ec5f4: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC5F4u;
    SET_GPR_U32(ctx, 31, 0x2EC5FCu);
    ctx->pc = 0x2EC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5F4u;
    // 0x2ec5f8: 0x34c60015  ori         $a2, $a2, 0x15 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC5F4u, 0x2EC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5FCu;
label_2ec5fc:
    // 0x2ec5fc: 0x260500a8  addiu       $a1, $s0, 0xA8
    ctx->pc = 0x2ec5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x2ec600: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec604: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC604u;
    {
        const bool branch_taken_0x2ec604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec604) {
            ctx->pc = 0x2EC608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC604u;
            // 0x2ec608: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC620u;
            goto label_2ec620;
        }
    }
    ctx->pc = 0x2EC60Cu;
    // 0x2ec60c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec610: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec614: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC614u;
    {
        const bool branch_taken_0x2ec614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec614) {
            ctx->pc = 0x2EC618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC614u;
            // 0x2ec618: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC61Cu;
    // 0x2ec61c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec61cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec620:
    // 0x2ec620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec624: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec628: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec62c:
    // 0x2ec62c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec62cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec630: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x2ec630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
    // 0x2ec634: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC634u;
    SET_GPR_U32(ctx, 31, 0x2EC63Cu);
    ctx->pc = 0x2EC638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC634u;
    // 0x2ec638: 0x34c60016  ori         $a2, $a2, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC634u, 0x2EC63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC63Cu;
label_2ec63c:
    // 0x2ec63c: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x2ec63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2ec640: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ec640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec644: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC644u;
    {
        const bool branch_taken_0x2ec644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec644) {
            ctx->pc = 0x2EC648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC644u;
            // 0x2ec648: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC660u;
            goto label_2ec660;
        }
    }
    ctx->pc = 0x2EC64Cu;
    // 0x2ec64c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec650: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ec650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ec654: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC654u;
    {
        const bool branch_taken_0x2ec654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec654) {
            ctx->pc = 0x2EC658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC654u;
            // 0x2ec658: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC66Cu;
            goto label_2ec66c;
        }
    }
    ctx->pc = 0x2EC65Cu;
    // 0x2ec65c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ec65cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ec660:
    // 0x2ec660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec664: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ec664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ec668: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ec668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ec66c:
    // 0x2ec66c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2ec66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2ec670: 0x34a5000b  ori         $a1, $a1, 0xB
    ctx->pc = 0x2ec670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
    // 0x2ec674: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EC674u;
    SET_GPR_U32(ctx, 31, 0x2EC67Cu);
    ctx->pc = 0x2EC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC674u;
    // 0x2ec678: 0x34c60017  ori         $a2, $a2, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EC674u, 0x2EC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC67Cu;
label_2ec67c:
    // 0x2ec67c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ec680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec684: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC684u;
        // 0x2ec688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC68Cu;
    // 0x2ec68c: 0x0  nop
    ctx->pc = 0x2ec68cu;
    // NOP
    ctx->pc = 0x2ec690u;
}
