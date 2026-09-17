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

// Function: sub_00225CC0
// Address: 0x225cc0 - 0x225ce8
void sub_00225CC0_0x225cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225CC0_0x225cc0");
#endif

    ctx->pc = 0x225cc0u;

    // 0x225cc0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x225cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x225cc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x225cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225cc8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x225ccc: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x225cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x225cd0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x225cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x225cd4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x225cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x225cd8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x225cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x225cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x225CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CDCu;
        // 0x225ce0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CE4u;
    // 0x225ce4: 0x0  nop
    ctx->pc = 0x225ce4u;
    // NOP
    ctx->pc = 0x225ce8u;
}
