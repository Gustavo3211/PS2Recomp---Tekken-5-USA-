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

// Function: sub_0023FEC0
// Address: 0x23fec0 - 0x23fef0
void sub_0023FEC0_0x23fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FEC0_0x23fec0");
#endif

    switch (ctx->pc) {
        case 0x23fed4u: goto label_23fed4;
        case 0x23fedcu: goto label_23fedc;
        case 0x23fee4u: goto label_23fee4;
        default: break;
    }

    ctx->pc = 0x23fec0u;

    // 0x23fec0: 0x8f84c998  lw          $a0, -0x3668($gp)
    ctx->pc = 0x23fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953368)));
    // 0x23fec4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fecc: 0xc043c8c  jal         func_10F230
    ctx->pc = 0x23FECCu;
    SET_GPR_U32(ctx, 31, 0x23FED4u);
    ctx->pc = 0x23FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FECCu;
    // 0x23fed0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F230u, 0x23FECCu, 0x23FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FED4u;
label_23fed4:
    // 0x23fed4: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x23FED4u;
    SET_GPR_U32(ctx, 31, 0x23FEDCu);
    ctx->pc = 0x23FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FED4u;
    // 0x23fed8: 0x8f84c998  lw          $a0, -0x3668($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1F0u, 0x23FED4u, 0x23FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEDCu;
label_23fedc:
    // 0x23fedc: 0xc043c6c  jal         func_10F1B0
    ctx->pc = 0x23FEDCu;
    SET_GPR_U32(ctx, 31, 0x23FEE4u);
    ctx->pc = 0x23FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEDCu;
    // 0x23fee0: 0x8f84c998  lw          $a0, -0x3668($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1B0u, 0x23FEDCu, 0x23FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEE4u;
label_23fee4:
    // 0x23fee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fee8: 0x3e00008  jr          $ra
    ctx->pc = 0x23FEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEE8u;
        // 0x23feec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FEF0u;
}
