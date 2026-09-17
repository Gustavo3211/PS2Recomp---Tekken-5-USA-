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

// Function: sub_0010F820
// Address: 0x10f820 - 0x10f830
void sub_0010F820_0x10f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F820_0x10f820");
#endif

    ctx->pc = 0x10f820u;

    // 0x10f820: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x10f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x10f824: 0x3e00008  jr          $ra
    ctx->pc = 0x10F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F824u;
        // 0x10f828: 0xac4010f8  sw          $zero, 0x10F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F82Cu;
    // 0x10f82c: 0x0  nop
    ctx->pc = 0x10f82cu;
    // NOP
    ctx->pc = 0x10f830u;
}
