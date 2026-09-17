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

// Function: sub_0033BB70
// Address: 0x33bb70 - 0x33bbc8
void sub_0033BB70_0x33bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BB70_0x33bb70");
#endif

    switch (ctx->pc) {
        case 0x33bb98u: goto label_33bb98;
        case 0x33bba0u: goto label_33bba0;
        case 0x33bba8u: goto label_33bba8;
        case 0x33bbb0u: goto label_33bbb0;
        default: break;
    }

    ctx->pc = 0x33bb70u;

    // 0x33bb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33bb78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33bb80: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x33bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x33bb84: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x33bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x33bb88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BB88u;
    {
        const bool branch_taken_0x33bb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB88u;
        // 0x33bb8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb88) {
            ctx->pc = 0x33BB98u;
            goto label_33bb98;
        }
    }
    ctx->pc = 0x33BB90u;
    // 0x33bb90: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x33BB90u;
    SET_GPR_U32(ctx, 31, 0x33BB98u);
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x33BB90u, 0x33BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB98u;
label_33bb98:
    // 0x33bb98: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33BB98u;
    SET_GPR_U32(ctx, 31, 0x33BBA0u);
    ctx->pc = 0x33BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB98u;
    // 0x33bb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33BB98u, 0x33BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBA0u;
label_33bba0:
    // 0x33bba0: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33BBA0u;
    SET_GPR_U32(ctx, 31, 0x33BBA8u);
    ctx->pc = 0x33BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BBA0u;
    // 0x33bba4: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33BBA0u, 0x33BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBA8u;
label_33bba8:
    // 0x33bba8: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33BBA8u;
    SET_GPR_U32(ctx, 31, 0x33BBB0u);
    ctx->pc = 0x33BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BBA8u;
    // 0x33bbac: 0x26040098  addiu       $a0, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33BBA8u, 0x33BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBB0u;
label_33bbb0:
    // 0x33bbb0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x33bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x33bbb4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x33bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x33bbb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33bbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x33BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBC0u;
        // 0x33bbc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BBC8u;
}
