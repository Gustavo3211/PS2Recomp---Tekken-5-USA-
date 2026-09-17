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

// Function: sub_004A63F0
// Address: 0x4a63f0 - 0x4a6410
void sub_004A63F0_0x4a63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A63F0_0x4a63f0");
#endif

    ctx->pc = 0x4a63f0u;

    // 0x4a63f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a63f4: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4a63f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4a63f8: 0x8c430c40  lw          $v1, 0xC40($v0)
    ctx->pc = 0x4a63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C40u));
    // 0x4a63fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a63fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6400: 0xa4600118  sh          $zero, 0x118($v1)
    ctx->pc = 0x4a6400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6404: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6404u;
        // 0x4a6408: 0xa4a4d736  sh          $a0, -0x28CA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294956854), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A640Cu;
    // 0x4a640c: 0x0  nop
    ctx->pc = 0x4a640cu;
    // NOP
    ctx->pc = 0x4a6410u;
}
