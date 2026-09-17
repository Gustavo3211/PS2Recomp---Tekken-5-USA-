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

// Function: sub_002E4618
// Address: 0x2e4618 - 0x2e46d8
void sub_002E4618_0x2e4618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4618_0x2e4618");
#endif

    switch (ctx->pc) {
        case 0x2e4694u: goto label_2e4694;
        case 0x2e46a4u: goto label_2e46a4;
        case 0x2e46b4u: goto label_2e46b4;
        case 0x2e46bcu: goto label_2e46bc;
        default: break;
    }

    ctx->pc = 0x2e4618u;

    // 0x2e4618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e461c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2e461cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4624: 0x25500054  addiu       $s0, $t2, 0x54
    ctx->pc = 0x2e4624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 84));
    // 0x2e4628: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e462c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2e462cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e4634: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e4634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e4638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e463c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e463cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4644: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2e4644u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4648: 0x24a6000f  addiu       $a2, $a1, 0xF
    ctx->pc = 0x2e4648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2e464c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2e464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4650: 0x8d430104  lw          $v1, 0x104($t2)
    ctx->pc = 0x2e4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 260)));
    // 0x2e4654: 0x254d0094  addiu       $t5, $t2, 0x94
    ctx->pc = 0x2e4654u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 148));
    // 0x2e4658: 0x266c0060  addiu       $t4, $s3, 0x60
    ctx->pc = 0x2e4658u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2e465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e4660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4664: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4664u;
    {
        const bool branch_taken_0x2e4664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4664u;
        // 0x2e4668: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4664) {
            ctx->pc = 0x2E4670u;
            goto label_2e4670;
        }
    }
    ctx->pc = 0x2E466Cu;
    // 0x2e466c: 0xad4b0104  sw          $t3, 0x104($t2)
    ctx->pc = 0x2e466cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 260), GPR_U32(ctx, 11));
label_2e4670:
    // 0x2e4670: 0x8d420108  lw          $v0, 0x108($t2)
    ctx->pc = 0x2e4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 264)));
    // 0x2e4674: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E4674u;
    {
        const bool branch_taken_0x2e4674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4674) {
            ctx->pc = 0x2E4678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4674u;
            // 0x2e4678: 0xad520108  sw          $s2, 0x108($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 264), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E467Cu;
            goto label_2e467c;
        }
    }
    ctx->pc = 0x2E467Cu;
label_2e467c:
    // 0x2e467c: 0x8d42010c  lw          $v0, 0x10C($t2)
    ctx->pc = 0x2e467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 268)));
    // 0x2e4680: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E4680u;
    {
        const bool branch_taken_0x2e4680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4680) {
            ctx->pc = 0x2E4684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4680u;
            // 0x2e4684: 0xad51010c  sw          $s1, 0x10C($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 268), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4688u;
            goto label_2e4688;
        }
    }
    ctx->pc = 0x2E4688u;
label_2e4688:
    // 0x2e4688: 0xae0c000c  sw          $t4, 0xC($s0)
    ctx->pc = 0x2e4688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 12));
    // 0x2e468c: 0xc0c114a  jal         func_304528
    ctx->pc = 0x2E468Cu;
    SET_GPR_U32(ctx, 31, 0x2E4694u);
    ctx->pc = 0x2E4690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E468Cu;
    // 0x2e4690: 0xae0d0038  sw          $t5, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304528u, 0x2E468Cu, 0x2E4694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4694u;
label_2e4694:
    // 0x2e4694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4698: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e469c: 0xc0c1188  jal         func_304620
    ctx->pc = 0x2E469Cu;
    SET_GPR_U32(ctx, 31, 0x2E46A4u);
    ctx->pc = 0x2E46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E469Cu;
    // 0x2e46a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304620u, 0x2E469Cu, 0x2E46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46A4u;
label_2e46a4:
    // 0x2e46a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e46a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46ac: 0xc0c1190  jal         func_304640
    ctx->pc = 0x2E46ACu;
    SET_GPR_U32(ctx, 31, 0x2E46B4u);
    ctx->pc = 0x2E46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46ACu;
    // 0x2e46b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304640u, 0x2E46ACu, 0x2E46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46B4u;
label_2e46b4:
    // 0x2e46b4: 0xc0c13ec  jal         func_304FB0
    ctx->pc = 0x2E46B4u;
    SET_GPR_U32(ctx, 31, 0x2E46BCu);
    ctx->pc = 0x2E46B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46B4u;
    // 0x2e46b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304FB0u, 0x2E46B4u, 0x2E46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46BCu;
label_2e46bc:
    // 0x2e46bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e46bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e46c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e46c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e46c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e46c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e46c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e46c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e46cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e46ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e46d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E46D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46D0u;
        // 0x2e46d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E46D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E46D8u;
}
