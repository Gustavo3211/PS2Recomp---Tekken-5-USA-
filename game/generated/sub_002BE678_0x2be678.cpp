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

// Function: sub_002BE678
// Address: 0x2be678 - 0x2be6b8
void sub_002BE678_0x2be678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE678_0x2be678");
#endif

    ctx->pc = 0x2be678u;

    // 0x2be678: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2be678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be67c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2be67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be680: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2be680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be684: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be690: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be694: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2be694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be698: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be69c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be6a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2be6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be6a4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2be6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2be6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be6ac: 0x8c427f48  lw          $v0, 0x7F48($v0)
    ctx->pc = 0x2be6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32584)));
    // 0x2be6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE6B8u;
}
