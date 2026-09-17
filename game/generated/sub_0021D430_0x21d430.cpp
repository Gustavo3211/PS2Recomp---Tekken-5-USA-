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

// Function: sub_0021D430
// Address: 0x21d430 - 0x21d4f0
void sub_0021D430_0x21d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D430_0x21d430");
#endif

    switch (ctx->pc) {
        case 0x21d460u: goto label_21d460;
        case 0x21d470u: goto label_21d470;
        case 0x21d494u: goto label_21d494;
        case 0x21d4b8u: goto label_21d4b8;
        case 0x21d4d0u: goto label_21d4d0;
        default: break;
    }

    ctx->pc = 0x21d430u;

    // 0x21d430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d43c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d440: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d444: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d448: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21d448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d44c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21d450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d454: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d458: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x21D458u;
    SET_GPR_U32(ctx, 31, 0x21D460u);
    ctx->pc = 0x21D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D458u;
    // 0x21d45c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x21D458u, 0x21D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D460u;
label_21d460:
    // 0x21d460: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x21D460u;
    {
        const bool branch_taken_0x21d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d460) {
            ctx->pc = 0x21D464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D460u;
            // 0x21d464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D4D4u;
            goto label_21d4d4;
        }
    }
    ctx->pc = 0x21D468u;
    // 0x21d468: 0xc0875e4  jal         func_21D790
    ctx->pc = 0x21D468u;
    SET_GPR_U32(ctx, 31, 0x21D470u);
    ctx->pc = 0x21D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D468u;
    // 0x21d46c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D790u, 0x21D468u, 0x21D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D470u;
label_21d470:
    // 0x21d470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d474: 0x30430030  andi        $v1, $v0, 0x30
    ctx->pc = 0x21d474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x21d478: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D478u;
    {
        const bool branch_taken_0x21d478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D478u;
        // 0x21d47c: 0x30450040  andi        $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d478) {
            ctx->pc = 0x21D48Cu;
            goto label_21d48c;
        }
    }
    ctx->pc = 0x21D480u;
    // 0x21d480: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21d480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d484: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d488: 0x45800a  movz        $s0, $v0, $a1
    ctx->pc = 0x21d488u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_21d48c:
    // 0x21d48c: 0xc08e6a8  jal         func_239AA0
    ctx->pc = 0x21D48Cu;
    SET_GPR_U32(ctx, 31, 0x21D494u);
    ctx->pc = 0x239AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AA0u, 0x21D48Cu, 0x21D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D494u;
label_21d494:
    // 0x21d494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d498: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21d498u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21d49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4a0: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x21d4a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21d4a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21d4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4a8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x21d4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4ac: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x21d4acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4b0: 0xc0874ae  jal         func_21D2B8
    ctx->pc = 0x21D4B0u;
    SET_GPR_U32(ctx, 31, 0x21D4B8u);
    ctx->pc = 0x21D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4B0u;
    // 0x21d4b4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D2B8u, 0x21D4B0u, 0x21D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4B8u;
label_21d4b8:
    // 0x21d4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21d4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21d4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c8: 0xc08759c  jal         func_21D670
    ctx->pc = 0x21D4C8u;
    SET_GPR_U32(ctx, 31, 0x21D4D0u);
    ctx->pc = 0x21D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4C8u;
    // 0x21d4cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D670u, 0x21D4C8u, 0x21D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4D0u;
label_21d4d0:
    // 0x21d4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d4d4:
    // 0x21d4d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d4d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d4dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d4dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d4e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21d4e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d4e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4E8u;
        // 0x21d4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D4F0u;
}
