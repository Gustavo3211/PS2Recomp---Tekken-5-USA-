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

// Function: sub_00334B58
// Address: 0x334b58 - 0x334b70
void sub_00334B58_0x334b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334B58_0x334b58");
#endif

    ctx->pc = 0x334b58u;

    // 0x334b58: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x334b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x334b5c: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x334b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x334b60: 0x8c620410  lw          $v0, 0x410($v1)
    ctx->pc = 0x334b60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x440390u));
    // 0x334b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334b68: 0x3e00008  jr          $ra
    ctx->pc = 0x334B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B68u;
        // 0x334b6c: 0xac620410  sw          $v0, 0x410($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334B70u;
}
