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

// Function: sub_002CB438
// Address: 0x2cb438 - 0x2cb470
void sub_002CB438_0x2cb438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB438_0x2cb438");
#endif

    ctx->pc = 0x2cb438u;

    // 0x2cb438: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cb438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cb43c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2cb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cb440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cb440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb444: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2cb444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cb448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb44c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2cb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb454: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cb454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cb458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cb45c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cb460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb464: 0x8042eab8  lb          $v0, -0x1548($v0)
    ctx->pc = 0x2cb464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x2cb468: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB470u;
}
