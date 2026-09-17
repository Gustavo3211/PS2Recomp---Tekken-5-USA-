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

// Function: sub_002249B8
// Address: 0x2249b8 - 0x2249e0
void sub_002249B8_0x2249b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002249B8_0x2249b8");
#endif

    ctx->pc = 0x2249b8u;

    // 0x2249b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2249bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2249bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2249c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2249c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2249c4: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2249c8: 0x24216110  addiu       $at, $at, 0x6110
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 24848));
    // 0x2249cc: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2249d0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2249d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2249d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2249d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2249D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2249DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249D8u;
        // 0x2249dc: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2249D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2249E0u;
}
