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

// Function: sub_0010B8E8
// Address: 0x10b8e8 - 0x10b900
void sub_0010B8E8_0x10b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B8E8_0x10b8e8");
#endif

    ctx->pc = 0x10b8e8u;

    // 0x10b8e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b8ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10b8f0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10b8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F4u;
        // 0x10b8f8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B8FCu;
    // 0x10b8fc: 0x0  nop
    ctx->pc = 0x10b8fcu;
    // NOP
    ctx->pc = 0x10b900u;
}
