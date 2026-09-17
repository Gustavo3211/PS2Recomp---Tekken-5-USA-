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

// Function: sub_002FF898
// Address: 0x2ff898 - 0x2ff970
void sub_002FF898_0x2ff898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF898_0x2ff898");
#endif

    switch (ctx->pc) {
        case 0x2ff8d0u: goto label_2ff8d0;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff8f8u: goto label_2ff8f8;
        case 0x2ff90cu: goto label_2ff90c;
        case 0x2ff938u: goto label_2ff938;
        default: break;
    }

    ctx->pc = 0x2ff898u;

    // 0x2ff898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ff89c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ff89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ff8a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ff8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ff8a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ff8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ff8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ff8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff8b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ff8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ff8b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ff8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ff8b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ff8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ff8bc: 0x86420040  lh          $v0, 0x40($s2)
    ctx->pc = 0x2ff8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2ff8c0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FF8C0u;
    {
        const bool branch_taken_0x2ff8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8C0u;
        // 0x2ff8c4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8c0) {
            ctx->pc = 0x2FF938u;
            goto label_2ff938;
        }
    }
    ctx->pc = 0x2FF8C8u;
    // 0x2ff8c8: 0xc089622  jal         func_225888
    ctx->pc = 0x2FF8C8u;
    SET_GPR_U32(ctx, 31, 0x2FF8D0u);
    ctx->pc = 0x2FF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8C8u;
    // 0x2ff8cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2FF8C8u, 0x2FF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8D0u;
label_2ff8d0:
    // 0x2ff8d0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FF8D0u;
    {
        const bool branch_taken_0x2ff8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff8d0) {
            ctx->pc = 0x2FF8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF8D0u;
            // 0x2ff8d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF93Cu;
            goto label_2ff93c;
        }
    }
    ctx->pc = 0x2FF8D8u;
    // 0x2ff8d8: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2FF8D8u;
    SET_GPR_U32(ctx, 31, 0x2FF8E0u);
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2FF8D8u, 0x2FF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8E0u;
label_2ff8e0:
    // 0x2ff8e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ff8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8e4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FF8E4u;
    {
        const bool branch_taken_0x2ff8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8E4u;
        // 0x2ff8e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8e4) {
            ctx->pc = 0x2FF938u;
            goto label_2ff938;
        }
    }
    ctx->pc = 0x2FF8ECu;
    // 0x2ff8ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ff8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ff8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8f4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2ff8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2ff8f8:
    // 0x2ff8f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FF8F8u;
    {
        const bool branch_taken_0x2ff8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff8f8) {
            ctx->pc = 0x2FF928u;
            goto label_2ff928;
        }
    }
    ctx->pc = 0x2FF900u;
    // 0x2ff900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff904: 0xc09d486  jal         func_275218
    ctx->pc = 0x2FF904u;
    SET_GPR_U32(ctx, 31, 0x2FF90Cu);
    ctx->pc = 0x2FF908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF904u;
    // 0x2ff908: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2FF904u, 0x2FF90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF90Cu;
label_2ff90c:
    // 0x2ff90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ff90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff910: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FF910u;
    {
        const bool branch_taken_0x2ff910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF910u;
        // 0x2ff914: 0x211102a  slt         $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff910) {
            ctx->pc = 0x2FF8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff8f8;
        }
    }
    ctx->pc = 0x2FF918u;
    // 0x2ff918: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ff91c: 0x1452fff6  bne         $v0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2FF91Cu;
    {
        const bool branch_taken_0x2ff91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2FF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF91Cu;
        // 0x2ff920: 0x211102a  slt         $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff91c) {
            ctx->pc = 0x2FF8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff8f8;
        }
    }
    ctx->pc = 0x2FF924u;
    // 0x2ff924: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ff924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff928:
    // 0x2ff928: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF928u;
    {
        const bool branch_taken_0x2ff928 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff928) {
            ctx->pc = 0x2FF92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF928u;
            // 0x2ff92c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF93Cu;
            goto label_2ff93c;
        }
    }
    ctx->pc = 0x2FF930u;
    // 0x2ff930: 0xc0b3d18  jal         func_2CF460
    ctx->pc = 0x2FF930u;
    SET_GPR_U32(ctx, 31, 0x2FF938u);
    ctx->pc = 0x2FF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF930u;
    // 0x2ff934: 0x8e850090  lw          $a1, 0x90($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF460u, 0x2FF930u, 0x2FF938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF938u;
label_2ff938:
    // 0x2ff938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff93c:
    // 0x2ff93c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ff93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ff940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ff944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ff948: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ff948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff94c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ff94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ff950: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF950u;
        // 0x2ff954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF958u;
    // 0x2ff958: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF960u;
    // 0x2ff960: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF968u;
    // 0x2ff968: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF970u;
}
