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

// Function: sub_0022B728
// Address: 0x22b728 - 0x22b7c8
void sub_0022B728_0x22b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B728_0x22b728");
#endif

    switch (ctx->pc) {
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        default: break;
    }

    ctx->pc = 0x22b728u;

label_22b728:
    // 0x22b728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22b72c:
    // 0x22b72c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_22b730:
    // 0x22b730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b734:
    // 0x22b734: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_22b738:
    // 0x22b738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22b738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b73c:
    // 0x22b73c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22b740:
    // 0x22b740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b744:
    // 0x22b744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b748:
    // 0x22b748: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22b74c:
    // 0x22b74c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_22b750:
    if (ctx->pc == 0x22B750u) {
        ctx->pc = 0x22B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B74Cu;
        // 0x22b750: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B754u;
        goto label_22b754;
    }
    ctx->pc = 0x22B74Cu;
    {
        const bool branch_taken_0x22b74c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B74Cu;
        // 0x22b750: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b74c) {
            ctx->pc = 0x22B760u;
            goto label_22b760;
        }
    }
    ctx->pc = 0x22B754u;
label_22b754:
    // 0x22b754: 0xc08ad98  jal         func_22B660
label_22b758:
    if (ctx->pc == 0x22B758u) {
        ctx->pc = 0x22B75Cu;
        goto label_22b75c;
    }
    ctx->pc = 0x22B754u;
    SET_GPR_U32(ctx, 31, 0x22B75Cu);
    ctx->pc = 0x22B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B660u, 0x22B754u, 0x22B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B75Cu;
label_22b75c:
    // 0x22b75c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b760:
    // 0x22b760: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_22b764:
    // 0x22b764: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x22b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_22b768:
    // 0x22b768: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22b76c:
    if (ctx->pc == 0x22B76Cu) {
        ctx->pc = 0x22B770u;
        goto label_22b770;
    }
    ctx->pc = 0x22B768u;
    {
        const bool branch_taken_0x22b768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b768) {
            ctx->pc = 0x22B77Cu;
            goto label_22b77c;
        }
    }
    ctx->pc = 0x22B770u;
label_22b770:
    // 0x22b770: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x22b770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22b774:
    // 0x22b774: 0xc0404b2  jal         func_1012C8
label_22b778:
    if (ctx->pc == 0x22B778u) {
        ctx->pc = 0x22B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B774u;
        // 0x22b778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B77Cu;
        goto label_22b77c;
    }
    ctx->pc = 0x22B774u;
    SET_GPR_U32(ctx, 31, 0x22B77Cu);
    ctx->pc = 0x22B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B774u;
    // 0x22b778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x22B774u, 0x22B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B77Cu;
label_22b77c:
    // 0x22b77c: 0xc08adc2  jal         func_22B708
label_22b780:
    if (ctx->pc == 0x22B780u) {
        ctx->pc = 0x22B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B77Cu;
        // 0x22b780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B784u;
        goto label_22b784;
    }
    ctx->pc = 0x22B77Cu;
    SET_GPR_U32(ctx, 31, 0x22B784u);
    ctx->pc = 0x22B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B77Cu;
    // 0x22b780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B708u, 0x22B77Cu, 0x22B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B784u;
label_22b784:
    // 0x22b784: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22b784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b788:
    // 0x22b788: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x22b788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b78c:
    // 0x22b78c: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_22b790:
    if (ctx->pc == 0x22B790u) {
        ctx->pc = 0x22B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B78Cu;
        // 0x22b790: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B794u;
        goto label_22b794;
    }
    ctx->pc = 0x22B78Cu;
    {
        const bool branch_taken_0x22b78c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B78Cu;
        // 0x22b790: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b78c) {
            ctx->pc = 0x22B7B4u;
            goto label_22b7b4;
        }
    }
    ctx->pc = 0x22B794u;
label_22b794:
    // 0x22b794: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_22b798:
    if (ctx->pc == 0x22B798u) {
        ctx->pc = 0x22B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B794u;
        // 0x22b798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B79Cu;
        goto label_22b79c;
    }
    ctx->pc = 0x22B794u;
    {
        const bool branch_taken_0x22b794 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x22B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B794u;
        // 0x22b798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b794) {
            ctx->pc = 0x22B7A8u;
            goto label_22b7a8;
        }
    }
    ctx->pc = 0x22B79Cu;
label_22b79c:
    // 0x22b79c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22b7a0:
    // 0x22b7a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22b7a4:
    if (ctx->pc == 0x22B7A4u) {
        ctx->pc = 0x22B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A0u;
        // 0x22b7a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7A8u;
        goto label_22b7a8;
    }
    ctx->pc = 0x22B7A0u;
    {
        const bool branch_taken_0x22b7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7a0) {
            ctx->pc = 0x22B7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B7A0u;
            // 0x22b7a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B7B8u;
            goto label_22b7b8;
        }
    }
    ctx->pc = 0x22B7A8u;
label_22b7a8:
    // 0x22b7a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b7ac:
    // 0x22b7ac: 0xe0f809  jalr        $a3
label_22b7b0:
    if (ctx->pc == 0x22B7B0u) {
        ctx->pc = 0x22B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7ACu;
        // 0x22b7b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7B4u;
        goto label_22b7b4;
    }
    ctx->pc = 0x22B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x22B7B4u);
        ctx->pc = 0x22B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7ACu;
        // 0x22b7b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B7ACu, 0x22B7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B7B4u;
label_22b7b4:
    // 0x22b7b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22b7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b7b8:
    // 0x22b7b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22b7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22b7bc:
    // 0x22b7bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22b7c0:
    // 0x22b7c0: 0x3e00008  jr          $ra
label_22b7c4:
    if (ctx->pc == 0x22B7C4u) {
        ctx->pc = 0x22B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7C0u;
        // 0x22b7c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7C8u;
        goto label_fallthrough_0x22b7c0;
    }
    ctx->pc = 0x22B7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7C0u;
        // 0x22b7c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b7c0:
    ctx->pc = 0x22B7C8u;
}
