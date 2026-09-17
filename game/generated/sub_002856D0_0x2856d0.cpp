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

// Function: sub_002856D0
// Address: 0x2856d0 - 0x2857d0
void sub_002856D0_0x2856d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002856D0_0x2856d0");
#endif

    switch (ctx->pc) {
        case 0x2856f8u: goto label_2856f8;
        case 0x285730u: goto label_285730;
        case 0x285738u: goto label_285738;
        case 0x285754u: goto label_285754;
        case 0x28575cu: goto label_28575c;
        case 0x285768u: goto label_285768;
        case 0x285780u: goto label_285780;
        case 0x285788u: goto label_285788;
        default: break;
    }

    ctx->pc = 0x2856d0u;

    // 0x2856d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2856d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2856d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2856d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2856d8: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2856d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2856dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2856dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2856e0: 0x26513370  addiu       $s1, $s2, 0x3370
    ctx->pc = 0x2856e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    // 0x2856e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2856e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2856e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2856e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2856ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2856f0: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x2856F0u;
    SET_GPR_U32(ctx, 31, 0x2856F8u);
    ctx->pc = 0x2856F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2856F0u;
    // 0x2856f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x2856F0u, 0x2856F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856F8u;
label_2856f8:
    // 0x2856f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2856f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x285700: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285700u;
    {
        const bool branch_taken_0x285700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x285704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285700u;
        // 0x285704: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285700) {
            ctx->pc = 0x285718u;
            goto label_285718;
        }
    }
    ctx->pc = 0x285708u;
    // 0x285708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28570c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28570Cu;
    {
        const bool branch_taken_0x28570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28570Cu;
        // 0x285710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28570c) {
            ctx->pc = 0x285728u;
            goto label_285728;
        }
    }
    ctx->pc = 0x285714u;
    // 0x285714: 0x0  nop
    ctx->pc = 0x285714u;
    // NOP
label_285718:
    // 0x285718: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x285718u;
    {
        const bool branch_taken_0x285718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285718u;
        // 0x28571c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285718) {
            ctx->pc = 0x285740u;
            goto label_285740;
        }
    }
    ctx->pc = 0x285720u;
    // 0x285720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285724: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x285724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_285728:
    // 0x285728: 0xc0a169e  jal         func_285A78
    ctx->pc = 0x285728u;
    SET_GPR_U32(ctx, 31, 0x285730u);
    ctx->pc = 0x28572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285728u;
    // 0x28572c: 0x26503370  addiu       $s0, $s2, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A78u, 0x285728u, 0x285730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285730u;
label_285730:
    // 0x285730: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x285730u;
    SET_GPR_U32(ctx, 31, 0x285738u);
    ctx->pc = 0x285734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285730u;
    // 0x285734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x285730u, 0x285738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285738u;
label_285738:
    // 0x285738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x285738u;
    {
        const bool branch_taken_0x285738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285738) {
            ctx->pc = 0x285760u;
            goto label_285760;
        }
    }
    ctx->pc = 0x285740u;
label_285740:
    // 0x285740: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285740u;
    {
        const bool branch_taken_0x285740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x285740) {
            ctx->pc = 0x285744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285740u;
            // 0x285744: 0x26503370  addiu       $s0, $s2, 0x3370 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285760u;
            goto label_285760;
        }
    }
    ctx->pc = 0x285748u;
    // 0x285748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28574c: 0xc0a169e  jal         func_285A78
    ctx->pc = 0x28574Cu;
    SET_GPR_U32(ctx, 31, 0x285754u);
    ctx->pc = 0x285750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28574Cu;
    // 0x285750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A78u, 0x28574Cu, 0x285754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285754u;
label_285754:
    // 0x285754: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x285754u;
    SET_GPR_U32(ctx, 31, 0x28575Cu);
    ctx->pc = 0x285758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285754u;
    // 0x285758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x285754u, 0x28575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28575Cu;
label_28575c:
    // 0x28575c: 0x26503370  addiu       $s0, $s2, 0x3370
    ctx->pc = 0x28575cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
label_285760:
    // 0x285760: 0xc0a1510  jal         func_285440
    ctx->pc = 0x285760u;
    SET_GPR_U32(ctx, 31, 0x285768u);
    ctx->pc = 0x285764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285760u;
    // 0x285764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285440u, 0x285760u, 0x285768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285768u;
label_285768:
    // 0x285768: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x285768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28576c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x285770: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x285770u;
    {
        const bool branch_taken_0x285770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285770) {
            ctx->pc = 0x2857B8u;
            goto label_2857b8;
        }
    }
    ctx->pc = 0x285778u;
    // 0x285778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28577c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285780:
    // 0x285780: 0xc0a1386  jal         func_284E18
    ctx->pc = 0x285780u;
    SET_GPR_U32(ctx, 31, 0x285788u);
    ctx->pc = 0x285784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285780u;
    // 0x285784: 0x26443370  addiu       $a0, $s2, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E18u, 0x285780u, 0x285788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285788u;
label_285788:
    // 0x285788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28578c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28578cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x285790: 0x2784b2f8  addiu       $a0, $gp, -0x4D08
    ctx->pc = 0x285790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947576));
    // 0x285794: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x285794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x285798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x285798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28579c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2857a0: 0x10a20002  beq         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2857A0u;
    {
        const bool branch_taken_0x2857a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857A0u;
        // 0x2857a4: 0x2a030002  slti        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857a0) {
            ctx->pc = 0x2857ACu;
            goto label_2857ac;
        }
    }
    ctx->pc = 0x2857A8u;
    // 0x2857a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2857a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2857ac:
    // 0x2857ac: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2857ACu;
    {
        const bool branch_taken_0x2857ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2857B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857ACu;
        // 0x2857b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857ac) {
            ctx->pc = 0x285780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285780;
        }
    }
    ctx->pc = 0x2857B4u;
    // 0x2857b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2857b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2857b8:
    // 0x2857b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2857b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2857bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2857bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2857c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2857c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2857c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2857c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2857c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2857C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2857CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C8u;
        // 0x2857cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2857C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2857D0u;
}
