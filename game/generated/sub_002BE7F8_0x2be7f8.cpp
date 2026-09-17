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

// Function: sub_002BE7F8
// Address: 0x2be7f8 - 0x2be848
void sub_002BE7F8_0x2be7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE7F8_0x2be7f8");
#endif

    ctx->pc = 0x2be7f8u;

    // 0x2be7f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2be7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be7fc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2be7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2be800: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be804: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2be804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2be808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be80c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be810: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2be810u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be814: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2be814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be818: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2be81c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2be81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2be820: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2be820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2be824: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2be824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2be828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be82c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2be82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2be830: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be834: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2be834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2be838: 0x24217bc0  addiu       $at, $at, 0x7BC0
    ctx->pc = 0x2be838u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31680));
    // 0x2be83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE83Cu;
        // 0x2be840: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE844u;
    // 0x2be844: 0x0  nop
    ctx->pc = 0x2be844u;
    // NOP
    ctx->pc = 0x2be848u;
}
