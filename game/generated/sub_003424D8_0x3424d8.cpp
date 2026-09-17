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

// Function: sub_003424D8
// Address: 0x3424d8 - 0x3424f0
void sub_003424D8_0x3424d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003424D8_0x3424d8");
#endif

    ctx->pc = 0x3424d8u;

    // 0x3424d8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3424d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3424dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3424dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3424e0: 0x24632d88  addiu       $v1, $v1, 0x2D88
    ctx->pc = 0x3424e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11656));
    // 0x3424e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3424E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3424E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424E4u;
        // 0x3424e8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3424E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3424ECu;
    // 0x3424ec: 0x0  nop
    ctx->pc = 0x3424ecu;
    // NOP
    ctx->pc = 0x3424f0u;
}
