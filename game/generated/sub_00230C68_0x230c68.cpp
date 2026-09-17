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

// Function: sub_00230C68
// Address: 0x230c68 - 0x230c78
void sub_00230C68_0x230c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230C68_0x230c68");
#endif

    ctx->pc = 0x230c68u;

    // 0x230c68: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x230C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C6Cu;
        // 0x230c70: 0x2442d2d0  addiu       $v0, $v0, -0x2D30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230C74u;
    // 0x230c74: 0x0  nop
    ctx->pc = 0x230c74u;
    // NOP
    ctx->pc = 0x230c78u;
}
