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

// Function: sub_002F8F18
// Address: 0x2f8f18 - 0x2f8f38
void sub_002F8F18_0x2f8f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8F18_0x2f8f18");
#endif

    ctx->pc = 0x2f8f18u;

    // 0x2f8f18: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x2f8f1c: 0x8c830118  lw          $v1, 0x118($a0)
    ctx->pc = 0x2f8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2f8f20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8f24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f8f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f8f2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f8f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F30u;
        // 0x2f8f34: 0x8c8200a0  lw          $v0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8F38u;
}
