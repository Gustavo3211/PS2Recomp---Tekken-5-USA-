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

// Function: sub_0020BF30
// Address: 0x20bf30 - 0x20bf40
void sub_0020BF30_0x20bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF30_0x20bf30");
#endif

    switch (ctx->pc) {
        case 0x20bf38u: goto label_20bf38;
        default: break;
    }

    ctx->pc = 0x20bf30u;

    // 0x20bf30: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bf34: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x20bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_20bf38:
    // 0x20bf38: 0x3e00008  jr          $ra
    ctx->pc = 0x20BF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF38u;
        // 0x20bf3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BF40u;
}
