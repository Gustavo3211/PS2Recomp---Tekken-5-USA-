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

// Function: sub_00513B70
// Address: 0x513b70 - 0x513b80
void sub_00513B70_0x513b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513B70_0x513b70");
#endif

    ctx->pc = 0x513b70u;

    // 0x513b70: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x513b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x513b74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x513b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x513b78: 0x3e00008  jr          $ra
    ctx->pc = 0x513B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513B78u;
        // 0x513b7c: 0xac624230  sw          $v0, 0x4230($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513B80u;
}
