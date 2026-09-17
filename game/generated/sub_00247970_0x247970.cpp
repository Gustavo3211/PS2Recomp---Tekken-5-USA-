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

// Function: sub_00247970
// Address: 0x247970 - 0x247990
void sub_00247970_0x247970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247970_0x247970");
#endif

    ctx->pc = 0x247970u;

    // 0x247970: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x247970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x247974: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x247974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x247978: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x247978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x24797c: 0x24633220  addiu       $v1, $v1, 0x3220
    ctx->pc = 0x24797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12832));
    // 0x247980: 0xac850074  sw          $a1, 0x74($a0)
    ctx->pc = 0x247980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
    // 0x247984: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x247984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x247988: 0x3e00008  jr          $ra
    ctx->pc = 0x247988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247988u;
        // 0x24798c: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247990u;
}
