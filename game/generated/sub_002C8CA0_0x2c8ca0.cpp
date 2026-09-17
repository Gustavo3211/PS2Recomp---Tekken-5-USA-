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

// Function: sub_002C8CA0
// Address: 0x2c8ca0 - 0x2c8cd0
void sub_002C8CA0_0x2c8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8CA0_0x2c8ca0");
#endif

    ctx->pc = 0x2c8ca0u;

    // 0x2c8ca0: 0x8f83cb1c  lw          $v1, -0x34E4($gp)
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953756)));
    // 0x2c8ca4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c8ca8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8CA8u;
    {
        const bool branch_taken_0x2c8ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CA8u;
        // 0x2c8cac: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ca8) {
            ctx->pc = 0x2C8CC8u;
            goto label_2c8cc8;
        }
    }
    ctx->pc = 0x2C8CB0u;
    // 0x2c8cb0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2c8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8cb4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c8cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8cbc: 0x8c428dc8  lw          $v0, -0x7238($v0)
    ctx->pc = 0x2c8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938056)));
    // 0x2c8cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8CC8u;
label_2c8cc8:
    // 0x2c8cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CC8u;
        // 0x2c8ccc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8CD0u;
}
