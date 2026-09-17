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

// Function: sub_00244880
// Address: 0x244880 - 0x244970
void sub_00244880_0x244880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244880_0x244880");
#endif

    switch (ctx->pc) {
        case 0x2448ccu: goto label_2448cc;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448f4u: goto label_2448f4;
        case 0x244918u: goto label_244918;
        case 0x244930u: goto label_244930;
        default: break;
    }

    ctx->pc = 0x244880u;

    // 0x244880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244888: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x244888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24488c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x244890: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x244890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244894: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x244894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x244898: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x244898u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24489c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24489cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2448a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2448a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2448a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2448a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2448acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2448b0: 0x26960008  addiu       $s6, $s4, 0x8
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2448b4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2448b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2448b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2448b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2448bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2448bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2448c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2448c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2448c4: 0xc0911fa  jal         func_2447E8
    ctx->pc = 0x2448C4u;
    SET_GPR_U32(ctx, 31, 0x2448CCu);
    ctx->pc = 0x2448C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448C4u;
    // 0x2448c8: 0x2697000c  addiu       $s7, $s4, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2447E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2447E8u, 0x2448C4u, 0x2448CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448CCu;
label_2448cc:
    // 0x2448cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2448ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2448d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2448d4: 0xc091206  jal         func_244818
    ctx->pc = 0x2448D4u;
    SET_GPR_U32(ctx, 31, 0x2448DCu);
    ctx->pc = 0x2448D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448D4u;
    // 0x2448d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244818u, 0x2448D4u, 0x2448DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448DCu;
label_2448dc:
    // 0x2448dc: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x2448dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_2448e0:
    // 0x2448e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2448e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2448e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2448e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448ec: 0xc0911ec  jal         func_2447B0
    ctx->pc = 0x2448ECu;
    SET_GPR_U32(ctx, 31, 0x2448F4u);
    ctx->pc = 0x2448F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448ECu;
    // 0x2448f0: 0x138880  sll         $s1, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2447B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2447B0u, 0x2448ECu, 0x2448F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448F4u;
label_2448f4:
    // 0x2448f4: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x2448f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2448f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2448f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2448fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244900: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x244904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244908: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x244908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24490c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24490cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244910: 0xc091206  jal         func_244818
    ctx->pc = 0x244910u;
    SET_GPR_U32(ctx, 31, 0x244918u);
    ctx->pc = 0x244914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244910u;
    // 0x244914: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244818u, 0x244910u, 0x244918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244918u;
label_244918:
    // 0x244918: 0x2f11821  addu        $v1, $s7, $s1
    ctx->pc = 0x244918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x24491c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24491cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x244920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244924: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x244924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244928: 0xc091206  jal         func_244818
    ctx->pc = 0x244928u;
    SET_GPR_U32(ctx, 31, 0x244930u);
    ctx->pc = 0x24492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244928u;
    // 0x24492c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244818u, 0x244928u, 0x244930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244930u;
label_244930:
    // 0x244930: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x244930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x244934: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x244938: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x244938u;
    {
        const bool branch_taken_0x244938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244938u;
        // 0x24493c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244938) {
            ctx->pc = 0x2448E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2448e0;
        }
    }
    ctx->pc = 0x244940u;
    // 0x244940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x244948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24494c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24494cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244950: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x244950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244954: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x244954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244958: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x244958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24495c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24495cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x244960: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x244960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244964: 0x3e00008  jr          $ra
    ctx->pc = 0x244964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244964u;
        // 0x244968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24496Cu;
    // 0x24496c: 0x0  nop
    ctx->pc = 0x24496cu;
    // NOP
    ctx->pc = 0x244970u;
}
