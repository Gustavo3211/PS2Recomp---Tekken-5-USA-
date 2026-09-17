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

// Function: sub_0022E258
// Address: 0x22e258 - 0x22e278
void sub_0022E258_0x22e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E258_0x22e258");
#endif

    ctx->pc = 0x22e258u;

    // 0x22e258: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22e25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e260: 0x3e00008  jr          $ra
    ctx->pc = 0x22E260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E260u;
        // 0x22e264: 0xac62dc60  sw          $v0, -0x23A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E268u;
    // 0x22e268: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22e268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22e26c: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x22e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x22e270: 0x3e00008  jr          $ra
    ctx->pc = 0x22E270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E270u;
        // 0x22e274: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E278u;
}
