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

// Function: sub_002BE048
// Address: 0x2be048 - 0x2be098
void sub_002BE048_0x2be048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE048_0x2be048");
#endif

    ctx->pc = 0x2be048u;

    // 0x2be048: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2be048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be04c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2be04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2be050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be054: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2be054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2be058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be05c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be060: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2be060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be064: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2be064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be068: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2be068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2be06c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2be06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2be070: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2be070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2be074: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2be074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2be078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be07c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2be07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2be080: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be084: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2be084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2be088: 0x24217be0  addiu       $at, $at, 0x7BE0
    ctx->pc = 0x2be088u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31712));
    // 0x2be08c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE08Cu;
        // 0x2be090: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE094u;
    // 0x2be094: 0x0  nop
    ctx->pc = 0x2be094u;
    // NOP
    ctx->pc = 0x2be098u;
}
