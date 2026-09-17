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

// Function: sub_0050AFF0
// Address: 0x50aff0 - 0x50b008
void sub_0050AFF0_0x50aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AFF0_0x50aff0");
#endif

    switch (ctx->pc) {
        case 0x50b000u: goto label_50b000;
        default: break;
    }

    ctx->pc = 0x50aff0u;

    // 0x50aff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aff4: 0x8142c02  j           func_50B008
    ctx->pc = 0x50AFF4u;
    ctx->pc = 0x50AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AFF4u;
    // 0x50aff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B008u;
    sub_0050B008_0x50b008(rdram, ctx, runtime); return;
    ctx->pc = 0x50AFFCu;
    // 0x50affc: 0x0  nop
    ctx->pc = 0x50affcu;
    // NOP
label_50b000:
    // 0x50b000: 0x3e00008  jr          $ra
    ctx->pc = 0x50B000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B000u;
        // 0x50b004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B008u;
}
