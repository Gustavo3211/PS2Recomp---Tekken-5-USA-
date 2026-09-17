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

// Function: sub_0026C7F0
// Address: 0x26c7f0 - 0x26c808
void sub_0026C7F0_0x26c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C7F0_0x26c7f0");
#endif

    ctx->pc = 0x26c7f0u;

    // 0x26c7f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c7f4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x26c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x26c7f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26c7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x26C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7FCu;
        // 0x26c800: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C804u;
    // 0x26c804: 0x0  nop
    ctx->pc = 0x26c804u;
    // NOP
    ctx->pc = 0x26c808u;
}
