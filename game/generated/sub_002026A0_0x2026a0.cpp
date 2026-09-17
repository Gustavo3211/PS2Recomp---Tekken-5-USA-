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

// Function: sub_002026A0
// Address: 0x2026a0 - 0x202780
void sub_002026A0_0x2026a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002026A0_0x2026a0");
#endif

    switch (ctx->pc) {
        case 0x2026c8u: goto label_2026c8;
        case 0x2026d4u: goto label_2026d4;
        case 0x2026e0u: goto label_2026e0;
        case 0x2026e8u: goto label_2026e8;
        case 0x202704u: goto label_202704;
        case 0x202710u: goto label_202710;
        case 0x202720u: goto label_202720;
        case 0x20272cu: goto label_20272c;
        case 0x202748u: goto label_202748;
        case 0x202754u: goto label_202754;
        default: break;
    }

    ctx->pc = 0x2026a0u;

    // 0x2026a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2026a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2026a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2026a8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2026a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2026ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2026acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2026b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2026b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2026b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2026b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2026b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2026b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2026bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2026bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2026c0: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2026C0u;
    SET_GPR_U32(ctx, 31, 0x2026C8u);
    ctx->pc = 0x2026C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026C0u;
    // 0x2026c4: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2026C0u, 0x2026C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026C8u;
label_2026c8:
    // 0x2026c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2026c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026cc: 0xc09d486  jal         func_275218
    ctx->pc = 0x2026CCu;
    SET_GPR_U32(ctx, 31, 0x2026D4u);
    ctx->pc = 0x2026D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026CCu;
    // 0x2026d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2026CCu, 0x2026D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026D4u;
label_2026d4:
    // 0x2026d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2026d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2026d8: 0xc08078e  jal         func_201E38
    ctx->pc = 0x2026D8u;
    SET_GPR_U32(ctx, 31, 0x2026E0u);
    ctx->pc = 0x2026DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026D8u;
    // 0x2026dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E38u, 0x2026D8u, 0x2026E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026E0u;
label_2026e0:
    // 0x2026e0: 0xc08078e  jal         func_201E38
    ctx->pc = 0x2026E0u;
    SET_GPR_U32(ctx, 31, 0x2026E8u);
    ctx->pc = 0x2026E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026E0u;
    // 0x2026e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E38u, 0x2026E0u, 0x2026E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026E8u;
label_2026e8:
    // 0x2026e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2026e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2026ec: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x2026ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x2026f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2026f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2026f4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2026F4u;
    {
        const bool branch_taken_0x2026f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2026f4) {
            ctx->pc = 0x202738u;
            goto label_202738;
        }
    }
    ctx->pc = 0x2026FCu;
    // 0x2026fc: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2026FCu;
    SET_GPR_U32(ctx, 31, 0x202704u);
    ctx->pc = 0x202700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026FCu;
    // 0x202700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2026FCu, 0x202704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202704u;
label_202704:
    // 0x202704: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202708: 0xc09d480  jal         func_275200
    ctx->pc = 0x202708u;
    SET_GPR_U32(ctx, 31, 0x202710u);
    ctx->pc = 0x20270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202708u;
    // 0x20270c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x202708u, 0x202710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202710u;
label_202710:
    // 0x202710: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x202710u;
    {
        const bool branch_taken_0x202710 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x202714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202710u;
        // 0x202714: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202710) {
            ctx->pc = 0x202738u;
            goto label_202738;
        }
    }
    ctx->pc = 0x202718u;
    // 0x202718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20271c: 0x0  nop
    ctx->pc = 0x20271cu;
    // NOP
label_202720:
    // 0x202720: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x202724: 0xc08078e  jal         func_201E38
    ctx->pc = 0x202724u;
    SET_GPR_U32(ctx, 31, 0x20272Cu);
    ctx->pc = 0x202728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202724u;
    // 0x202728: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E38u, 0x202724u, 0x20272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20272Cu;
label_20272c:
    // 0x20272c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x20272cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x202730: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202730u;
    {
        const bool branch_taken_0x202730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202730u;
        // 0x202734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202730) {
            ctx->pc = 0x202720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202720;
        }
    }
    ctx->pc = 0x202738u;
label_202738:
    // 0x202738: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x202738u;
    {
        const bool branch_taken_0x202738 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202738u;
        // 0x20273c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202738) {
            ctx->pc = 0x202760u;
            goto label_202760;
        }
    }
    ctx->pc = 0x202740u;
    // 0x202740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202744: 0x0  nop
    ctx->pc = 0x202744u;
    // NOP
label_202748:
    // 0x202748: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x202748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x20274c: 0xc08078e  jal         func_201E38
    ctx->pc = 0x20274Cu;
    SET_GPR_U32(ctx, 31, 0x202754u);
    ctx->pc = 0x202750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20274Cu;
    // 0x202750: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E38u, 0x20274Cu, 0x202754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202754u;
label_202754:
    // 0x202754: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x202754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x202758: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202758u;
    {
        const bool branch_taken_0x202758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202758u;
        // 0x20275c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202758) {
            ctx->pc = 0x202748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202748;
        }
    }
    ctx->pc = 0x202760u;
label_202760:
    // 0x202760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20276c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20276cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x202770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202774: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x202774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x202778: 0x3e00008  jr          $ra
    ctx->pc = 0x202778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202778u;
        // 0x20277c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202780u;
}
