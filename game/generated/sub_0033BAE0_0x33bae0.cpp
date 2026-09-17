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

// Function: sub_0033BAE0
// Address: 0x33bae0 - 0x33bb70
void sub_0033BAE0_0x33bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BAE0_0x33bae0");
#endif

    switch (ctx->pc) {
        case 0x33bb00u: goto label_33bb00;
        case 0x33bb18u: goto label_33bb18;
        case 0x33bb2cu: goto label_33bb2c;
        case 0x33bb3cu: goto label_33bb3c;
        case 0x33bb4cu: goto label_33bb4c;
        default: break;
    }

    ctx->pc = 0x33bae0u;

    // 0x33bae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33bae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33bae8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33bae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33baec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33baecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33baf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33baf4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33baf8: 0xc0ce768  jal         func_339DA0
    ctx->pc = 0x33BAF8u;
    SET_GPR_U32(ctx, 31, 0x33BB00u);
    ctx->pc = 0x33BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAF8u;
    // 0x33bafc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339DA0u, 0x33BAF8u, 0x33BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB00u;
label_33bb00:
    // 0x33bb00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33bb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb04: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x33bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x33bb08: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33BB08u;
    {
        const bool branch_taken_0x33bb08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB08u;
        // 0x33bb0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb08) {
            ctx->pc = 0x33BB58u;
            goto label_33bb58;
        }
    }
    ctx->pc = 0x33BB10u;
    // 0x33bb10: 0xc0ce730  jal         func_339CC0
    ctx->pc = 0x33BB10u;
    SET_GPR_U32(ctx, 31, 0x33BB18u);
    ctx->pc = 0x339CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339CC0u, 0x33BB10u, 0x33BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB18u;
label_33bb18:
    // 0x33bb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33bb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33bb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33bb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb24: 0xc0cecc2  jal         func_33B308
    ctx->pc = 0x33BB24u;
    SET_GPR_U32(ctx, 31, 0x33BB2Cu);
    ctx->pc = 0x33BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB24u;
    // 0x33bb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B308u, 0x33BB24u, 0x33BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB2Cu;
label_33bb2c:
    // 0x33bb2c: 0x2644004c  addiu       $a0, $s2, 0x4C
    ctx->pc = 0x33bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x33bb30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb34: 0xc0cecc2  jal         func_33B308
    ctx->pc = 0x33BB34u;
    SET_GPR_U32(ctx, 31, 0x33BB3Cu);
    ctx->pc = 0x33BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB34u;
    // 0x33bb38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B308u, 0x33BB34u, 0x33BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB3Cu;
label_33bb3c:
    // 0x33bb3c: 0x26440098  addiu       $a0, $s2, 0x98
    ctx->pc = 0x33bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x33bb40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33bb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb44: 0xc0cecc2  jal         func_33B308
    ctx->pc = 0x33BB44u;
    SET_GPR_U32(ctx, 31, 0x33BB4Cu);
    ctx->pc = 0x33BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB44u;
    // 0x33bb48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B308u, 0x33BB44u, 0x33BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB4Cu;
label_33bb4c:
    // 0x33bb4c: 0xae5000e4  sw          $s0, 0xE4($s2)
    ctx->pc = 0x33bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
    // 0x33bb50: 0xae5100e8  sw          $s1, 0xE8($s2)
    ctx->pc = 0x33bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 17));
    // 0x33bb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bb58:
    // 0x33bb58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bb5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33bb60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bb64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33bb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33bb68: 0x3e00008  jr          $ra
    ctx->pc = 0x33BB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB68u;
        // 0x33bb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BB70u;
}
