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

// Function: sub_002FC6F8
// Address: 0x2fc6f8 - 0x2fc800
void sub_002FC6F8_0x2fc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC6F8_0x2fc6f8");
#endif

    switch (ctx->pc) {
        case 0x2fc760u: goto label_2fc760;
        case 0x2fc7bcu: goto label_2fc7bc;
        default: break;
    }

    ctx->pc = 0x2fc6f8u;

    // 0x2fc6f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fc6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fc6fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fc6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fc700: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fc700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc708: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc710: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fc710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fc714: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fc714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fc718: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2fc718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2fc71c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2fc71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2fc720: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2fc720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2fc724: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2fc724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2fc728: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FC728u;
    {
        const bool branch_taken_0x2fc728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC728u;
        // 0x2fc72c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc728) {
            ctx->pc = 0x2FC7CCu;
            goto label_2fc7cc;
        }
    }
    ctx->pc = 0x2FC730u;
    // 0x2fc730: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2fc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2fc734: 0x905200a0  lbu         $s2, 0xA0($v0)
    ctx->pc = 0x2fc734u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2fc738: 0x905600a3  lbu         $s6, 0xA3($v0)
    ctx->pc = 0x2fc738u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 163)));
    // 0x2fc73c: 0x905500a1  lbu         $s5, 0xA1($v0)
    ctx->pc = 0x2fc73cu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 161)));
    // 0x2fc740: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FC740u;
    {
        const bool branch_taken_0x2fc740 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC740u;
        // 0x2fc744: 0x905400a2  lbu         $s4, 0xA2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 162)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc740) {
            ctx->pc = 0x2FC7CCu;
            goto label_2fc7cc;
        }
    }
    ctx->pc = 0x2FC748u;
    // 0x2fc748: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x2fc748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2fc74c: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FC74Cu;
    {
        const bool branch_taken_0x2fc74c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2FC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC74Cu;
        // 0x2fc750: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc74c) {
            ctx->pc = 0x2FC7CCu;
            goto label_2fc7cc;
        }
    }
    ctx->pc = 0x2FC754u;
    // 0x2fc754: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x2fc754u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x2fc758: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x2fc758u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fc75c: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2fc75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2fc760:
    // 0x2fc760: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2fc760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2fc764: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2fc764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fc768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fc768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc76c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fc770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fc770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc774: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2fc774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fc778: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2fc778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc77c: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2fc77cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2fc780: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2fc784: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC784u;
    {
        const bool branch_taken_0x2fc784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC784u;
        // 0x2fc788: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc784) {
            ctx->pc = 0x2FC794u;
            goto label_2fc794;
        }
    }
    ctx->pc = 0x2FC78Cu;
    // 0x2fc78c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2fc790: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2fc790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fc794:
    // 0x2fc794: 0xde1021  addu        $v0, $a2, $fp
    ctx->pc = 0x2fc794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x2fc798: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x2fc798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fc79c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC79Cu;
    {
        const bool branch_taken_0x2fc79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc79c) {
            ctx->pc = 0x2FC7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC79Cu;
            // 0x2fc7a0: 0x208102a  slt         $v0, $s0, $t0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC7C4u;
            goto label_2fc7c4;
        }
    }
    ctx->pc = 0x2FC7A4u;
    // 0x2fc7a4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2fc7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fc7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc7ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fc7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc7b0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2fc7b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc7b4: 0xc0b812c  jal         func_2E04B0
    ctx->pc = 0x2FC7B4u;
    SET_GPR_U32(ctx, 31, 0x2FC7BCu);
    ctx->pc = 0x2FC7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC7B4u;
    // 0x2fc7b8: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E04B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E04B0u, 0x2FC7B4u, 0x2FC7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7BCu;
label_2fc7bc:
    // 0x2fc7bc: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x2fc7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2fc7c0: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x2fc7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2fc7c4:
    // 0x2fc7c4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FC7C4u;
    {
        const bool branch_taken_0x2fc7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7C4u;
        // 0x2fc7c8: 0x102840  sll         $a1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc7c4) {
            ctx->pc = 0x2FC760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc760;
        }
    }
    ctx->pc = 0x2FC7CCu;
label_2fc7cc:
    // 0x2fc7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc7d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fc7d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc7d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fc7d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fc7dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fc7dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc7e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2fc7e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fc7e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2fc7e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fc7e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2fc7e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2fc7ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2fc7ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fc7f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2fc7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2fc7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7F4u;
        // 0x2fc7f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC7FCu;
    // 0x2fc7fc: 0x0  nop
    ctx->pc = 0x2fc7fcu;
    // NOP
    ctx->pc = 0x2fc800u;
}
