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

// Function: sub_003417D8
// Address: 0x3417d8 - 0x341868
void sub_003417D8_0x3417d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003417D8_0x3417d8");
#endif

    switch (ctx->pc) {
        case 0x341800u: goto label_341800;
        case 0x34180cu: goto label_34180c;
        case 0x341818u: goto label_341818;
        case 0x341834u: goto label_341834;
        case 0x34184cu: goto label_34184c;
        default: break;
    }

    ctx->pc = 0x3417d8u;

    // 0x3417d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3417d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3417dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3417dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3417e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3417e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3417e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3417e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3417e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3417ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3417f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3417f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3417f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3417f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3417f8: 0xc0d061a  jal         func_341868
    ctx->pc = 0x3417F8u;
    SET_GPR_U32(ctx, 31, 0x341800u);
    ctx->pc = 0x3417FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3417F8u;
    // 0x3417fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341868u, 0x3417F8u, 0x341800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341800u;
label_341800:
    // 0x341800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341804: 0xc0d0630  jal         func_3418C0
    ctx->pc = 0x341804u;
    SET_GPR_U32(ctx, 31, 0x34180Cu);
    ctx->pc = 0x341808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341804u;
    // 0x341808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418C0u, 0x341804u, 0x34180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34180Cu;
label_34180c:
    // 0x34180c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34180cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341810: 0xc0d0650  jal         func_341940
    ctx->pc = 0x341810u;
    SET_GPR_U32(ctx, 31, 0x341818u);
    ctx->pc = 0x341814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341810u;
    // 0x341814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341940u, 0x341810u, 0x341818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341818u;
label_341818:
    // 0x341818: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x341818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x34181c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x341820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x341820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341824: 0x24422f08  addiu       $v0, $v0, 0x2F08
    ctx->pc = 0x341824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12040));
    // 0x341828: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x341828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x34182c: 0xc0d0afa  jal         func_342BE8
    ctx->pc = 0x34182Cu;
    SET_GPR_U32(ctx, 31, 0x341834u);
    ctx->pc = 0x341830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34182Cu;
    // 0x341830: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BE8u, 0x34182Cu, 0x341834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341834u;
label_341834:
    // 0x341834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341838: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341838u;
    {
        const bool branch_taken_0x341838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341838u;
        // 0x34183c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341838) {
            ctx->pc = 0x34184Cu;
            goto label_34184c;
        }
    }
    ctx->pc = 0x341840u;
    // 0x341840: 0x96260014  lhu         $a2, 0x14($s1)
    ctx->pc = 0x341840u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x341844: 0xc0d0754  jal         func_341D50
    ctx->pc = 0x341844u;
    SET_GPR_U32(ctx, 31, 0x34184Cu);
    ctx->pc = 0x341848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341844u;
    // 0x341848: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D50u, 0x341844u, 0x34184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34184Cu;
label_34184c:
    // 0x34184c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34184cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341854: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x341854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x341858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x341858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34185c: 0x3e00008  jr          $ra
    ctx->pc = 0x34185Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34185Cu;
        // 0x341860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34185Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341864u;
    // 0x341864: 0x0  nop
    ctx->pc = 0x341864u;
    // NOP
    ctx->pc = 0x341868u;
}
