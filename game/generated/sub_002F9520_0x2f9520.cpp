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

// Function: sub_002F9520
// Address: 0x2f9520 - 0x2f9698
void sub_002F9520_0x2f9520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9520_0x2f9520");
#endif

    switch (ctx->pc) {
        case 0x2f956cu: goto label_2f956c;
        case 0x2f9578u: goto label_2f9578;
        case 0x2f9598u: goto label_2f9598;
        case 0x2f95ccu: goto label_2f95cc;
        case 0x2f95e0u: goto label_2f95e0;
        case 0x2f95f0u: goto label_2f95f0;
        case 0x2f9628u: goto label_2f9628;
        case 0x2f9638u: goto label_2f9638;
        case 0x2f966cu: goto label_2f966c;
        case 0x2f967cu: goto label_2f967c;
        default: break;
    }

    ctx->pc = 0x2f9520u;

    // 0x2f9520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f9524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f9528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f952c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9530: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x2f9530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2f9534: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f9538: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f9538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f953c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f953cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9540: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9540u;
    {
        const bool branch_taken_0x2f9540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9540) {
            ctx->pc = 0x2F9544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9540u;
            // 0x2f9544: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F955Cu;
            goto label_2f955c;
        }
    }
    ctx->pc = 0x2F9548u;
    // 0x2f9548: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f954c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9550: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9550u;
    {
        const bool branch_taken_0x2f9550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9550) {
            ctx->pc = 0x2F9564u;
            goto label_2f9564;
        }
    }
    ctx->pc = 0x2F9558u;
    // 0x2f9558: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f955c:
    // 0x2f955c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9560: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9564:
    // 0x2f9564: 0xc0bdf08  jal         func_2F7C20
    ctx->pc = 0x2F9564u;
    SET_GPR_U32(ctx, 31, 0x2F956Cu);
    ctx->pc = 0x2F9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9564u;
    // 0x2f9568: 0x3c12003e  lui         $s2, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7C20u, 0x2F9564u, 0x2F956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F956Cu;
label_2f956c:
    // 0x2f956c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x2f956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x2f9570: 0xc0bb8b0  jal         func_2EE2C0
    ctx->pc = 0x2F9570u;
    SET_GPR_U32(ctx, 31, 0x2F9578u);
    ctx->pc = 0x2F9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9570u;
    // 0x2f9574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2F9570u, 0x2F9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9578u;
label_2f9578:
    // 0x2f9578: 0x30420890  andi        $v0, $v0, 0x890
    ctx->pc = 0x2f9578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2192);
    // 0x2f957c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F957Cu;
    {
        const bool branch_taken_0x2f957c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f957c) {
            ctx->pc = 0x2F95D8u;
            goto label_2f95d8;
        }
    }
    ctx->pc = 0x2F9584u;
    // 0x2f9584: 0x1a00003b  blez        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F9584u;
    {
        const bool branch_taken_0x2f9584 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2f9584) {
            ctx->pc = 0x2F9674u;
            goto label_2f9674;
        }
    }
    ctx->pc = 0x2F958Cu;
    // 0x2f958c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9590: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F9590u;
    SET_GPR_U32(ctx, 31, 0x2F9598u);
    ctx->pc = 0x2F9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9590u;
    // 0x2f9594: 0x264437e0  addiu       $a0, $s2, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F9590u, 0x2F9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9598u;
label_2f9598:
    // 0x2f9598: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f9598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f959c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f95a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F95A0u;
    {
        const bool branch_taken_0x2f95a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f95a0) {
            ctx->pc = 0x2F95A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F95A0u;
            // 0x2f95a4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F95BCu;
            goto label_2f95bc;
        }
    }
    ctx->pc = 0x2F95A8u;
    // 0x2f95a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f95ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f95acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f95b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F95B0u;
    {
        const bool branch_taken_0x2f95b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f95b0) {
            ctx->pc = 0x2F95C4u;
            goto label_2f95c4;
        }
    }
    ctx->pc = 0x2F95B8u;
    // 0x2f95b8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f95bc:
    // 0x2f95bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f95bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f95c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f95c4:
    // 0x2f95c4: 0xc090212  jal         func_240848
    ctx->pc = 0x2F95C4u;
    SET_GPR_U32(ctx, 31, 0x2F95CCu);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x2F95C4u, 0x2F95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95CCu;
label_2f95cc:
    // 0x2f95cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f95ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f95d0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F95D0u;
    {
        const bool branch_taken_0x2f95d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f95d0) {
            ctx->pc = 0x2F9674u;
            goto label_2f9674;
        }
    }
    ctx->pc = 0x2F95D8u;
label_2f95d8:
    // 0x2f95d8: 0xc09031c  jal         func_240C70
    ctx->pc = 0x2F95D8u;
    SET_GPR_U32(ctx, 31, 0x2F95E0u);
    ctx->pc = 0x240C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C70u, 0x2F95D8u, 0x2F95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95E0u;
label_2f95e0:
    // 0x2f95e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F95E0u;
    {
        const bool branch_taken_0x2f95e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95E0u;
        // 0x2f95e4: 0x264437e0  addiu       $a0, $s2, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95e0) {
            ctx->pc = 0x2F9630u;
            goto label_2f9630;
        }
    }
    ctx->pc = 0x2F95E8u;
    // 0x2f95e8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F95E8u;
    SET_GPR_U32(ctx, 31, 0x2F95F0u);
    ctx->pc = 0x2F95ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F95E8u;
    // 0x2f95ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F95E8u, 0x2F95F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95F0u;
label_2f95f0:
    // 0x2f95f0: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f95f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f95f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f95f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f95f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F95F8u;
    {
        const bool branch_taken_0x2f95f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f95f8) {
            ctx->pc = 0x2F95FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F95F8u;
            // 0x2f95fc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9614u;
            goto label_2f9614;
        }
    }
    ctx->pc = 0x2F9600u;
    // 0x2f9600: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9604: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9608: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9608u;
    {
        const bool branch_taken_0x2f9608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9608) {
            ctx->pc = 0x2F960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9608u;
            // 0x2f960c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9620u;
            goto label_2f9620;
        }
    }
    ctx->pc = 0x2F9610u;
    // 0x2f9610: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9614:
    // 0x2f9614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9618: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f961c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9620:
    // 0x2f9620: 0xc0902c8  jal         func_240B20
    ctx->pc = 0x2F9620u;
    SET_GPR_U32(ctx, 31, 0x2F9628u);
    ctx->pc = 0x2F9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9620u;
    // 0x2f9624: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B20u, 0x2F9620u, 0x2F9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9628u;
label_2f9628:
    // 0x2f9628: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F9628u;
    {
        const bool branch_taken_0x2f9628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9628u;
        // 0x2f962c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9628) {
            ctx->pc = 0x2F9670u;
            goto label_2f9670;
        }
    }
    ctx->pc = 0x2F9630u;
label_2f9630:
    // 0x2f9630: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F9630u;
    SET_GPR_U32(ctx, 31, 0x2F9638u);
    ctx->pc = 0x2F9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9630u;
    // 0x2f9634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F9630u, 0x2F9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9638u;
label_2f9638:
    // 0x2f9638: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f9638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f963c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9640: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9640u;
    {
        const bool branch_taken_0x2f9640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9640) {
            ctx->pc = 0x2F9644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9640u;
            // 0x2f9644: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F965Cu;
            goto label_2f965c;
        }
    }
    ctx->pc = 0x2F9648u;
    // 0x2f9648: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f964c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9650: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9650u;
    {
        const bool branch_taken_0x2f9650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9650) {
            ctx->pc = 0x2F9664u;
            goto label_2f9664;
        }
    }
    ctx->pc = 0x2F9658u;
    // 0x2f9658: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f965c:
    // 0x2f965c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9660: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9664:
    // 0x2f9664: 0xc0902c4  jal         func_240B10
    ctx->pc = 0x2F9664u;
    SET_GPR_U32(ctx, 31, 0x2F966Cu);
    ctx->pc = 0x2F9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9664u;
    // 0x2f9668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B10u, 0x2F9664u, 0x2F966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F966Cu;
label_2f966c:
    // 0x2f966c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9670:
    // 0x2f9670: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x2f9670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_2f9674:
    // 0x2f9674: 0xc0be5a6  jal         func_2F9698
    ctx->pc = 0x2F9674u;
    SET_GPR_U32(ctx, 31, 0x2F967Cu);
    ctx->pc = 0x2F9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9674u;
    // 0x2f9678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9698u, 0x2F9674u, 0x2F967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F967Cu;
label_2f967c:
    // 0x2f967c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f967cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f9684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9688: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f9688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f968c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F968Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F968Cu;
        // 0x2f9690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F968Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9694u;
    // 0x2f9694: 0x0  nop
    ctx->pc = 0x2f9694u;
    // NOP
    ctx->pc = 0x2f9698u;
}
