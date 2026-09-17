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

// Function: sub_004F8F50
// Address: 0x4f8f50 - 0x4f8f60
void sub_004F8F50_0x4f8f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8F50_0x4f8f50");
#endif

    ctx->pc = 0x4f8f50u;

    // 0x4f8f50: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f8f54: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8F54u;
        // 0x4f8f58: 0x2442b0b8  addiu       $v0, $v0, -0x4F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8F5Cu;
    // 0x4f8f5c: 0x0  nop
    ctx->pc = 0x4f8f5cu;
    // NOP
    ctx->pc = 0x4f8f60u;
}
