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

// Function: sub_002E1360
// Address: 0x2e1360 - 0x2e1528
void sub_002E1360_0x2e1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1360_0x2e1360");
#endif

    switch (ctx->pc) {
        case 0x2e13d4u: goto label_2e13d4;
        default: break;
    }

    ctx->pc = 0x2e1360u;

    // 0x2e1360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e136c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1370: 0x26050074  addiu       $a1, $s0, 0x74
    ctx->pc = 0x2e1370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x2e1374: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1378u;
    {
        const bool branch_taken_0x2e1378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1378u;
        // 0x2e137c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1378) {
            ctx->pc = 0x2E1390u;
            goto label_2e1390;
        }
    }
    ctx->pc = 0x2E1380u;
    // 0x2e1380: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1384: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e1384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e1388: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1388u;
    {
        const bool branch_taken_0x2e1388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1388) {
            ctx->pc = 0x2E139Cu;
            goto label_2e139c;
        }
    }
    ctx->pc = 0x2E1390u;
label_2e1390:
    // 0x2e1390: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e1390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e1394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1398: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e1398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e139c:
    // 0x2e139c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E139Cu;
    {
        const bool branch_taken_0x2e139c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E139Cu;
        // 0x2e13a0: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e139c) {
            ctx->pc = 0x2E13D8u;
            goto label_2e13d8;
        }
    }
    ctx->pc = 0x2E13A4u;
    // 0x2e13a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e13a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E13A8u;
    {
        const bool branch_taken_0x2e13a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e13a8) {
            ctx->pc = 0x2E13ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E13A8u;
            // 0x2e13ac: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E13C4u;
            goto label_2e13c4;
        }
    }
    ctx->pc = 0x2E13B0u;
    // 0x2e13b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e13b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e13b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E13B8u;
    {
        const bool branch_taken_0x2e13b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e13b8) {
            ctx->pc = 0x2E13CCu;
            goto label_2e13cc;
        }
    }
    ctx->pc = 0x2E13C0u;
    // 0x2e13c0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e13c4:
    // 0x2e13c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e13c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e13cc:
    // 0x2e13cc: 0xc0b8612  jal         func_2E1848
    ctx->pc = 0x2E13CCu;
    SET_GPR_U32(ctx, 31, 0x2E13D4u);
    ctx->pc = 0x2E1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1848u, 0x2E13CCu, 0x2E13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13D4u;
label_2e13d4:
    // 0x2e13d4: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x2e13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_2e13d8:
    // 0x2e13d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e13dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E13DCu;
    {
        const bool branch_taken_0x2e13dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13DCu;
        // 0x2e13e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13dc) {
            ctx->pc = 0x2E13F4u;
            goto label_2e13f4;
        }
    }
    ctx->pc = 0x2E13E4u;
    // 0x2e13e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e13e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e13ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E13ECu;
    {
        const bool branch_taken_0x2e13ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e13ec) {
            ctx->pc = 0x2E1400u;
            goto label_2e1400;
        }
    }
    ctx->pc = 0x2E13F4u;
label_2e13f4:
    // 0x2e13f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e13f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e13f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e1400:
    // 0x2e1400: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1400u;
    {
        const bool branch_taken_0x2e1400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1400) {
            ctx->pc = 0x2E1404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1400u;
            // 0x2e1404: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1444u;
            goto label_2e1444;
        }
    }
    ctx->pc = 0x2E1408u;
    // 0x2e1408: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e140c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E140Cu;
    {
        const bool branch_taken_0x2e140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E140Cu;
        // 0x2e1410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e140c) {
            ctx->pc = 0x2E1424u;
            goto label_2e1424;
        }
    }
    ctx->pc = 0x2E1414u;
    // 0x2e1414: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1418: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e141c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E141Cu;
    {
        const bool branch_taken_0x2e141c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e141c) {
            ctx->pc = 0x2E1420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E141Cu;
            // 0x2e1420: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1434u;
            goto label_2e1434;
        }
    }
    ctx->pc = 0x2E1424u;
label_2e1424:
    // 0x2e1424: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e1428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e142c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e142cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1430: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e1430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e1434:
    // 0x2e1434: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e1434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e143c: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e143cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e1440: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x2e1440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_2e1444:
    // 0x2e1444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1448u;
    {
        const bool branch_taken_0x2e1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1448u;
        // 0x2e144c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1448) {
            ctx->pc = 0x2E1460u;
            goto label_2e1460;
        }
    }
    ctx->pc = 0x2E1450u;
    // 0x2e1450: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1454: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1458: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1458u;
    {
        const bool branch_taken_0x2e1458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1458) {
            ctx->pc = 0x2E146Cu;
            goto label_2e146c;
        }
    }
    ctx->pc = 0x2E1460u;
label_2e1460:
    // 0x2e1460: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1468: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e146c:
    // 0x2e146c: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E146Cu;
    {
        const bool branch_taken_0x2e146c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e146c) {
            ctx->pc = 0x2E1470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E146Cu;
            // 0x2e1470: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E14B0u;
            goto label_2e14b0;
        }
    }
    ctx->pc = 0x2E1474u;
    // 0x2e1474: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1478u;
    {
        const bool branch_taken_0x2e1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1478u;
        // 0x2e147c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1478) {
            ctx->pc = 0x2E1490u;
            goto label_2e1490;
        }
    }
    ctx->pc = 0x2E1480u;
    // 0x2e1480: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1484: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1488: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1488u;
    {
        const bool branch_taken_0x2e1488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1488) {
            ctx->pc = 0x2E148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1488u;
            // 0x2e148c: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E14A0u;
            goto label_2e14a0;
        }
    }
    ctx->pc = 0x2E1490u;
label_2e1490:
    // 0x2e1490: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e1494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1498: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e149c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e149cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e14a0:
    // 0x2e14a0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e14a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e14a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e14a8: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e14ac: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x2e14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_2e14b0:
    // 0x2e14b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e14b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E14B4u;
    {
        const bool branch_taken_0x2e14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14B4u;
        // 0x2e14b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14b4) {
            ctx->pc = 0x2E14CCu;
            goto label_2e14cc;
        }
    }
    ctx->pc = 0x2E14BCu;
    // 0x2e14bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e14bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e14c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e14c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E14C4u;
    {
        const bool branch_taken_0x2e14c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e14c4) {
            ctx->pc = 0x2E14D8u;
            goto label_2e14d8;
        }
    }
    ctx->pc = 0x2E14CCu;
label_2e14cc:
    // 0x2e14cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e14d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e14d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e14d8:
    // 0x2e14d8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E14D8u;
    {
        const bool branch_taken_0x2e14d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14D8u;
        // 0x2e14dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14d8) {
            ctx->pc = 0x2E151Cu;
            goto label_2e151c;
        }
    }
    ctx->pc = 0x2E14E0u;
    // 0x2e14e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e14e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E14E4u;
    {
        const bool branch_taken_0x2e14e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14E4u;
        // 0x2e14e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14e4) {
            ctx->pc = 0x2E14FCu;
            goto label_2e14fc;
        }
    }
    ctx->pc = 0x2E14ECu;
    // 0x2e14ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e14f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e14f4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E14F4u;
    {
        const bool branch_taken_0x2e14f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e14f4) {
            ctx->pc = 0x2E14F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E14F4u;
            // 0x2e14f8: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E150Cu;
            goto label_2e150c;
        }
    }
    ctx->pc = 0x2E14FCu;
label_2e14fc:
    // 0x2e14fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e14fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e1500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1504: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1508: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e1508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e150c:
    // 0x2e150c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e1514: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e1514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e1518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e151c:
    // 0x2e151c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1520: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1520u;
        // 0x2e1524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1528u;
}
