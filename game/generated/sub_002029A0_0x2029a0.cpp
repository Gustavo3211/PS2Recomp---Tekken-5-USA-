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

// Function: sub_002029A0
// Address: 0x2029a0 - 0x2029b0
void sub_002029A0_0x2029a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002029A0_0x2029a0");
#endif

    ctx->pc = 0x2029a0u;

    // 0x2029a0: 0xaf849888  sw          $a0, -0x6778($gp)
    ctx->pc = 0x2029a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940808), GPR_U32(ctx, 4));
    // 0x2029a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2029A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2029A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029A4u;
        // 0x2029a8: 0xaf85988c  sw          $a1, -0x6774($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940812), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2029A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2029ACu;
    // 0x2029ac: 0x0  nop
    ctx->pc = 0x2029acu;
    // NOP
    ctx->pc = 0x2029b0u;
}
