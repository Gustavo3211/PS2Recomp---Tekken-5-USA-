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

// Function: sub_00330418
// Address: 0x330418 - 0x330570
void sub_00330418_0x330418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330418_0x330418");
#endif

    switch (ctx->pc) {
        case 0x330418u: goto label_330418;
        case 0x33041cu: goto label_33041c;
        case 0x330420u: goto label_330420;
        case 0x330424u: goto label_330424;
        case 0x330428u: goto label_330428;
        case 0x33042cu: goto label_33042c;
        case 0x330430u: goto label_330430;
        case 0x330434u: goto label_330434;
        case 0x330438u: goto label_330438;
        case 0x33043cu: goto label_33043c;
        case 0x330440u: goto label_330440;
        case 0x330444u: goto label_330444;
        case 0x330448u: goto label_330448;
        case 0x33044cu: goto label_33044c;
        case 0x330450u: goto label_330450;
        case 0x330454u: goto label_330454;
        case 0x330458u: goto label_330458;
        case 0x33045cu: goto label_33045c;
        case 0x330460u: goto label_330460;
        case 0x330464u: goto label_330464;
        case 0x330468u: goto label_330468;
        case 0x33046cu: goto label_33046c;
        case 0x330470u: goto label_330470;
        case 0x330474u: goto label_330474;
        case 0x330478u: goto label_330478;
        case 0x33047cu: goto label_33047c;
        case 0x330480u: goto label_330480;
        case 0x330484u: goto label_330484;
        case 0x330488u: goto label_330488;
        case 0x33048cu: goto label_33048c;
        case 0x330490u: goto label_330490;
        case 0x330494u: goto label_330494;
        case 0x330498u: goto label_330498;
        case 0x33049cu: goto label_33049c;
        case 0x3304a0u: goto label_3304a0;
        case 0x3304a4u: goto label_3304a4;
        case 0x3304a8u: goto label_3304a8;
        case 0x3304acu: goto label_3304ac;
        case 0x3304b0u: goto label_3304b0;
        case 0x3304b4u: goto label_3304b4;
        case 0x3304b8u: goto label_3304b8;
        case 0x3304bcu: goto label_3304bc;
        case 0x3304c0u: goto label_3304c0;
        case 0x3304c4u: goto label_3304c4;
        case 0x3304c8u: goto label_3304c8;
        case 0x3304ccu: goto label_3304cc;
        case 0x3304d0u: goto label_3304d0;
        case 0x3304d4u: goto label_3304d4;
        case 0x3304d8u: goto label_3304d8;
        case 0x3304dcu: goto label_3304dc;
        case 0x3304e0u: goto label_3304e0;
        case 0x3304e4u: goto label_3304e4;
        case 0x3304e8u: goto label_3304e8;
        case 0x3304ecu: goto label_3304ec;
        case 0x3304f0u: goto label_3304f0;
        case 0x3304f4u: goto label_3304f4;
        case 0x3304f8u: goto label_3304f8;
        case 0x3304fcu: goto label_3304fc;
        case 0x330500u: goto label_330500;
        case 0x330504u: goto label_330504;
        case 0x330508u: goto label_330508;
        case 0x33050cu: goto label_33050c;
        case 0x330510u: goto label_330510;
        case 0x330514u: goto label_330514;
        case 0x330518u: goto label_330518;
        case 0x33051cu: goto label_33051c;
        case 0x330520u: goto label_330520;
        case 0x330524u: goto label_330524;
        case 0x330528u: goto label_330528;
        case 0x33052cu: goto label_33052c;
        case 0x330530u: goto label_330530;
        case 0x330534u: goto label_330534;
        case 0x330538u: goto label_330538;
        case 0x33053cu: goto label_33053c;
        case 0x330540u: goto label_330540;
        case 0x330544u: goto label_330544;
        case 0x330548u: goto label_330548;
        case 0x33054cu: goto label_33054c;
        case 0x330550u: goto label_330550;
        case 0x330554u: goto label_330554;
        case 0x330558u: goto label_330558;
        case 0x33055cu: goto label_33055c;
        case 0x330560u: goto label_330560;
        case 0x330564u: goto label_330564;
        case 0x330568u: goto label_330568;
        case 0x33056cu: goto label_33056c;
        default: break;
    }

    ctx->pc = 0x330418u;

label_330418:
    // 0x330418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x330418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33041c:
    // 0x33041c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_330420:
    // 0x330420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330424:
    // 0x330424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x330424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_330428:
    // 0x330428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x330428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33042c:
    // 0x33042c: 0xc0c8864  jal         func_322190
label_330430:
    if (ctx->pc == 0x330430u) {
        ctx->pc = 0x330430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33042Cu;
        // 0x330430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330434u;
        goto label_330434;
    }
    ctx->pc = 0x33042Cu;
    SET_GPR_U32(ctx, 31, 0x330434u);
    ctx->pc = 0x330430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33042Cu;
    // 0x330430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x33042Cu, 0x330434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330434u;
label_330434:
    // 0x330434: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x330434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330438:
    // 0x330438: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x330438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_33043c:
    // 0x33043c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_330440:
    // 0x330440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330444:
    // 0x330444: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x330444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_330448:
    // 0x330448: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x330448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33044c:
    // 0x33044c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_330450:
    // 0x330450: 0x40f809  jalr        $v0
label_330454:
    if (ctx->pc == 0x330454u) {
        ctx->pc = 0x330454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330450u;
        // 0x330454: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330458u;
        goto label_330458;
    }
    ctx->pc = 0x330450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330458u);
        ctx->pc = 0x330454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330450u;
        // 0x330454: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330450u, 0x330458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330458u;
label_330458:
    // 0x330458: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x330458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_33045c:
    // 0x33045c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33045cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330460:
    // 0x330460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x330460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_330464:
    // 0x330464: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x330464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_330468:
    // 0x330468: 0x0  nop
    ctx->pc = 0x330468u;
    // NOP
label_33046c:
    // 0x33046c: 0x0  nop
    ctx->pc = 0x33046cu;
    // NOP
label_330470:
    // 0x330470: 0x0  nop
    ctx->pc = 0x330470u;
    // NOP
label_330474:
    // 0x330474: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_330478:
    if (ctx->pc == 0x330478u) {
        ctx->pc = 0x330478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330474u;
        // 0x330478: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33047Cu;
        goto label_33047c;
    }
    ctx->pc = 0x330474u;
    {
        const bool branch_taken_0x330474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x330478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330474u;
        // 0x330478: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330474) {
            ctx->pc = 0x330460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330460;
        }
    }
    ctx->pc = 0x33047Cu;
label_33047c:
    // 0x33047c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x33047cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_330480:
    // 0x330480: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x330480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_330484:
    // 0x330484: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x330484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330488:
    // 0x330488: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x330488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33048c:
    // 0x33048c: 0x24e8000c  addiu       $t0, $a3, 0xC
    ctx->pc = 0x33048cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_330490:
    // 0x330490: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x330490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_330494:
    // 0x330494: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x330494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_330498:
    // 0x330498: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x330498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_33049c:
    // 0x33049c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x33049cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3304a0:
    // 0x3304a0: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x3304a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_3304a4:
    // 0x3304a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3304a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3304a8:
    // 0x3304a8: 0x95020014  lhu         $v0, 0x14($t0)
    ctx->pc = 0x3304a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
label_3304ac:
    // 0x3304ac: 0xc0cf25c  jal         func_33C970
label_3304b0:
    if (ctx->pc == 0x3304B0u) {
        ctx->pc = 0x3304B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304ACu;
        // 0x3304b0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3304B4u;
        goto label_3304b4;
    }
    ctx->pc = 0x3304ACu;
    SET_GPR_U32(ctx, 31, 0x3304B4u);
    ctx->pc = 0x3304B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304ACu;
    // 0x3304b0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x3304ACu, 0x3304B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304B4u;
label_3304b4:
    // 0x3304b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3304b8:
    if (ctx->pc == 0x3304B8u) {
        ctx->pc = 0x3304B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304B4u;
        // 0x3304b8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3304BCu;
        goto label_3304bc;
    }
    ctx->pc = 0x3304B4u;
    {
        const bool branch_taken_0x3304b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3304B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304B4u;
        // 0x3304b8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304b4) {
            ctx->pc = 0x3304D8u;
            goto label_3304d8;
        }
    }
    ctx->pc = 0x3304BCu;
label_3304bc:
    // 0x3304bc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3304bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3304c0:
    // 0x3304c0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x3304c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_3304c4:
    // 0x3304c4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3304c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3304c8:
    // 0x3304c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3304c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3304cc:
    // 0x3304cc: 0x40f809  jalr        $v0
label_3304d0:
    if (ctx->pc == 0x3304D0u) {
        ctx->pc = 0x3304D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304CCu;
        // 0x3304d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3304D4u;
        goto label_3304d4;
    }
    ctx->pc = 0x3304CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3304D4u);
        ctx->pc = 0x3304D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304CCu;
        // 0x3304d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3304CCu, 0x3304D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3304D4u;
label_3304d4:
    // 0x3304d4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3304d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3304d8:
    // 0x3304d8: 0xc0c77e8  jal         func_31DFA0
label_3304dc:
    if (ctx->pc == 0x3304DCu) {
        ctx->pc = 0x3304DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304D8u;
        // 0x3304dc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3304E0u;
        goto label_3304e0;
    }
    ctx->pc = 0x3304D8u;
    SET_GPR_U32(ctx, 31, 0x3304E0u);
    ctx->pc = 0x3304DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304D8u;
    // 0x3304dc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x3304D8u, 0x3304E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304E0u;
label_3304e0:
    // 0x3304e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3304e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3304e4:
    // 0x3304e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3304e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3304e8:
    // 0x3304e8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3304e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_3304ec:
    // 0x3304ec: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x3304ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3304f0:
    // 0x3304f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3304f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3304f4:
    // 0x3304f4: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3304f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3304f8:
    // 0x3304f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3304f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3304fc:
    // 0x3304fc: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x3304fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_330500:
    // 0x330500: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x330500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_330504:
    // 0x330504: 0x95070008  lhu         $a3, 0x8($t0)
    ctx->pc = 0x330504u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_330508:
    // 0x330508: 0xae27001c  sw          $a3, 0x1C($s1)
    ctx->pc = 0x330508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 7));
label_33050c:
    // 0x33050c: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x33050cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_330510:
    // 0x330510: 0xc0cf25c  jal         func_33C970
label_330514:
    if (ctx->pc == 0x330514u) {
        ctx->pc = 0x330514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330510u;
        // 0x330514: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330518u;
        goto label_330518;
    }
    ctx->pc = 0x330510u;
    SET_GPR_U32(ctx, 31, 0x330518u);
    ctx->pc = 0x330514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330510u;
    // 0x330514: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x330510u, 0x330518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330518u;
label_330518:
    // 0x330518: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33051c:
    if (ctx->pc == 0x33051Cu) {
        ctx->pc = 0x33051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330518u;
        // 0x33051c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330520u;
        goto label_330520;
    }
    ctx->pc = 0x330518u;
    {
        const bool branch_taken_0x330518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330518u;
        // 0x33051c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330518) {
            ctx->pc = 0x33053Cu;
            goto label_33053c;
        }
    }
    ctx->pc = 0x330520u;
label_330520:
    // 0x330520: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x330520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_330524:
    // 0x330524: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x330524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_330528:
    // 0x330528: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x330528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33052c:
    // 0x33052c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_330530:
    // 0x330530: 0x40f809  jalr        $v0
label_330534:
    if (ctx->pc == 0x330534u) {
        ctx->pc = 0x330534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330530u;
        // 0x330534: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330538u;
        goto label_330538;
    }
    ctx->pc = 0x330530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330538u);
        ctx->pc = 0x330534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330530u;
        // 0x330534: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330530u, 0x330538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330538u;
label_330538:
    // 0x330538: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x330538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_33053c:
    // 0x33053c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x33053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_330540:
    // 0x330540: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x330540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_330544:
    // 0x330544: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x330544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_330548:
    // 0x330548: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x330548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33054c:
    // 0x33054c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_330550:
    // 0x330550: 0x40f809  jalr        $v0
label_330554:
    if (ctx->pc == 0x330554u) {
        ctx->pc = 0x330554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330550u;
        // 0x330554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330558u;
        goto label_330558;
    }
    ctx->pc = 0x330550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330558u);
        ctx->pc = 0x330554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330550u;
        // 0x330554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330550u, 0x330558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330558u;
label_330558:
    // 0x330558: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x330558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33055c:
    // 0x33055c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33055cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_330560:
    // 0x330560: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x330560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_330564:
    // 0x330564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x330564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_330568:
    // 0x330568: 0x3e00008  jr          $ra
label_33056c:
    if (ctx->pc == 0x33056Cu) {
        ctx->pc = 0x33056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330568u;
        // 0x33056c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330570u;
        goto label_fallthrough_0x330568;
    }
    ctx->pc = 0x330568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330568u;
        // 0x33056c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x330568:
    ctx->pc = 0x330570u;
}
