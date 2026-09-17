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

// Function: sub_002BE6F8
// Address: 0x2be6f8 - 0x2be738
void sub_002BE6F8_0x2be6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE6F8_0x2be6f8");
#endif

    ctx->pc = 0x2be6f8u;

    // 0x2be6f8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2be6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be6fc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2be6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be704: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be70c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be710: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2be710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be714: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2be714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be718: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be71c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be720: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2be720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be724: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2be724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2be728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be72c: 0x8c427f58  lw          $v0, 0x7F58($v0)
    ctx->pc = 0x2be72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32600)));
    // 0x2be730: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE738u;
}
