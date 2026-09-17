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

// Function: sub_00375750
// Address: 0x375750 - 0x375800
void sub_00375750_0x375750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375750_0x375750");
#endif

    switch (ctx->pc) {
        case 0x375750u: goto label_375750;
        case 0x375754u: goto label_375754;
        case 0x375758u: goto label_375758;
        case 0x37575cu: goto label_37575c;
        case 0x375760u: goto label_375760;
        case 0x375764u: goto label_375764;
        case 0x375768u: goto label_375768;
        case 0x37576cu: goto label_37576c;
        case 0x375770u: goto label_375770;
        case 0x375774u: goto label_375774;
        case 0x375778u: goto label_375778;
        case 0x37577cu: goto label_37577c;
        case 0x375780u: goto label_375780;
        case 0x375784u: goto label_375784;
        case 0x375788u: goto label_375788;
        case 0x37578cu: goto label_37578c;
        case 0x375790u: goto label_375790;
        case 0x375794u: goto label_375794;
        case 0x375798u: goto label_375798;
        case 0x37579cu: goto label_37579c;
        case 0x3757a0u: goto label_3757a0;
        case 0x3757a4u: goto label_3757a4;
        case 0x3757a8u: goto label_3757a8;
        case 0x3757acu: goto label_3757ac;
        case 0x3757b0u: goto label_3757b0;
        case 0x3757b4u: goto label_3757b4;
        case 0x3757b8u: goto label_3757b8;
        case 0x3757bcu: goto label_3757bc;
        case 0x3757c0u: goto label_3757c0;
        case 0x3757c4u: goto label_3757c4;
        case 0x3757c8u: goto label_3757c8;
        case 0x3757ccu: goto label_3757cc;
        case 0x3757d0u: goto label_3757d0;
        case 0x3757d4u: goto label_3757d4;
        case 0x3757d8u: goto label_3757d8;
        case 0x3757dcu: goto label_3757dc;
        case 0x3757e0u: goto label_3757e0;
        case 0x3757e4u: goto label_3757e4;
        case 0x3757e8u: goto label_3757e8;
        case 0x3757ecu: goto label_3757ec;
        case 0x3757f0u: goto label_3757f0;
        case 0x3757f4u: goto label_3757f4;
        case 0x3757f8u: goto label_3757f8;
        case 0x3757fcu: goto label_3757fc;
        default: break;
    }

    ctx->pc = 0x375750u;

label_375750:
    // 0x375750: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_375754:
    // 0x375754: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x375754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_375758:
    // 0x375758: 0x3e00008  jr          $ra
label_37575c:
    if (ctx->pc == 0x37575Cu) {
        ctx->pc = 0x37575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375758u;
        // 0x37575c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375760u;
        goto label_375760;
    }
    ctx->pc = 0x375758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375758u;
        // 0x37575c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375760u;
label_375760:
    // 0x375760: 0x3e00008  jr          $ra
label_375764:
    if (ctx->pc == 0x375764u) {
        ctx->pc = 0x375768u;
        goto label_375768;
    }
    ctx->pc = 0x375760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375768u;
label_375768:
    // 0x375768: 0x3e00008  jr          $ra
label_37576c:
    if (ctx->pc == 0x37576Cu) {
        ctx->pc = 0x375770u;
        goto label_375770;
    }
    ctx->pc = 0x375768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375770u;
label_375770:
    // 0x375770: 0x3e00008  jr          $ra
label_375774:
    if (ctx->pc == 0x375774u) {
        ctx->pc = 0x375778u;
        goto label_375778;
    }
    ctx->pc = 0x375770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375778u;
label_375778:
    // 0x375778: 0x3e00008  jr          $ra
label_37577c:
    if (ctx->pc == 0x37577Cu) {
        ctx->pc = 0x37577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375778u;
        // 0x37577c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375780u;
        goto label_375780;
    }
    ctx->pc = 0x375778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375778u;
        // 0x37577c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375780u;
label_375780:
    // 0x375780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_375784:
    // 0x375784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_375788:
    // 0x375788: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x375788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_37578c:
    // 0x37578c: 0x2610f1c0  addiu       $s0, $s0, -0xE40
    ctx->pc = 0x37578cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963648));
label_375790:
    // 0x375790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x375790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_375794:
    // 0x375794: 0xc0d0b24  jal         func_342C90
label_375798:
    if (ctx->pc == 0x375798u) {
        ctx->pc = 0x375798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375794u;
        // 0x375798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37579Cu;
        goto label_37579c;
    }
    ctx->pc = 0x375794u;
    SET_GPR_U32(ctx, 31, 0x37579Cu);
    ctx->pc = 0x375798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375794u;
    // 0x375798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x375794u, 0x37579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37579Cu;
label_37579c:
    // 0x37579c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_3757a0:
    // 0x3757a0: 0x24632188  addiu       $v1, $v1, 0x2188
    ctx->pc = 0x3757a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8584));
label_3757a4:
    // 0x3757a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3757a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3757a8:
    // 0x3757a8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3757a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_3757ac:
    // 0x3757ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3757acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3757b0:
    // 0x3757b0: 0x3e00008  jr          $ra
label_3757b4:
    if (ctx->pc == 0x3757B4u) {
        ctx->pc = 0x3757B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757B0u;
        // 0x3757b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757B8u;
        goto label_3757b8;
    }
    ctx->pc = 0x3757B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3757B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757B0u;
        // 0x3757b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3757B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3757B8u;
label_3757b8:
    // 0x3757b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3757b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3757bc:
    // 0x3757bc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3757bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3757c0:
    // 0x3757c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3757c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3757c4:
    // 0x3757c4: 0x2484f1c0  addiu       $a0, $a0, -0xE40
    ctx->pc = 0x3757c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963648));
label_3757c8:
    // 0x3757c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3757c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3757cc:
    // 0x3757cc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3757ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3757d0:
    // 0x3757d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3757d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3757d4:
    // 0x3757d4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3757d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3757d8:
    // 0x3757d8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3757d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3757dc:
    // 0x3757dc: 0xc0f809  jalr        $a2
label_3757e0:
    if (ctx->pc == 0x3757E0u) {
        ctx->pc = 0x3757E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757DCu;
        // 0x3757e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757E4u;
        goto label_3757e4;
    }
    ctx->pc = 0x3757DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3757E4u);
        ctx->pc = 0x3757E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757DCu;
        // 0x3757e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3757DCu, 0x3757E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3757E4u;
label_3757e4:
    // 0x3757e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3757e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3757e8:
    // 0x3757e8: 0x3e00008  jr          $ra
label_3757ec:
    if (ctx->pc == 0x3757ECu) {
        ctx->pc = 0x3757ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757E8u;
        // 0x3757ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757F0u;
        goto label_3757f0;
    }
    ctx->pc = 0x3757E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3757ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757E8u;
        // 0x3757ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3757E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3757F0u;
label_3757f0:
    // 0x3757f0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_3757f4:
    // 0x3757f4: 0x3e00008  jr          $ra
label_3757f8:
    if (ctx->pc == 0x3757F8u) {
        ctx->pc = 0x3757F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757F4u;
        // 0x3757f8: 0x2442f1c0  addiu       $v0, $v0, -0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757FCu;
        goto label_3757fc;
    }
    ctx->pc = 0x3757F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3757F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757F4u;
        // 0x3757f8: 0x2442f1c0  addiu       $v0, $v0, -0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3757F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3757FCu;
label_3757fc:
    // 0x3757fc: 0x0  nop
    ctx->pc = 0x3757fcu;
    // NOP
    ctx->pc = 0x375800u;
}
