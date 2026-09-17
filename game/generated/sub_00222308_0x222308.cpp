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

// Function: sub_00222308
// Address: 0x222308 - 0x2223e8
void sub_00222308_0x222308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222308_0x222308");
#endif

    switch (ctx->pc) {
        case 0x222340u: goto label_222340;
        case 0x222350u: goto label_222350;
        case 0x222378u: goto label_222378;
        case 0x222390u: goto label_222390;
        case 0x2223c0u: goto label_2223c0;
        default: break;
    }

    ctx->pc = 0x222308u;

    // 0x222308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22230c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x222310: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x222310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222314: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x222314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x222318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22231c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222324: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x222324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22232c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22232cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222330: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x222330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x222334: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x222334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222338: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22233c: 0x0  nop
    ctx->pc = 0x22233cu;
    // NOP
label_222340:
    // 0x222340: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x222340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x222344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222348: 0xc088822  jal         func_222088
    ctx->pc = 0x222348u;
    SET_GPR_U32(ctx, 31, 0x222350u);
    ctx->pc = 0x22234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222348u;
    // 0x22234c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222088u, 0x222348u, 0x222350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222350u;
label_222350:
    // 0x222350: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x222350u;
    {
        const bool branch_taken_0x222350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222350u;
        // 0x222354: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222350) {
            ctx->pc = 0x222398u;
            goto label_222398;
        }
    }
    ctx->pc = 0x222358u;
    // 0x222358: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x222358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22235c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22235Cu;
    {
        const bool branch_taken_0x22235c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22235Cu;
        // 0x222360: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22235c) {
            ctx->pc = 0x222340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222340;
        }
    }
    ctx->pc = 0x222364u;
    // 0x222364: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x222364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x222368: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x222368u;
    {
        const bool branch_taken_0x222368 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222368) {
            ctx->pc = 0x2223A8u;
            goto label_2223a8;
        }
    }
    ctx->pc = 0x222370u;
    // 0x222370: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x222374: 0x0  nop
    ctx->pc = 0x222374u;
    // NOP
label_222378:
    // 0x222378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22237c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x22237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x222380: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222384: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x222384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222388: 0xc0887f6  jal         func_221FD8
    ctx->pc = 0x222388u;
    SET_GPR_U32(ctx, 31, 0x222390u);
    ctx->pc = 0x22238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222388u;
    // 0x22238c: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221FD8u, 0x222388u, 0x222390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222390u;
label_222390:
    // 0x222390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222390u;
    {
        const bool branch_taken_0x222390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222390u;
        // 0x222394: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222390) {
            ctx->pc = 0x2223A0u;
            goto label_2223a0;
        }
    }
    ctx->pc = 0x222398u;
label_222398:
    // 0x222398: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x222398u;
    {
        const bool branch_taken_0x222398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222398u;
        // 0x22239c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222398) {
            ctx->pc = 0x2223C4u;
            goto label_2223c4;
        }
    }
    ctx->pc = 0x2223A0u;
label_2223a0:
    // 0x2223a0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2223A0u;
    {
        const bool branch_taken_0x2223a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223A0u;
        // 0x2223a4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223a0) {
            ctx->pc = 0x222378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222378;
        }
    }
    ctx->pc = 0x2223A8u;
label_2223a8:
    // 0x2223a8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2223a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2223ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2223acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223b0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2223b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2223b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2223b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223b8: 0xc0887f6  jal         func_221FD8
    ctx->pc = 0x2223B8u;
    SET_GPR_U32(ctx, 31, 0x2223C0u);
    ctx->pc = 0x2223BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223B8u;
    // 0x2223bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221FD8u, 0x2223B8u, 0x2223C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223C0u;
label_2223c0:
    // 0x2223c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2223c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2223c4:
    // 0x2223c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2223c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2223c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2223c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2223cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2223ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2223d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2223d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2223d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2223d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2223d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2223d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2223dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2223DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2223E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223DCu;
        // 0x2223e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2223DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2223E4u;
    // 0x2223e4: 0x0  nop
    ctx->pc = 0x2223e4u;
    // NOP
    ctx->pc = 0x2223e8u;
}
