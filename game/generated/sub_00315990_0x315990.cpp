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

// Function: sub_00315990
// Address: 0x315990 - 0x3159a0
void sub_00315990_0x315990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315990_0x315990");
#endif

    ctx->pc = 0x315990u;

    // 0x315990: 0xac860080  sw          $a2, 0x80($a0)
    ctx->pc = 0x315990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 6));
    // 0x315994: 0x3e00008  jr          $ra
    ctx->pc = 0x315994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315994u;
        // 0x315998: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31599Cu;
    // 0x31599c: 0x0  nop
    ctx->pc = 0x31599cu;
    // NOP
    ctx->pc = 0x3159a0u;
}
