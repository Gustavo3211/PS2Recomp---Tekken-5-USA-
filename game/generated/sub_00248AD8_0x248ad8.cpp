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

// Function: sub_00248AD8
// Address: 0x248ad8 - 0x248ae8
void sub_00248AD8_0x248ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248AD8_0x248ad8");
#endif

    switch (ctx->pc) {
        case 0x248ae0u: goto label_248ae0;
        default: break;
    }

    ctx->pc = 0x248ad8u;

    // 0x248ad8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x248ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x248adc: 0x3463e800  ori         $v1, $v1, 0xE800
    ctx->pc = 0x248adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59392);
label_248ae0:
    // 0x248ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x248AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AE0u;
        // 0x248ae4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248AE8u;
}
