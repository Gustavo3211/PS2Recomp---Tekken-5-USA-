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

// Function: sub_002D1398
// Address: 0x2d1398 - 0x2d1580
void sub_002D1398_0x2d1398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1398_0x2d1398");
#endif

    switch (ctx->pc) {
        case 0x2d144cu: goto label_2d144c;
        case 0x2d1458u: goto label_2d1458;
        case 0x2d1460u: goto label_2d1460;
        case 0x2d1470u: goto label_2d1470;
        case 0x2d1478u: goto label_2d1478;
        case 0x2d1488u: goto label_2d1488;
        case 0x2d1490u: goto label_2d1490;
        case 0x2d14a8u: goto label_2d14a8;
        case 0x2d14b0u: goto label_2d14b0;
        case 0x2d14bcu: goto label_2d14bc;
        case 0x2d1510u: goto label_2d1510;
        case 0x2d1520u: goto label_2d1520;
        case 0x2d1530u: goto label_2d1530;
        case 0x2d1544u: goto label_2d1544;
        case 0x2d1558u: goto label_2d1558;
        case 0x2d1568u: goto label_2d1568;
        default: break;
    }

    ctx->pc = 0x2d1398u;

    // 0x2d1398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d139c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d13a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d13a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d13a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d13a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d13ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d13b0: 0x244683c0  addiu       $a2, $v0, -0x7C40
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x2d13b4: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2d13b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2d13b8: 0x10a30043  beq         $a1, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D13B8u;
    {
        const bool branch_taken_0x2d13b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13B8u;
        // 0x2d13bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13b8) {
            ctx->pc = 0x2D14C8u;
            goto label_2d14c8;
        }
    }
    ctx->pc = 0x2D13C0u;
    // 0x2d13c0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2d13c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d13c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D13C4u;
    {
        const bool branch_taken_0x2d13c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13C4u;
        // 0x2d13c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13c4) {
            ctx->pc = 0x2D13E0u;
            goto label_2d13e0;
        }
    }
    ctx->pc = 0x2D13CCu;
    // 0x2d13cc: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D13CCu;
    {
        const bool branch_taken_0x2d13cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d13cc) {
            ctx->pc = 0x2D13D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13CCu;
            // 0x2d13d0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D13F0u;
            goto label_2d13f0;
        }
    }
    ctx->pc = 0x2D13D4u;
    // 0x2d13d4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2D13D4u;
    {
        const bool branch_taken_0x2d13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13D4u;
        // 0x2d13d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13d4) {
            ctx->pc = 0x2D156Cu;
            goto label_2d156c;
        }
    }
    ctx->pc = 0x2D13DCu;
    // 0x2d13dc: 0x0  nop
    ctx->pc = 0x2d13dcu;
    // NOP
label_2d13e0:
    // 0x2d13e0: 0x10a2005b  beq         $a1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D13E0u;
    {
        const bool branch_taken_0x2d13e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d13e0) {
            ctx->pc = 0x2D1550u;
            goto label_2d1550;
        }
    }
    ctx->pc = 0x2D13E8u;
    // 0x2d13e8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2D13E8u;
    {
        const bool branch_taken_0x2d13e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13E8u;
        // 0x2d13ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13e8) {
            ctx->pc = 0x2D156Cu;
            goto label_2d156c;
        }
    }
    ctx->pc = 0x2D13F0u;
label_2d13f0:
    // 0x2d13f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d13f4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D13F4u;
    {
        const bool branch_taken_0x2d13f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13F4u;
        // 0x2d13f8: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13f4) {
            ctx->pc = 0x2D1428u;
            goto label_2d1428;
        }
    }
    ctx->pc = 0x2D13FCu;
    // 0x2d13fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D13FCu;
    {
        const bool branch_taken_0x2d13fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13FCu;
        // 0x2d1400: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13fc) {
            ctx->pc = 0x2D1418u;
            goto label_2d1418;
        }
    }
    ctx->pc = 0x2D1404u;
    // 0x2d1404: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1408: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D1408u;
    {
        const bool branch_taken_0x2d1408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1408u;
        // 0x2d140c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1408) {
            ctx->pc = 0x2D1468u;
            goto label_2d1468;
        }
    }
    ctx->pc = 0x2D1410u;
    // 0x2d1410: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D1410u;
    {
        const bool branch_taken_0x2d1410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1410u;
        // 0x2d1414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1410) {
            ctx->pc = 0x2D1498u;
            goto label_2d1498;
        }
    }
    ctx->pc = 0x2D1418u;
label_2d1418:
    // 0x2d1418: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1418u;
    {
        const bool branch_taken_0x2d1418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1418u;
        // 0x2d141c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1418) {
            ctx->pc = 0x2D1480u;
            goto label_2d1480;
        }
    }
    ctx->pc = 0x2D1420u;
    // 0x2d1420: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D1420u;
    {
        const bool branch_taken_0x2d1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1420u;
        // 0x2d1424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1420) {
            ctx->pc = 0x2D1498u;
            goto label_2d1498;
        }
    }
    ctx->pc = 0x2D1428u;
label_2d1428:
    // 0x2d1428: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2d1428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2d142c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d142cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1430: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d1430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d1434: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2d1434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2d1438: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2d1438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2d143c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2d143cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d1440: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d1444: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x2D1444u;
    SET_GPR_U32(ctx, 31, 0x2D144Cu);
    ctx->pc = 0x2D1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1444u;
    // 0x2d1448: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x2D1444u, 0x2D144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D144Cu;
label_2d144c:
    // 0x2d144c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1450: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2D1450u;
    SET_GPR_U32(ctx, 31, 0x2D1458u);
    ctx->pc = 0x2D1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1450u;
    // 0x2d1454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2D1450u, 0x2D1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1458u;
label_2d1458:
    // 0x2d1458: 0xc0a6544  jal         func_299510
    ctx->pc = 0x2D1458u;
    SET_GPR_U32(ctx, 31, 0x2D1460u);
    ctx->pc = 0x2D145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1458u;
    // 0x2d145c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299510u, 0x2D1458u, 0x2D1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1460u;
label_2d1460:
    // 0x2d1460: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D1460u;
    {
        const bool branch_taken_0x2d1460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1460u;
        // 0x2d1464: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1460) {
            ctx->pc = 0x2D1494u;
            goto label_2d1494;
        }
    }
    ctx->pc = 0x2D1468u;
label_2d1468:
    // 0x2d1468: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2D1468u;
    SET_GPR_U32(ctx, 31, 0x2D1470u);
    ctx->pc = 0x2D146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1468u;
    // 0x2d146c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2D1468u, 0x2D1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1470u;
label_2d1470:
    // 0x2d1470: 0xc0a6bc8  jal         func_29AF20
    ctx->pc = 0x2D1470u;
    SET_GPR_U32(ctx, 31, 0x2D1478u);
    ctx->pc = 0x2D1474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1470u;
    // 0x2d1474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AF20u, 0x2D1470u, 0x2D1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1478u;
label_2d1478:
    // 0x2d1478: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1478u;
    {
        const bool branch_taken_0x2d1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1478u;
        // 0x2d147c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1478) {
            ctx->pc = 0x2D1494u;
            goto label_2d1494;
        }
    }
    ctx->pc = 0x2D1480u;
label_2d1480:
    // 0x2d1480: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2D1480u;
    SET_GPR_U32(ctx, 31, 0x2D1488u);
    ctx->pc = 0x2D1484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1480u;
    // 0x2d1484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2D1480u, 0x2D1488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1488u;
label_2d1488:
    // 0x2d1488: 0xc0a7594  jal         func_29D650
    ctx->pc = 0x2D1488u;
    SET_GPR_U32(ctx, 31, 0x2D1490u);
    ctx->pc = 0x2D148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1488u;
    // 0x2d148c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D650u, 0x2D1488u, 0x2D1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1490u;
label_2d1490:
    // 0x2d1490: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2d1490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2d1494:
    // 0x2d1494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1498:
    // 0x2d1498: 0x2442ebd8  addiu       $v0, $v0, -0x1428
    ctx->pc = 0x2d1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962136));
    // 0x2d149c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d14a0: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2D14A0u;
    SET_GPR_U32(ctx, 31, 0x2D14A8u);
    ctx->pc = 0x2D14A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14A0u;
    // 0x2d14a4: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2D14A0u, 0x2D14A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14A8u;
label_2d14a8:
    // 0x2d14a8: 0xc092108  jal         func_248420
    ctx->pc = 0x2D14A8u;
    SET_GPR_U32(ctx, 31, 0x2D14B0u);
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x2D14A8u, 0x2D14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14B0u;
label_2d14b0:
    // 0x2d14b0: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2d14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2d14b4: 0xc092460  jal         func_249180
    ctx->pc = 0x2D14B4u;
    SET_GPR_U32(ctx, 31, 0x2D14BCu);
    ctx->pc = 0x2D14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14B4u;
    // 0x2d14b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2D14B4u, 0x2D14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14BCu;
label_2d14bc:
    // 0x2d14bc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D14BCu;
    {
        const bool branch_taken_0x2d14bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14BCu;
        // 0x2d14c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14bc) {
            ctx->pc = 0x2D156Cu;
            goto label_2d156c;
        }
    }
    ctx->pc = 0x2D14C4u;
    // 0x2d14c4: 0x0  nop
    ctx->pc = 0x2d14c4u;
    // NOP
label_2d14c8:
    // 0x2d14c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d14c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d14cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d14d0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D14D0u;
    {
        const bool branch_taken_0x2d14d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14D0u;
        // 0x2d14d4: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14d0) {
            ctx->pc = 0x2D1508u;
            goto label_2d1508;
        }
    }
    ctx->pc = 0x2D14D8u;
    // 0x2d14d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D14D8u;
    {
        const bool branch_taken_0x2d14d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14D8u;
        // 0x2d14dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14d8) {
            ctx->pc = 0x2D14F8u;
            goto label_2d14f8;
        }
    }
    ctx->pc = 0x2D14E0u;
    // 0x2d14e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d14e4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D14E4u;
    {
        const bool branch_taken_0x2d14e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d14e4) {
            ctx->pc = 0x2D1518u;
            goto label_2d1518;
        }
    }
    ctx->pc = 0x2D14ECu;
    // 0x2d14ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D14ECu;
    {
        const bool branch_taken_0x2d14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d14ec) {
            ctx->pc = 0x2D1534u;
            goto label_2d1534;
        }
    }
    ctx->pc = 0x2D14F4u;
    // 0x2d14f4: 0x0  nop
    ctx->pc = 0x2d14f4u;
    // NOP
label_2d14f8:
    // 0x2d14f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D14F8u;
    {
        const bool branch_taken_0x2d14f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d14f8) {
            ctx->pc = 0x2D1528u;
            goto label_2d1528;
        }
    }
    ctx->pc = 0x2D1500u;
    // 0x2d1500: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D1500u;
    {
        const bool branch_taken_0x2d1500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1500) {
            ctx->pc = 0x2D1534u;
            goto label_2d1534;
        }
    }
    ctx->pc = 0x2D1508u;
label_2d1508:
    // 0x2d1508: 0xc0b4436  jal         func_2D10D8
    ctx->pc = 0x2D1508u;
    SET_GPR_U32(ctx, 31, 0x2D1510u);
    ctx->pc = 0x2D150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1508u;
    // 0x2d150c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D8u, 0x2D1508u, 0x2D1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1510u;
label_2d1510:
    // 0x2d1510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1510u;
    {
        const bool branch_taken_0x2d1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1510u;
        // 0x2d1514: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1510) {
            ctx->pc = 0x2D1534u;
            goto label_2d1534;
        }
    }
    ctx->pc = 0x2D1518u;
label_2d1518:
    // 0x2d1518: 0xc0b43c6  jal         func_2D0F18
    ctx->pc = 0x2D1518u;
    SET_GPR_U32(ctx, 31, 0x2D1520u);
    ctx->pc = 0x2D151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1518u;
    // 0x2d151c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F18u, 0x2D1518u, 0x2D1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1520u;
label_2d1520:
    // 0x2d1520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1520u;
    {
        const bool branch_taken_0x2d1520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1520u;
        // 0x2d1524: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1520) {
            ctx->pc = 0x2D1534u;
            goto label_2d1534;
        }
    }
    ctx->pc = 0x2D1528u;
label_2d1528:
    // 0x2d1528: 0xc0b44b0  jal         func_2D12C0
    ctx->pc = 0x2D1528u;
    SET_GPR_U32(ctx, 31, 0x2D1530u);
    ctx->pc = 0x2D152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1528u;
    // 0x2d152c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D12C0u, 0x2D1528u, 0x2D1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1530u;
label_2d1530:
    // 0x2d1530: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d1530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1534:
    // 0x2d1534: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1534u;
    {
        const bool branch_taken_0x2d1534 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1534u;
        // 0x2d1538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1534) {
            ctx->pc = 0x2D1568u;
            goto label_2d1568;
        }
    }
    ctx->pc = 0x2D153Cu;
    // 0x2d153c: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2D153Cu;
    SET_GPR_U32(ctx, 31, 0x2D1544u);
    ctx->pc = 0x2D1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D153Cu;
    // 0x2d1540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2D153Cu, 0x2D1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1544u;
label_2d1544:
    // 0x2d1544: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1544u;
    {
        const bool branch_taken_0x2d1544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1544u;
        // 0x2d1548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1544) {
            ctx->pc = 0x2D156Cu;
            goto label_2d156c;
        }
    }
    ctx->pc = 0x2D154Cu;
    // 0x2d154c: 0x0  nop
    ctx->pc = 0x2d154cu;
    // NOP
label_2d1550:
    // 0x2d1550: 0xc0a792a  jal         func_29E4A8
    ctx->pc = 0x2D1550u;
    SET_GPR_U32(ctx, 31, 0x2D1558u);
    ctx->pc = 0x29E4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4A8u, 0x2D1550u, 0x2D1558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1558u;
label_2d1558:
    // 0x2d1558: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d1558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d155c: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x2d155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2d1560: 0xc092486  jal         func_249218
    ctx->pc = 0x2D1560u;
    SET_GPR_U32(ctx, 31, 0x2D1568u);
    ctx->pc = 0x2D1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1560u;
    // 0x2d1564: 0xa0400069  sb          $zero, 0x69($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2D1560u, 0x2D1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1568u;
label_2d1568:
    // 0x2d1568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d156c:
    // 0x2d156c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d156cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1570: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d1570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1574: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1574u;
        // 0x2d1578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D157Cu;
    // 0x2d157c: 0x0  nop
    ctx->pc = 0x2d157cu;
    // NOP
    ctx->pc = 0x2d1580u;
}
