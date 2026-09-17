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

// Function: sub_004D16B0
// Address: 0x4d16b0 - 0x4d16c0
void sub_004D16B0_0x4d16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D16B0_0x4d16b0");
#endif

    ctx->pc = 0x4d16b0u;

    // 0x4d16b0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x4d16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4d16b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D16B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D16B4u;
        // 0x4d16b8: 0xa4820160  sh          $v0, 0x160($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D16B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D16BCu;
    // 0x4d16bc: 0x0  nop
    ctx->pc = 0x4d16bcu;
    // NOP
    ctx->pc = 0x4d16c0u;
}
