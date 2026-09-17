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

// Function: sub_0021C660
// Address: 0x21c660 - 0x21c768
void sub_0021C660_0x21c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C660_0x21c660");
#endif

    switch (ctx->pc) {
        case 0x21c6b0u: goto label_21c6b0;
        case 0x21c6b8u: goto label_21c6b8;
        case 0x21c6c4u: goto label_21c6c4;
        case 0x21c6ccu: goto label_21c6cc;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c6fcu: goto label_21c6fc;
        case 0x21c710u: goto label_21c710;
        case 0x21c718u: goto label_21c718;
        case 0x21c724u: goto label_21c724;
        case 0x21c72cu: goto label_21c72c;
        case 0x21c744u: goto label_21c744;
        case 0x21c74cu: goto label_21c74c;
        case 0x21c754u: goto label_21c754;
        default: break;
    }

    ctx->pc = 0x21c660u;

    // 0x21c660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c670: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c674: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x21c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x21c678: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x21c678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21c67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21c680: 0x28640003  slti        $a0, $v1, 0x3
    ctx->pc = 0x21c680u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21c684: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x21C684u;
    {
        const bool branch_taken_0x21c684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C684u;
        // 0x21c688: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c684) {
            ctx->pc = 0x21C744u;
            goto label_21c744;
        }
    }
    ctx->pc = 0x21C68Cu;
    // 0x21c68c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C68Cu;
    {
        const bool branch_taken_0x21c68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C68Cu;
        // 0x21c690: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c68c) {
            ctx->pc = 0x21C6A8u;
            goto label_21c6a8;
        }
    }
    ctx->pc = 0x21C694u;
    // 0x21c694: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21C694u;
    {
        const bool branch_taken_0x21c694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21c694) {
            ctx->pc = 0x21C708u;
            goto label_21c708;
        }
    }
    ctx->pc = 0x21C69Cu;
    // 0x21c69c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21C69Cu;
    {
        const bool branch_taken_0x21c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c69c) {
            ctx->pc = 0x21C744u;
            goto label_21c744;
        }
    }
    ctx->pc = 0x21C6A4u;
    // 0x21c6a4: 0x0  nop
    ctx->pc = 0x21c6a4u;
    // NOP
label_21c6a8:
    // 0x21c6a8: 0xc086644  jal         func_219910
    ctx->pc = 0x21C6A8u;
    SET_GPR_U32(ctx, 31, 0x21C6B0u);
    ctx->pc = 0x21C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6A8u;
    // 0x21c6ac: 0x92240031  lbu         $a0, 0x31($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C6A8u, 0x21C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6B0u;
label_21c6b0:
    // 0x21c6b0: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C6B0u;
    SET_GPR_U32(ctx, 31, 0x21C6B8u);
    ctx->pc = 0x21C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6B0u;
    // 0x21c6b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C6B0u, 0x21C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6B8u;
label_21c6b8:
    // 0x21c6b8: 0x92240032  lbu         $a0, 0x32($s1)
    ctx->pc = 0x21c6b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x21c6bc: 0xc086644  jal         func_219910
    ctx->pc = 0x21C6BCu;
    SET_GPR_U32(ctx, 31, 0x21C6C4u);
    ctx->pc = 0x21C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6BCu;
    // 0x21c6c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C6BCu, 0x21C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6C4u;
label_21c6c4:
    // 0x21c6c4: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C6C4u;
    SET_GPR_U32(ctx, 31, 0x21C6CCu);
    ctx->pc = 0x21C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6C4u;
    // 0x21c6c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C6C4u, 0x21C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6CCu;
label_21c6cc:
    // 0x21c6cc: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x21c6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x21c6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c6dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21c6e0: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x21c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x21c6e4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21c6e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21c6ec: 0xc08764c  jal         func_21D930
    ctx->pc = 0x21C6ECu;
    SET_GPR_U32(ctx, 31, 0x21C6F4u);
    ctx->pc = 0x21C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6ECu;
    // 0x21c6f0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D930u, 0x21C6ECu, 0x21C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6F4u;
label_21c6f4:
    // 0x21c6f4: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21C6F4u;
    SET_GPR_U32(ctx, 31, 0x21C6FCu);
    ctx->pc = 0x21C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6F4u;
    // 0x21c6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21C6F4u, 0x21C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6FCu;
label_21c6fc:
    // 0x21c6fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21C6FCu;
    {
        const bool branch_taken_0x21c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6fc) {
            ctx->pc = 0x21C744u;
            goto label_21c744;
        }
    }
    ctx->pc = 0x21C704u;
    // 0x21c704: 0x0  nop
    ctx->pc = 0x21c704u;
    // NOP
label_21c708:
    // 0x21c708: 0xc086644  jal         func_219910
    ctx->pc = 0x21C708u;
    SET_GPR_U32(ctx, 31, 0x21C710u);
    ctx->pc = 0x21C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C708u;
    // 0x21c70c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C708u, 0x21C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C710u;
label_21c710:
    // 0x21c710: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C710u;
    SET_GPR_U32(ctx, 31, 0x21C718u);
    ctx->pc = 0x21C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C710u;
    // 0x21c714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C710u, 0x21C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C718u;
label_21c718:
    // 0x21c718: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21c718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c71c: 0xc086644  jal         func_219910
    ctx->pc = 0x21C71Cu;
    SET_GPR_U32(ctx, 31, 0x21C724u);
    ctx->pc = 0x21C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C71Cu;
    // 0x21c720: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C71Cu, 0x21C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C724u;
label_21c724:
    // 0x21c724: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C724u;
    SET_GPR_U32(ctx, 31, 0x21C72Cu);
    ctx->pc = 0x21C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C724u;
    // 0x21c728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C724u, 0x21C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C72Cu;
label_21c72c:
    // 0x21c72c: 0x96230054  lhu         $v1, 0x54($s1)
    ctx->pc = 0x21c72cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21c730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c73c: 0xc087668  jal         func_21D9A0
    ctx->pc = 0x21C73Cu;
    SET_GPR_U32(ctx, 31, 0x21C744u);
    ctx->pc = 0x21C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C73Cu;
    // 0x21c740: 0xa6230054  sh          $v1, 0x54($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D9A0u, 0x21C73Cu, 0x21C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C744u;
label_21c744:
    // 0x21c744: 0xc08659e  jal         func_219678
    ctx->pc = 0x21C744u;
    SET_GPR_U32(ctx, 31, 0x21C74Cu);
    ctx->pc = 0x21C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C744u;
    // 0x21c748: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219678u, 0x21C744u, 0x21C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C74Cu;
label_21c74c:
    // 0x21c74c: 0xc084eb2  jal         func_213AC8
    ctx->pc = 0x21C74Cu;
    SET_GPR_U32(ctx, 31, 0x21C754u);
    ctx->pc = 0x213AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AC8u, 0x21C74Cu, 0x21C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C754u;
label_21c754:
    // 0x21c754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c75c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c760: 0x3e00008  jr          $ra
    ctx->pc = 0x21C760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C760u;
        // 0x21c764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C768u;
}
