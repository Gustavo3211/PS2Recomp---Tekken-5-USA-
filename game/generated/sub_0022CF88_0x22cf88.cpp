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

// Function: sub_0022CF88
// Address: 0x22cf88 - 0x22cfa0
void sub_0022CF88_0x22cf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CF88_0x22cf88");
#endif

    ctx->pc = 0x22cf88u;

    // 0x22cf88: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x22cf8c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x22cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x22cf90: 0x8c629288  lw          $v0, -0x6D78($v1)
    ctx->pc = 0x22cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939272)));
    // 0x22cf94: 0x3e00008  jr          $ra
    ctx->pc = 0x22CF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF94u;
        // 0x22cf98: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CF9Cu;
    // 0x22cf9c: 0x0  nop
    ctx->pc = 0x22cf9cu;
    // NOP
    ctx->pc = 0x22cfa0u;
}
