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

// Function: sub_003424C0
// Address: 0x3424c0 - 0x3424d8
void sub_003424C0_0x3424c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003424C0_0x3424c0");
#endif

    ctx->pc = 0x3424c0u;

    // 0x3424c0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3424c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3424c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3424c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3424c8: 0x24632da8  addiu       $v1, $v1, 0x2DA8
    ctx->pc = 0x3424c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11688));
    // 0x3424cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3424CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3424D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424CCu;
        // 0x3424d0: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3424CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3424D4u;
    // 0x3424d4: 0x0  nop
    ctx->pc = 0x3424d4u;
    // NOP
    ctx->pc = 0x3424d8u;
}
