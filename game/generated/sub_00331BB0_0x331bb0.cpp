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

// Function: sub_00331BB0
// Address: 0x331bb0 - 0x331bc0
void sub_00331BB0_0x331bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331BB0_0x331bb0");
#endif

    ctx->pc = 0x331bb0u;

    // 0x331bb0: 0xa486000a  sh          $a2, 0xA($a0)
    ctx->pc = 0x331bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x331bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x331BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331BB4u;
        // 0x331bb8: 0xa4850008  sh          $a1, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331BBCu;
    // 0x331bbc: 0x0  nop
    ctx->pc = 0x331bbcu;
    // NOP
    ctx->pc = 0x331bc0u;
}
