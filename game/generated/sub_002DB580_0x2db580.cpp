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

// Function: sub_002DB580
// Address: 0x2db580 - 0x2db658
void sub_002DB580_0x2db580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB580_0x2db580");
#endif

    switch (ctx->pc) {
        case 0x2db5d0u: goto label_2db5d0;
        case 0x2db5e8u: goto label_2db5e8;
        case 0x2db608u: goto label_2db608;
        default: break;
    }

    ctx->pc = 0x2db580u;

    // 0x2db580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db588: 0x24d00020  addiu       $s0, $a2, 0x20
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2db58c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db590: 0x24d10010  addiu       $s1, $a2, 0x10
    ctx->pc = 0x2db590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2db594: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db598: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2db598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db59c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db5a0: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2db5a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2db5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2db5a8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2db5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2db5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2db5b0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2db5b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2db5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2db5b8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2db5b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2db5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2db5c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2db5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2db5c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2db5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2db5c8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB5C8u;
    {
        const bool branch_taken_0x2db5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5C8u;
        // 0x2db5cc: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5c8) {
            ctx->pc = 0x2DB628u;
            goto label_2db628;
        }
    }
    ctx->pc = 0x2DB5D0u;
label_2db5d0:
    // 0x2db5d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2db5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db5d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2db5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5dc: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2db5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2db5e0: 0xc04a100  jal         func_128400
    ctx->pc = 0x2DB5E0u;
    SET_GPR_U32(ctx, 31, 0x2DB5E8u);
    ctx->pc = 0x2DB5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB5E0u;
    // 0x2db5e4: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x2DB5E0u, 0x2DB5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5E8u;
label_2db5e8:
    // 0x2db5e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2db5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2db5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2db5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2db5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB5F8u;
    {
        const bool branch_taken_0x2db5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5F8u;
        // 0x2db5fc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5f8) {
            ctx->pc = 0x2DB608u;
            goto label_2db608;
        }
    }
    ctx->pc = 0x2DB600u;
    // 0x2db600: 0xc0b6d96  jal         func_2DB658
    ctx->pc = 0x2DB600u;
    SET_GPR_U32(ctx, 31, 0x2DB608u);
    ctx->pc = 0x2DB658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB658u, 0x2DB600u, 0x2DB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB608u;
label_2db608:
    // 0x2db608: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2db60c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2db610: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2db614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db618: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2db618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2db61c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2db61cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2db620: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2DB620u;
    {
        const bool branch_taken_0x2db620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB620u;
        // 0x2db624: 0x2450000c  addiu       $s0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db620) {
            ctx->pc = 0x2DB5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db5d0;
        }
    }
    ctx->pc = 0x2DB628u;
label_2db628:
    // 0x2db628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db62c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db634: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db638: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2db638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db63c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2db63cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db640: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2db640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db644: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2db644u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2db648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db64c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB64Cu;
        // 0x2db650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB654u;
    // 0x2db654: 0x0  nop
    ctx->pc = 0x2db654u;
    // NOP
    ctx->pc = 0x2db658u;
}
