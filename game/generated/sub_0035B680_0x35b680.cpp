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

// Function: sub_0035B680
// Address: 0x35b680 - 0x35b690
void sub_0035B680_0x35b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B680_0x35b680");
#endif

    ctx->pc = 0x35b680u;

    // 0x35b680: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35b680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35b684: 0x3e00008  jr          $ra
    ctx->pc = 0x35B684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B684u;
        // 0x35b688: 0x8c62133c  lw          $v0, 0x133C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B68Cu;
    // 0x35b68c: 0x0  nop
    ctx->pc = 0x35b68cu;
    // NOP
    ctx->pc = 0x35b690u;
}
