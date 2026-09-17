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

// Function: sub_002BE738
// Address: 0x2be738 - 0x2be778
void sub_002BE738_0x2be738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE738_0x2be738");
#endif

    ctx->pc = 0x2be738u;

    // 0x2be738: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2be738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be73c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2be73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be740: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2be740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be744: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be748: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be750: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2be750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be754: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2be754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be758: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be75c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2be760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be764: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2be764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2be768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be76c: 0x8c427f50  lw          $v0, 0x7F50($v0)
    ctx->pc = 0x2be76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32592)));
    // 0x2be770: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE778u;
}
