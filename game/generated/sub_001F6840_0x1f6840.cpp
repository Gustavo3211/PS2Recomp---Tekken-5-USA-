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

// Function: sub_001F6840
// Address: 0x1f6840 - 0x1f6960
void sub_001F6840_0x1f6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6840_0x1f6840");
#endif

    switch (ctx->pc) {
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f68a8u: goto label_1f68a8;
        case 0x1f68b4u: goto label_1f68b4;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68f4u: goto label_1f68f4;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f692cu: goto label_1f692c;
        default: break;
    }

    ctx->pc = 0x1f6840u;

    // 0x1f6840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f6844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f6848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f684c: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f6850: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6858: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f685c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f6860: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6864: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6868: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f686c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f6870: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x1f6870u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f6874: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F6874u;
    SET_GPR_U32(ctx, 31, 0x1F687Cu);
    ctx->pc = 0x1F6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6874u;
    // 0x1f6878: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F6874u, 0x1F687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F687Cu;
label_1f687c:
    // 0x1f687c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6880: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F6880u;
    SET_GPR_U32(ctx, 31, 0x1F6888u);
    ctx->pc = 0x1F6884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6880u;
    // 0x1f6884: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F6880u, 0x1F6888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6888u;
label_1f6888:
    // 0x1f6888: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F6888u;
    SET_GPR_U32(ctx, 31, 0x1F6890u);
    ctx->pc = 0x1F688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6888u;
    // 0x1f688c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F6888u, 0x1F6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6890u;
label_1f6890:
    // 0x1f6890: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F6890u;
    SET_GPR_U32(ctx, 31, 0x1F6898u);
    ctx->pc = 0x1F6894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6890u;
    // 0x1f6894: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F6890u, 0x1F6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6898u;
label_1f6898:
    // 0x1f6898: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f689c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68a0: 0xc07d504  jal         func_1F5410
    ctx->pc = 0x1F68A0u;
    SET_GPR_U32(ctx, 31, 0x1F68A8u);
    ctx->pc = 0x1F68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68A0u;
    // 0x1f68a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5410u, 0x1F68A0u, 0x1F68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68A8u;
label_1f68a8:
    // 0x1f68a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f68a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68ac: 0xc07d504  jal         func_1F5410
    ctx->pc = 0x1F68ACu;
    SET_GPR_U32(ctx, 31, 0x1F68B4u);
    ctx->pc = 0x1F68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68ACu;
    // 0x1f68b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5410u, 0x1F68ACu, 0x1F68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68B4u;
label_1f68b4:
    // 0x1f68b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f68b8: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x1f68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1f68bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f68c0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F68C0u;
    {
        const bool branch_taken_0x1f68c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f68c0) {
            ctx->pc = 0x1F6900u;
            goto label_1f6900;
        }
    }
    ctx->pc = 0x1F68C8u;
    // 0x1f68c8: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1F68C8u;
    {
        const bool branch_taken_0x1f68c8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68C8u;
        // 0x1f68cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68c8) {
            ctx->pc = 0x1F6900u;
            goto label_1f6900;
        }
    }
    ctx->pc = 0x1F68D0u;
    // 0x1f68d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f68d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68d4: 0x0  nop
    ctx->pc = 0x1f68d4u;
    // NOP
label_1f68d8:
    // 0x1f68d8: 0xc07d504  jal         func_1F5410
    ctx->pc = 0x1F68D8u;
    SET_GPR_U32(ctx, 31, 0x1F68E0u);
    ctx->pc = 0x1F68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68D8u;
    // 0x1f68dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5410u, 0x1F68D8u, 0x1F68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68E0u;
label_1f68e0:
    // 0x1f68e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f68e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f68e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68e8: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x1f68e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x1f68ec: 0xc07d504  jal         func_1F5410
    ctx->pc = 0x1F68ECu;
    SET_GPR_U32(ctx, 31, 0x1F68F4u);
    ctx->pc = 0x1F68F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68ECu;
    // 0x1f68f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5410u, 0x1F68ECu, 0x1F68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68F4u;
label_1f68f4:
    // 0x1f68f4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1f68f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f68f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F68F8u;
    {
        const bool branch_taken_0x1f68f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68F8u;
        // 0x1f68fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68f8) {
            ctx->pc = 0x1F68D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f68d8;
        }
    }
    ctx->pc = 0x1F6900u;
label_1f6900:
    // 0x1f6900: 0x1ac0000d  blez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6900u;
    {
        const bool branch_taken_0x1f6900 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1F6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6900u;
        // 0x1f6904: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6900) {
            ctx->pc = 0x1F6938u;
            goto label_1f6938;
        }
    }
    ctx->pc = 0x1F6908u;
    // 0x1f6908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f690c: 0x0  nop
    ctx->pc = 0x1f690cu;
    // NOP
label_1f6910:
    // 0x1f6910: 0xc07d504  jal         func_1F5410
    ctx->pc = 0x1F6910u;
    SET_GPR_U32(ctx, 31, 0x1F6918u);
    ctx->pc = 0x1F6914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6910u;
    // 0x1f6914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5410u, 0x1F6910u, 0x1F6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6918u;
label_1f6918:
    // 0x1f6918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f691c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6920: 0x263108d0  addiu       $s1, $s1, 0x8D0
    ctx->pc = 0x1f6920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
    // 0x1f6924: 0xc07d504  jal         func_1F5410
    ctx->pc = 0x1F6924u;
    SET_GPR_U32(ctx, 31, 0x1F692Cu);
    ctx->pc = 0x1F6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6924u;
    // 0x1f6928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5410u, 0x1F6924u, 0x1F692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F692Cu;
label_1f692c:
    // 0x1f692c: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1f692cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1f6930: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F6930u;
    {
        const bool branch_taken_0x1f6930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6930u;
        // 0x1f6934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6930) {
            ctx->pc = 0x1F6910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6910;
        }
    }
    ctx->pc = 0x1F6938u;
label_1f6938:
    // 0x1f6938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f693c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f693cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6948: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f694c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f694cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6950: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f6950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6954: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f6954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6958: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6958u;
        // 0x1f695c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6960u;
}
