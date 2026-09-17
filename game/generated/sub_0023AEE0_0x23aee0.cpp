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

// Function: sub_0023AEE0
// Address: 0x23aee0 - 0x23af08
void sub_0023AEE0_0x23aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AEE0_0x23aee0");
#endif

    ctx->pc = 0x23aee0u;

    // 0x23aee0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23aee4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x23aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23aee8: 0x8c65f37c  lw          $a1, -0xC84($v1)
    ctx->pc = 0x23aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964092)));
    // 0x23aeec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23aef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23aef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23aef8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23aefc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23af00: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF00u;
        // 0x23af04: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AF08u;
}
