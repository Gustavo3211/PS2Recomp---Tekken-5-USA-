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

// Function: sub_003235F0
// Address: 0x3235f0 - 0x3236d0
void sub_003235F0_0x3235f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003235F0_0x3235f0");
#endif

    switch (ctx->pc) {
        case 0x323628u: goto label_323628;
        case 0x323638u: goto label_323638;
        case 0x323648u: goto label_323648;
        case 0x323674u: goto label_323674;
        case 0x3236a4u: goto label_3236a4;
        case 0x3236c4u: goto label_3236c4;
        default: break;
    }

    ctx->pc = 0x3235f0u;

    // 0x3235f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3235f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3235f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3235f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3235f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3235f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3235fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3235fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323604: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x323604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32360c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323610: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x323610u;
    {
        const bool branch_taken_0x323610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x323614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323610u;
        // 0x323614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323610) {
            ctx->pc = 0x32364Cu;
            goto label_32364c;
        }
    }
    ctx->pc = 0x323618u;
    // 0x323618: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x32361c: 0x261008c0  addiu       $s0, $s0, 0x8C0
    ctx->pc = 0x32361cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
    // 0x323620: 0xc0c8f16  jal         func_323C58
    ctx->pc = 0x323620u;
    SET_GPR_U32(ctx, 31, 0x323628u);
    ctx->pc = 0x323624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323620u;
    // 0x323624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C58u, 0x323620u, 0x323628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323628u;
label_323628:
    // 0x323628: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32362c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323630: 0xc0cbf46  jal         func_32FD18
    ctx->pc = 0x323630u;
    SET_GPR_U32(ctx, 31, 0x323638u);
    ctx->pc = 0x323634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323630u;
    // 0x323634: 0x24840390  addiu       $a0, $a0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD18u, 0x323630u, 0x323638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323638u;
label_323638:
    // 0x323638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32363c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323640: 0xc0c8f26  jal         func_323C98
    ctx->pc = 0x323640u;
    SET_GPR_U32(ctx, 31, 0x323648u);
    ctx->pc = 0x323644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323640u;
    // 0x323644: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C98u, 0x323640u, 0x323648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323648u;
label_323648:
    // 0x323648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32364c:
    // 0x32364c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32364cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323658: 0x3e00008  jr          $ra
    ctx->pc = 0x323658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323658u;
        // 0x32365c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323660u;
    // 0x323660: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x323664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32366c: 0xc0c8f78  jal         func_323DE0
    ctx->pc = 0x32366Cu;
    SET_GPR_U32(ctx, 31, 0x323674u);
    ctx->pc = 0x323670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32366Cu;
    // 0x323670: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DE0u, 0x32366Cu, 0x323674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323674u;
label_323674:
    // 0x323674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32367c: 0x3e00008  jr          $ra
    ctx->pc = 0x32367Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32367Cu;
        // 0x323680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32367Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323684u;
    // 0x323684: 0x0  nop
    ctx->pc = 0x323684u;
    // NOP
    // 0x323688: 0x3e00008  jr          $ra
    ctx->pc = 0x323688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323690u;
    // 0x323690: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x323694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32369c: 0xc0c8f8c  jal         func_323E30
    ctx->pc = 0x32369Cu;
    SET_GPR_U32(ctx, 31, 0x3236A4u);
    ctx->pc = 0x3236A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32369Cu;
    // 0x3236a0: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E30u, 0x32369Cu, 0x3236A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236A4u;
label_3236a4:
    // 0x3236a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3236a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3236A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3236ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A8u;
        // 0x3236ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3236B0u;
    // 0x3236b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3236b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3236b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3236b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3236b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3236b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3236bc: 0xc0c8234  jal         func_3208D0
    ctx->pc = 0x3236BCu;
    SET_GPR_U32(ctx, 31, 0x3236C4u);
    ctx->pc = 0x3236C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236BCu;
    // 0x3236c0: 0x24841180  addiu       $a0, $a0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3208D0u, 0x3236BCu, 0x3236C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236C4u;
label_3236c4:
    // 0x3236c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3236c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3236C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3236CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236C8u;
        // 0x3236cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3236D0u;
}
