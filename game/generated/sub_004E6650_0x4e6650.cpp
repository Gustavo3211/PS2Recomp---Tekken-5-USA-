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

// Function: sub_004E6650
// Address: 0x4e6650 - 0x4e6660
void sub_004E6650_0x4e6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6650_0x4e6650");
#endif

    ctx->pc = 0x4e6650u;

    // 0x4e6650: 0xa480014a  sh          $zero, 0x14A($a0)
    ctx->pc = 0x4e6650u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e6654: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6654u;
        // 0x4e6658: 0xa48001ba  sh          $zero, 0x1BA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 442), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E665Cu;
    // 0x4e665c: 0x0  nop
    ctx->pc = 0x4e665cu;
    // NOP
    ctx->pc = 0x4e6660u;
}
