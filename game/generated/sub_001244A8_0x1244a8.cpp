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

// Function: sub_001244A8
// Address: 0x1244a8 - 0x124650
void sub_001244A8_0x1244a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001244A8_0x1244a8");
#endif

    switch (ctx->pc) {
        case 0x1244d4u: goto label_1244d4;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244fcu: goto label_1244fc;
        case 0x124530u: goto label_124530;
        case 0x124554u: goto label_124554;
        case 0x124574u: goto label_124574;
        case 0x124588u: goto label_124588;
        case 0x1245e8u: goto label_1245e8;
        case 0x1245f0u: goto label_1245f0;
        case 0x124618u: goto label_124618;
        case 0x124624u: goto label_124624;
        default: break;
    }

    ctx->pc = 0x1244a8u;

    // 0x1244a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1244a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1244ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1244acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1244b0: 0x3c130013  lui         $s3, 0x13
    ctx->pc = 0x1244b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)19 << 16));
    // 0x1244b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1244b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1244b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1244b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244bc: 0x8e6411d4  lw          $a0, 0x11D4($s3)
    ctx->pc = 0x1244bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1311D4u));
    // 0x1244c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1244c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1244c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1244c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1244c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1244c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1244cc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1244CCu;
    SET_GPR_U32(ctx, 31, 0x1244D4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1244CCu, 0x1244D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244D4u;
label_1244d4:
    // 0x1244d4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1244d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1244d8: 0x8c70fc78  lw          $s0, -0x388($v1)
    ctx->pc = 0x1244d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1EFC78u));
    // 0x1244dc: 0x0  nop
    ctx->pc = 0x1244dcu;
    // NOP
label_1244e0:
    // 0x1244e0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1244E0u;
    {
        const bool branch_taken_0x1244e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1244e0) {
            ctx->pc = 0x124528u;
            goto label_124528;
        }
    }
    ctx->pc = 0x1244E8u;
    // 0x1244e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1244e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1244ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1244ECu;
    {
        const bool branch_taken_0x1244ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1244F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ECu;
        // 0x1244f0: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244ec) {
            ctx->pc = 0x124504u;
            goto label_124504;
        }
    }
    ctx->pc = 0x1244F4u;
    // 0x1244f4: 0xc0490d0  jal         func_124340
    ctx->pc = 0x1244F4u;
    SET_GPR_U32(ctx, 31, 0x1244FCu);
    ctx->pc = 0x1244F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244F4u;
    // 0x1244f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124340u, 0x1244F4u, 0x1244FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244FCu;
label_1244fc:
    // 0x1244fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124500: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x124500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_124504:
    // 0x124504: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x124504u;
    {
        const bool branch_taken_0x124504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124504) {
            ctx->pc = 0x124508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124504u;
            // 0x124508: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1244e0;
        }
    }
    ctx->pc = 0x12450Cu;
    // 0x12450c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x124510: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x124510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x124514: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x124514u;
    {
        const bool branch_taken_0x124514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124514) {
            ctx->pc = 0x124518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124514u;
            // 0x124518: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1244e0;
        }
    }
    ctx->pc = 0x12451Cu;
    // 0x12451c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12451Cu;
    {
        const bool branch_taken_0x12451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12451Cu;
        // 0x124520: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12451c) {
            ctx->pc = 0x124538u;
            goto label_124538;
        }
    }
    ctx->pc = 0x124524u;
    // 0x124524: 0x0  nop
    ctx->pc = 0x124524u;
    // NOP
label_124528:
    // 0x124528: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x124528u;
    SET_GPR_U32(ctx, 31, 0x124530u);
    ctx->pc = 0x12452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124528u;
    // 0x12452c: 0x8e6411d4  lw          $a0, 0x11D4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x124528u, 0x124530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124530u;
label_124530:
    // 0x124530: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x124530u;
    {
        const bool branch_taken_0x124530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124530u;
        // 0x124534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124530) {
            ctx->pc = 0x124634u;
            goto label_124634;
        }
    }
    ctx->pc = 0x124538u;
label_124538:
    // 0x124538: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124538u;
    {
        const bool branch_taken_0x124538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124538) {
            ctx->pc = 0x12454Cu;
            goto label_12454c;
        }
    }
    ctx->pc = 0x124540u;
    // 0x124540: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x124540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124544: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124544u;
    {
        const bool branch_taken_0x124544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x124544) {
            ctx->pc = 0x12455Cu;
            goto label_12455c;
        }
    }
    ctx->pc = 0x12454Cu;
label_12454c:
    // 0x12454c: 0xc0490d0  jal         func_124340
    ctx->pc = 0x12454Cu;
    SET_GPR_U32(ctx, 31, 0x124554u);
    ctx->pc = 0x124550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12454Cu;
    // 0x124550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124340u, 0x12454Cu, 0x124554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124554u;
label_124554:
    // 0x124554: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x124554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124558: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x124558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12455c:
    // 0x12455c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12455Cu;
    {
        const bool branch_taken_0x12455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12455c) {
            ctx->pc = 0x124610u;
            goto label_124610;
        }
    }
    ctx->pc = 0x124564u;
    // 0x124564: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x124564u;
    {
        const bool branch_taken_0x124564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x124564) {
            ctx->pc = 0x1245D8u;
            goto label_1245d8;
        }
    }
    ctx->pc = 0x12456Cu;
    // 0x12456c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x12456Cu;
    SET_GPR_U32(ctx, 31, 0x124574u);
    ctx->pc = 0x124570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12456Cu;
    // 0x124570: 0x8e6411d4  lw          $a0, 0x11D4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x12456Cu, 0x124574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124574u;
label_124574:
    // 0x124574: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x124574u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x124578: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x124578u;
    {
        const bool branch_taken_0x124578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x12457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124578u;
        // 0x12457c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124578) {
            ctx->pc = 0x124630u;
            goto label_124630;
        }
    }
    ctx->pc = 0x124580u;
    // 0x124580: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x124580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124584: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x124584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_124588:
    // 0x124588: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x124588u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x12458c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x12458cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x124590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x124594: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x124594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124598: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x124598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12459c: 0x247182b  sltu        $v1, $s2, $a3
    ctx->pc = 0x12459cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1245a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1245A0u;
    {
        const bool branch_taken_0x1245a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245A0u;
        // 0x1245a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245a0) {
            ctx->pc = 0x1245B0u;
            goto label_1245b0;
        }
    }
    ctx->pc = 0x1245A8u;
    // 0x1245a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1245A8u;
    {
        const bool branch_taken_0x1245a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245A8u;
        // 0x1245ac: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245a8) {
            ctx->pc = 0x1245C4u;
            goto label_1245c4;
        }
    }
    ctx->pc = 0x1245B0u;
label_1245b0:
    // 0x1245b0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1245b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1245b4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1245b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1245b8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1245b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1245bc: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1245BCu;
    {
        const bool branch_taken_0x1245bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245BCu;
        // 0x1245c0: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245bc) {
            ctx->pc = 0x124634u;
            goto label_124634;
        }
    }
    ctx->pc = 0x1245C4u;
label_1245c4:
    // 0x1245c4: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x1245c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1245c8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1245C8u;
    {
        const bool branch_taken_0x1245c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1245c8) {
            ctx->pc = 0x1245CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245C8u;
            // 0x1245cc: 0x1281021  addu        $v0, $t1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124588;
        }
    }
    ctx->pc = 0x1245D0u;
    // 0x1245d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1245D0u;
    {
        const bool branch_taken_0x1245d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245D0u;
        // 0x1245d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245d0) {
            ctx->pc = 0x124634u;
            goto label_124634;
        }
    }
    ctx->pc = 0x1245D8u;
label_1245d8:
    // 0x1245d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1245D8u;
    {
        const bool branch_taken_0x1245d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245D8u;
        // 0x1245dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245d8) {
            ctx->pc = 0x124610u;
            goto label_124610;
        }
    }
    ctx->pc = 0x1245E0u;
    // 0x1245e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1245e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1245e4: 0x0  nop
    ctx->pc = 0x1245e4u;
    // NOP
label_1245e8:
    // 0x1245e8: 0xc0490ba  jal         func_1242E8
    ctx->pc = 0x1245E8u;
    SET_GPR_U32(ctx, 31, 0x1245F0u);
    ctx->pc = 0x1245ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245E8u;
    // 0x1245ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1242E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1242E8u, 0x1245E8u, 0x1245F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245F0u;
label_1245f0:
    // 0x1245f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1245f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245f4: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1245F4u;
    {
        const bool branch_taken_0x1245f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F4u;
        // 0x1245f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245f4) {
            ctx->pc = 0x12461Cu;
            goto label_12461c;
        }
    }
    ctx->pc = 0x1245FCu;
    // 0x1245fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124600: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x124600u;
    {
        const bool branch_taken_0x124600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124600u;
        // 0x124604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124600) {
            ctx->pc = 0x1245E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1245e8;
        }
    }
    ctx->pc = 0x124608u;
    // 0x124608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124608u;
    {
        const bool branch_taken_0x124608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124608) {
            ctx->pc = 0x12461Cu;
            goto label_12461c;
        }
    }
    ctx->pc = 0x124610u;
label_124610:
    // 0x124610: 0xc0490ba  jal         func_1242E8
    ctx->pc = 0x124610u;
    SET_GPR_U32(ctx, 31, 0x124618u);
    ctx->pc = 0x124614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124610u;
    // 0x124614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1242E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1242E8u, 0x124610u, 0x124618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124618u;
label_124618:
    // 0x124618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12461c:
    // 0x12461c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x12461Cu;
    SET_GPR_U32(ctx, 31, 0x124624u);
    ctx->pc = 0x124620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12461Cu;
    // 0x124620: 0x8e6411d4  lw          $a0, 0x11D4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x12461Cu, 0x124624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124624u;
label_124624:
    // 0x124624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124624u;
    {
        const bool branch_taken_0x124624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124624u;
        // 0x124628: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124624) {
            ctx->pc = 0x124634u;
            goto label_124634;
        }
    }
    ctx->pc = 0x12462Cu;
    // 0x12462c: 0x0  nop
    ctx->pc = 0x12462cu;
    // NOP
label_124630:
    // 0x124630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124634:
    // 0x124634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124638: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12463c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12463cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124640: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x124644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124648: 0x3e00008  jr          $ra
    ctx->pc = 0x124648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124648u;
        // 0x12464c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124650u;
}
