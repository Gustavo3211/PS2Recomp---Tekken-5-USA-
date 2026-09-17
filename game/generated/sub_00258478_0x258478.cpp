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

// Function: sub_00258478
// Address: 0x258478 - 0x2584d0
void sub_00258478_0x258478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258478_0x258478");
#endif

    ctx->pc = 0x258478u;

    // 0x258478: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x258478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x25847c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258480: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x258480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258484: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x258484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258488: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x258488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25848c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25848cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258490: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x258490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x258494: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x258494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x258498: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x258498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x25849c: 0xac240d20  sw          $a0, 0xD20($at)
    ctx->pc = 0x25849cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3360), GPR_U32(ctx, 4));
    // 0x2584a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2584A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2584A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2584A8u;
    // 0x2584a8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2584a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2584ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2584acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2584b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2584b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2584b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2584b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2584b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2584b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2584bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2584bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2584c0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2584c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2584c4: 0xac250d18  sw          $a1, 0xD18($at)
    ctx->pc = 0x2584c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3352), GPR_U32(ctx, 5));
    // 0x2584c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2584C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2584C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2584D0u;
}
