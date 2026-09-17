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

// Function: sub_0024B518
// Address: 0x24b518 - 0x24b648
void sub_0024B518_0x24b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B518_0x24b518");
#endif

    switch (ctx->pc) {
        case 0x24b540u: goto label_24b540;
        case 0x24b554u: goto label_24b554;
        case 0x24b560u: goto label_24b560;
        case 0x24b574u: goto label_24b574;
        case 0x24b580u: goto label_24b580;
        case 0x24b5acu: goto label_24b5ac;
        case 0x24b5c8u: goto label_24b5c8;
        case 0x24b5ecu: goto label_24b5ec;
        case 0x24b620u: goto label_24b620;
        default: break;
    }

    ctx->pc = 0x24b518u;

    // 0x24b518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24b51c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24b520: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24b520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b524: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24b528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b52c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24b530: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x24b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x24b534: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x24b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x24b538: 0xc088116  jal         func_220458
    ctx->pc = 0x24B538u;
    SET_GPR_U32(ctx, 31, 0x24B540u);
    ctx->pc = 0x24B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B538u;
    // 0x24b53c: 0x90440040  lbu         $a0, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220458u, 0x24B538u, 0x24B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B540u;
label_24b540:
    // 0x24b540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b544: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24b544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b548: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24b548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b54c: 0xc092cf8  jal         func_24B3E0
    ctx->pc = 0x24B54Cu;
    SET_GPR_U32(ctx, 31, 0x24B554u);
    ctx->pc = 0x24B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B54Cu;
    // 0x24b550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B3E0u, 0x24B54Cu, 0x24B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B554u;
label_24b554:
    // 0x24b554: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x24b558: 0xc088116  jal         func_220458
    ctx->pc = 0x24B558u;
    SET_GPR_U32(ctx, 31, 0x24B560u);
    ctx->pc = 0x24B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B558u;
    // 0x24b55c: 0x90440040  lbu         $a0, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220458u, 0x24B558u, 0x24B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B560u;
label_24b560:
    // 0x24b560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24b564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b568: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24b568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b56c: 0xc092bf2  jal         func_24AFC8
    ctx->pc = 0x24B56Cu;
    SET_GPR_U32(ctx, 31, 0x24B574u);
    ctx->pc = 0x24B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B56Cu;
    // 0x24b570: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AFC8u, 0x24B56Cu, 0x24B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B574u;
label_24b574:
    // 0x24b574: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x24b574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x24b578: 0xc0af99e  jal         func_2BE678
    ctx->pc = 0x24B578u;
    SET_GPR_U32(ctx, 31, 0x24B580u);
    ctx->pc = 0x24B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B578u;
    // 0x24b57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE678u, 0x24B578u, 0x24B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B580u;
label_24b580:
    // 0x24b580: 0x86240096  lh          $a0, 0x96($s1)
    ctx->pc = 0x24b580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x24b584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24b584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b588: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x24b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x24b58c: 0x94430026  lhu         $v1, 0x26($v0)
    ctx->pc = 0x24b58cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x24b590: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B590u;
    {
        const bool branch_taken_0x24b590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24b590) {
            ctx->pc = 0x24B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B590u;
            // 0x24b594: 0x922201fa  lbu         $v0, 0x1FA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 506)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B5B8u;
            goto label_24b5b8;
        }
    }
    ctx->pc = 0x24B598u;
    // 0x24b598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b59c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B59Cu;
    {
        const bool branch_taken_0x24b59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b59c) {
            ctx->pc = 0x24B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B59Cu;
            // 0x24b5a0: 0x922201fa  lbu         $v0, 0x1FA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 506)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B5B8u;
            goto label_24b5b8;
        }
    }
    ctx->pc = 0x24B5A4u;
    // 0x24b5a4: 0xc09296c  jal         func_24A5B0
    ctx->pc = 0x24B5A4u;
    SET_GPR_U32(ctx, 31, 0x24B5ACu);
    ctx->pc = 0x24B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5A4u;
    // 0x24b5a8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5B0u, 0x24B5A4u, 0x24B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5ACu;
label_24b5ac:
    // 0x24b5ac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24B5ACu;
    {
        const bool branch_taken_0x24b5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5ACu;
        // 0x24b5b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5ac) {
            ctx->pc = 0x24B624u;
            goto label_24b624;
        }
    }
    ctx->pc = 0x24B5B4u;
    // 0x24b5b4: 0x0  nop
    ctx->pc = 0x24b5b4u;
    // NOP
label_24b5b8:
    // 0x24b5b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B5B8u;
    {
        const bool branch_taken_0x24b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b5b8) {
            ctx->pc = 0x24B5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B5B8u;
            // 0x24b5bc: 0x922301a4  lbu         $v1, 0x1A4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B5D0u;
            goto label_24b5d0;
        }
    }
    ctx->pc = 0x24B5C0u;
    // 0x24b5c0: 0xc09056e  jal         func_2415B8
    ctx->pc = 0x24B5C0u;
    SET_GPR_U32(ctx, 31, 0x24B5C8u);
    ctx->pc = 0x24B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5C0u;
    // 0x24b5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2415B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2415B8u, 0x24B5C0u, 0x24B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5C8u;
label_24b5c8:
    // 0x24b5c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24B5C8u;
    {
        const bool branch_taken_0x24b5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C8u;
        // 0x24b5cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5c8) {
            ctx->pc = 0x24B624u;
            goto label_24b624;
        }
    }
    ctx->pc = 0x24B5D0u;
label_24b5d0:
    // 0x24b5d0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x24b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x24b5d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B5D4u;
    {
        const bool branch_taken_0x24b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5D4u;
        // 0x24b5d8: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5d4) {
            ctx->pc = 0x24B5F8u;
            goto label_24b5f8;
        }
    }
    ctx->pc = 0x24B5DCu;
    // 0x24b5dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B5DCu;
    {
        const bool branch_taken_0x24b5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b5dc) {
            ctx->pc = 0x24B5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B5DCu;
            // 0x24b5e0: 0x922201fb  lbu         $v0, 0x1FB($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 507)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B5FCu;
            goto label_24b5fc;
        }
    }
    ctx->pc = 0x24B5E4u;
    // 0x24b5e4: 0xc090556  jal         func_241558
    ctx->pc = 0x24B5E4u;
    SET_GPR_U32(ctx, 31, 0x24B5ECu);
    ctx->pc = 0x24B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5E4u;
    // 0x24b5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241558u, 0x24B5E4u, 0x24B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5ECu;
label_24b5ec:
    // 0x24b5ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24B5ECu;
    {
        const bool branch_taken_0x24b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5ECu;
        // 0x24b5f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5ec) {
            ctx->pc = 0x24B624u;
            goto label_24b624;
        }
    }
    ctx->pc = 0x24B5F4u;
    // 0x24b5f4: 0x0  nop
    ctx->pc = 0x24b5f4u;
    // NOP
label_24b5f8:
    // 0x24b5f8: 0x922201fb  lbu         $v0, 0x1FB($s1)
    ctx->pc = 0x24b5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 507)));
label_24b5fc:
    // 0x24b5fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B5FCu;
    {
        const bool branch_taken_0x24b5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5FCu;
        // 0x24b600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5fc) {
            ctx->pc = 0x24B618u;
            goto label_24b618;
        }
    }
    ctx->pc = 0x24B604u;
    // 0x24b604: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x24b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x24b608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B608u;
    {
        const bool branch_taken_0x24b608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B608u;
        // 0x24b60c: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b608) {
            ctx->pc = 0x24B620u;
            goto label_24b620;
        }
    }
    ctx->pc = 0x24B610u;
    // 0x24b610: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B610u;
    {
        const bool branch_taken_0x24b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B610u;
        // 0x24b614: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b610) {
            ctx->pc = 0x24B624u;
            goto label_24b624;
        }
    }
    ctx->pc = 0x24B618u;
label_24b618:
    // 0x24b618: 0xc090576  jal         func_2415D8
    ctx->pc = 0x24B618u;
    SET_GPR_U32(ctx, 31, 0x24B620u);
    ctx->pc = 0x24B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B618u;
    // 0x24b61c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2415D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2415D8u, 0x24B618u, 0x24B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B620u;
label_24b620:
    // 0x24b620: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24b620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24b624:
    // 0x24b624: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24b624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24b628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b62c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B62Cu;
        // 0x24b630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B634u;
    // 0x24b634: 0x0  nop
    ctx->pc = 0x24b634u;
    // NOP
    // 0x24b638: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24b63c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B63Cu;
        // 0x24b640: 0x24427ca8  addiu       $v0, $v0, 0x7CA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B644u;
    // 0x24b644: 0x0  nop
    ctx->pc = 0x24b644u;
    // NOP
    ctx->pc = 0x24b648u;
}
