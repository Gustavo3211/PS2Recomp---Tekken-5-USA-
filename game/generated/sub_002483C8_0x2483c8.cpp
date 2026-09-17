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

// Function: sub_002483C8
// Address: 0x2483c8 - 0x2483e8
void sub_002483C8_0x2483c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002483C8_0x2483c8");
#endif

    ctx->pc = 0x2483c8u;

    // 0x2483c8: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x2483c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x2483cc: 0x24846fe0  addiu       $a0, $a0, 0x6FE0
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28640));
    // 0x2483d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2483d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x166FF0u));
    // 0x2483d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2483D4u;
    {
        const bool branch_taken_0x2483d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483D4u;
        // 0x2483d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483d4) {
            ctx->pc = 0x2483E0u;
            goto label_2483e0;
        }
    }
    ctx->pc = 0x2483DCu;
    // 0x2483dc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2483e0:
    // 0x2483e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2483E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2483E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2483E8u;
}
