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

// Function: sub_00226448
// Address: 0x226448 - 0x226460
void sub_00226448_0x226448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226448_0x226448");
#endif

    ctx->pc = 0x226448u;

    // 0x226448: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x226448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22644c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226450: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x226450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x226454: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x226458: 0x3e00008  jr          $ra
    ctx->pc = 0x226458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226458u;
        // 0x22645c: 0xac22dc28  sw          $v0, -0x23D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226460u;
}
