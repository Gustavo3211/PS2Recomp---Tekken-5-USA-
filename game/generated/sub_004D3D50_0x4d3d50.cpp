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

// Function: sub_004D3D50
// Address: 0x4d3d50 - 0x4d3d60
void sub_004D3D50_0x4d3d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3D50_0x4d3d50");
#endif

    ctx->pc = 0x4d3d50u;

    // 0x4d3d50: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x4d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4d3d54: 0x3e00008  jr          $ra
    ctx->pc = 0x4D3D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D54u;
        // 0x4d3d58: 0xa4820160  sh          $v0, 0x160($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3D5Cu;
    // 0x4d3d5c: 0x0  nop
    ctx->pc = 0x4d3d5cu;
    // NOP
    ctx->pc = 0x4d3d60u;
}
