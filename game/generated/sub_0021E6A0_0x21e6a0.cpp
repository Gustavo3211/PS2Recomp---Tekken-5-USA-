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

// Function: sub_0021E6A0
// Address: 0x21e6a0 - 0x21e898
void sub_0021E6A0_0x21e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E6A0_0x21e6a0");
#endif

    switch (ctx->pc) {
        case 0x21e6f0u: goto label_21e6f0;
        case 0x21e6fcu: goto label_21e6fc;
        case 0x21e704u: goto label_21e704;
        case 0x21e744u: goto label_21e744;
        case 0x21e75cu: goto label_21e75c;
        case 0x21e774u: goto label_21e774;
        case 0x21e78cu: goto label_21e78c;
        case 0x21e7a4u: goto label_21e7a4;
        case 0x21e7c0u: goto label_21e7c0;
        case 0x21e7dcu: goto label_21e7dc;
        case 0x21e7f8u: goto label_21e7f8;
        case 0x21e878u: goto label_21e878;
        default: break;
    }

    ctx->pc = 0x21e6a0u;

    // 0x21e6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e6a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21e6a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e6b0: 0x24638858  addiu       $v1, $v1, -0x77A8
    ctx->pc = 0x21e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x21e6b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e6b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21e6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21e6bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21e6c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21e6c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x21e6c8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x21E6C8u;
    {
        const bool branch_taken_0x21e6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6C8u;
        // 0x21e6cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6c8) {
            ctx->pc = 0x21E878u;
            goto label_21e878;
        }
    }
    ctx->pc = 0x21E6D0u;
    // 0x21e6d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21e6d4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x21e6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21e6d8: 0x54400068  bnel        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x21E6D8u;
    {
        const bool branch_taken_0x21e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e6d8) {
            ctx->pc = 0x21E6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E6D8u;
            // 0x21e6dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E87Cu;
            goto label_21e87c;
        }
    }
    ctx->pc = 0x21E6E0u;
    // 0x21e6e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6e4: 0x24130015  addiu       $s3, $zero, 0x15
    ctx->pc = 0x21e6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21e6e8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x21e6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x21e6ec: 0x0  nop
    ctx->pc = 0x21e6ecu;
    // NOP
label_21e6f0:
    // 0x21e6f0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x21e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21e6f4: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x21E6F4u;
    SET_GPR_U32(ctx, 31, 0x21E6FCu);
    ctx->pc = 0x21E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E6F4u;
    // 0x21e6f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9AD0u, 0x21E6F4u, 0x21E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6FCu;
label_21e6fc:
    // 0x21e6fc: 0xc09d940  jal         func_276500
    ctx->pc = 0x21E6FCu;
    SET_GPR_U32(ctx, 31, 0x21E704u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21E6FCu, 0x21E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E704u;
label_21e704:
    // 0x21e704: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x21E704u;
    {
        const bool branch_taken_0x21e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E704u;
        // 0x21e708: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e704) {
            ctx->pc = 0x21E7E4u;
            goto label_21e7e4;
        }
    }
    ctx->pc = 0x21E70Cu;
    // 0x21e70c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21e710: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x21e710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x21e714: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x21E714u;
    {
        const bool branch_taken_0x21e714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e714) {
            ctx->pc = 0x21E718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E714u;
            // 0x21e718: 0x2413026b  addiu       $s3, $zero, 0x26B (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E7E8u;
            goto label_21e7e8;
        }
    }
    ctx->pc = 0x21E71Cu;
    // 0x21e71c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e720: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21e720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x21e724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e728: 0x8c636e20  lw          $v1, 0x6E20($v1)
    ctx->pc = 0x21e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28192)));
    // 0x21e72c: 0x600008  jr          $v1
    ctx->pc = 0x21E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E738u: goto label_21e738;
            case 0x21E750u: goto label_21e750;
            case 0x21E768u: goto label_21e768;
            case 0x21E780u: goto label_21e780;
            case 0x21E798u: goto label_21e798;
            case 0x21E7B0u: goto label_21e7b0;
            case 0x21E7B8u: goto label_21e7b8;
            case 0x21E7C8u: goto label_21e7c8;
            case 0x21E7D0u: goto label_21e7d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E72Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21E734u;
    // 0x21e734: 0x0  nop
    ctx->pc = 0x21e734u;
    // NOP
label_21e738:
    // 0x21e738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e73c: 0xc0878d6  jal         func_21E358
    ctx->pc = 0x21E73Cu;
    SET_GPR_U32(ctx, 31, 0x21E744u);
    ctx->pc = 0x21E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E73Cu;
    // 0x21e740: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E358u, 0x21E73Cu, 0x21E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E744u;
label_21e744:
    // 0x21e744: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21E744u;
    {
        const bool branch_taken_0x21e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E744u;
        // 0x21e748: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e744) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E74Cu;
    // 0x21e74c: 0x0  nop
    ctx->pc = 0x21e74cu;
    // NOP
label_21e750:
    // 0x21e750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e754: 0xc08793c  jal         func_21E4F0
    ctx->pc = 0x21E754u;
    SET_GPR_U32(ctx, 31, 0x21E75Cu);
    ctx->pc = 0x21E758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E754u;
    // 0x21e758: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E4F0u, 0x21E754u, 0x21E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E75Cu;
label_21e75c:
    // 0x21e75c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x21E75Cu;
    {
        const bool branch_taken_0x21e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E75Cu;
        // 0x21e760: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e75c) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E764u;
    // 0x21e764: 0x0  nop
    ctx->pc = 0x21e764u;
    // NOP
label_21e768:
    // 0x21e768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e76c: 0xc087948  jal         func_21E520
    ctx->pc = 0x21E76Cu;
    SET_GPR_U32(ctx, 31, 0x21E774u);
    ctx->pc = 0x21E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E76Cu;
    // 0x21e770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E520u, 0x21E76Cu, 0x21E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E774u;
label_21e774:
    // 0x21e774: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x21E774u;
    {
        const bool branch_taken_0x21e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E774u;
        // 0x21e778: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e774) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E77Cu;
    // 0x21e77c: 0x0  nop
    ctx->pc = 0x21e77cu;
    // NOP
label_21e780:
    // 0x21e780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e784: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x21E784u;
    SET_GPR_U32(ctx, 31, 0x21E78Cu);
    ctx->pc = 0x21E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E784u;
    // 0x21e788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5B8u, 0x21E784u, 0x21E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E78Cu;
label_21e78c:
    // 0x21e78c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21E78Cu;
    {
        const bool branch_taken_0x21e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E78Cu;
        // 0x21e790: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e78c) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E794u;
    // 0x21e794: 0x0  nop
    ctx->pc = 0x21e794u;
    // NOP
label_21e798:
    // 0x21e798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e79c: 0xc087980  jal         func_21E600
    ctx->pc = 0x21E79Cu;
    SET_GPR_U32(ctx, 31, 0x21E7A4u);
    ctx->pc = 0x21E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E79Cu;
    // 0x21e7a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E600u, 0x21E79Cu, 0x21E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7A4u;
label_21e7a4:
    // 0x21e7a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21E7A4u;
    {
        const bool branch_taken_0x21e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7A4u;
        // 0x21e7a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7a4) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E7ACu;
    // 0x21e7ac: 0x0  nop
    ctx->pc = 0x21e7acu;
    // NOP
label_21e7b0:
    // 0x21e7b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21E7B0u;
    {
        const bool branch_taken_0x21e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7B0u;
        // 0x21e7b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7b0) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E7B8u;
label_21e7b8:
    // 0x21e7b8: 0xc085c76  jal         func_2171D8
    ctx->pc = 0x21E7B8u;
    SET_GPR_U32(ctx, 31, 0x21E7C0u);
    ctx->pc = 0x2171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171D8u, 0x21E7B8u, 0x21E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7C0u;
label_21e7c0:
    // 0x21e7c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21E7C0u;
    {
        const bool branch_taken_0x21e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7C0u;
        // 0x21e7c4: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7c0) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E7C8u;
label_21e7c8:
    // 0x21e7c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21E7C8u;
    {
        const bool branch_taken_0x21e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7C8u;
        // 0x21e7cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7c8) {
            ctx->pc = 0x21E7E0u;
            goto label_21e7e0;
        }
    }
    ctx->pc = 0x21E7D0u;
label_21e7d0:
    // 0x21e7d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7d4: 0xc0879a2  jal         func_21E688
    ctx->pc = 0x21E7D4u;
    SET_GPR_U32(ctx, 31, 0x21E7DCu);
    ctx->pc = 0x21E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7D4u;
    // 0x21e7d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E688u, 0x21E7D4u, 0x21E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7DCu;
label_21e7dc:
    // 0x21e7dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21e7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e7e0:
    // 0x21e7e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21e7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e7e4:
    // 0x21e7e4: 0x2413026b  addiu       $s3, $zero, 0x26B
    ctx->pc = 0x21e7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
label_21e7e8:
    // 0x21e7e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7f0: 0xc08784c  jal         func_21E130
    ctx->pc = 0x21E7F0u;
    SET_GPR_U32(ctx, 31, 0x21E7F8u);
    ctx->pc = 0x21E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7F0u;
    // 0x21e7f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E130u, 0x21E7F0u, 0x21E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7F8u;
label_21e7f8:
    // 0x21e7f8: 0x2682bed8  addiu       $v0, $s4, -0x4128
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950616));
    // 0x21e7fc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x21e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21e800: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21e800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21e804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e808: 0x2a440002  slti        $a0, $s2, 0x2
    ctx->pc = 0x21e808u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21e80c: 0x1480ffb8  bnez        $a0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x21E80Cu;
    {
        const bool branch_taken_0x21e80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E80Cu;
        // 0x21e810: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e80c) {
            ctx->pc = 0x21E6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e6f0;
        }
    }
    ctx->pc = 0x21E814u;
    // 0x21e814: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e818: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x21e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x21e81c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x21e820: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x21e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21e824: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E824u;
    {
        const bool branch_taken_0x21e824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E824u;
        // 0x21e828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e824) {
            ctx->pc = 0x21E838u;
            goto label_21e838;
        }
    }
    ctx->pc = 0x21E82Cu;
    // 0x21e82c: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x21e830: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E830u;
    {
        const bool branch_taken_0x21e830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e830) {
            ctx->pc = 0x21E83Cu;
            goto label_21e83c;
        }
    }
    ctx->pc = 0x21E838u;
label_21e838:
    // 0x21e838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e83c:
    // 0x21e83c: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x21E83Cu;
    {
        const bool branch_taken_0x21e83c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e83c) {
            ctx->pc = 0x21E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E83Cu;
            // 0x21e840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E87Cu;
            goto label_21e87c;
        }
    }
    ctx->pc = 0x21E844u;
    // 0x21e844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e848: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21e848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21e84c: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x21e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x21e850: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E850u;
    {
        const bool branch_taken_0x21e850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E850u;
        // 0x21e854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e850) {
            ctx->pc = 0x21E864u;
            goto label_21e864;
        }
    }
    ctx->pc = 0x21E858u;
    // 0x21e858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e85c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E85Cu;
    {
        const bool branch_taken_0x21e85c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e85c) {
            ctx->pc = 0x21E868u;
            goto label_21e868;
        }
    }
    ctx->pc = 0x21E864u;
label_21e864:
    // 0x21e864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e868:
    // 0x21e868: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E868u;
    {
        const bool branch_taken_0x21e868 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E868u;
        // 0x21e86c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e868) {
            ctx->pc = 0x21E87Cu;
            goto label_21e87c;
        }
    }
    ctx->pc = 0x21E870u;
    // 0x21e870: 0xc0877d6  jal         func_21DF58
    ctx->pc = 0x21E870u;
    SET_GPR_U32(ctx, 31, 0x21E878u);
    ctx->pc = 0x21E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E870u;
    // 0x21e874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DF58u, 0x21E870u, 0x21E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E878u;
label_21e878:
    // 0x21e878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e87c:
    // 0x21e87c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e884: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21e884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e888: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21e888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e88c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21e88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21e890: 0x3e00008  jr          $ra
    ctx->pc = 0x21E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E890u;
        // 0x21e894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E898u;
}
