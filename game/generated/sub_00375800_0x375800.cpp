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

// Function: sub_00375800
// Address: 0x375800 - 0x3758b0
void sub_00375800_0x375800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375800_0x375800");
#endif

    switch (ctx->pc) {
        case 0x375800u: goto label_375800;
        case 0x375804u: goto label_375804;
        case 0x375808u: goto label_375808;
        case 0x37580cu: goto label_37580c;
        case 0x375810u: goto label_375810;
        case 0x375814u: goto label_375814;
        case 0x375818u: goto label_375818;
        case 0x37581cu: goto label_37581c;
        case 0x375820u: goto label_375820;
        case 0x375824u: goto label_375824;
        case 0x375828u: goto label_375828;
        case 0x37582cu: goto label_37582c;
        case 0x375830u: goto label_375830;
        case 0x375834u: goto label_375834;
        case 0x375838u: goto label_375838;
        case 0x37583cu: goto label_37583c;
        case 0x375840u: goto label_375840;
        case 0x375844u: goto label_375844;
        case 0x375848u: goto label_375848;
        case 0x37584cu: goto label_37584c;
        case 0x375850u: goto label_375850;
        case 0x375854u: goto label_375854;
        case 0x375858u: goto label_375858;
        case 0x37585cu: goto label_37585c;
        case 0x375860u: goto label_375860;
        case 0x375864u: goto label_375864;
        case 0x375868u: goto label_375868;
        case 0x37586cu: goto label_37586c;
        case 0x375870u: goto label_375870;
        case 0x375874u: goto label_375874;
        case 0x375878u: goto label_375878;
        case 0x37587cu: goto label_37587c;
        case 0x375880u: goto label_375880;
        case 0x375884u: goto label_375884;
        case 0x375888u: goto label_375888;
        case 0x37588cu: goto label_37588c;
        case 0x375890u: goto label_375890;
        case 0x375894u: goto label_375894;
        case 0x375898u: goto label_375898;
        case 0x37589cu: goto label_37589c;
        case 0x3758a0u: goto label_3758a0;
        case 0x3758a4u: goto label_3758a4;
        case 0x3758a8u: goto label_3758a8;
        case 0x3758acu: goto label_3758ac;
        default: break;
    }

    ctx->pc = 0x375800u;

label_375800:
    // 0x375800: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_375804:
    // 0x375804: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x375804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_375808:
    // 0x375808: 0x3e00008  jr          $ra
label_37580c:
    if (ctx->pc == 0x37580Cu) {
        ctx->pc = 0x37580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375808u;
        // 0x37580c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375810u;
        goto label_375810;
    }
    ctx->pc = 0x375808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375808u;
        // 0x37580c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375810u;
label_375810:
    // 0x375810: 0x3e00008  jr          $ra
label_375814:
    if (ctx->pc == 0x375814u) {
        ctx->pc = 0x375818u;
        goto label_375818;
    }
    ctx->pc = 0x375810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375818u;
label_375818:
    // 0x375818: 0x3e00008  jr          $ra
label_37581c:
    if (ctx->pc == 0x37581Cu) {
        ctx->pc = 0x375820u;
        goto label_375820;
    }
    ctx->pc = 0x375818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375820u;
label_375820:
    // 0x375820: 0x3e00008  jr          $ra
label_375824:
    if (ctx->pc == 0x375824u) {
        ctx->pc = 0x375828u;
        goto label_375828;
    }
    ctx->pc = 0x375820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375828u;
label_375828:
    // 0x375828: 0x3e00008  jr          $ra
label_37582c:
    if (ctx->pc == 0x37582Cu) {
        ctx->pc = 0x37582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375828u;
        // 0x37582c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375830u;
        goto label_375830;
    }
    ctx->pc = 0x375828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375828u;
        // 0x37582c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375830u;
label_375830:
    // 0x375830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_375834:
    // 0x375834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_375838:
    // 0x375838: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x375838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_37583c:
    // 0x37583c: 0x2610f200  addiu       $s0, $s0, -0xE00
    ctx->pc = 0x37583cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963712));
label_375840:
    // 0x375840: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x375840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_375844:
    // 0x375844: 0xc0d0b24  jal         func_342C90
label_375848:
    if (ctx->pc == 0x375848u) {
        ctx->pc = 0x375848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375844u;
        // 0x375848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37584Cu;
        goto label_37584c;
    }
    ctx->pc = 0x375844u;
    SET_GPR_U32(ctx, 31, 0x37584Cu);
    ctx->pc = 0x375848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375844u;
    // 0x375848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x375844u, 0x37584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37584Cu;
label_37584c:
    // 0x37584c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_375850:
    // 0x375850: 0x246321b8  addiu       $v1, $v1, 0x21B8
    ctx->pc = 0x375850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8632));
label_375854:
    // 0x375854: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x375854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_375858:
    // 0x375858: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x375858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_37585c:
    // 0x37585c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37585cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375860:
    // 0x375860: 0x3e00008  jr          $ra
label_375864:
    if (ctx->pc == 0x375864u) {
        ctx->pc = 0x375864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375860u;
        // 0x375864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375868u;
        goto label_375868;
    }
    ctx->pc = 0x375860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375860u;
        // 0x375864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375868u;
label_375868:
    // 0x375868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37586c:
    // 0x37586c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x37586cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_375870:
    // 0x375870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_375874:
    // 0x375874: 0x2484f200  addiu       $a0, $a0, -0xE00
    ctx->pc = 0x375874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
label_375878:
    // 0x375878: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37587c:
    // 0x37587c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x37587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_375880:
    // 0x375880: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x375880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_375884:
    // 0x375884: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x375884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_375888:
    // 0x375888: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x375888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37588c:
    // 0x37588c: 0xc0f809  jalr        $a2
label_375890:
    if (ctx->pc == 0x375890u) {
        ctx->pc = 0x375890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37588Cu;
        // 0x375890: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375894u;
        goto label_375894;
    }
    ctx->pc = 0x37588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x375894u);
        ctx->pc = 0x375890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37588Cu;
        // 0x375890: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37588Cu, 0x375894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x375894u;
label_375894:
    // 0x375894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375898:
    // 0x375898: 0x3e00008  jr          $ra
label_37589c:
    if (ctx->pc == 0x37589Cu) {
        ctx->pc = 0x37589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375898u;
        // 0x37589c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3758A0u;
        goto label_3758a0;
    }
    ctx->pc = 0x375898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375898u;
        // 0x37589c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3758A0u;
label_3758a0:
    // 0x3758a0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3758a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_3758a4:
    // 0x3758a4: 0x3e00008  jr          $ra
label_3758a8:
    if (ctx->pc == 0x3758A8u) {
        ctx->pc = 0x3758A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758A4u;
        // 0x3758a8: 0x2442f200  addiu       $v0, $v0, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3758ACu;
        goto label_3758ac;
    }
    ctx->pc = 0x3758A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3758A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758A4u;
        // 0x3758a8: 0x2442f200  addiu       $v0, $v0, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3758A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3758ACu;
label_3758ac:
    // 0x3758ac: 0x0  nop
    ctx->pc = 0x3758acu;
    // NOP
    ctx->pc = 0x3758b0u;
}
