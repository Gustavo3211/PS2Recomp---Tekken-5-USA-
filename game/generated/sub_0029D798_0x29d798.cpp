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

// Function: sub_0029D798
// Address: 0x29d798 - 0x29d890
void sub_0029D798_0x29d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D798_0x29d798");
#endif

    switch (ctx->pc) {
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d800u: goto label_29d800;
        case 0x29d820u: goto label_29d820;
        case 0x29d830u: goto label_29d830;
        case 0x29d850u: goto label_29d850;
        case 0x29d868u: goto label_29d868;
        case 0x29d870u: goto label_29d870;
        default: break;
    }

    ctx->pc = 0x29d798u;

    // 0x29d798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29d7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d7a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29d7ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29d7b0: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x29d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x29d7b4: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x29D7B4u;
    {
        const bool branch_taken_0x29d7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7B4u;
        // 0x29d7b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7b4) {
            ctx->pc = 0x29D874u;
            goto label_29d874;
        }
    }
    ctx->pc = 0x29D7BCu;
    // 0x29d7bc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x29d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29d7c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29d7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d7c4: 0x10720018  beq         $v1, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x29D7C4u;
    {
        const bool branch_taken_0x29d7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x29D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7C4u;
        // 0x29d7c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7c4) {
            ctx->pc = 0x29D828u;
            goto label_29d828;
        }
    }
    ctx->pc = 0x29D7CCu;
    // 0x29d7cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29D7CCu;
    {
        const bool branch_taken_0x29d7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d7cc) {
            ctx->pc = 0x29D860u;
            goto label_29d860;
        }
    }
    ctx->pc = 0x29D7D4u;
    // 0x29d7d4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29D7D4u;
    {
        const bool branch_taken_0x29d7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d7d4) {
            ctx->pc = 0x29D860u;
            goto label_29d860;
        }
    }
    ctx->pc = 0x29D7DCu;
    // 0x29d7dc: 0xc089622  jal         func_225888
    ctx->pc = 0x29D7DCu;
    SET_GPR_U32(ctx, 31, 0x29D7E4u);
    ctx->pc = 0x29D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7DCu;
    // 0x29d7e0: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x29D7DCu, 0x29D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7E4u;
label_29d7e4:
    // 0x29d7e4: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x29D7E4u;
    {
        const bool branch_taken_0x29d7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d7e4) {
            ctx->pc = 0x29D7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D7E4u;
            // 0x29d7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D874u;
            goto label_29d874;
        }
    }
    ctx->pc = 0x29D7ECu;
    // 0x29d7ec: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29D7ECu;
    SET_GPR_U32(ctx, 31, 0x29D7F4u);
    ctx->pc = 0x29D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7ECu;
    // 0x29d7f0: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29D7ECu, 0x29D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7F4u;
label_29d7f4:
    // 0x29d7f4: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x29d7f8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29D7F8u;
    SET_GPR_U32(ctx, 31, 0x29D800u);
    ctx->pc = 0x29D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7F8u;
    // 0x29d7fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29D7F8u, 0x29D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D800u;
label_29d800:
    // 0x29d800: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x29d800u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x29d804: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29d804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d80c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d810: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x29d814: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x29d814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x29d818: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x29D818u;
    SET_GPR_U32(ctx, 31, 0x29D820u);
    ctx->pc = 0x29D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D818u;
    // 0x29d81c: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x29D818u, 0x29D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D820u;
label_29d820:
    // 0x29d820: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29D820u;
    {
        const bool branch_taken_0x29d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D820u;
        // 0x29d824: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d820) {
            ctx->pc = 0x29D870u;
            goto label_29d870;
        }
    }
    ctx->pc = 0x29D828u;
label_29d828:
    // 0x29d828: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29D828u;
    SET_GPR_U32(ctx, 31, 0x29D830u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29D828u, 0x29D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D830u;
label_29d830:
    // 0x29d830: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x29d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x29d834: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29D834u;
    {
        const bool branch_taken_0x29d834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D834u;
        // 0x29d838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d834) {
            ctx->pc = 0x29D874u;
            goto label_29d874;
        }
    }
    ctx->pc = 0x29D83Cu;
    // 0x29d83c: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x29d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x29d840: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x29D840u;
    {
        const bool branch_taken_0x29d840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d840) {
            ctx->pc = 0x29D844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D840u;
            // 0x29d844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D874u;
            goto label_29d874;
        }
    }
    ctx->pc = 0x29D848u;
    // 0x29d848: 0xc0a7632  jal         func_29D8C8
    ctx->pc = 0x29D848u;
    SET_GPR_U32(ctx, 31, 0x29D850u);
    ctx->pc = 0x29D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D848u;
    // 0x29d84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D8C8u, 0x29D848u, 0x29D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D850u;
label_29d850:
    // 0x29d850: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d854: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29D854u;
    {
        const bool branch_taken_0x29d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D854u;
        // 0x29d858: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d854) {
            ctx->pc = 0x29D870u;
            goto label_29d870;
        }
    }
    ctx->pc = 0x29D85Cu;
    // 0x29d85c: 0x0  nop
    ctx->pc = 0x29d85cu;
    // NOP
label_29d860:
    // 0x29d860: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29D860u;
    SET_GPR_U32(ctx, 31, 0x29D868u);
    ctx->pc = 0x29D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D860u;
    // 0x29d864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29D860u, 0x29D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D868u;
label_29d868:
    // 0x29d868: 0xc0a7744  jal         func_29DD10
    ctx->pc = 0x29D868u;
    SET_GPR_U32(ctx, 31, 0x29D870u);
    ctx->pc = 0x29D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D868u;
    // 0x29d86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD10u, 0x29D868u, 0x29D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D870u;
label_29d870:
    // 0x29d870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d874:
    // 0x29d874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29d878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d87c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29d87cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d880: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29d880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29d884: 0x3e00008  jr          $ra
    ctx->pc = 0x29D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D884u;
        // 0x29d888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D88Cu;
    // 0x29d88c: 0x0  nop
    ctx->pc = 0x29d88cu;
    // NOP
    ctx->pc = 0x29d890u;
}
