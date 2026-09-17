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

// Function: sub_0023D6F0
// Address: 0x23d6f0 - 0x23d708
void sub_0023D6F0_0x23d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D6F0_0x23d6f0");
#endif

    ctx->pc = 0x23d6f0u;

    // 0x23d6f0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23d6f4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x23d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x23d6f8: 0xac400304  sw          $zero, 0x304($v0)
    ctx->pc = 0x23d6f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x160AD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x160AD4u, _value); } while (0);
    // 0x23d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6FCu;
        // 0x23d700: 0xac400180  sw          $zero, 0x180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D704u;
    // 0x23d704: 0x0  nop
    ctx->pc = 0x23d704u;
    // NOP
    ctx->pc = 0x23d708u;
}
