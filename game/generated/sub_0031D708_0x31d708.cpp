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

// Function: sub_0031D708
// Address: 0x31d708 - 0x31d7b0
void sub_0031D708_0x31d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D708_0x31d708");
#endif

    switch (ctx->pc) {
        case 0x31d708u: goto label_31d708;
        case 0x31d70cu: goto label_31d70c;
        case 0x31d710u: goto label_31d710;
        case 0x31d714u: goto label_31d714;
        case 0x31d718u: goto label_31d718;
        case 0x31d71cu: goto label_31d71c;
        case 0x31d720u: goto label_31d720;
        case 0x31d724u: goto label_31d724;
        case 0x31d728u: goto label_31d728;
        case 0x31d72cu: goto label_31d72c;
        case 0x31d730u: goto label_31d730;
        case 0x31d734u: goto label_31d734;
        case 0x31d738u: goto label_31d738;
        case 0x31d73cu: goto label_31d73c;
        case 0x31d740u: goto label_31d740;
        case 0x31d744u: goto label_31d744;
        case 0x31d748u: goto label_31d748;
        case 0x31d74cu: goto label_31d74c;
        case 0x31d750u: goto label_31d750;
        case 0x31d754u: goto label_31d754;
        case 0x31d758u: goto label_31d758;
        case 0x31d75cu: goto label_31d75c;
        case 0x31d760u: goto label_31d760;
        case 0x31d764u: goto label_31d764;
        case 0x31d768u: goto label_31d768;
        case 0x31d76cu: goto label_31d76c;
        case 0x31d770u: goto label_31d770;
        case 0x31d774u: goto label_31d774;
        case 0x31d778u: goto label_31d778;
        case 0x31d77cu: goto label_31d77c;
        case 0x31d780u: goto label_31d780;
        case 0x31d784u: goto label_31d784;
        case 0x31d788u: goto label_31d788;
        case 0x31d78cu: goto label_31d78c;
        case 0x31d790u: goto label_31d790;
        case 0x31d794u: goto label_31d794;
        case 0x31d798u: goto label_31d798;
        case 0x31d79cu: goto label_31d79c;
        case 0x31d7a0u: goto label_31d7a0;
        case 0x31d7a4u: goto label_31d7a4;
        case 0x31d7a8u: goto label_31d7a8;
        case 0x31d7acu: goto label_31d7ac;
        default: break;
    }

    ctx->pc = 0x31d708u;

label_31d708:
    // 0x31d708: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31d70c:
    // 0x31d70c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x31d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_31d710:
    // 0x31d710: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31d710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d714:
    // 0x31d714: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x31d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_31d718:
    // 0x31d718: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x31d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_31d71c:
    // 0x31d71c: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x31d71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_31d720:
    // 0x31d720: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x31d720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_31d724:
    // 0x31d724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31d728:
    // 0x31d728: 0xc0cde96  jal         func_337A58
label_31d72c:
    if (ctx->pc == 0x31D72Cu) {
        ctx->pc = 0x31D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D728u;
        // 0x31d72c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D730u;
        goto label_31d730;
    }
    ctx->pc = 0x31D728u;
    SET_GPR_U32(ctx, 31, 0x31D730u);
    ctx->pc = 0x31D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D728u;
    // 0x31d72c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A58u, 0x31D728u, 0x31D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D730u;
label_31d730:
    // 0x31d730: 0xde430230  ld          $v1, 0x230($s2)
    ctx->pc = 0x31d730u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 560)));
label_31d734:
    // 0x31d734: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x31d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_31d738:
    // 0x31d738: 0xfe420238  sd          $v0, 0x238($s2)
    ctx->pc = 0x31d738u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 568), GPR_U64(ctx, 2));
label_31d73c:
    // 0x31d73c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x31d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_31d740:
    // 0x31d740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_31d744:
    if (ctx->pc == 0x31D744u) {
        ctx->pc = 0x31D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D740u;
        // 0x31d744: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D748u;
        goto label_31d748;
    }
    ctx->pc = 0x31D740u;
    {
        const bool branch_taken_0x31d740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D740u;
        // 0x31d744: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d740) {
            ctx->pc = 0x31D770u;
            goto label_31d770;
        }
    }
    ctx->pc = 0x31D748u;
label_31d748:
    // 0x31d748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d74c:
    // 0x31d74c: 0x0  nop
    ctx->pc = 0x31d74cu;
    // NOP
label_31d750:
    // 0x31d750: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31d750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31d754:
    // 0x31d754: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31d754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31d758:
    // 0x31d758: 0x60f809  jalr        $v1
label_31d75c:
    if (ctx->pc == 0x31D75Cu) {
        ctx->pc = 0x31D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D758u;
        // 0x31d75c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D760u;
        goto label_31d760;
    }
    ctx->pc = 0x31D758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D760u);
        ctx->pc = 0x31D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D758u;
        // 0x31d75c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D758u, 0x31D760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D760u;
label_31d760:
    // 0x31d760: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x31d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_31d764:
    // 0x31d764: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x31d764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d768:
    // 0x31d768: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_31d76c:
    if (ctx->pc == 0x31D76Cu) {
        ctx->pc = 0x31D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D768u;
        // 0x31d76c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D770u;
        goto label_31d770;
    }
    ctx->pc = 0x31D768u;
    {
        const bool branch_taken_0x31d768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d768) {
            ctx->pc = 0x31D76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D768u;
            // 0x31d76c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d750;
        }
    }
    ctx->pc = 0x31D770u;
label_31d770:
    // 0x31d770: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x31d770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_31d774:
    // 0x31d774: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31d774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31d778:
    // 0x31d778: 0xc043d08  jal         func_10F420
label_31d77c:
    if (ctx->pc == 0x31D77Cu) {
        ctx->pc = 0x31D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D778u;
        // 0x31d77c: 0x8e440240  lw          $a0, 0x240($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D780u;
        goto label_31d780;
    }
    ctx->pc = 0x31D778u;
    SET_GPR_U32(ctx, 31, 0x31D780u);
    ctx->pc = 0x31D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D778u;
    // 0x31d77c: 0x8e440240  lw          $a0, 0x240($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F420u, 0x31D778u, 0x31D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D780u;
label_31d780:
    // 0x31d780: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31d784:
    // 0x31d784: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_31d788:
    if (ctx->pc == 0x31D788u) {
        ctx->pc = 0x31D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D784u;
        // 0x31d788: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D78Cu;
        goto label_31d78c;
    }
    ctx->pc = 0x31D784u;
    {
        const bool branch_taken_0x31d784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d784) {
            ctx->pc = 0x31D788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D784u;
            // 0x31d788: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D798u;
            goto label_31d798;
        }
    }
    ctx->pc = 0x31D78Cu;
label_31d78c:
    // 0x31d78c: 0xc043cf4  jal         func_10F3D0
label_31d790:
    if (ctx->pc == 0x31D790u) {
        ctx->pc = 0x31D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D78Cu;
        // 0x31d790: 0x8e440240  lw          $a0, 0x240($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D794u;
        goto label_31d794;
    }
    ctx->pc = 0x31D78Cu;
    SET_GPR_U32(ctx, 31, 0x31D794u);
    ctx->pc = 0x31D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D78Cu;
    // 0x31d790: 0x8e440240  lw          $a0, 0x240($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x31D78Cu, 0x31D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D794u;
label_31d794:
    // 0x31d794: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x31d794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31d798:
    // 0x31d798: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x31d798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31d79c:
    // 0x31d79c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31d79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31d7a0:
    // 0x31d7a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x31d7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_31d7a4:
    // 0x31d7a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31d7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31d7a8:
    // 0x31d7a8: 0x3e00008  jr          $ra
label_31d7ac:
    if (ctx->pc == 0x31D7ACu) {
        ctx->pc = 0x31D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7A8u;
        // 0x31d7ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7B0u;
        goto label_fallthrough_0x31d7a8;
    }
    ctx->pc = 0x31D7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7A8u;
        // 0x31d7ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31d7a8:
    ctx->pc = 0x31D7B0u;
}
