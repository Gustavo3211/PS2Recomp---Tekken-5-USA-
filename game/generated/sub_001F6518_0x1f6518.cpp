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

// Function: sub_001F6518
// Address: 0x1f6518 - 0x1f65f8
void sub_001F6518_0x1f6518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6518_0x1f6518");
#endif

    switch (ctx->pc) {
        case 0x1f6540u: goto label_1f6540;
        case 0x1f654cu: goto label_1f654c;
        case 0x1f6558u: goto label_1f6558;
        case 0x1f6560u: goto label_1f6560;
        case 0x1f657cu: goto label_1f657c;
        case 0x1f6588u: goto label_1f6588;
        case 0x1f6598u: goto label_1f6598;
        case 0x1f65a4u: goto label_1f65a4;
        case 0x1f65c0u: goto label_1f65c0;
        case 0x1f65ccu: goto label_1f65cc;
        default: break;
    }

    ctx->pc = 0x1f6518u;

    // 0x1f6518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f651c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6520: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f6524: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6528: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f652c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6530: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6534: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f6538: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F6538u;
    SET_GPR_U32(ctx, 31, 0x1F6540u);
    ctx->pc = 0x1F653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6538u;
    // 0x1f653c: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F6538u, 0x1F6540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6540u;
label_1f6540:
    // 0x1f6540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6544: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F6544u;
    SET_GPR_U32(ctx, 31, 0x1F654Cu);
    ctx->pc = 0x1F6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6544u;
    // 0x1f6548: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F6544u, 0x1F654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F654Cu;
label_1f654c:
    // 0x1f654c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6550: 0xc07d4e8  jal         func_1F53A0
    ctx->pc = 0x1F6550u;
    SET_GPR_U32(ctx, 31, 0x1F6558u);
    ctx->pc = 0x1F6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6550u;
    // 0x1f6554: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A0u, 0x1F6550u, 0x1F6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6558u;
label_1f6558:
    // 0x1f6558: 0xc07d4e8  jal         func_1F53A0
    ctx->pc = 0x1F6558u;
    SET_GPR_U32(ctx, 31, 0x1F6560u);
    ctx->pc = 0x1F655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6558u;
    // 0x1f655c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A0u, 0x1F6558u, 0x1F6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6560u;
label_1f6560:
    // 0x1f6560: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f6564: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x1f6564u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1f6568: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f656c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F656Cu;
    {
        const bool branch_taken_0x1f656c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f656c) {
            ctx->pc = 0x1F65B0u;
            goto label_1f65b0;
        }
    }
    ctx->pc = 0x1F6574u;
    // 0x1f6574: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F6574u;
    SET_GPR_U32(ctx, 31, 0x1F657Cu);
    ctx->pc = 0x1F6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6574u;
    // 0x1f6578: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F6574u, 0x1F657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F657Cu;
label_1f657c:
    // 0x1f657c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6580: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F6580u;
    SET_GPR_U32(ctx, 31, 0x1F6588u);
    ctx->pc = 0x1F6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6580u;
    // 0x1f6584: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F6580u, 0x1F6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6588u;
label_1f6588:
    // 0x1f6588: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6588u;
    {
        const bool branch_taken_0x1f6588 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6588u;
        // 0x1f658c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6588) {
            ctx->pc = 0x1F65B0u;
            goto label_1f65b0;
        }
    }
    ctx->pc = 0x1F6590u;
    // 0x1f6590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6594: 0x0  nop
    ctx->pc = 0x1f6594u;
    // NOP
label_1f6598:
    // 0x1f6598: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x1f659c: 0xc07d4e8  jal         func_1F53A0
    ctx->pc = 0x1F659Cu;
    SET_GPR_U32(ctx, 31, 0x1F65A4u);
    ctx->pc = 0x1F65A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F659Cu;
    // 0x1f65a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A0u, 0x1F659Cu, 0x1F65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65A4u;
label_1f65a4:
    // 0x1f65a4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f65a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f65a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F65A8u;
    {
        const bool branch_taken_0x1f65a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65A8u;
        // 0x1f65ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65a8) {
            ctx->pc = 0x1F6598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6598;
        }
    }
    ctx->pc = 0x1F65B0u;
label_1f65b0:
    // 0x1f65b0: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F65B0u;
    {
        const bool branch_taken_0x1f65b0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1F65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65B0u;
        // 0x1f65b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65b0) {
            ctx->pc = 0x1F65D8u;
            goto label_1f65d8;
        }
    }
    ctx->pc = 0x1F65B8u;
    // 0x1f65b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f65b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65bc: 0x0  nop
    ctx->pc = 0x1f65bcu;
    // NOP
label_1f65c0:
    // 0x1f65c0: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x1f65c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x1f65c4: 0xc07d4e8  jal         func_1F53A0
    ctx->pc = 0x1F65C4u;
    SET_GPR_U32(ctx, 31, 0x1F65CCu);
    ctx->pc = 0x1F65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F65C4u;
    // 0x1f65c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53A0u, 0x1F65C4u, 0x1F65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65CCu;
label_1f65cc:
    // 0x1f65cc: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1f65ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1f65d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F65D0u;
    {
        const bool branch_taken_0x1f65d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65D0u;
        // 0x1f65d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65d0) {
            ctx->pc = 0x1F65C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f65c0;
        }
    }
    ctx->pc = 0x1F65D8u;
label_1f65d8:
    // 0x1f65d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f65d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f65dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f65dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f65e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f65e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f65e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f65e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f65e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f65e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f65ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f65ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f65f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F65F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F0u;
        // 0x1f65f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F65F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F65F8u;
}
