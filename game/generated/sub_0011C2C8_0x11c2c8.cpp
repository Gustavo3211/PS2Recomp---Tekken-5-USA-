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

// Function: sub_0011C2C8
// Address: 0x11c2c8 - 0x11c4d0
void sub_0011C2C8_0x11c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C2C8_0x11c2c8");
#endif

    switch (ctx->pc) {
        case 0x11c2e8u: goto label_11c2e8;
        case 0x11c2f4u: goto label_11c2f4;
        case 0x11c320u: goto label_11c320;
        case 0x11c338u: goto label_11c338;
        case 0x11c34cu: goto label_11c34c;
        case 0x11c35cu: goto label_11c35c;
        case 0x11c370u: goto label_11c370;
        case 0x11c378u: goto label_11c378;
        case 0x11c398u: goto label_11c398;
        case 0x11c3acu: goto label_11c3ac;
        case 0x11c3d0u: goto label_11c3d0;
        case 0x11c3d8u: goto label_11c3d8;
        case 0x11c420u: goto label_11c420;
        default: break;
    }

    ctx->pc = 0x11c2c8u;

    // 0x11c2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c2cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11c2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c2dc: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11c2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x11c2e0: 0xc046e74  jal         func_11B9D0
    ctx->pc = 0x11C2E0u;
    SET_GPR_U32(ctx, 31, 0x11C2E8u);
    ctx->pc = 0x11C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2E0u;
    // 0x11c2e4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B9D0u, 0x11C2E0u, 0x11C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2E8u;
label_11c2e8:
    // 0x11c2e8: 0x8e0427ec  lw          $a0, 0x27EC($s0)
    ctx->pc = 0x11c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10220)));
    // 0x11c2ec: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x11C2ECu;
    SET_GPR_U32(ctx, 31, 0x11C2F4u);
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x11C2ECu, 0x11C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2F4u;
label_11c2f4:
    // 0x11c2f4: 0x8e0327ec  lw          $v1, 0x27EC($s0)
    ctx->pc = 0x11c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10220)));
    // 0x11c2f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11C2F8u;
    {
        const bool branch_taken_0x11c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F8u;
        // 0x11c2fc: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f8) {
            ctx->pc = 0x11C328u;
            goto label_11c328;
        }
    }
    ctx->pc = 0x11C300u;
    // 0x11c300: 0x8c4327d0  lw          $v1, 0x27D0($v0)
    ctx->pc = 0x11c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10192)));
    // 0x11c304: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C304u;
    {
        const bool branch_taken_0x11c304 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C304u;
        // 0x11c308: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c304) {
            ctx->pc = 0x11C34Cu;
            goto label_11c34c;
        }
    }
    ctx->pc = 0x11C30Cu;
    // 0x11c30c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11c310: 0x8c4627d8  lw          $a2, 0x27D8($v0)
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10200)));
    // 0x11c314: 0x2484e6a0  addiu       $a0, $a0, -0x1960
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960800));
    // 0x11c318: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C318u;
    SET_GPR_U32(ctx, 31, 0x11C320u);
    ctx->pc = 0x11C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C318u;
    // 0x11c31c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C318u, 0x11C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C320u;
label_11c320:
    // 0x11c320: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11C320u;
    {
        const bool branch_taken_0x11c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C320u;
        // 0x11c324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c320) {
            ctx->pc = 0x11C408u;
            goto label_11c408;
        }
    }
    ctx->pc = 0x11C328u;
label_11c328:
    // 0x11c328: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c330: 0xc047096  jal         func_11C258
    ctx->pc = 0x11C330u;
    SET_GPR_U32(ctx, 31, 0x11C338u);
    ctx->pc = 0x11C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C330u;
    // 0x11c334: 0xac5127d8  sw          $s1, 0x27D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 10200), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C258u, 0x11C330u, 0x11C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C338u;
label_11c338:
    // 0x11c338: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C338u;
    {
        const bool branch_taken_0x11c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C338u;
        // 0x11c33c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c338) {
            ctx->pc = 0x11C354u;
            goto label_11c354;
        }
    }
    ctx->pc = 0x11C340u;
    // 0x11c340: 0x8e0427ec  lw          $a0, 0x27EC($s0)
    ctx->pc = 0x11c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10220)));
    // 0x11c344: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11C344u;
    SET_GPR_U32(ctx, 31, 0x11C34Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11C344u, 0x11C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C34Cu;
label_11c34c:
    // 0x11c34c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11C34Cu;
    {
        const bool branch_taken_0x11c34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C34Cu;
        // 0x11c350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c34c) {
            ctx->pc = 0x11C408u;
            goto label_11c408;
        }
    }
    ctx->pc = 0x11C354u;
label_11c354:
    // 0x11c354: 0xc0449ca  jal         func_112728
    ctx->pc = 0x11C354u;
    SET_GPR_U32(ctx, 31, 0x11C35Cu);
    ctx->pc = 0x11C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C354u;
    // 0x11c358: 0x3c120013  lui         $s2, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x11C354u, 0x11C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C35Cu;
label_11c35c:
    // 0x11c35c: 0x8e422814  lw          $v0, 0x2814($s2)
    ctx->pc = 0x11c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10260)));
    // 0x11c360: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11C360u;
    {
        const bool branch_taken_0x11c360 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C360u;
        // 0x11c364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c360) {
            ctx->pc = 0x11C408u;
            goto label_11c408;
        }
    }
    ctx->pc = 0x11C368u;
    // 0x11c368: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11C368u;
    {
        const bool branch_taken_0x11c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C368u;
        // 0x11c36c: 0x3c110013  lui         $s1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c368) {
            ctx->pc = 0x11C394u;
            goto label_11c394;
        }
    }
    ctx->pc = 0x11C370u;
label_11c370:
    // 0x11c370: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11c374: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c378:
    // 0x11c378: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c37c: 0x0  nop
    ctx->pc = 0x11c37cu;
    // NOP
    // 0x11c380: 0x0  nop
    ctx->pc = 0x11c380u;
    // NOP
    // 0x11c384: 0x0  nop
    ctx->pc = 0x11c384u;
    // NOP
    // 0x11c388: 0x0  nop
    ctx->pc = 0x11c388u;
    // NOP
    // 0x11c38c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C38Cu;
    {
        const bool branch_taken_0x11c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c38c) {
            ctx->pc = 0x11C378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c378;
        }
    }
    ctx->pc = 0x11C394u;
label_11c394:
    // 0x11c394: 0x26304340  addiu       $s0, $s1, 0x4340
    ctx->pc = 0x11c394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17216));
label_11c398:
    // 0x11c398: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11c398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11c39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3a0: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x11c3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x11c3a4: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x11C3A4u;
    SET_GPR_U32(ctx, 31, 0x11C3ACu);
    ctx->pc = 0x11C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3A4u;
    // 0x11c3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x11C3A4u, 0x11C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3ACu;
label_11c3ac:
    // 0x11c3ac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C3ACu;
    {
        const bool branch_taken_0x11c3ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c3ac) {
            ctx->pc = 0x11C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C3ACu;
            // 0x11c3b0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C3FCu;
            goto label_11c3fc;
        }
    }
    ctx->pc = 0x11C3B4u;
    // 0x11c3b4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c3b8: 0x8c4327d0  lw          $v1, 0x27D0($v0)
    ctx->pc = 0x11c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1327D0u));
    // 0x11c3bc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C3BCu;
    {
        const bool branch_taken_0x11c3bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3BCu;
        // 0x11c3c0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3bc) {
            ctx->pc = 0x11C3D4u;
            goto label_11c3d4;
        }
    }
    ctx->pc = 0x11C3C4u;
    // 0x11c3c4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11c3c8: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C3C8u;
    SET_GPR_U32(ctx, 31, 0x11C3D0u);
    ctx->pc = 0x11C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3C8u;
    // 0x11c3cc: 0x2484e6c8  addiu       $a0, $a0, -0x1938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C3C8u, 0x11C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3D0u;
label_11c3d0:
    // 0x11c3d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11c3d4:
    // 0x11c3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c3d8:
    // 0x11c3d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c3dc: 0x0  nop
    ctx->pc = 0x11c3dcu;
    // NOP
    // 0x11c3e0: 0x0  nop
    ctx->pc = 0x11c3e0u;
    // NOP
    // 0x11c3e4: 0x0  nop
    ctx->pc = 0x11c3e4u;
    // NOP
    // 0x11c3e8: 0x0  nop
    ctx->pc = 0x11c3e8u;
    // NOP
    // 0x11c3ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C3ECu;
    {
        const bool branch_taken_0x11c3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c3ec) {
            ctx->pc = 0x11C3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c3d8;
        }
    }
    ctx->pc = 0x11C3F4u;
    // 0x11c3f4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11C3F4u;
    {
        const bool branch_taken_0x11c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3F4u;
        // 0x11c3f8: 0x26304340  addiu       $s0, $s1, 0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3f4) {
            ctx->pc = 0x11C398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c398;
        }
    }
    ctx->pc = 0x11C3FCu;
label_11c3fc:
    // 0x11c3fc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11C3FCu;
    {
        const bool branch_taken_0x11c3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3FCu;
        // 0x11c400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3fc) {
            ctx->pc = 0x11C370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c370;
        }
    }
    ctx->pc = 0x11C404u;
    // 0x11c404: 0xae402814  sw          $zero, 0x2814($s2)
    ctx->pc = 0x11c404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10260), GPR_U32(ctx, 0));
label_11c408:
    // 0x11c408: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c40c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c410: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11c410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c418: 0x3e00008  jr          $ra
    ctx->pc = 0x11C418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C418u;
        // 0x11c41c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C420u;
label_11c420:
    // 0x11c420: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x11c420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x11c424: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x11C424u;
    {
        const bool branch_taken_0x11c424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C424u;
        // 0x11c428: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c424) {
            ctx->pc = 0x11C4C0u;
            goto label_11c4c0;
        }
    }
    ctx->pc = 0x11C42Cu;
    // 0x11c42c: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x11c42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x11c430: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11C430u;
    {
        const bool branch_taken_0x11c430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C430u;
        // 0x11c434: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c430) {
            ctx->pc = 0x11C4B8u;
            goto label_11c4b8;
        }
    }
    ctx->pc = 0x11C438u;
    // 0x11c438: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x11c438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x11c43c: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11C43Cu;
    {
        const bool branch_taken_0x11c43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C43Cu;
        // 0x11c440: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c43c) {
            ctx->pc = 0x11C4B0u;
            goto label_11c4b0;
        }
    }
    ctx->pc = 0x11C444u;
    // 0x11c444: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x11c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x11c448: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11C448u;
    {
        const bool branch_taken_0x11c448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C448u;
        // 0x11c44c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c448) {
            ctx->pc = 0x11C4A8u;
            goto label_11c4a8;
        }
    }
    ctx->pc = 0x11C450u;
    // 0x11c450: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x11c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x11c454: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C454u;
    {
        const bool branch_taken_0x11c454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C454u;
        // 0x11c458: 0x34028013  ori         $v0, $zero, 0x8013 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32787);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c454) {
            ctx->pc = 0x11C498u;
            goto label_11c498;
        }
    }
    ctx->pc = 0x11C45Cu;
    // 0x11c45c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11C45Cu;
    {
        const bool branch_taken_0x11c45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C45Cu;
        // 0x11c460: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c45c) {
            ctx->pc = 0x11C490u;
            goto label_11c490;
        }
    }
    ctx->pc = 0x11C464u;
    // 0x11c464: 0x34028012  ori         $v0, $zero, 0x8012
    ctx->pc = 0x11c464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32786);
    // 0x11c468: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C468u;
    {
        const bool branch_taken_0x11c468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C468u;
        // 0x11c46c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c468) {
            ctx->pc = 0x11C488u;
            goto label_11c488;
        }
    }
    ctx->pc = 0x11C470u;
    // 0x11c470: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x11c470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x11c474: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C474u;
    {
        const bool branch_taken_0x11c474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c474) {
            ctx->pc = 0x11C478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C474u;
            // 0x11c478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C47Cu;
    // 0x11c47c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c480: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11C480u;
    {
        const bool branch_taken_0x11c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C480u;
        // 0x11c484: 0x24424340  addiu       $v0, $v0, 0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c480) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C488u;
label_11c488:
    // 0x11c488: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11C488u;
    {
        const bool branch_taken_0x11c488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C488u;
        // 0x11c48c: 0x24423e00  addiu       $v0, $v0, 0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c488) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C490u;
label_11c490:
    // 0x11c490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11C490u;
    {
        const bool branch_taken_0x11c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C490u;
        // 0x11c494: 0x244239c0  addiu       $v0, $v0, 0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c490) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C498u;
label_11c498:
    // 0x11c498: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c49c: 0x8c4227ec  lw          $v0, 0x27EC($v0)
    ctx->pc = 0x11c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1327ECu));
    // 0x11c4a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A0u;
        // 0x11c4a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11C4C8u;
            goto label_11c4c8;
        }
    }
    ctx->pc = 0x11C4A8u;
label_11c4a8:
    // 0x11c4a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11C4A8u;
    {
        const bool branch_taken_0x11c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A8u;
        // 0x11c4ac: 0x24423990  addiu       $v0, $v0, 0x3990 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a8) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C4B0u;
label_11c4b0:
    // 0x11c4b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11C4B0u;
    {
        const bool branch_taken_0x11c4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4B0u;
        // 0x11c4b4: 0x244228c0  addiu       $v0, $v0, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4b0) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C4B8u;
label_11c4b8:
    // 0x11c4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C4B8u;
    {
        const bool branch_taken_0x11c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4B8u;
        // 0x11c4bc: 0x24422840  addiu       $v0, $v0, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4b8) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C4C0u;
label_11c4c0:
    // 0x11c4c0: 0x8c4227e8  lw          $v0, 0x27E8($v0)
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10216)));
label_11c4c4:
    // 0x11c4c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11c4c8:
    // 0x11c4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4C8u;
        // 0x11c4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C4D0u;
}
