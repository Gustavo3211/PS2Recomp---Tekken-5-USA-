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

// Function: sub_0021BCA0
// Address: 0x21bca0 - 0x21bcb0
void sub_0021BCA0_0x21bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BCA0_0x21bca0");
#endif

    ctx->pc = 0x21bca0u;

    // 0x21bca0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x21bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x21bca4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x21BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCA8u;
        // 0x21bcac: 0xac625c40  sw          $v0, 0x5C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BCB0u;
}
