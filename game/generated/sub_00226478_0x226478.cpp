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

// Function: sub_00226478
// Address: 0x226478 - 0x2265c8
void sub_00226478_0x226478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226478_0x226478");
#endif

    switch (ctx->pc) {
        case 0x2264c8u: goto label_2264c8;
        case 0x22651cu: goto label_22651c;
        case 0x226528u: goto label_226528;
        case 0x226564u: goto label_226564;
        case 0x226570u: goto label_226570;
        case 0x226584u: goto label_226584;
        default: break;
    }

    ctx->pc = 0x226478u;

    // 0x226478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x226478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22647c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22647cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x226480: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x226484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22648c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x226490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x226494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226498: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22649c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2264a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2264a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2264a4: 0x2454dc28  addiu       $s4, $v0, -0x23D8
    ctx->pc = 0x2264a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958120));
    // 0x2264a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2264a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2264ac: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x2264acu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
    // 0x2264b0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2264b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2264b4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2264b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2264b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2264b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2264bc: 0x247788d0  addiu       $s7, $v1, -0x7730
    ctx->pc = 0x2264bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2264c0: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2264c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2264c4: 0x0  nop
    ctx->pc = 0x2264c4u;
    // NOP
label_2264c8:
    // 0x2264c8: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x2264c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2264cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2264d0: 0x50760009  beql        $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2264D0u;
    {
        const bool branch_taken_0x2264d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x2264d0) {
            ctx->pc = 0x2264D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2264D0u;
            // 0x2264d4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2264F8u;
            goto label_2264f8;
        }
    }
    ctx->pc = 0x2264D8u;
    // 0x2264d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2264d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2264dc: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2264DCu;
    {
        const bool branch_taken_0x2264dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2264dc) {
            ctx->pc = 0x2264E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2264DCu;
            // 0x2264e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226590u;
            goto label_226590;
        }
    }
    ctx->pc = 0x2264E4u;
    // 0x2264e4: 0x10730004  beq         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2264E4u;
    {
        const bool branch_taken_0x2264e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x2264e4) {
            ctx->pc = 0x2264F8u;
            goto label_2264f8;
        }
    }
    ctx->pc = 0x2264ECu;
    // 0x2264ec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2264ECu;
    {
        const bool branch_taken_0x2264ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2264F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264ECu;
        // 0x2264f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264ec) {
            ctx->pc = 0x226590u;
            goto label_226590;
        }
    }
    ctx->pc = 0x2264F4u;
    // 0x2264f4: 0x0  nop
    ctx->pc = 0x2264f4u;
    // NOP
label_2264f8:
    // 0x2264f8: 0x12330005  beq         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2264F8u;
    {
        const bool branch_taken_0x2264f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2264FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264F8u;
        // 0x2264fc: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264f8) {
            ctx->pc = 0x226510u;
            goto label_226510;
        }
    }
    ctx->pc = 0x226500u;
    // 0x226500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x226500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226504: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226504u;
    {
        const bool branch_taken_0x226504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226504u;
        // 0x226508: 0x84700042  lh          $s0, 0x42($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226504) {
            ctx->pc = 0x226514u;
            goto label_226514;
        }
    }
    ctx->pc = 0x22650Cu;
    // 0x22650c: 0x0  nop
    ctx->pc = 0x22650cu;
    // NOP
label_226510:
    // 0x226510: 0x2410004f  addiu       $s0, $zero, 0x4F
    ctx->pc = 0x226510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_226514:
    // 0x226514: 0xc0898ca  jal         func_226328
    ctx->pc = 0x226514u;
    SET_GPR_U32(ctx, 31, 0x22651Cu);
    ctx->pc = 0x226518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226514u;
    // 0x226518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226328u, 0x226514u, 0x22651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22651Cu;
label_22651c:
    // 0x22651c: 0x26a437e0  addiu       $a0, $s5, 0x37E0
    ctx->pc = 0x22651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 14304));
    // 0x226520: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 31, 0x226528u);
    ctx->pc = 0x226524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226520u;
    // 0x226524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x226520u, 0x226528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226528u;
label_226528:
    // 0x226528: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x226528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x22652c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226530: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x226530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x226534: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226538: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x226538u;
    {
        const bool branch_taken_0x226538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226538) {
            ctx->pc = 0x22653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226538u;
            // 0x22653c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226554u;
            goto label_226554;
        }
    }
    ctx->pc = 0x226540u;
    // 0x226540: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x226540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226544: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x226544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x226548: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226548u;
    {
        const bool branch_taken_0x226548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226548) {
            ctx->pc = 0x22655Cu;
            goto label_22655c;
        }
    }
    ctx->pc = 0x226550u;
    // 0x226550: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226554:
    // 0x226554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226558: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22655c:
    // 0x22655c: 0xc0b885c  jal         func_2E2170
    ctx->pc = 0x22655Cu;
    SET_GPR_U32(ctx, 31, 0x226564u);
    ctx->pc = 0x226560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22655Cu;
    // 0x226560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2170u, 0x22655Cu, 0x226564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226564u;
label_226564:
    // 0x226564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226568: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x226568u;
    SET_GPR_U32(ctx, 31, 0x226570u);
    ctx->pc = 0x22656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226568u;
    // 0x22656c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x226568u, 0x226570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226570u;
label_226570:
    // 0x226570: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x226570u;
    {
        const bool branch_taken_0x226570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226570) {
            ctx->pc = 0x226574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226570u;
            // 0x226574: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226588u;
            goto label_226588;
        }
    }
    ctx->pc = 0x226578u;
    // 0x226578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22657c: 0xc089864  jal         func_226190
    ctx->pc = 0x22657Cu;
    SET_GPR_U32(ctx, 31, 0x226584u);
    ctx->pc = 0x226580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22657Cu;
    // 0x226580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226190u, 0x22657Cu, 0x226584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226584u;
label_226584:
    // 0x226584: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x226584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_226588:
    // 0x226588: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x226588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22658c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22658cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_226590:
    // 0x226590: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x226590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x226594: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x226594u;
    {
        const bool branch_taken_0x226594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226594u;
        // 0x226598: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226594) {
            ctx->pc = 0x2264C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2264c8;
        }
    }
    ctx->pc = 0x22659Cu;
    // 0x22659c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22659cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2265a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2265a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2265a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2265a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2265a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2265a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2265ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2265acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2265b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2265b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2265b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2265b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2265b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2265bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2265bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2265c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2265C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265C0u;
        // 0x2265c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265C8u;
}
