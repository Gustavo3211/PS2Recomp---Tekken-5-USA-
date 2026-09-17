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

// Function: sub_002965D8
// Address: 0x2965d8 - 0x296788
void sub_002965D8_0x2965d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002965D8_0x2965d8");
#endif

    switch (ctx->pc) {
        case 0x29661cu: goto label_29661c;
        case 0x29662cu: goto label_29662c;
        case 0x296638u: goto label_296638;
        case 0x296644u: goto label_296644;
        case 0x29664cu: goto label_29664c;
        case 0x29665cu: goto label_29665c;
        case 0x296668u: goto label_296668;
        case 0x296670u: goto label_296670;
        case 0x296680u: goto label_296680;
        case 0x2966b8u: goto label_2966b8;
        case 0x2966c8u: goto label_2966c8;
        default: break;
    }

    ctx->pc = 0x2965d8u;

    // 0x2965d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2965d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2965dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2965dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2965e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2965e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2965e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2965e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2965e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2965ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2965f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2965f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2965f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2965f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2965f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2965f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2965fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2965fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x296600: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x296600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x296604: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x296604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x296608: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29660c: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x29660Cu;
    {
        const bool branch_taken_0x29660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29660Cu;
        // 0x296610: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29660c) {
            ctx->pc = 0x29675Cu;
            goto label_29675c;
        }
    }
    ctx->pc = 0x296614u;
    // 0x296614: 0xc089622  jal         func_225888
    ctx->pc = 0x296614u;
    SET_GPR_U32(ctx, 31, 0x29661Cu);
    ctx->pc = 0x296618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296614u;
    // 0x296618: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x296614u, 0x29661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29661Cu;
label_29661c:
    // 0x29661c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x29661Cu;
    {
        const bool branch_taken_0x29661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29661Cu;
        // 0x296620: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29661c) {
            ctx->pc = 0x29675Cu;
            goto label_29675c;
        }
    }
    ctx->pc = 0x296624u;
    // 0x296624: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x296624u;
    SET_GPR_U32(ctx, 31, 0x29662Cu);
    ctx->pc = 0x296628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296624u;
    // 0x296628: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x296624u, 0x29662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29662Cu;
label_29662c:
    // 0x29662c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x296630: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x296630u;
    SET_GPR_U32(ctx, 31, 0x296638u);
    ctx->pc = 0x296634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296630u;
    // 0x296634: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x296630u, 0x296638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296638u;
label_296638:
    // 0x296638: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x296638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29663c: 0xc07c494  jal         func_1F1250
    ctx->pc = 0x29663Cu;
    SET_GPR_U32(ctx, 31, 0x296644u);
    ctx->pc = 0x296640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29663Cu;
    // 0x296640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x29663Cu, 0x296644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296644u;
label_296644:
    // 0x296644: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x296644u;
    SET_GPR_U32(ctx, 31, 0x29664Cu);
    ctx->pc = 0x296648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296644u;
    // 0x296648: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x296644u, 0x29664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29664Cu;
label_29664c:
    // 0x29664c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29664cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296650: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x296650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296654: 0xc097d14  jal         func_25F450
    ctx->pc = 0x296654u;
    SET_GPR_U32(ctx, 31, 0x29665Cu);
    ctx->pc = 0x296658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296654u;
    // 0x296658: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x296654u, 0x29665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29665Cu;
label_29665c:
    // 0x29665c: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x29665cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x296660: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x296660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_296668:
    // 0x296668: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x296668u;
    SET_GPR_U32(ctx, 31, 0x296670u);
    ctx->pc = 0x29666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296668u;
    // 0x29666c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x296668u, 0x296670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296670u;
label_296670:
    // 0x296670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296674: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x296674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296678: 0xc097d16  jal         func_25F458
    ctx->pc = 0x296678u;
    SET_GPR_U32(ctx, 31, 0x296680u);
    ctx->pc = 0x29667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296678u;
    // 0x29667c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x296678u, 0x296680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296680u;
label_296680:
    // 0x296680: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x296680u;
    {
        const bool branch_taken_0x296680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296680u;
        // 0x296684: 0x237182a  slt         $v1, $s1, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296680) {
            ctx->pc = 0x296744u;
            goto label_296744;
        }
    }
    ctx->pc = 0x296688u;
    // 0x296688: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x296688u;
    {
        const bool branch_taken_0x296688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296688) {
            ctx->pc = 0x29668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296688u;
            // 0x29668c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296748u;
            goto label_296748;
        }
    }
    ctx->pc = 0x296690u;
    // 0x296690: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x296690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x296694: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296698: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x296698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29669c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2966a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2966a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2966a4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2966a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2966a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2966acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2966b0: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x2966B0u;
    SET_GPR_U32(ctx, 31, 0x2966B8u);
    ctx->pc = 0x2966B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966B0u;
    // 0x2966b4: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x2966B0u, 0x2966B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966B8u;
label_2966b8:
    // 0x2966b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2966b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966bc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2966bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2966c0: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x2966C0u;
    SET_GPR_U32(ctx, 31, 0x2966C8u);
    ctx->pc = 0x2966C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966C0u;
    // 0x2966c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x2966C0u, 0x2966C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966C8u;
label_2966c8:
    // 0x2966c8: 0x8f83b5c4  lw          $v1, -0x4A3C($gp)
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948292)));
    // 0x2966cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2966ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2966d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2966d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2966d4: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2966d8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2966d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2966dc: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2966dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2966e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2966e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2966e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2966e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2966e8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2966E8u;
    {
        const bool branch_taken_0x2966e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2966ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966E8u;
        // 0x2966ec: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966e8) {
            ctx->pc = 0x296700u;
            goto label_296700;
        }
    }
    ctx->pc = 0x2966F0u;
    // 0x2966f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2966f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2966f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2966f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2966f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2966F8u;
    {
        const bool branch_taken_0x2966f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966F8u;
        // 0x2966fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966f8) {
            ctx->pc = 0x296710u;
            goto label_296710;
        }
    }
    ctx->pc = 0x296700u;
label_296700:
    // 0x296700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296708: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x296708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x29670c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_296710:
    // 0x296710: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296710u;
    {
        const bool branch_taken_0x296710 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x296714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296710u;
        // 0x296714: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296710) {
            ctx->pc = 0x296728u;
            goto label_296728;
        }
    }
    ctx->pc = 0x296718u;
    // 0x296718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29671c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29671cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296720u;
    {
        const bool branch_taken_0x296720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296720u;
        // 0x296724: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296720) {
            ctx->pc = 0x296744u;
            goto label_296744;
        }
    }
    ctx->pc = 0x296728u;
label_296728:
    // 0x296728: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29672c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29673c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29673cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x296740: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x296740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_296744:
    // 0x296744: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x296744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_296748:
    // 0x296748: 0x2a220042  slti        $v0, $s1, 0x42
    ctx->pc = 0x296748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x29674c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x29674Cu;
    {
        const bool branch_taken_0x29674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29674Cu;
        // 0x296750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29674c) {
            ctx->pc = 0x296668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296668;
        }
    }
    ctx->pc = 0x296754u;
    // 0x296754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296758: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x296758u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_29675c:
    // 0x29675c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29675cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296760: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x296760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296768: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x296768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29676c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29676cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296770: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x296770u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296774: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x296774u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296778: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x296778u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29677c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296780: 0x3e00008  jr          $ra
    ctx->pc = 0x296780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296780u;
        // 0x296784: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296788u;
}
