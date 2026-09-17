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

// Function: sub_002F4B70
// Address: 0x2f4b70 - 0x2f4b90
void sub_002F4B70_0x2f4b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4B70_0x2f4b70");
#endif

    ctx->pc = 0x2f4b70u;

    // 0x2f4b70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2f4b74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2f4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2f4b78: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x2f4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
    // 0x2f4b7c: 0x246313c0  addiu       $v1, $v1, 0x13C0
    ctx->pc = 0x2f4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5056));
    // 0x2f4b80: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f4b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B84u;
        // 0x2f4b88: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B8Cu;
    // 0x2f4b8c: 0x0  nop
    ctx->pc = 0x2f4b8cu;
    // NOP
    ctx->pc = 0x2f4b90u;
}
