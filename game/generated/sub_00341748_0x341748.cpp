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

// Function: sub_00341748
// Address: 0x341748 - 0x3417d8
void sub_00341748_0x341748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341748_0x341748");
#endif

    switch (ctx->pc) {
        case 0x341770u: goto label_341770;
        case 0x34177cu: goto label_34177c;
        case 0x341788u: goto label_341788;
        case 0x3417a4u: goto label_3417a4;
        case 0x3417bcu: goto label_3417bc;
        default: break;
    }

    ctx->pc = 0x341748u;

    // 0x341748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34174c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x341750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341754: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x341754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x341758: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x341758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34175c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x341760: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x341760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x341764: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x341764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x341768: 0xc0d061a  jal         func_341868
    ctx->pc = 0x341768u;
    SET_GPR_U32(ctx, 31, 0x341770u);
    ctx->pc = 0x34176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341768u;
    // 0x34176c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341868u, 0x341768u, 0x341770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341770u;
label_341770:
    // 0x341770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341774: 0xc0d0626  jal         func_341898
    ctx->pc = 0x341774u;
    SET_GPR_U32(ctx, 31, 0x34177Cu);
    ctx->pc = 0x341778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341774u;
    // 0x341778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341898u, 0x341774u, 0x34177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34177Cu;
label_34177c:
    // 0x34177c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341780: 0xc0d0650  jal         func_341940
    ctx->pc = 0x341780u;
    SET_GPR_U32(ctx, 31, 0x341788u);
    ctx->pc = 0x341784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341780u;
    // 0x341784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341940u, 0x341780u, 0x341788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341788u;
label_341788:
    // 0x341788: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x341788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x34178c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34178cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x341790: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x341790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341794: 0x24422f08  addiu       $v0, $v0, 0x2F08
    ctx->pc = 0x341794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12040));
    // 0x341798: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x341798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x34179c: 0xc0d0afa  jal         func_342BE8
    ctx->pc = 0x34179Cu;
    SET_GPR_U32(ctx, 31, 0x3417A4u);
    ctx->pc = 0x3417A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34179Cu;
    // 0x3417a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BE8u, 0x34179Cu, 0x3417A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417A4u;
label_3417a4:
    // 0x3417a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3417a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3417A8u;
    {
        const bool branch_taken_0x3417a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417A8u;
        // 0x3417ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417a8) {
            ctx->pc = 0x3417BCu;
            goto label_3417bc;
        }
    }
    ctx->pc = 0x3417B0u;
    // 0x3417b0: 0x96260014  lhu         $a2, 0x14($s1)
    ctx->pc = 0x3417b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3417b4: 0xc0d0754  jal         func_341D50
    ctx->pc = 0x3417B4u;
    SET_GPR_U32(ctx, 31, 0x3417BCu);
    ctx->pc = 0x3417B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3417B4u;
    // 0x3417b8: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D50u, 0x3417B4u, 0x3417BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417BCu;
label_3417bc:
    // 0x3417bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3417bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3417c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3417c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3417c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3417c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3417c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3417cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3417CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3417D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417CCu;
        // 0x3417d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3417CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3417D4u;
    // 0x3417d4: 0x0  nop
    ctx->pc = 0x3417d4u;
    // NOP
    ctx->pc = 0x3417d8u;
}
