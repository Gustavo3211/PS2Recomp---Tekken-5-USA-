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

// Function: sub_002DB658
// Address: 0x2db658 - 0x2db7c0
void sub_002DB658_0x2db658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB658_0x2db658");
#endif

    switch (ctx->pc) {
        case 0x2db6b0u: goto label_2db6b0;
        case 0x2db6f0u: goto label_2db6f0;
        case 0x2db6fcu: goto label_2db6fc;
        case 0x2db70cu: goto label_2db70c;
        case 0x2db734u: goto label_2db734;
        case 0x2db740u: goto label_2db740;
        case 0x2db74cu: goto label_2db74c;
        case 0x2db764u: goto label_2db764;
        case 0x2db778u: goto label_2db778;
        default: break;
    }

    ctx->pc = 0x2db658u;

    // 0x2db658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2db658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2db65c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2db65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2db660: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2db660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db664: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2db664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2db668: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2db668u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db66c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2db66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2db670: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2db670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db674: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2db674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2db678: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2db678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db67c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2db67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2db680: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2db680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2db684: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2db684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2db688: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2db688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2db68c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2db68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2db690: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2db690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2db694: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2db694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2db698: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2db698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2db69c: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2DB69Cu;
    {
        const bool branch_taken_0x2db69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB69Cu;
        // 0x2db6a0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db69c) {
            ctx->pc = 0x2DB78Cu;
            goto label_2db78c;
        }
    }
    ctx->pc = 0x2DB6A4u;
    // 0x2db6a4: 0x269e000c  addiu       $fp, $s4, 0xC
    ctx->pc = 0x2db6a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2db6a8: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x2db6a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6ac: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_2db6b0:
    // 0x2db6b0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2db6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2db6b4: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x2db6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x2db6b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2db6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db6bc: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x2db6bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2db6c0: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB6C0u;
    {
        const bool branch_taken_0x2db6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db6c0) {
            ctx->pc = 0x2DB6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB6C0u;
            // 0x2db6c4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB728u;
            goto label_2db728;
        }
    }
    ctx->pc = 0x2DB6C8u;
    // 0x2db6c8: 0x52e0002c  beql        $s7, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DB6C8u;
    {
        const bool branch_taken_0x2db6c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db6c8) {
            ctx->pc = 0x2DB6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB6C8u;
            // 0x2db6cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB77Cu;
            goto label_2db77c;
        }
    }
    ctx->pc = 0x2DB6D0u;
    // 0x2db6d0: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x2db6d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2db6d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB6D4u;
    {
        const bool branch_taken_0x2db6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6D4u;
        // 0x2db6d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6d4) {
            ctx->pc = 0x2DB720u;
            goto label_2db720;
        }
    }
    ctx->pc = 0x2DB6DCu;
    // 0x2db6dc: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x2db6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2db6e0: 0x2c59021  addu        $s2, $s6, $a1
    ctx->pc = 0x2db6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2db6e4: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2db6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2db6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6ec: 0x0  nop
    ctx->pc = 0x2db6ecu;
    // NOP
label_2db6f0:
    // 0x2db6f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2db6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2db6f4: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x2DB6F4u;
    SET_GPR_U32(ctx, 31, 0x2DB6FCu);
    ctx->pc = 0x2DB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6F4u;
    // 0x2db6f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x2DB6F4u, 0x2DB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6FCu;
label_2db6fc:
    // 0x2db6fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2db6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2db700: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2db704: 0xc0bec22  jal         func_2FB088
    ctx->pc = 0x2DB704u;
    SET_GPR_U32(ctx, 31, 0x2DB70Cu);
    ctx->pc = 0x2DB708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB704u;
    // 0x2db708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB088u, 0x2DB704u, 0x2DB70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB70Cu;
label_2db70c:
    // 0x2db70c: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x2db70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2db710: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2db710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db714: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DB714u;
    {
        const bool branch_taken_0x2db714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB714u;
        // 0x2db718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db714) {
            ctx->pc = 0x2DB6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db6f0;
        }
    }
    ctx->pc = 0x2DB71Cu;
    // 0x2db71c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2db71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2db720:
    // 0x2db720: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DB720u;
    {
        const bool branch_taken_0x2db720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB720u;
        // 0x2db724: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db720) {
            ctx->pc = 0x2DB77Cu;
            goto label_2db77c;
        }
    }
    ctx->pc = 0x2DB728u;
label_2db728:
    // 0x2db728: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2db728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2db72c: 0xc0b6cde  jal         func_2DB378
    ctx->pc = 0x2DB72Cu;
    SET_GPR_U32(ctx, 31, 0x2DB734u);
    ctx->pc = 0x2DB730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB72Cu;
    // 0x2db730: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB378u, 0x2DB72Cu, 0x2DB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB734u;
label_2db734:
    // 0x2db734: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2db734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db738: 0xc0bf41e  jal         func_2FD078
    ctx->pc = 0x2DB738u;
    SET_GPR_U32(ctx, 31, 0x2DB740u);
    ctx->pc = 0x2DB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB738u;
    // 0x2db73c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD078u, 0x2DB738u, 0x2DB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB740u;
label_2db740:
    // 0x2db740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db744: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x2DB744u;
    SET_GPR_U32(ctx, 31, 0x2DB74Cu);
    ctx->pc = 0x2DB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB744u;
    // 0x2db748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x2DB744u, 0x2DB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB74Cu;
label_2db74c:
    // 0x2db74c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB74Cu;
    {
        const bool branch_taken_0x2db74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db74c) {
            ctx->pc = 0x2DB750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB74Cu;
            // 0x2db750: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB77Cu;
            goto label_2db77c;
        }
    }
    ctx->pc = 0x2DB754u;
    // 0x2db754: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB754u;
    {
        const bool branch_taken_0x2db754 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db754) {
            ctx->pc = 0x2DB770u;
            goto label_2db770;
        }
    }
    ctx->pc = 0x2DB75Cu;
    // 0x2db75c: 0xc0beb26  jal         func_2FAC98
    ctx->pc = 0x2DB75Cu;
    SET_GPR_U32(ctx, 31, 0x2DB764u);
    ctx->pc = 0x2DB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB75Cu;
    // 0x2db760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC98u, 0x2DB75Cu, 0x2DB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB764u;
label_2db764:
    // 0x2db764: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB764u;
    {
        const bool branch_taken_0x2db764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB764u;
        // 0x2db768: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db764) {
            ctx->pc = 0x2DB77Cu;
            goto label_2db77c;
        }
    }
    ctx->pc = 0x2DB76Cu;
    // 0x2db76c: 0x0  nop
    ctx->pc = 0x2db76cu;
    // NOP
label_2db770:
    // 0x2db770: 0xc0beb2e  jal         func_2FACB8
    ctx->pc = 0x2DB770u;
    SET_GPR_U32(ctx, 31, 0x2DB778u);
    ctx->pc = 0x2DB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB770u;
    // 0x2db774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACB8u, 0x2DB770u, 0x2DB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB778u;
label_2db778:
    // 0x2db778: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2db778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2db77c:
    // 0x2db77c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2db77cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2db780: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x2db780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2db784: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2DB784u;
    {
        const bool branch_taken_0x2db784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB784u;
        // 0x2db788: 0x152880  sll         $a1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db784) {
            ctx->pc = 0x2DB6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db6b0;
        }
    }
    ctx->pc = 0x2DB78Cu;
label_2db78c:
    // 0x2db78c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2db78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db790: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2db790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2db794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db798: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2db798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db79c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2db79cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db7a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2db7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db7a4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2db7a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db7a8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2db7a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2db7ac: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2db7acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db7b0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2db7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2db7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7B4u;
        // 0x2db7b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB7BCu;
    // 0x2db7bc: 0x0  nop
    ctx->pc = 0x2db7bcu;
    // NOP
    ctx->pc = 0x2db7c0u;
}
