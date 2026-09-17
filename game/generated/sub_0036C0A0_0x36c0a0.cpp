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

// Function: sub_0036C0A0
// Address: 0x36c0a0 - 0x36c0b8
void sub_0036C0A0_0x36c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C0A0_0x36c0a0");
#endif

    ctx->pc = 0x36c0a0u;

    // 0x36c0a0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x36c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x36c0a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36c0a8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x36c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x36c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C0ACu;
        // 0x36c0b0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C0B4u;
    // 0x36c0b4: 0x0  nop
    ctx->pc = 0x36c0b4u;
    // NOP
    ctx->pc = 0x36c0b8u;
}
