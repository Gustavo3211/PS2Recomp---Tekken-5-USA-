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

// Function: sub_00101570
// Address: 0x101570 - 0x101580
void sub_00101570_0x101570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101570_0x101570");
#endif

    ctx->pc = 0x101570u;

    // 0x101570: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x101574: 0x3e00008  jr          $ra
    ctx->pc = 0x101574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101574u;
        // 0x101578: 0x2442c6c0  addiu       $v0, $v0, -0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10157Cu;
    // 0x10157c: 0x0  nop
    ctx->pc = 0x10157cu;
    // NOP
    ctx->pc = 0x101580u;
}
