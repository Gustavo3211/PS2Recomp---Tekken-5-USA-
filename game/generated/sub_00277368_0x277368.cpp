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

// Function: sub_00277368
// Address: 0x277368 - 0x2774d8
void sub_00277368_0x277368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277368_0x277368");
#endif

    switch (ctx->pc) {
        case 0x27737cu: goto label_27737c;
        case 0x27738cu: goto label_27738c;
        case 0x2773a8u: goto label_2773a8;
        case 0x27741cu: goto label_27741c;
        case 0x277440u: goto label_277440;
        case 0x277460u: goto label_277460;
        default: break;
    }

    ctx->pc = 0x277368u;

    // 0x277368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27736c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277370: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x277370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x277374: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x277374u;
    SET_GPR_U32(ctx, 31, 0x27737Cu);
    ctx->pc = 0x277378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277374u;
    // 0x277378: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x277374u, 0x27737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27737Cu;
label_27737c:
    // 0x27737c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27737cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277380: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277384: 0xc07daf2  jal         func_1F6BC8
    ctx->pc = 0x277384u;
    SET_GPR_U32(ctx, 31, 0x27738Cu);
    ctx->pc = 0x277388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277384u;
    // 0x277388: 0x94440004  lhu         $a0, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC8u, 0x277384u, 0x27738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27738Cu;
label_27738c:
    // 0x27738c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27738cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277390: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x277390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x277394: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x277394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x277398: 0x244a88d0  addiu       $t2, $v0, -0x7730
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x27739c: 0x2468a620  addiu       $t0, $v1, -0x59E0
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x2773a0: 0x2787ca78  addiu       $a3, $gp, -0x3588
    ctx->pc = 0x2773a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953592));
    // 0x2773a4: 0x0  nop
    ctx->pc = 0x2773a4u;
    // NOP
label_2773a8:
    // 0x2773a8: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2773a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2773ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2773acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2773b0: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x2773b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2773b4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2773b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2773b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2773b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2773bc: 0x29260002  slti        $a2, $t1, 0x2
    ctx->pc = 0x2773bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2773c0: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x2773c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2773c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2773c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2773c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2773c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2773cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2773ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2773d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2773d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2773d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2773d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2773d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2773dc: 0x8c4306a8  lw          $v1, 0x6A8($v0)
    ctx->pc = 0x2773dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x2773e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2773e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2773e4: 0x8c4406a8  lw          $a0, 0x6A8($v0)
    ctx->pc = 0x2773e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x2773e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2773e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2773ec: 0x8c4306a8  lw          $v1, 0x6A8($v0)
    ctx->pc = 0x2773ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x2773f0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2773f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2773f4: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2773F4u;
    {
        const bool branch_taken_0x2773f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2773F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773F4u;
        // 0x2773f8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773f4) {
            ctx->pc = 0x2773A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2773a8;
        }
    }
    ctx->pc = 0x2773FCu;
    // 0x2773fc: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2773FCu;
    {
        const bool branch_taken_0x2773fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x277400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773FCu;
        // 0x277400: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773fc) {
            ctx->pc = 0x2774C8u;
            goto label_2774c8;
        }
    }
    ctx->pc = 0x277404u;
    // 0x277404: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x277404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x277408: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x277408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x27740c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x27740Cu;
    {
        const bool branch_taken_0x27740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27740c) {
            ctx->pc = 0x277410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27740Cu;
            // 0x277410: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x277414u;
    // 0x277414: 0xc09d93c  jal         func_2764F0
    ctx->pc = 0x277414u;
    SET_GPR_U32(ctx, 31, 0x27741Cu);
    ctx->pc = 0x2764F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2764F0u, 0x277414u, 0x27741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27741Cu;
label_27741c:
    // 0x27741c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x27741Cu;
    {
        const bool branch_taken_0x27741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27741c) {
            ctx->pc = 0x277420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27741Cu;
            // 0x277420: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x277424u;
    // 0x277424: 0x8f85ca68  lw          $a1, -0x3598($gp)
    ctx->pc = 0x277424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277428: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27742c: 0x8e0d0050  lw          $t5, 0x50($s0)
    ctx->pc = 0x27742cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x277430: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x277430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x277434: 0x19a00024  blez        $t5, . + 4 + (0x24 << 2)
    ctx->pc = 0x277434u;
    {
        const bool branch_taken_0x277434 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x277438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277434u;
        // 0x277438: 0x8cab006c  lw          $t3, 0x6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277434) {
            ctx->pc = 0x2774C8u;
            goto label_2774c8;
        }
    }
    ctx->pc = 0x27743Cu;
    // 0x27743c: 0x3c0f0047  lui         $t7, 0x47
    ctx->pc = 0x27743cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)71 << 16));
label_277440:
    // 0x277440: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x277440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x277444: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x277444u;
    {
        const bool branch_taken_0x277444 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x277448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277444u;
        // 0x277448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277444) {
            ctx->pc = 0x2774B8u;
            goto label_2774b8;
        }
    }
    ctx->pc = 0x27744Cu;
    // 0x27744c: 0x24ca0060  addiu       $t2, $a2, 0x60
    ctx->pc = 0x27744cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x277450: 0x25e83c90  addiu       $t0, $t7, 0x3C90
    ctx->pc = 0x277450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 15504));
    // 0x277454: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x277454u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277458: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27745c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_277460:
    // 0x277460: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x277460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x277464: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x277464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x277468: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27746c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27746Cu;
    {
        const bool branch_taken_0x27746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x277470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27746Cu;
        // 0x277470: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27746c) {
            ctx->pc = 0x2774A8u;
            goto label_2774a8;
        }
    }
    ctx->pc = 0x277474u;
    // 0x277474: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x277474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x277478: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x277478u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x27747c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x277480: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x277480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x277484: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x277484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277488: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x277488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x27748c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x27748cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x277490: 0xac4e002c  sw          $t6, 0x2C($v0)
    ctx->pc = 0x277490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 14));
    // 0x277494: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x277494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x277498: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x277498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27749c: 0xa04c0031  sb          $t4, 0x31($v0)
    ctx->pc = 0x27749cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 12));
    // 0x2774a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2774a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2774a4: 0x8f85ca68  lw          $a1, -0x3598($gp)
    ctx->pc = 0x2774a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
label_2774a8:
    // 0x2774a8: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x2774a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x2774ac: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2774acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2774b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2774B0u;
    {
        const bool branch_taken_0x2774b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774B0u;
        // 0x2774b4: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774b0) {
            ctx->pc = 0x277460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277460;
        }
    }
    ctx->pc = 0x2774B8u;
label_2774b8:
    // 0x2774b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2774bc: 0x12d102a  slt         $v0, $t1, $t5
    ctx->pc = 0x2774bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x2774c0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2774C0u;
    {
        const bool branch_taken_0x2774c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774C0u;
        // 0x2774c4: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774c0) {
            ctx->pc = 0x277440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277440;
        }
    }
    ctx->pc = 0x2774C8u;
label_2774c8:
    // 0x2774c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2774c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2774cc:
    // 0x2774cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2774ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2774d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2774D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2774D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774D0u;
        // 0x2774d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2774D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2774D8u;
}
