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

// Function: sub_0026C7D8
// Address: 0x26c7d8 - 0x26c7f0
void sub_0026C7D8_0x26c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C7D8_0x26c7d8");
#endif

    ctx->pc = 0x26c7d8u;

    // 0x26c7d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26c7dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x26c7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c7e0: 0x38428002  xori        $v0, $v0, 0x8002
    ctx->pc = 0x26c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32770);
    // 0x26c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7E4u;
        // 0x26c7e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C7ECu;
    // 0x26c7ec: 0x0  nop
    ctx->pc = 0x26c7ecu;
    // NOP
    ctx->pc = 0x26c7f0u;
}
