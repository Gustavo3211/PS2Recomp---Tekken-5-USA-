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

// Function: sub_0022A370
// Address: 0x22a370 - 0x22a468
void sub_0022A370_0x22a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A370_0x22a370");
#endif

    switch (ctx->pc) {
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a414u: goto label_22a414;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a434u: goto label_22a434;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a444u: goto label_22a444;
        default: break;
    }

    ctx->pc = 0x22a370u;

    // 0x22a370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a37c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22a384: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22a388: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22a38c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22a390: 0x86340006  lh          $s4, 0x6($s1)
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22a394: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x22a394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x22a398: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x22a398u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x22a39c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x22a39cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22a3a0: 0x8e7388d0  lw          $s3, -0x7730($s3)
    ctx->pc = 0x22a3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936784)));
    // 0x22a3a4: 0x9663003c  lhu         $v1, 0x3C($s3)
    ctx->pc = 0x22a3a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x22a3a8: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x22a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22a3ac: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x22a3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22a3b0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x22a3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22a3b4: 0x26120003  addiu       $s2, $s0, 0x3
    ctx->pc = 0x22a3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x22a3b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x22a3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22a3bc: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x22A3BCu;
    SET_GPR_U32(ctx, 31, 0x22A3C4u);
    ctx->pc = 0x22A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3BCu;
    // 0x22a3c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x22A3BCu, 0x22A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3C4u;
label_22a3c4:
    // 0x22a3c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22a3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3c8: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x22a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x22a3cc: 0xc040582  jal         func_101608
    ctx->pc = 0x22A3CCu;
    SET_GPR_U32(ctx, 31, 0x22A3D4u);
    ctx->pc = 0x22A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3CCu;
    // 0x22a3d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101608u, 0x22A3CCu, 0x22A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3D4u;
label_22a3d4:
    // 0x22a3d4: 0x86340006  lh          $s4, 0x6($s1)
    ctx->pc = 0x22a3d4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22a3d8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x22A3D8u;
    SET_GPR_U32(ctx, 31, 0x22A3E0u);
    ctx->pc = 0x22A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3D8u;
    // 0x22a3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x22A3D8u, 0x22A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3E0u;
label_22a3e0:
    // 0x22a3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3e4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x22A3E4u;
    SET_GPR_U32(ctx, 31, 0x22A3ECu);
    ctx->pc = 0x22A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3E4u;
    // 0x22a3e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x22A3E4u, 0x22A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3ECu;
label_22a3ec:
    // 0x22a3ec: 0xc0404da  jal         func_101368
    ctx->pc = 0x22A3ECu;
    SET_GPR_U32(ctx, 31, 0x22A3F4u);
    ctx->pc = 0x22A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3ECu;
    // 0x22a3f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101368u, 0x22A3ECu, 0x22A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3F4u;
label_22a3f4:
    // 0x22a3f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22a3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a400: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22a400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a404: 0xc098d78  jal         func_2635E0
    ctx->pc = 0x22A404u;
    SET_GPR_U32(ctx, 31, 0x22A40Cu);
    ctx->pc = 0x22A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A404u;
    // 0x22a408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2635E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2635E0u, 0x22A404u, 0x22A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A40Cu;
label_22a40c:
    // 0x22a40c: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x22A40Cu;
    SET_GPR_U32(ctx, 31, 0x22A414u);
    ctx->pc = 0x22A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A40Cu;
    // 0x22a410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x22A40Cu, 0x22A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A414u;
label_22a414:
    // 0x22a414: 0xc0892f8  jal         func_224BE0
    ctx->pc = 0x22A414u;
    SET_GPR_U32(ctx, 31, 0x22A41Cu);
    ctx->pc = 0x224BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BE0u, 0x22A414u, 0x22A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A41Cu;
label_22a41c:
    // 0x22a41c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A41Cu;
    {
        const bool branch_taken_0x22a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A41Cu;
        // 0x22a420: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a41c) {
            ctx->pc = 0x22A444u;
            goto label_22a444;
        }
    }
    ctx->pc = 0x22A424u;
    // 0x22a424: 0xc0895da  jal         func_225768
    ctx->pc = 0x22A424u;
    SET_GPR_U32(ctx, 31, 0x22A42Cu);
    ctx->pc = 0x225768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225768u, 0x22A424u, 0x22A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A42Cu;
label_22a42c:
    // 0x22a42c: 0xc089730  jal         func_225CC0
    ctx->pc = 0x22A42Cu;
    SET_GPR_U32(ctx, 31, 0x22A434u);
    ctx->pc = 0x22A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A42Cu;
    // 0x22a430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CC0u, 0x22A42Cu, 0x22A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A434u;
label_22a434:
    // 0x22a434: 0xc0895da  jal         func_225768
    ctx->pc = 0x22A434u;
    SET_GPR_U32(ctx, 31, 0x22A43Cu);
    ctx->pc = 0x22A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A434u;
    // 0x22a438: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225768u, 0x22A434u, 0x22A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A43Cu;
label_22a43c:
    // 0x22a43c: 0xc089730  jal         func_225CC0
    ctx->pc = 0x22A43Cu;
    SET_GPR_U32(ctx, 31, 0x22A444u);
    ctx->pc = 0x22A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A43Cu;
    // 0x22a440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CC0u, 0x22A43Cu, 0x22A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A444u;
label_22a444:
    // 0x22a444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a44c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22a44cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22a450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a454: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22a454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a458: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22a458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a45c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A45Cu;
        // 0x22a460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A464u;
    // 0x22a464: 0x0  nop
    ctx->pc = 0x22a464u;
    // NOP
    ctx->pc = 0x22a468u;
}
