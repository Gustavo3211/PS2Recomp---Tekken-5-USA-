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

// Function: sub_001F1460
// Address: 0x1f1460 - 0x1f1608
void sub_001F1460_0x1f1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1460_0x1f1460");
#endif

    switch (ctx->pc) {
        case 0x1f1494u: goto label_1f1494;
        case 0x1f14c8u: goto label_1f14c8;
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1520u: goto label_1f1520;
        case 0x1f1528u: goto label_1f1528;
        case 0x1f1538u: goto label_1f1538;
        case 0x1f1540u: goto label_1f1540;
        case 0x1f1554u: goto label_1f1554;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f159cu: goto label_1f159c;
        case 0x1f15a4u: goto label_1f15a4;
        case 0x1f15dcu: goto label_1f15dc;
        case 0x1f15e4u: goto label_1f15e4;
        default: break;
    }

    ctx->pc = 0x1f1460u;

    // 0x1f1460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1464: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1468: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f1468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f146c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f146cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1474: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f1478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f147c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1480: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f1480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f1484: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f1488: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f148c: 0xc0915b6  jal         func_2456D8
    ctx->pc = 0x1F148Cu;
    SET_GPR_U32(ctx, 31, 0x1F1494u);
    ctx->pc = 0x1F1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F148Cu;
    // 0x1f1490: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2456D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2456D8u, 0x1F148Cu, 0x1F1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1494u;
label_1f1494:
    // 0x1f1494: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1494u;
    {
        const bool branch_taken_0x1f1494 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1494u;
        // 0x1f1498: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1494) {
            ctx->pc = 0x1F14C0u;
            goto label_1f14c0;
        }
    }
    ctx->pc = 0x1F149Cu;
    // 0x1f149c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1f14a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F14A0u;
    {
        const bool branch_taken_0x1f14a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f14a0) {
            ctx->pc = 0x1F14C0u;
            goto label_1f14c0;
        }
    }
    ctx->pc = 0x1F14A8u;
    // 0x1f14a8: 0x920201bb  lbu         $v0, 0x1BB($s0)
    ctx->pc = 0x1f14a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 443)));
    // 0x1f14ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F14ACu;
    {
        const bool branch_taken_0x1f14ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14ACu;
        // 0x1f14b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14ac) {
            ctx->pc = 0x1F14C8u;
            goto label_1f14c8;
        }
    }
    ctx->pc = 0x1F14B4u;
    // 0x1f14b4: 0x86030180  lh          $v1, 0x180($s0)
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f14b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F14B8u;
    {
        const bool branch_taken_0x1f14b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f14b8) {
            ctx->pc = 0x1F14C8u;
            goto label_1f14c8;
        }
    }
    ctx->pc = 0x1F14C0u;
label_1f14c0:
    // 0x1f14c0: 0xc0af5f6  jal         func_2BD7D8
    ctx->pc = 0x1F14C0u;
    SET_GPR_U32(ctx, 31, 0x1F14C8u);
    ctx->pc = 0x1F14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14C0u;
    // 0x1f14c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD7D8u, 0x1F14C0u, 0x1F14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14C8u;
label_1f14c8:
    // 0x1f14c8: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1F14C8u;
    {
        const bool branch_taken_0x1f14c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14C8u;
        // 0x1f14cc: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14c8) {
            ctx->pc = 0x1F14F8u;
            goto label_1f14f8;
        }
    }
    ctx->pc = 0x1F14D0u;
    // 0x1f14d0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f14d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1f14d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F14D4u;
    {
        const bool branch_taken_0x1f14d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f14d4) {
            ctx->pc = 0x1F14F8u;
            goto label_1f14f8;
        }
    }
    ctx->pc = 0x1F14DCu;
    // 0x1f14dc: 0x922201bb  lbu         $v0, 0x1BB($s1)
    ctx->pc = 0x1f14dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 443)));
    // 0x1f14e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F14E0u;
    {
        const bool branch_taken_0x1f14e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14E0u;
        // 0x1f14e4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14e0) {
            ctx->pc = 0x1F1504u;
            goto label_1f1504;
        }
    }
    ctx->pc = 0x1F14E8u;
    // 0x1f14e8: 0x86230180  lh          $v1, 0x180($s1)
    ctx->pc = 0x1f14e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1f14ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f14f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F14F0u;
    {
        const bool branch_taken_0x1f14f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14F0u;
        // 0x1f14f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14f0) {
            ctx->pc = 0x1F1504u;
            goto label_1f1504;
        }
    }
    ctx->pc = 0x1F14F8u;
label_1f14f8:
    // 0x1f14f8: 0xc0af5f6  jal         func_2BD7D8
    ctx->pc = 0x1F14F8u;
    SET_GPR_U32(ctx, 31, 0x1F1500u);
    ctx->pc = 0x1F14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14F8u;
    // 0x1f14fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD7D8u, 0x1F14F8u, 0x1F1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1500u;
label_1f1500:
    // 0x1f1500: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f1504:
    // 0x1f1504: 0x245223b0  addiu       $s2, $v0, 0x23B0
    ctx->pc = 0x1f1504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f1508: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f150c: 0x26540058  addiu       $s4, $s2, 0x58
    ctx->pc = 0x1f150cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1f1510: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1510u;
    {
        const bool branch_taken_0x1f1510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1f1510) {
            ctx->pc = 0x1F1520u;
            goto label_1f1520;
        }
    }
    ctx->pc = 0x1F1518u;
    // 0x1f1518: 0xc098812  jal         func_262048
    ctx->pc = 0x1F1518u;
    SET_GPR_U32(ctx, 31, 0x1F1520u);
    ctx->pc = 0x262048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262048u, 0x1F1518u, 0x1F1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1520u;
label_1f1520:
    // 0x1f1520: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x1F1520u;
    SET_GPR_U32(ctx, 31, 0x1F1528u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x1F1520u, 0x1F1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1528u;
label_1f1528:
    // 0x1f1528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1528u;
    {
        const bool branch_taken_0x1f1528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1528) {
            ctx->pc = 0x1F1538u;
            goto label_1f1538;
        }
    }
    ctx->pc = 0x1F1530u;
    // 0x1f1530: 0xc07d704  jal         func_1F5C10
    ctx->pc = 0x1F1530u;
    SET_GPR_U32(ctx, 31, 0x1F1538u);
    ctx->pc = 0x1F5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C10u, 0x1F1530u, 0x1F1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1538u;
label_1f1538:
    // 0x1f1538: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x1F1538u;
    SET_GPR_U32(ctx, 31, 0x1F1540u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x1F1538u, 0x1F1540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1540u;
label_1f1540:
    // 0x1f1540: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1540u;
    {
        const bool branch_taken_0x1f1540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1540) {
            ctx->pc = 0x1F1544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1540u;
            // 0x1f1544: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1558u;
            goto label_1f1558;
        }
    }
    ctx->pc = 0x1F1548u;
    // 0x1f1548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f154c: 0xc081d46  jal         func_207518
    ctx->pc = 0x1F154Cu;
    SET_GPR_U32(ctx, 31, 0x1F1554u);
    ctx->pc = 0x1F1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F154Cu;
    // 0x1f1550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207518u, 0x1F154Cu, 0x1F1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1554u;
label_1f1554:
    // 0x1f1554: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f1558:
    // 0x1f1558: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1558u;
    {
        const bool branch_taken_0x1f1558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1F155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1558u;
        // 0x1f155c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1558) {
            ctx->pc = 0x1F1568u;
            goto label_1f1568;
        }
    }
    ctx->pc = 0x1F1560u;
    // 0x1f1560: 0xc098738  jal         func_261CE0
    ctx->pc = 0x1F1560u;
    SET_GPR_U32(ctx, 31, 0x1F1568u);
    ctx->pc = 0x1F1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1560u;
    // 0x1f1564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261CE0u, 0x1F1560u, 0x1F1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1568u;
label_1f1568:
    // 0x1f1568: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1568u;
    {
        const bool branch_taken_0x1f1568 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1568u;
        // 0x1f156c: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1568) {
            ctx->pc = 0x1F1594u;
            goto label_1f1594;
        }
    }
    ctx->pc = 0x1F1570u;
    // 0x1f1570: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f1570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1f1574: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1574u;
    {
        const bool branch_taken_0x1f1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1574) {
            ctx->pc = 0x1F1594u;
            goto label_1f1594;
        }
    }
    ctx->pc = 0x1F157Cu;
    // 0x1f157c: 0x920201bb  lbu         $v0, 0x1BB($s0)
    ctx->pc = 0x1f157cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 443)));
    // 0x1f1580: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1580u;
    {
        const bool branch_taken_0x1f1580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1580u;
        // 0x1f1584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1580) {
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F1588u;
    // 0x1f1588: 0x86030180  lh          $v1, 0x180($s0)
    ctx->pc = 0x1f1588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f158c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F158Cu;
    {
        const bool branch_taken_0x1f158c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f158c) {
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F1594u;
label_1f1594:
    // 0x1f1594: 0xc0af1d4  jal         func_2BC750
    ctx->pc = 0x1F1594u;
    SET_GPR_U32(ctx, 31, 0x1F159Cu);
    ctx->pc = 0x1F1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1594u;
    // 0x1f1598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC750u, 0x1F1594u, 0x1F159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F159Cu;
label_1f159c:
    // 0x1f159c: 0xc0af050  jal         func_2BC140
    ctx->pc = 0x1F159Cu;
    SET_GPR_U32(ctx, 31, 0x1F15A4u);
    ctx->pc = 0x1F15A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F159Cu;
    // 0x1f15a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x1F159Cu, 0x1F15A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15A4u;
label_1f15a4:
    // 0x1f15a4: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1F15A4u;
    {
        const bool branch_taken_0x1f15a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15A4u;
        // 0x1f15a8: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15a4) {
            ctx->pc = 0x1F15D4u;
            goto label_1f15d4;
        }
    }
    ctx->pc = 0x1F15ACu;
    // 0x1f15ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f15acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1f15b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F15B0u;
    {
        const bool branch_taken_0x1f15b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f15b0) {
            ctx->pc = 0x1F15D4u;
            goto label_1f15d4;
        }
    }
    ctx->pc = 0x1F15B8u;
    // 0x1f15b8: 0x922201bb  lbu         $v0, 0x1BB($s1)
    ctx->pc = 0x1f15b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 443)));
    // 0x1f15bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F15BCu;
    {
        const bool branch_taken_0x1f15bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f15bc) {
            ctx->pc = 0x1F15C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15BCu;
            // 0x1f15c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F15E8u;
            goto label_1f15e8;
        }
    }
    ctx->pc = 0x1F15C4u;
    // 0x1f15c4: 0x86230180  lh          $v1, 0x180($s1)
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1f15c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f15cc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F15CCu;
    {
        const bool branch_taken_0x1f15cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f15cc) {
            ctx->pc = 0x1F15D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15CCu;
            // 0x1f15d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F15E8u;
            goto label_1f15e8;
        }
    }
    ctx->pc = 0x1F15D4u;
label_1f15d4:
    // 0x1f15d4: 0xc0af1d4  jal         func_2BC750
    ctx->pc = 0x1F15D4u;
    SET_GPR_U32(ctx, 31, 0x1F15DCu);
    ctx->pc = 0x1F15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15D4u;
    // 0x1f15d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC750u, 0x1F15D4u, 0x1F15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15DCu;
label_1f15dc:
    // 0x1f15dc: 0xc0af050  jal         func_2BC140
    ctx->pc = 0x1F15DCu;
    SET_GPR_U32(ctx, 31, 0x1F15E4u);
    ctx->pc = 0x1F15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15DCu;
    // 0x1f15e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x1F15DCu, 0x1F15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15E4u;
label_1f15e4:
    // 0x1f15e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f15e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f15e8:
    // 0x1f15e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f15e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f15ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f15ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f15f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f15f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f15f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f15f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f15f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f15f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f15fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F15FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15FCu;
        // 0x1f1600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F15FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1604u;
    // 0x1f1604: 0x0  nop
    ctx->pc = 0x1f1604u;
    // NOP
    ctx->pc = 0x1f1608u;
}
