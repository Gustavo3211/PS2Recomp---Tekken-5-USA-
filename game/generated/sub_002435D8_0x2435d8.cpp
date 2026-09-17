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

// Function: sub_002435D8
// Address: 0x2435d8 - 0x2435f8
void sub_002435D8_0x2435d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435D8_0x2435d8");
#endif

    ctx->pc = 0x2435d8u;

    // 0x2435d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2435d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2435dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2435e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2435e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2435e4: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2435e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2435e8: 0x24215e70  addiu       $at, $at, 0x5E70
    ctx->pc = 0x2435e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 24176));
    // 0x2435ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2435ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2435F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435ECu;
        // 0x2435f0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2435ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2435F4u;
    // 0x2435f4: 0x0  nop
    ctx->pc = 0x2435f4u;
    // NOP
    ctx->pc = 0x2435f8u;
}
