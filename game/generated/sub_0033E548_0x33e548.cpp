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

// Function: sub_0033E548
// Address: 0x33e548 - 0x33e628
void sub_0033E548_0x33e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E548_0x33e548");
#endif

    switch (ctx->pc) {
        case 0x33e548u: goto label_33e548;
        case 0x33e54cu: goto label_33e54c;
        case 0x33e550u: goto label_33e550;
        case 0x33e554u: goto label_33e554;
        case 0x33e558u: goto label_33e558;
        case 0x33e55cu: goto label_33e55c;
        case 0x33e560u: goto label_33e560;
        case 0x33e564u: goto label_33e564;
        case 0x33e568u: goto label_33e568;
        case 0x33e56cu: goto label_33e56c;
        case 0x33e570u: goto label_33e570;
        case 0x33e574u: goto label_33e574;
        case 0x33e578u: goto label_33e578;
        case 0x33e57cu: goto label_33e57c;
        case 0x33e580u: goto label_33e580;
        case 0x33e584u: goto label_33e584;
        case 0x33e588u: goto label_33e588;
        case 0x33e58cu: goto label_33e58c;
        case 0x33e590u: goto label_33e590;
        case 0x33e594u: goto label_33e594;
        case 0x33e598u: goto label_33e598;
        case 0x33e59cu: goto label_33e59c;
        case 0x33e5a0u: goto label_33e5a0;
        case 0x33e5a4u: goto label_33e5a4;
        case 0x33e5a8u: goto label_33e5a8;
        case 0x33e5acu: goto label_33e5ac;
        case 0x33e5b0u: goto label_33e5b0;
        case 0x33e5b4u: goto label_33e5b4;
        case 0x33e5b8u: goto label_33e5b8;
        case 0x33e5bcu: goto label_33e5bc;
        case 0x33e5c0u: goto label_33e5c0;
        case 0x33e5c4u: goto label_33e5c4;
        case 0x33e5c8u: goto label_33e5c8;
        case 0x33e5ccu: goto label_33e5cc;
        case 0x33e5d0u: goto label_33e5d0;
        case 0x33e5d4u: goto label_33e5d4;
        case 0x33e5d8u: goto label_33e5d8;
        case 0x33e5dcu: goto label_33e5dc;
        case 0x33e5e0u: goto label_33e5e0;
        case 0x33e5e4u: goto label_33e5e4;
        case 0x33e5e8u: goto label_33e5e8;
        case 0x33e5ecu: goto label_33e5ec;
        case 0x33e5f0u: goto label_33e5f0;
        case 0x33e5f4u: goto label_33e5f4;
        case 0x33e5f8u: goto label_33e5f8;
        case 0x33e5fcu: goto label_33e5fc;
        case 0x33e600u: goto label_33e600;
        case 0x33e604u: goto label_33e604;
        case 0x33e608u: goto label_33e608;
        case 0x33e60cu: goto label_33e60c;
        case 0x33e610u: goto label_33e610;
        case 0x33e614u: goto label_33e614;
        case 0x33e618u: goto label_33e618;
        case 0x33e61cu: goto label_33e61c;
        case 0x33e620u: goto label_33e620;
        case 0x33e624u: goto label_33e624;
        default: break;
    }

    ctx->pc = 0x33e548u;

label_33e548:
    // 0x33e548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33e54c:
    // 0x33e54c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e550:
    // 0x33e550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33e550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e554:
    // 0x33e554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e558:
    // 0x33e558: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33e558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e55c:
    // 0x33e55c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33e560:
    // 0x33e560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e564:
    // 0x33e564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33e568:
    // 0x33e568: 0xc0c77ea  jal         func_31DFA8
label_33e56c:
    if (ctx->pc == 0x33E56Cu) {
        ctx->pc = 0x33E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E568u;
        // 0x33e56c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E570u;
        goto label_33e570;
    }
    ctx->pc = 0x33E568u;
    SET_GPR_U32(ctx, 31, 0x33E570u);
    ctx->pc = 0x33E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E568u;
    // 0x33e56c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x33E568u, 0x33E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E570u;
label_33e570:
    // 0x33e570: 0x1000001f  b           . + 4 + (0x1F << 2)
label_33e574:
    if (ctx->pc == 0x33E574u) {
        ctx->pc = 0x33E578u;
        goto label_33e578;
    }
    ctx->pc = 0x33E570u;
    {
        const bool branch_taken_0x33e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e570) {
            ctx->pc = 0x33E5F0u;
            goto label_33e5f0;
        }
    }
    ctx->pc = 0x33E578u;
label_33e578:
    // 0x33e578: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x33e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_33e57c:
    // 0x33e57c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e580:
    // 0x33e580: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e584:
    // 0x33e584: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e588:
    // 0x33e588: 0x40f809  jalr        $v0
label_33e58c:
    if (ctx->pc == 0x33E58Cu) {
        ctx->pc = 0x33E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E588u;
        // 0x33e58c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E590u;
        goto label_33e590;
    }
    ctx->pc = 0x33E588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E590u);
        ctx->pc = 0x33E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E588u;
        // 0x33e58c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E588u, 0x33E590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E590u;
label_33e590:
    // 0x33e590: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33e590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e594:
    // 0x33e594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33e594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e598:
    // 0x33e598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33e598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e59c:
    // 0x33e59c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33e5a0:
    // 0x33e5a0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_33e5a4:
    // 0x33e5a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e5a8:
    // 0x33e5a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e5ac:
    // 0x33e5ac: 0x40f809  jalr        $v0
label_33e5b0:
    if (ctx->pc == 0x33E5B0u) {
        ctx->pc = 0x33E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ACu;
        // 0x33e5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5B4u;
        goto label_33e5b4;
    }
    ctx->pc = 0x33E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E5B4u);
        ctx->pc = 0x33E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ACu;
        // 0x33e5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5ACu, 0x33E5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E5B4u;
label_33e5b4:
    // 0x33e5b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e5b8:
    // 0x33e5b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_33e5bc:
    if (ctx->pc == 0x33E5BCu) {
        ctx->pc = 0x33E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5B8u;
        // 0x33e5bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5C0u;
        goto label_33e5c0;
    }
    ctx->pc = 0x33E5B8u;
    {
        const bool branch_taken_0x33e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5B8u;
        // 0x33e5bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5b8) {
            ctx->pc = 0x33E5ECu;
            goto label_33e5ec;
        }
    }
    ctx->pc = 0x33E5C0u;
label_33e5c0:
    // 0x33e5c0: 0xc0c7766  jal         func_31DD98
label_33e5c4:
    if (ctx->pc == 0x33E5C4u) {
        ctx->pc = 0x33E5C8u;
        goto label_33e5c8;
    }
    ctx->pc = 0x33E5C0u;
    SET_GPR_U32(ctx, 31, 0x33E5C8u);
    ctx->pc = 0x31DD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD98u, 0x33E5C0u, 0x33E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E5C8u;
label_33e5c8:
    // 0x33e5c8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33e5cc:
    // 0x33e5cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33e5ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e5d0:
    // 0x33e5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33e5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e5d4:
    // 0x33e5d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33e5d8:
    // 0x33e5d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e5dc:
    // 0x33e5dc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e5e0:
    // 0x33e5e0: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x33e5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e5e4:
    // 0x33e5e4: 0x100f809  jalr        $t0
label_33e5e8:
    if (ctx->pc == 0x33E5E8u) {
        ctx->pc = 0x33E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5E4u;
        // 0x33e5e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5ECu;
        goto label_33e5ec;
    }
    ctx->pc = 0x33E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x33E5ECu);
        ctx->pc = 0x33E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5E4u;
        // 0x33e5e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5E4u, 0x33E5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E5ECu;
label_33e5ec:
    // 0x33e5ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33e5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33e5f0:
    // 0x33e5f0: 0xc0c7764  jal         func_31DD90
label_33e5f4:
    if (ctx->pc == 0x33E5F4u) {
        ctx->pc = 0x33E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5F0u;
        // 0x33e5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5F8u;
        goto label_33e5f8;
    }
    ctx->pc = 0x33E5F0u;
    SET_GPR_U32(ctx, 31, 0x33E5F8u);
    ctx->pc = 0x33E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E5F0u;
    // 0x33e5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD90u, 0x33E5F0u, 0x33E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E5F8u;
label_33e5f8:
    // 0x33e5f8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x33e5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33e5fc:
    // 0x33e5fc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_33e600:
    if (ctx->pc == 0x33E600u) {
        ctx->pc = 0x33E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5FCu;
        // 0x33e600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E604u;
        goto label_33e604;
    }
    ctx->pc = 0x33E5FCu;
    {
        const bool branch_taken_0x33e5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5FCu;
        // 0x33e600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5fc) {
            ctx->pc = 0x33E578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e578;
        }
    }
    ctx->pc = 0x33E604u;
label_33e604:
    // 0x33e604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e608:
    // 0x33e608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33e608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e60c:
    // 0x33e60c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e610:
    // 0x33e610: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e614:
    // 0x33e614: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33e614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e618:
    // 0x33e618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33e618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33e61c:
    // 0x33e61c: 0x3e00008  jr          $ra
label_33e620:
    if (ctx->pc == 0x33E620u) {
        ctx->pc = 0x33E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E61Cu;
        // 0x33e620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E624u;
        goto label_33e624;
    }
    ctx->pc = 0x33E61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E61Cu;
        // 0x33e620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E624u;
label_33e624:
    // 0x33e624: 0x0  nop
    ctx->pc = 0x33e624u;
    // NOP
    ctx->pc = 0x33e628u;
}
