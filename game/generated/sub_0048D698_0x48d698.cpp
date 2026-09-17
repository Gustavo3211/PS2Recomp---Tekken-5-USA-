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

// Function: sub_0048D698
// Address: 0x48d698 - 0x48d6b8
void sub_0048D698_0x48d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D698_0x48d698");
#endif

    ctx->pc = 0x48d698u;

    // 0x48d698: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x48d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x48d69c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48d6a0: 0x3c01000a  lui         $at, 0xA
    ctx->pc = 0x48d6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)10 << 16));
    // 0x48d6a4: 0x3421655c  ori         $at, $at, 0x655C
    ctx->pc = 0x48d6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25948);
    // 0x48d6a8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x48d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x48D6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D6ACu;
        // 0x48d6b0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D6B4u;
    // 0x48d6b4: 0x0  nop
    ctx->pc = 0x48d6b4u;
    // NOP
    ctx->pc = 0x48d6b8u;
}
