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

// Function: sub_00277760
// Address: 0x277760 - 0x2778c0
void sub_00277760_0x277760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277760_0x277760");
#endif

    switch (ctx->pc) {
        case 0x2777b4u: goto label_2777b4;
        case 0x2777e8u: goto label_2777e8;
        case 0x277870u: goto label_277870;
        default: break;
    }

    ctx->pc = 0x277760u;

    // 0x277760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27776c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x277770: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x277770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x277774: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x277774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x277778: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x277778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27777c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x277780: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x277780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x277784: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x277784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x277788: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x277788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27778c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27778cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x277790: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x277790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277794: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x277794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x277798: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x277798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x27779c: 0x2631a620  addiu       $s1, $s1, -0x59E0
    ctx->pc = 0x27779cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944288));
    // 0x2777a0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2777a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2777a4: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x2777a8: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x2777a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2777ac: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x2777ACu;
    SET_GPR_U32(ctx, 31, 0x2777B4u);
    ctx->pc = 0x2777B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2777ACu;
    // 0x2777b0: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x2777ACu, 0x2777B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777B4u;
label_2777b4:
    // 0x2777b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2777B4u;
    {
        const bool branch_taken_0x2777b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2777B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777B4u;
        // 0x2777b8: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777b4) {
            ctx->pc = 0x2777C8u;
            goto label_2777c8;
        }
    }
    ctx->pc = 0x2777BCu;
    // 0x2777bc: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2777bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x2777c0: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2777C0u;
    {
        const bool branch_taken_0x2777c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2777c0) {
            ctx->pc = 0x2777C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2777C0u;
            // 0x2777c4: 0x129080  sll         $s2, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277898u;
            goto label_277898;
        }
    }
    ctx->pc = 0x2777C8u;
label_2777c8:
    // 0x2777c8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2777c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2777cc: 0x2782aeb0  addiu       $v0, $gp, -0x5150
    ctx->pc = 0x2777ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946480));
    // 0x2777d0: 0x24943360  addiu       $s4, $a0, 0x3360
    ctx->pc = 0x2777d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 13152));
    // 0x2777d4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2777d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B3360u));
    // 0x2777d8: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2777D8u;
    {
        const bool branch_taken_0x2777d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2777d8) {
            ctx->pc = 0x2777DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2777D8u;
            // 0x2777dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2778A0u;
            goto label_2778a0;
        }
    }
    ctx->pc = 0x2777E0u;
    // 0x2777e0: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x2777E0u;
    SET_GPR_U32(ctx, 31, 0x2777E8u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x2777E0u, 0x2777E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777E8u;
label_2777e8:
    // 0x2777e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2777E8u;
    {
        const bool branch_taken_0x2777e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2777e8) {
            ctx->pc = 0x2777ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2777E8u;
            // 0x2777ec: 0x8e2306a8  lw          $v1, 0x6A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27780Cu;
            goto label_27780c;
        }
    }
    ctx->pc = 0x2777F0u;
    // 0x2777f0: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x2777f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2777f4: 0x92030207  lbu         $v1, 0x207($s0)
    ctx->pc = 0x2777f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
    // 0x2777f8: 0x92040206  lbu         $a0, 0x206($s0)
    ctx->pc = 0x2777f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 518)));
    // 0x2777fc: 0xa2020209  sb          $v0, 0x209($s0)
    ctx->pc = 0x2777fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
    // 0x277800: 0xa2030208  sb          $v1, 0x208($s0)
    ctx->pc = 0x277800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 520), (uint8_t)GPR_U32(ctx, 3));
    // 0x277804: 0xa2040207  sb          $a0, 0x207($s0)
    ctx->pc = 0x277804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 519), (uint8_t)GPR_U32(ctx, 4));
    // 0x277808: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x277808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_27780c:
    // 0x27780c: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x277810: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x277810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x277814: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27781c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27781cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x277820: 0x8e2506a8  lw          $a1, 0x6A8($s1)
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x277824: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x277824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x277828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x277828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27782c: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27782Cu;
    {
        const bool branch_taken_0x27782c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27782Cu;
        // 0x277830: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27782c) {
            ctx->pc = 0x27789Cu;
            goto label_27789c;
        }
    }
    ctx->pc = 0x277834u;
    // 0x277834: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x277834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x277838: 0x8e2406a8  lw          $a0, 0x6A8($s1)
    ctx->pc = 0x277838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x27783c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277844: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x277844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x277848: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x277848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x27784c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x27784cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x277850: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x277850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x277854: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x277854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x277858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277858u;
    {
        const bool branch_taken_0x277858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277858u;
        // 0x27785c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277858) {
            ctx->pc = 0x277868u;
            goto label_277868;
        }
    }
    ctx->pc = 0x277860u;
    // 0x277860: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x277860u;
    {
        const bool branch_taken_0x277860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277860u;
        // 0x277864: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277860) {
            ctx->pc = 0x277898u;
            goto label_277898;
        }
    }
    ctx->pc = 0x277868u;
label_277868:
    // 0x277868: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x277868u;
    SET_GPR_U32(ctx, 31, 0x277870u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x277868u, 0x277870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277870u;
label_277870:
    // 0x277870: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x277870u;
    {
        const bool branch_taken_0x277870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277870u;
        // 0x277874: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277870) {
            ctx->pc = 0x27789Cu;
            goto label_27789c;
        }
    }
    ctx->pc = 0x277878u;
    // 0x277878: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x277878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x27787c: 0x92040206  lbu         $a0, 0x206($s0)
    ctx->pc = 0x27787cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 518)));
    // 0x277880: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x277880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x277884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277888: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x277888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27788c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x27788cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x277890: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x277890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x277894: 0xa2040206  sb          $a0, 0x206($s0)
    ctx->pc = 0x277894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 518), (uint8_t)GPR_U32(ctx, 4));
label_277898:
    // 0x277898: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x277898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_27789c:
    // 0x27789c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27789cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2778a0:
    // 0x2778a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2778a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2778a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2778a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2778a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2778a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2778ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2778acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2778b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2778b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2778b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2778B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2778B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778B4u;
        // 0x2778b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2778B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2778BCu;
    // 0x2778bc: 0x0  nop
    ctx->pc = 0x2778bcu;
    // NOP
    ctx->pc = 0x2778c0u;
}
