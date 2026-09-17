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

// Function: sub_002BE7B8
// Address: 0x2be7b8 - 0x2be7f8
void sub_002BE7B8_0x2be7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE7B8_0x2be7b8");
#endif

    ctx->pc = 0x2be7b8u;

    // 0x2be7b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2be7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be7bc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2be7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be7c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2be7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2be7c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be7d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2be7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2be7d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2be7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be7d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2be7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2be7dc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2be7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2be7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be7e4: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2be7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2be7e8: 0x24217f60  addiu       $at, $at, 0x7F60
    ctx->pc = 0x2be7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32608));
    // 0x2be7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7ECu;
        // 0x2be7f0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE7F4u;
    // 0x2be7f4: 0x0  nop
    ctx->pc = 0x2be7f4u;
    // NOP
    ctx->pc = 0x2be7f8u;
}
