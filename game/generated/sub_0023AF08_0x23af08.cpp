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

// Function: sub_0023AF08
// Address: 0x23af08 - 0x23af28
void sub_0023AF08_0x23af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF08_0x23af08");
#endif

    ctx->pc = 0x23af08u;

    // 0x23af08: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23af0c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23af10: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23af14: 0x8c62f378  lw          $v0, -0xC88($v1)
    ctx->pc = 0x23af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964088)));
    // 0x23af18: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23af18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x23af1c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF1Cu;
        // 0x23af20: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AF24u;
    // 0x23af24: 0x0  nop
    ctx->pc = 0x23af24u;
    // NOP
    ctx->pc = 0x23af28u;
}
