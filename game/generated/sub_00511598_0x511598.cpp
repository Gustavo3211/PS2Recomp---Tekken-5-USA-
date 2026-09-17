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

// Function: sub_00511598
// Address: 0x511598 - 0x5116d8
void sub_00511598_0x511598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511598_0x511598");
#endif

    switch (ctx->pc) {
        case 0x5115c8u: goto label_5115c8;
        case 0x511608u: goto label_511608;
        case 0x511618u: goto label_511618;
        case 0x511628u: goto label_511628;
        case 0x511638u: goto label_511638;
        case 0x511648u: goto label_511648;
        case 0x511658u: goto label_511658;
        case 0x511668u: goto label_511668;
        case 0x511688u: goto label_511688;
        default: break;
    }

    ctx->pc = 0x511598u;

    // 0x511598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x511598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51159c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x51159cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x5115a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5115a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5115a4: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x5115a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x5115a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5115a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5115ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5115acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5115b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5115b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5115b4: 0x26023940  addiu       $v0, $s0, 0x3940
    ctx->pc = 0x5115b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14656));
    // 0x5115b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x5115b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x903940u));
    // 0x5115bc: 0x460003e  bltz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x5115BCu;
    {
        const bool branch_taken_0x5115bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x5115C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5115BCu;
        // 0x5115c0: 0xac82c6d0  sw          $v0, -0x3930($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5115bc) {
            ctx->pc = 0x5116B8u;
            goto label_5116b8;
        }
    }
    ctx->pc = 0x5115C4u;
    // 0x5115c4: 0x2487c6d0  addiu       $a3, $a0, -0x3930
    ctx->pc = 0x5115c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952656));
label_5115c8:
    // 0x5115c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x5115c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5115cc: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x5115ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5115d0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x5115d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x5115d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5115d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5115d8: 0x2cc30007  sltiu       $v1, $a2, 0x7
    ctx->pc = 0x5115d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x5115dc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x5115DCu;
    {
        const bool branch_taken_0x5115dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5115E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5115DCu;
        // 0x5115e0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5115dc) {
            ctx->pc = 0x511670u;
            goto label_511670;
        }
    }
    ctx->pc = 0x5115E4u;
    // 0x5115e4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x5115e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x5115e8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x5115e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x5115ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5115ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5115f0: 0x8c63d480  lw          $v1, -0x2B80($v1)
    ctx->pc = 0x5115f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956160)));
    // 0x5115f4: 0x600008  jr          $v1
    ctx->pc = 0x5115F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x511600u: goto label_511600;
            case 0x511610u: goto label_511610;
            case 0x511620u: goto label_511620;
            case 0x511630u: goto label_511630;
            case 0x511640u: goto label_511640;
            case 0x511650u: goto label_511650;
            case 0x511660u: goto label_511660;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5115F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5115FCu;
    // 0x5115fc: 0x0  nop
    ctx->pc = 0x5115fcu;
    // NOP
label_511600:
    // 0x511600: 0xc144432  jal         func_5110C8
    ctx->pc = 0x511600u;
    SET_GPR_U32(ctx, 31, 0x511608u);
    ctx->pc = 0x511604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511600u;
    // 0x511604: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x511600u, 0x511608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511608u;
label_511608:
    // 0x511608: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x511608u;
    {
        const bool branch_taken_0x511608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511608u;
        // 0x51160c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511608) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511610u;
label_511610:
    // 0x511610: 0xc1444c6  jal         func_511318
    ctx->pc = 0x511610u;
    SET_GPR_U32(ctx, 31, 0x511618u);
    ctx->pc = 0x511614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511610u;
    // 0x511614: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511318u, 0x511610u, 0x511618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511618u;
label_511618:
    // 0x511618: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x511618u;
    {
        const bool branch_taken_0x511618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511618u;
        // 0x51161c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511618) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511620u;
label_511620:
    // 0x511620: 0xc1444e4  jal         func_511390
    ctx->pc = 0x511620u;
    SET_GPR_U32(ctx, 31, 0x511628u);
    ctx->pc = 0x511390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511390u, 0x511620u, 0x511628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511628u;
label_511628:
    // 0x511628: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x511628u;
    {
        const bool branch_taken_0x511628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511628u;
        // 0x51162c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511628) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511630u;
label_511630:
    // 0x511630: 0xc14450e  jal         func_511438
    ctx->pc = 0x511630u;
    SET_GPR_U32(ctx, 31, 0x511638u);
    ctx->pc = 0x511438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511438u, 0x511630u, 0x511638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511638u;
label_511638:
    // 0x511638: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x511638u;
    {
        const bool branch_taken_0x511638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511638u;
        // 0x51163c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511638) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511640u;
label_511640:
    // 0x511640: 0xc144546  jal         func_511518
    ctx->pc = 0x511640u;
    SET_GPR_U32(ctx, 31, 0x511648u);
    ctx->pc = 0x511644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511640u;
    // 0x511644: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511518u, 0x511640u, 0x511648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511648u;
label_511648:
    // 0x511648: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x511648u;
    {
        const bool branch_taken_0x511648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511648u;
        // 0x51164c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511648) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511650u;
label_511650:
    // 0x511650: 0xc144556  jal         func_511558
    ctx->pc = 0x511650u;
    SET_GPR_U32(ctx, 31, 0x511658u);
    ctx->pc = 0x511654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511650u;
    // 0x511654: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511558u, 0x511650u, 0x511658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511658u;
label_511658:
    // 0x511658: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x511658u;
    {
        const bool branch_taken_0x511658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511658u;
        // 0x51165c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511658) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511660u;
label_511660:
    // 0x511660: 0xc144520  jal         func_511480
    ctx->pc = 0x511660u;
    SET_GPR_U32(ctx, 31, 0x511668u);
    ctx->pc = 0x511664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511660u;
    // 0x511664: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511480u, 0x511660u, 0x511668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511668u;
label_511668:
    // 0x511668: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x511668u;
    {
        const bool branch_taken_0x511668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511668u;
        // 0x51166c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511668) {
            ctx->pc = 0x5116A8u;
            goto label_5116a8;
        }
    }
    ctx->pc = 0x511670u;
label_511670:
    // 0x511670: 0x26023940  addiu       $v0, $s0, 0x3940
    ctx->pc = 0x511670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14656));
    // 0x511674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x511674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511678: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x511678u;
    {
        const bool branch_taken_0x511678 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x51167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511678u;
        // 0x51167c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511678) {
            ctx->pc = 0x5116B8u;
            goto label_5116b8;
        }
    }
    ctx->pc = 0x511680u;
    // 0x511680: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x511680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511684: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x511684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511688:
    // 0x511688: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x511688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x51168c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51168cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x511690: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x511690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511694: 0x0  nop
    ctx->pc = 0x511694u;
    // NOP
    // 0x511698: 0x0  nop
    ctx->pc = 0x511698u;
    // NOP
    // 0x51169c: 0x463fffa  bgezl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51169Cu;
    {
        const bool branch_taken_0x51169c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x51169c) {
            ctx->pc = 0x5116A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x51169Cu;
            // 0x5116a0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511688;
        }
    }
    ctx->pc = 0x5116A4u;
    // 0x5116a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5116a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5116a8:
    // 0x5116a8: 0x8c82c6d0  lw          $v0, -0x3930($a0)
    ctx->pc = 0x5116a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952656)));
    // 0x5116ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x5116acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5116b0: 0x461ffc5  bgez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x5116B0u;
    {
        const bool branch_taken_0x5116b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x5116B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5116B0u;
        // 0x5116b4: 0x2487c6d0  addiu       $a3, $a0, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5116b0) {
            ctx->pc = 0x5115C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5115c8;
        }
    }
    ctx->pc = 0x5116B8u;
label_5116b8:
    // 0x5116b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5116b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5116bc: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x5116bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x5116c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5116c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5116c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5116c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5116c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5116cc: 0xac623940  sw          $v0, 0x3940($v1)
    ctx->pc = 0x5116ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x903940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903940u, _value); } while (0);
    // 0x5116d0: 0x3e00008  jr          $ra
    ctx->pc = 0x5116D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5116D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5116D0u;
        // 0x5116d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5116D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5116D8u;
}
