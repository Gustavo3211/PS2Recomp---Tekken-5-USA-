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

// Function: sub_001FC3F8
// Address: 0x1fc3f8 - 0x1fc408
void sub_001FC3F8_0x1fc3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC3F8_0x1fc3f8");
#endif

    ctx->pc = 0x1fc3f8u;

    // 0x1fc3f8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3FCu;
        // 0x1fc400: 0xac4403d8  sw          $a0, 0x3D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 984), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC404u;
    // 0x1fc404: 0x0  nop
    ctx->pc = 0x1fc404u;
    // NOP
    ctx->pc = 0x1fc408u;
}
