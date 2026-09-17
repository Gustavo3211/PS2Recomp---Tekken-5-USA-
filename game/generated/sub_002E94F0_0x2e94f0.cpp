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

// Function: sub_002E94F0
// Address: 0x2e94f0 - 0x2e9510
void sub_002E94F0_0x2e94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E94F0_0x2e94f0");
#endif

    ctx->pc = 0x2e94f0u;

    // 0x2e94f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e94f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e94f8: 0x2442fc68  addiu       $v0, $v0, -0x398
    ctx->pc = 0x2e94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966376));
    // 0x2e94fc: 0x24630660  addiu       $v1, $v1, 0x660
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
    // 0x2e9500: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e9500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e9504: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9504u;
        // 0x2e9508: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E950Cu;
    // 0x2e950c: 0x0  nop
    ctx->pc = 0x2e950cu;
    // NOP
    ctx->pc = 0x2e9510u;
}
