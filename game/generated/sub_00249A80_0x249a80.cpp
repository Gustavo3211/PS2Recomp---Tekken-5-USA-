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

// Function: sub_00249A80
// Address: 0x249a80 - 0x249a90
void sub_00249A80_0x249a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249A80_0x249a80");
#endif

    ctx->pc = 0x249a80u;

    // 0x249a80: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x249a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x249a84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249a88: 0x3e00008  jr          $ra
    ctx->pc = 0x249A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A88u;
        // 0x249a8c: 0xac627274  sw          $v0, 0x7274($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249A90u;
}
