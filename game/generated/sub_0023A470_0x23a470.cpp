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

// Function: sub_0023A470
// Address: 0x23a470 - 0x23a5c0
void sub_0023A470_0x23a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A470_0x23a470");
#endif

    switch (ctx->pc) {
        case 0x23a49cu: goto label_23a49c;
        case 0x23a4a8u: goto label_23a4a8;
        case 0x23a4bcu: goto label_23a4bc;
        case 0x23a4e0u: goto label_23a4e0;
        case 0x23a4e8u: goto label_23a4e8;
        case 0x23a50cu: goto label_23a50c;
        case 0x23a524u: goto label_23a524;
        case 0x23a53cu: goto label_23a53c;
        case 0x23a554u: goto label_23a554;
        case 0x23a56cu: goto label_23a56c;
        case 0x23a584u: goto label_23a584;
        case 0x23a59cu: goto label_23a59c;
        default: break;
    }

    ctx->pc = 0x23a470u;

    // 0x23a470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a47c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x23a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23a480: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23a484: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23a484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a488: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23a48c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23a48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23a490: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23a490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23a494: 0xc04a151  jal         func_128544
    ctx->pc = 0x23A494u;
    SET_GPR_U32(ctx, 31, 0x23A49Cu);
    ctx->pc = 0x23A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A494u;
    // 0x23a498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x23A494u, 0x23A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A49Cu;
label_23a49c:
    // 0x23a49c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23a4a0: 0x247288d0  addiu       $s2, $v1, -0x7730
    ctx->pc = 0x23a4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x23a4a4: 0x0  nop
    ctx->pc = 0x23a4a4u;
    // NOP
label_23a4a8:
    // 0x23a4a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23a4ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23a4b4: 0xc08e8c4  jal         func_23A310
    ctx->pc = 0x23A4B4u;
    SET_GPR_U32(ctx, 31, 0x23A4BCu);
    ctx->pc = 0x23A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4B4u;
    // 0x23a4b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A310u, 0x23A4B4u, 0x23A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4BCu;
label_23a4bc:
    // 0x23a4bc: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x23a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23a4c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a4c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23a4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23a4c8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x23a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x23a4cc: 0x2a250002  slti        $a1, $s1, 0x2
    ctx->pc = 0x23a4ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a4d0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x23A4D0u;
    {
        const bool branch_taken_0x23a4d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D0u;
        // 0x23a4d4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4d0) {
            ctx->pc = 0x23A4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4a8;
        }
    }
    ctx->pc = 0x23A4D8u;
    // 0x23a4d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23a4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4dc: 0x0  nop
    ctx->pc = 0x23a4dcu;
    // NOP
label_23a4e0:
    // 0x23a4e0: 0xc08e76c  jal         func_239DB0
    ctx->pc = 0x23A4E0u;
    SET_GPR_U32(ctx, 31, 0x23A4E8u);
    ctx->pc = 0x23A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4E0u;
    // 0x23a4e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239DB0u, 0x23A4E0u, 0x23A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4E8u;
label_23a4e8:
    // 0x23a4e8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23A4E8u;
    {
        const bool branch_taken_0x23a4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E8u;
        // 0x23a4ec: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e8) {
            ctx->pc = 0x23A59Cu;
            goto label_23a59c;
        }
    }
    ctx->pc = 0x23A4F0u;
    // 0x23a4f0: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x23a4f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a4f8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x23a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x23a4fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A4FCu;
    {
        const bool branch_taken_0x23a4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4FCu;
        // 0x23a500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4fc) {
            ctx->pc = 0x23A510u;
            goto label_23a510;
        }
    }
    ctx->pc = 0x23A504u;
    // 0x23a504: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A504u;
    SET_GPR_U32(ctx, 31, 0x23A50Cu);
    ctx->pc = 0x23A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A504u;
    // 0x23a508: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A504u, 0x23A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A50Cu;
label_23a50c:
    // 0x23a50c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a510:
    // 0x23a510: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23a510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23a514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A514u;
    {
        const bool branch_taken_0x23a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A514u;
        // 0x23a518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a514) {
            ctx->pc = 0x23A528u;
            goto label_23a528;
        }
    }
    ctx->pc = 0x23A51Cu;
    // 0x23a51c: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A51Cu;
    SET_GPR_U32(ctx, 31, 0x23A524u);
    ctx->pc = 0x23A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A51Cu;
    // 0x23a520: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A51Cu, 0x23A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A524u;
label_23a524:
    // 0x23a524: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a528:
    // 0x23a528: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x23a528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x23a52c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A52Cu;
    {
        const bool branch_taken_0x23a52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A52Cu;
        // 0x23a530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a52c) {
            ctx->pc = 0x23A540u;
            goto label_23a540;
        }
    }
    ctx->pc = 0x23A534u;
    // 0x23a534: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A534u;
    SET_GPR_U32(ctx, 31, 0x23A53Cu);
    ctx->pc = 0x23A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A534u;
    // 0x23a538: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A534u, 0x23A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A53Cu;
label_23a53c:
    // 0x23a53c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a540:
    // 0x23a540: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x23a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x23a544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A544u;
    {
        const bool branch_taken_0x23a544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A544u;
        // 0x23a548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a544) {
            ctx->pc = 0x23A558u;
            goto label_23a558;
        }
    }
    ctx->pc = 0x23A54Cu;
    // 0x23a54c: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A54Cu;
    SET_GPR_U32(ctx, 31, 0x23A554u);
    ctx->pc = 0x23A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A54Cu;
    // 0x23a550: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A54Cu, 0x23A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A554u;
label_23a554:
    // 0x23a554: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a558:
    // 0x23a558: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x23a558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x23a55c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A55Cu;
    {
        const bool branch_taken_0x23a55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A55Cu;
        // 0x23a560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a55c) {
            ctx->pc = 0x23A570u;
            goto label_23a570;
        }
    }
    ctx->pc = 0x23A564u;
    // 0x23a564: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A564u;
    SET_GPR_U32(ctx, 31, 0x23A56Cu);
    ctx->pc = 0x23A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A564u;
    // 0x23a568: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A564u, 0x23A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A56Cu;
label_23a56c:
    // 0x23a56c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a570:
    // 0x23a570: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x23a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x23a574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A574u;
    {
        const bool branch_taken_0x23a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A574u;
        // 0x23a578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a574) {
            ctx->pc = 0x23A588u;
            goto label_23a588;
        }
    }
    ctx->pc = 0x23A57Cu;
    // 0x23a57c: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A57Cu;
    SET_GPR_U32(ctx, 31, 0x23A584u);
    ctx->pc = 0x23A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A57Cu;
    // 0x23a580: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A57Cu, 0x23A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A584u;
label_23a584:
    // 0x23a584: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a588:
    // 0x23a588: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x23a588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x23a58c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A58Cu;
    {
        const bool branch_taken_0x23a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A58Cu;
        // 0x23a590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a58c) {
            ctx->pc = 0x23A59Cu;
            goto label_23a59c;
        }
    }
    ctx->pc = 0x23A594u;
    // 0x23a594: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A594u;
    SET_GPR_U32(ctx, 31, 0x23A59Cu);
    ctx->pc = 0x23A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A594u;
    // 0x23a598: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A594u, 0x23A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A59Cu;
label_23a59c:
    // 0x23a59c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23a59cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23a5a0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x23a5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a5a4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x23A5A4u;
    {
        const bool branch_taken_0x23a5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A4u;
        // 0x23a5a8: 0xdfbf0028  ld          $ra, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5a4) {
            ctx->pc = 0x23A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4e0;
        }
    }
    ctx->pc = 0x23A5ACu;
    // 0x23a5ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23a5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a5b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23a5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a5b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23a5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5B8u;
        // 0x23a5bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5C0u;
}
