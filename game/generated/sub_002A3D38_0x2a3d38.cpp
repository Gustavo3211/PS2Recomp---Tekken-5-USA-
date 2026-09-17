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

// Function: sub_002A3D38
// Address: 0x2a3d38 - 0x2a3d58
void sub_002A3D38_0x2a3d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D38_0x2a3d38");
#endif

    ctx->pc = 0x2a3d38u;

    // 0x2a3d38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a3d3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a3d40: 0x2442e5d0  addiu       $v0, $v0, -0x1A30
    ctx->pc = 0x2a3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960592));
    // 0x2a3d44: 0x2463d3c0  addiu       $v1, $v1, -0x2C40
    ctx->pc = 0x2a3d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955968));
    // 0x2a3d48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a3d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D4Cu;
        // 0x2a3d50: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3D54u;
    // 0x2a3d54: 0x0  nop
    ctx->pc = 0x2a3d54u;
    // NOP
    ctx->pc = 0x2a3d58u;
}
