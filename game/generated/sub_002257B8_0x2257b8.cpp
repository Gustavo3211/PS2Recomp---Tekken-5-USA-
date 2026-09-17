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

// Function: sub_002257B8
// Address: 0x2257b8 - 0x2257e0
void sub_002257B8_0x2257b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002257B8_0x2257b8");
#endif

    ctx->pc = 0x2257b8u;

    // 0x2257b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2257b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2257bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2257bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2257c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2257c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2257c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2257c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2257c8: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2257c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2257cc: 0x242161b0  addiu       $at, $at, 0x61B0
    ctx->pc = 0x2257ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25008));
    // 0x2257d0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2257d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2257d4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2257d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2257d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2257D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257D8u;
        // 0x2257dc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257E0u;
}
