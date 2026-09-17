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

// Function: sub_00297DE0
// Address: 0x297de0 - 0x297df0
void sub_00297DE0_0x297de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297DE0_0x297de0");
#endif

    ctx->pc = 0x297de0u;

    // 0x297de0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x297de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x297de4: 0x3e00008  jr          $ra
    ctx->pc = 0x297DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DE4u;
        // 0x297de8: 0xac4074e8  sw          $zero, 0x74E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297DECu;
    // 0x297dec: 0x0  nop
    ctx->pc = 0x297decu;
    // NOP
    ctx->pc = 0x297df0u;
}
