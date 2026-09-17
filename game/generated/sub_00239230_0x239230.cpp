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

// Function: sub_00239230
// Address: 0x239230 - 0x239248
void sub_00239230_0x239230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239230_0x239230");
#endif

    ctx->pc = 0x239230u;

    // 0x239230: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x239230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x239234: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x239234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x239238: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23923c: 0x3e00008  jr          $ra
    ctx->pc = 0x23923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23923Cu;
        // 0x239240: 0x8c42a020  lw          $v0, -0x5FE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942752)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239244u;
    // 0x239244: 0x0  nop
    ctx->pc = 0x239244u;
    // NOP
    ctx->pc = 0x239248u;
}
