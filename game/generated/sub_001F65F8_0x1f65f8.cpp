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

// Function: sub_001F65F8
// Address: 0x1f65f8 - 0x1f66d8
void sub_001F65F8_0x1f65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F65F8_0x1f65f8");
#endif

    switch (ctx->pc) {
        case 0x1f6620u: goto label_1f6620;
        case 0x1f662cu: goto label_1f662c;
        case 0x1f6638u: goto label_1f6638;
        case 0x1f6640u: goto label_1f6640;
        case 0x1f665cu: goto label_1f665c;
        case 0x1f6668u: goto label_1f6668;
        case 0x1f6678u: goto label_1f6678;
        case 0x1f6684u: goto label_1f6684;
        case 0x1f66a0u: goto label_1f66a0;
        case 0x1f66acu: goto label_1f66ac;
        default: break;
    }

    ctx->pc = 0x1f65f8u;

    // 0x1f65f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f65f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f65fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6600: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f6600u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f6604: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6608: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f660c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6610: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6614: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f6618: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F6618u;
    SET_GPR_U32(ctx, 31, 0x1F6620u);
    ctx->pc = 0x1F661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6618u;
    // 0x1f661c: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F6618u, 0x1F6620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6620u;
label_1f6620:
    // 0x1f6620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6624: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F6624u;
    SET_GPR_U32(ctx, 31, 0x1F662Cu);
    ctx->pc = 0x1F6628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6624u;
    // 0x1f6628: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F6624u, 0x1F662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F662Cu;
label_1f662c:
    // 0x1f662c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6630: 0xc07d6de  jal         func_1F5B78
    ctx->pc = 0x1F6630u;
    SET_GPR_U32(ctx, 31, 0x1F6638u);
    ctx->pc = 0x1F6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6630u;
    // 0x1f6634: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B78u, 0x1F6630u, 0x1F6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6638u;
label_1f6638:
    // 0x1f6638: 0xc07d6de  jal         func_1F5B78
    ctx->pc = 0x1F6638u;
    SET_GPR_U32(ctx, 31, 0x1F6640u);
    ctx->pc = 0x1F663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6638u;
    // 0x1f663c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B78u, 0x1F6638u, 0x1F6640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6640u;
label_1f6640:
    // 0x1f6640: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f6640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f6644: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1f6648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f664c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F664Cu;
    {
        const bool branch_taken_0x1f664c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f664c) {
            ctx->pc = 0x1F6690u;
            goto label_1f6690;
        }
    }
    ctx->pc = 0x1F6654u;
    // 0x1f6654: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F6654u;
    SET_GPR_U32(ctx, 31, 0x1F665Cu);
    ctx->pc = 0x1F6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6654u;
    // 0x1f6658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F6654u, 0x1F665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F665Cu;
label_1f665c:
    // 0x1f665c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6660: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F6660u;
    SET_GPR_U32(ctx, 31, 0x1F6668u);
    ctx->pc = 0x1F6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6660u;
    // 0x1f6664: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F6660u, 0x1F6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6668u;
label_1f6668:
    // 0x1f6668: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6668u;
    {
        const bool branch_taken_0x1f6668 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6668u;
        // 0x1f666c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6668) {
            ctx->pc = 0x1F6690u;
            goto label_1f6690;
        }
    }
    ctx->pc = 0x1F6670u;
    // 0x1f6670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6674: 0x0  nop
    ctx->pc = 0x1f6674u;
    // NOP
label_1f6678:
    // 0x1f6678: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x1f6678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x1f667c: 0xc07d6de  jal         func_1F5B78
    ctx->pc = 0x1F667Cu;
    SET_GPR_U32(ctx, 31, 0x1F6684u);
    ctx->pc = 0x1F6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F667Cu;
    // 0x1f6680: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B78u, 0x1F667Cu, 0x1F6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6684u;
label_1f6684:
    // 0x1f6684: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f6684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f6688: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F6688u;
    {
        const bool branch_taken_0x1f6688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6688u;
        // 0x1f668c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6688) {
            ctx->pc = 0x1F6678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6678;
        }
    }
    ctx->pc = 0x1F6690u;
label_1f6690:
    // 0x1f6690: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6690u;
    {
        const bool branch_taken_0x1f6690 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6690u;
        // 0x1f6694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6690) {
            ctx->pc = 0x1F66B8u;
            goto label_1f66b8;
        }
    }
    ctx->pc = 0x1F6698u;
    // 0x1f6698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f669c: 0x0  nop
    ctx->pc = 0x1f669cu;
    // NOP
label_1f66a0:
    // 0x1f66a0: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x1f66a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x1f66a4: 0xc07d6de  jal         func_1F5B78
    ctx->pc = 0x1F66A4u;
    SET_GPR_U32(ctx, 31, 0x1F66ACu);
    ctx->pc = 0x1F66A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66A4u;
    // 0x1f66a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B78u, 0x1F66A4u, 0x1F66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66ACu;
label_1f66ac:
    // 0x1f66ac: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1f66acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1f66b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F66B0u;
    {
        const bool branch_taken_0x1f66b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66B0u;
        // 0x1f66b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66b0) {
            ctx->pc = 0x1F66A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f66a0;
        }
    }
    ctx->pc = 0x1F66B8u;
label_1f66b8:
    // 0x1f66b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f66b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f66bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f66bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f66c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f66c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f66c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f66c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f66c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f66c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f66cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f66ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f66d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F66D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66D0u;
        // 0x1f66d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F66D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F66D8u;
}
