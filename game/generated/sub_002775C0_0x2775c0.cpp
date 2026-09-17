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

// Function: sub_002775C0
// Address: 0x2775c0 - 0x2775d8
void sub_002775C0_0x2775c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002775C0_0x2775c0");
#endif

    ctx->pc = 0x2775c0u;

    // 0x2775c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2775c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2775c4: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x2775c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2775c8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2775c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2775cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2775CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2775D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775CCu;
        // 0x2775d0: 0xa0860003  sb          $a2, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2775D4u;
    // 0x2775d4: 0x0  nop
    ctx->pc = 0x2775d4u;
    // NOP
    ctx->pc = 0x2775d8u;
}
