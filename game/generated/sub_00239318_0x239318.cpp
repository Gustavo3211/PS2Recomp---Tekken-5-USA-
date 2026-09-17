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

// Function: sub_00239318
// Address: 0x239318 - 0x239338
void sub_00239318_0x239318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239318_0x239318");
#endif

    ctx->pc = 0x239318u;

    // 0x239318: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23931c: 0x2442d3d0  addiu       $v0, $v0, -0x2C30
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
    // 0x239320: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x15D3D8u));
    // 0x239324: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x239328: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x15D3DCu));
    // 0x23932c: 0x3e00008  jr          $ra
    ctx->pc = 0x23932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23932Cu;
        // 0x239330: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23932Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239334u;
    // 0x239334: 0x0  nop
    ctx->pc = 0x239334u;
    // NOP
    ctx->pc = 0x239338u;
}
