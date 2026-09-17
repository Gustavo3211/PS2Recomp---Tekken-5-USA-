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

// Function: sub_0026C7C0
// Address: 0x26c7c0 - 0x26c7d8
void sub_0026C7C0_0x26c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C7C0_0x26c7c0");
#endif

    ctx->pc = 0x26c7c0u;

    // 0x26c7c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26c7c4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x26c7c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c7c8: 0x38428001  xori        $v0, $v0, 0x8001
    ctx->pc = 0x26c7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32769);
    // 0x26c7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26C7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7CCu;
        // 0x26c7d0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C7D4u;
    // 0x26c7d4: 0x0  nop
    ctx->pc = 0x26c7d4u;
    // NOP
    ctx->pc = 0x26c7d8u;
}
