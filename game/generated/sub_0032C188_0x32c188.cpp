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

// Function: sub_0032C188
// Address: 0x32c188 - 0x32c1b8
void sub_0032C188_0x32c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C188_0x32c188");
#endif

    ctx->pc = 0x32c188u;

    // 0x32c188: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x32c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x32c18c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x32c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32c190: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x32c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x32c194: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x32c194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x32c198: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32c198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x32c19c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x32c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x32c1a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32c1a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32c1a8: 0xaca50000  sw          $a1, 0x0($a1)
    ctx->pc = 0x32c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
    // 0x32c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1ACu;
        // 0x32c1b0: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C1B4u;
    // 0x32c1b4: 0x0  nop
    ctx->pc = 0x32c1b4u;
    // NOP
    ctx->pc = 0x32c1b8u;
}
