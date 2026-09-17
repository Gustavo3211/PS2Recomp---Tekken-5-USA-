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

// Function: sub_0023AC50
// Address: 0x23ac50 - 0x23ac68
void sub_0023AC50_0x23ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC50_0x23ac50");
#endif

    ctx->pc = 0x23ac50u;

    // 0x23ac50: 0x8f82a918  lw          $v0, -0x56E8($gp)
    ctx->pc = 0x23ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23ac54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23ac58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC5Cu;
        // 0x23ac60: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC64u;
    // 0x23ac64: 0x0  nop
    ctx->pc = 0x23ac64u;
    // NOP
    ctx->pc = 0x23ac68u;
}
