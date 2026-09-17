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

// Function: sub_00219880
// Address: 0x219880 - 0x219890
void sub_00219880_0x219880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219880_0x219880");
#endif

    ctx->pc = 0x219880u;

    // 0x219880: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x219880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x219884: 0x3e00008  jr          $ra
    ctx->pc = 0x219884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219884u;
        // 0x219888: 0x24425a78  addiu       $v0, $v0, 0x5A78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21988Cu;
    // 0x21988c: 0x0  nop
    ctx->pc = 0x21988cu;
    // NOP
    ctx->pc = 0x219890u;
}
