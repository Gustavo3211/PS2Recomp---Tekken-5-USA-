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

// Function: sub_001F5B78
// Address: 0x1f5b78 - 0x1f5b98
void sub_001F5B78_0x1f5b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5B78_0x1f5b78");
#endif

    ctx->pc = 0x1f5b78u;

    // 0x1f5b78: 0xa08001fc  sb          $zero, 0x1FC($a0)
    ctx->pc = 0x1f5b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 508), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b7c: 0xa4800216  sh          $zero, 0x216($a0)
    ctx->pc = 0x1f5b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 534), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5b80: 0xa08001f3  sb          $zero, 0x1F3($a0)
    ctx->pc = 0x1f5b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 499), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b84: 0xa08001ee  sb          $zero, 0x1EE($a0)
    ctx->pc = 0x1f5b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 494), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b88: 0xa08001ef  sb          $zero, 0x1EF($a0)
    ctx->pc = 0x1f5b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 495), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B8Cu;
        // 0x1f5b90: 0xa08001f2  sb          $zero, 0x1F2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 498), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5B94u;
    // 0x1f5b94: 0x0  nop
    ctx->pc = 0x1f5b94u;
    // NOP
    ctx->pc = 0x1f5b98u;
}
