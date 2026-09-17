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

// Function: sub_0022E240
// Address: 0x22e240 - 0x22e258
void sub_0022E240_0x22e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E240_0x22e240");
#endif

    ctx->pc = 0x22e240u;

    // 0x22e240: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22e244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e248: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x22e248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x22e24c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x22e24cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x22e250: 0x3e00008  jr          $ra
    ctx->pc = 0x22E250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E250u;
        // 0x22e254: 0xac22dc54  sw          $v0, -0x23AC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E258u;
}
