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

// Function: sub_00231A48
// Address: 0x231a48 - 0x231a58
void sub_00231A48_0x231a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A48_0x231a48");
#endif

    ctx->pc = 0x231a48u;

    // 0x231a48: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x231a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x231A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A4Cu;
        // 0x231a50: 0xac40d390  sw          $zero, -0x2C70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A54u;
    // 0x231a54: 0x0  nop
    ctx->pc = 0x231a54u;
    // NOP
    ctx->pc = 0x231a58u;
}
