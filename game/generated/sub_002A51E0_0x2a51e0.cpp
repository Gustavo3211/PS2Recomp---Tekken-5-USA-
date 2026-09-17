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

// Function: sub_002A51E0
// Address: 0x2a51e0 - 0x2a51f0
void sub_002A51E0_0x2a51e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A51E0_0x2a51e0");
#endif

    ctx->pc = 0x2a51e0u;

    // 0x2a51e0: 0x9382b85f  lbu         $v0, -0x47A1($gp)
    ctx->pc = 0x2a51e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948959)));
    // 0x2a51e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A51E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51E4u;
        // 0x2a51e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A51E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51ECu;
    // 0x2a51ec: 0x0  nop
    ctx->pc = 0x2a51ecu;
    // NOP
    ctx->pc = 0x2a51f0u;
}
