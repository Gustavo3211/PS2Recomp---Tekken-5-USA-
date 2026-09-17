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

// Function: sub_00496F10
// Address: 0x496f10 - 0x496f30
void sub_00496F10_0x496f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496F10_0x496f10");
#endif

    ctx->pc = 0x496f10u;

    // 0x496f10: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x496f14: 0x24420af4  addiu       $v0, $v0, 0xAF4
    ctx->pc = 0x496f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2804));
    // 0x496f18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x496f18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AF4u));
    // 0x496f1c: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x496f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x496f20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x496f20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0AF4u));
    // 0x496f24: 0x3e00008  jr          $ra
    ctx->pc = 0x496F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496F24u;
        // 0x496f28: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496F2Cu;
    // 0x496f2c: 0x0  nop
    ctx->pc = 0x496f2cu;
    // NOP
    ctx->pc = 0x496f30u;
}
