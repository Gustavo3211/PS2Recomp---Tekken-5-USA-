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

// Function: sub_001F98D8
// Address: 0x1f98d8 - 0x1f98f8
void sub_001F98D8_0x1f98d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98D8_0x1f98d8");
#endif

    ctx->pc = 0x1f98d8u;

    // 0x1f98d8: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x1f98d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1f98dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f98dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f98e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f98e4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1f98e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1f98e8: 0x2421b400  addiu       $at, $at, -0x4C00
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947840));
    // 0x1f98ec: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1f98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1f98f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F98F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F0u;
        // 0x1f98f4: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98F8u;
}
