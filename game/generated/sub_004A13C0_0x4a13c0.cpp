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

// Function: sub_004A13C0
// Address: 0x4a13c0 - 0x4a1738
void sub_004A13C0_0x4a13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A13C0_0x4a13c0");
#endif

    switch (ctx->pc) {
        case 0x4a1404u: goto label_4a1404;
        case 0x4a1428u: goto label_4a1428;
        case 0x4a1430u: goto label_4a1430;
        case 0x4a1470u: goto label_4a1470;
        case 0x4a1478u: goto label_4a1478;
        case 0x4a14b8u: goto label_4a14b8;
        case 0x4a14e8u: goto label_4a14e8;
        case 0x4a153cu: goto label_4a153c;
        case 0x4a1568u: goto label_4a1568;
        case 0x4a1598u: goto label_4a1598;
        case 0x4a15ccu: goto label_4a15cc;
        case 0x4a15e4u: goto label_4a15e4;
        case 0x4a15f8u: goto label_4a15f8;
        case 0x4a160cu: goto label_4a160c;
        case 0x4a1618u: goto label_4a1618;
        case 0x4a1648u: goto label_4a1648;
        case 0x4a1690u: goto label_4a1690;
        default: break;
    }

    ctx->pc = 0x4a13c0u;

    // 0x4a13c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a13c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a13c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a13c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a13cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a13ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a13d0: 0x2653007e  addiu       $s3, $s2, 0x7E
    ctx->pc = 0x4a13d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 126));
    // 0x4a13d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a13d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a13d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a13dc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a13dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a13e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a13e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a13e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a13e8: 0x9642007c  lhu         $v0, 0x7C($s2)
    ctx->pc = 0x4a13e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x4a13ec: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4a13ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a13f0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4a13f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a13f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A13F4u;
    {
        const bool branch_taken_0x4a13f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a13f4) {
            ctx->pc = 0x4A13F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A13F4u;
            // 0x4a13f8: 0x26500074  addiu       $s0, $s2, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1410u;
            goto label_4a1410;
        }
    }
    ctx->pc = 0x4A13FCu;
    // 0x4a13fc: 0xc1283e2  jal         func_4A0F88
    ctx->pc = 0x4A13FCu;
    SET_GPR_U32(ctx, 31, 0x4A1404u);
    ctx->pc = 0x4A0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0F88u, 0x4A13FCu, 0x4A1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1404u;
label_4a1404:
    // 0x4a1404: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x4A1404u;
    {
        const bool branch_taken_0x4a1404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1404u;
        // 0x4a1408: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1404) {
            ctx->pc = 0x4A1628u;
            goto label_4a1628;
        }
    }
    ctx->pc = 0x4A140Cu;
    // 0x4a140c: 0x0  nop
    ctx->pc = 0x4a140cu;
    // NOP
label_4a1410:
    // 0x4a1410: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a1410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1414: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a1414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a1418: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4a1418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a141c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A141Cu;
    {
        const bool branch_taken_0x4a141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A141Cu;
        // 0x4a1420: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a141c) {
            ctx->pc = 0x4A1450u;
            goto label_4a1450;
        }
    }
    ctx->pc = 0x4A1424u;
    // 0x4a1424: 0x0  nop
    ctx->pc = 0x4a1424u;
    // NOP
label_4a1428:
    // 0x4a1428: 0xc123882  jal         func_48E208
    ctx->pc = 0x4A1428u;
    SET_GPR_U32(ctx, 31, 0x4A1430u);
    ctx->pc = 0x48E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E208u, 0x4A1428u, 0x4A1430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1430u;
label_4a1430:
    // 0x4a1430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a1430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1434: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a1434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1438: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a1438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a143c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a143cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a1440: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A1440u;
    {
        const bool branch_taken_0x4a1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1440u;
        // 0x4a1444: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1440) {
            ctx->pc = 0x4A1428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1428;
        }
    }
    ctx->pc = 0x4A1448u;
    // 0x4a1448: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x4a1448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x4a144c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a144cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4a1450:
    // 0x4a1450: 0x26500078  addiu       $s0, $s2, 0x78
    ctx->pc = 0x4a1450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x4a1454: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a1454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1458: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a1458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a145c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a145cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a1460: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a1460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a1464: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A1464u;
    {
        const bool branch_taken_0x4a1464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1464u;
        // 0x4a1468: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1464) {
            ctx->pc = 0x4A1498u;
            goto label_4a1498;
        }
    }
    ctx->pc = 0x4A146Cu;
    // 0x4a146c: 0x0  nop
    ctx->pc = 0x4a146cu;
    // NOP
label_4a1470:
    // 0x4a1470: 0xc123882  jal         func_48E208
    ctx->pc = 0x4A1470u;
    SET_GPR_U32(ctx, 31, 0x4A1478u);
    ctx->pc = 0x48E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E208u, 0x4A1470u, 0x4A1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1478u;
label_4a1478:
    // 0x4a1478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a147c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a147cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1480: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a1480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a1484: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a1484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a1488: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A1488u;
    {
        const bool branch_taken_0x4a1488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1488u;
        // 0x4a148c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1488) {
            ctx->pc = 0x4A1470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1470;
        }
    }
    ctx->pc = 0x4A1490u;
    // 0x4a1490: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x4a1490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x4a1494: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a1494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4a1498:
    // 0x4a1498: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x4a1498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x4a149c: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4a149cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a14a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a14a4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a14a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a14a8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4a14a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a14ac: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4A14ACu;
    {
        const bool branch_taken_0x4a14ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a14ac) {
            ctx->pc = 0x4A14B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A14ACu;
            // 0x4a14b0: 0x96640000  lhu         $a0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A14ECu;
            goto label_4a14ec;
        }
    }
    ctx->pc = 0x4A14B4u;
    // 0x4a14b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4a14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4a14b8:
    // 0x4a14b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a14bc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a14bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a14c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4a14c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a14c4: 0x0  nop
    ctx->pc = 0x4a14c4u;
    // NOP
    // 0x4a14c8: 0x0  nop
    ctx->pc = 0x4a14c8u;
    // NOP
    // 0x4a14cc: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A14CCu;
    {
        const bool branch_taken_0x4a14cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a14cc) {
            ctx->pc = 0x4A14D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A14CCu;
            // 0x4a14d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A14B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a14b8;
        }
    }
    ctx->pc = 0x4A14D4u;
    // 0x4a14d4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4a14d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x4a14d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a14d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a14dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14e0: 0xc1284a4  jal         func_4A1290
    ctx->pc = 0x4A14E0u;
    SET_GPR_U32(ctx, 31, 0x4A14E8u);
    ctx->pc = 0x4A14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A14E0u;
    // 0x4a14e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1290u, 0x4A14E0u, 0x4A14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A14E8u;
label_4a14e8:
    // 0x4a14e8: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4a14e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4a14ec:
    // 0x4a14ec: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x4a14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x4a14f0: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4a14f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4a14f4: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x4a14f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a14f8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a14fc: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4a14fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4a1500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1504: 0x8e272294  lw          $a3, 0x2294($s1)
    ctx->pc = 0x4a1504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8852)));
    // 0x4a1508: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a1508u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a150c: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x4a150cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4a1510: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a1514: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a1514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a151c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1524: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a1524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1528: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a152c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a152cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1530: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4a1530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a1534: 0xc12837c  jal         func_4A0DF0
    ctx->pc = 0x4A1534u;
    SET_GPR_U32(ctx, 31, 0x4A153Cu);
    ctx->pc = 0x4A1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1534u;
    // 0x4a1538: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0DF0u, 0x4A1534u, 0x4A153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A153Cu;
label_4a153c:
    // 0x4a153c: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x4a153cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x4a1540: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1544: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a1548: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a154c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1550: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a1550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1554: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a1554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a1558: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a1558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a155c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a155cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1560: 0xc12837c  jal         func_4A0DF0
    ctx->pc = 0x4A1560u;
    SET_GPR_U32(ctx, 31, 0x4A1568u);
    ctx->pc = 0x4A1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1560u;
    // 0x4a1564: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0DF0u, 0x4A1560u, 0x4A1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1568u;
label_4a1568:
    // 0x4a1568: 0x26470054  addiu       $a3, $s2, 0x54
    ctx->pc = 0x4a1568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x4a156c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a1570: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1574: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1578: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a1578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a157c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a157cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a1580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a1580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1588: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a1588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a158c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a158cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a1590: 0xc128318  jal         func_4A0C60
    ctx->pc = 0x4A1590u;
    SET_GPR_U32(ctx, 31, 0x4A1598u);
    ctx->pc = 0x4A1594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1590u;
    // 0x4a1594: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0C60u, 0x4A1590u, 0x4A1598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1598u;
label_4a1598:
    // 0x4a1598: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x4a1598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x4a159c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a15a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a15a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a15a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a15a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a15a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a15ac: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a15acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a15b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a15b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a15b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a15b8: 0x86222268  lh          $v0, 0x2268($s1)
    ctx->pc = 0x4a15b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8808)));
    // 0x4a15bc: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A15BCu;
    {
        const bool branch_taken_0x4a15bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4a15bc) {
            ctx->pc = 0x4A15C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A15BCu;
            // 0x4a15c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A15D8u;
            goto label_4a15d8;
        }
    }
    ctx->pc = 0x4A15C4u;
    // 0x4a15c4: 0xc128642  jal         func_4A1908
    ctx->pc = 0x4A15C4u;
    SET_GPR_U32(ctx, 31, 0x4A15CCu);
    ctx->pc = 0x4A15C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A15C4u;
    // 0x4a15c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1908u, 0x4A15C4u, 0x4A15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A15CCu;
label_4a15cc:
    // 0x4a15cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A15CCu;
    {
        const bool branch_taken_0x4a15cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a15cc) {
            ctx->pc = 0x4A1610u;
            goto label_4a1610;
        }
    }
    ctx->pc = 0x4A15D4u;
    // 0x4a15d4: 0x0  nop
    ctx->pc = 0x4a15d4u;
    // NOP
label_4a15d8:
    // 0x4a15d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a15d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a15dc: 0xc12837c  jal         func_4A0DF0
    ctx->pc = 0x4A15DCu;
    SET_GPR_U32(ctx, 31, 0x4A15E4u);
    ctx->pc = 0x4A15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A15DCu;
    // 0x4a15e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0DF0u, 0x4A15DCu, 0x4A15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A15E4u;
label_4a15e4:
    // 0x4a15e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a15e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a15e8: 0xa642001c  sh          $v0, 0x1C($s2)
    ctx->pc = 0x4a15e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a15ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a15ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a15f0: 0xc12837c  jal         func_4A0DF0
    ctx->pc = 0x4A15F0u;
    SET_GPR_U32(ctx, 31, 0x4A15F8u);
    ctx->pc = 0x4A15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A15F0u;
    // 0x4a15f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0DF0u, 0x4A15F0u, 0x4A15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A15F8u;
label_4a15f8:
    // 0x4a15f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a15f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a15fc: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x4a15fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1600: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a1600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1604: 0xc12837c  jal         func_4A0DF0
    ctx->pc = 0x4A1604u;
    SET_GPR_U32(ctx, 31, 0x4A160Cu);
    ctx->pc = 0x4A1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1604u;
    // 0x4a1608: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0DF0u, 0x4A1604u, 0x4A160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A160Cu;
label_4a160c:
    // 0x4a160c: 0xa642002c  sh          $v0, 0x2C($s2)
    ctx->pc = 0x4a160cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
label_4a1610:
    // 0x4a1610: 0xc1282e2  jal         func_4A0B88
    ctx->pc = 0x4A1610u;
    SET_GPR_U32(ctx, 31, 0x4A1618u);
    ctx->pc = 0x4A1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1610u;
    // 0x4a1614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0B88u, 0x4A1610u, 0x4A1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1618u;
label_4a1618:
    // 0x4a1618: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a1618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a161c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a1620: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4a1620u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1624: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a1624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1628:
    // 0x4a1628: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a1628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a162c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a162cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a1630: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a1630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a1634: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a1634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a1638: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a1638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a163c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a163cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a1640: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1640u;
        // 0x4a1644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1648u;
label_4a1648:
    // 0x4a1648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a1648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a164c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a1650: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4a1650u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4a1654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a1654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a1658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a1658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a165c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a1660: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4a1660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4a1664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a1664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a1668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a166c: 0x8e062280  lw          $a2, 0x2280($s0)
    ctx->pc = 0x4a166cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x72F900u));
    // 0x4a1670: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a1674: 0xae022288  sw          $v0, 0x2288($s0)
    ctx->pc = 0x4a1674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F908u, _value); } while (0);
    // 0x4a1678: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4a1678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a167c: 0xae03228c  sw          $v1, 0x228C($s0)
    ctx->pc = 0x4a167cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F90Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F90Cu, _value); } while (0);
    // 0x4a1680: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4a1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a1684: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x4a1684u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D718u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D718u, _value); } while (0);
    // 0x4a1688: 0xc1284ba  jal         func_4A12E8
    ctx->pc = 0x4A1688u;
    SET_GPR_U32(ctx, 31, 0x4A1690u);
    ctx->pc = 0x4A168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1688u;
    // 0x4a168c: 0xae022284  sw          $v0, 0x2284($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A12E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A12E8u, 0x4A1688u, 0x4A1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1690u;
label_4a1690:
    // 0x4a1690: 0x8e052294  lw          $a1, 0x2294($s0)
    ctx->pc = 0x4a1690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8852)));
    // 0x4a1694: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4a1694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1698: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a1698u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a169c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a169cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a16a0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a16a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a16a4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4a16a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4a16a8: 0x26280004  addiu       $t0, $s1, 0x4
    ctx->pc = 0x4a16a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4a16ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a16acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a16b0: 0x26290008  addiu       $t1, $s1, 0x8
    ctx->pc = 0x4a16b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4a16b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a16b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a16b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a16b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a16bc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a16bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a16c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a16c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a16c4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a16c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a16c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a16cc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a16ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a16d0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a16d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a16d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a16d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a16dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a16dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a16e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a16e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a16e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a16e8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a16e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a16ec: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a16ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a16f0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a16f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a16f4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a16f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a16fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a16fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a1700: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1704: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a1708: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a1708u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4a170c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a170cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1710: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a1710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a1714: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x4a1714u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1718: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a1718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a171c: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x4a171cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1720: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x4a1720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4a1724: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x4a1724u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a1728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a172c: 0x8124068  j           func_4901A0
    ctx->pc = 0x4A172Cu;
    ctx->pc = 0x4A1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A172Cu;
    // 0x4a1730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4901A0u;
    sub_004901A0_0x4901a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4A1734u;
    // 0x4a1734: 0x0  nop
    ctx->pc = 0x4a1734u;
    // NOP
    ctx->pc = 0x4a1738u;
}
