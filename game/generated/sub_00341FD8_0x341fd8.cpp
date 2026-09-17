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

// Function: sub_00341FD8
// Address: 0x341fd8 - 0x341ff0
void sub_00341FD8_0x341fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341FD8_0x341fd8");
#endif

    ctx->pc = 0x341fd8u;

    // 0x341fd8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x341fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x341fdc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x341fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341fe0: 0x24632cc8  addiu       $v1, $v1, 0x2CC8
    ctx->pc = 0x341fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11464));
    // 0x341fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x341FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FE4u;
        // 0x341fe8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341FECu;
    // 0x341fec: 0x0  nop
    ctx->pc = 0x341fecu;
    // NOP
    ctx->pc = 0x341ff0u;
}
