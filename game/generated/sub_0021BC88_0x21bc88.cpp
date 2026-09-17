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

// Function: sub_0021BC88
// Address: 0x21bc88 - 0x21bca0
void sub_0021BC88_0x21bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BC88_0x21bc88");
#endif

    ctx->pc = 0x21bc88u;

    // 0x21bc88: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21bc8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x21bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21bc90: 0x24425c48  addiu       $v0, $v0, 0x5C48
    ctx->pc = 0x21bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23624));
    // 0x21bc94: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x21bc94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x155C88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x155C88u, _value); } while (0);
    // 0x21bc98: 0x3e00008  jr          $ra
    ctx->pc = 0x21BC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC98u;
        // 0x21bc9c: 0xac400044  sw          $zero, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BCA0u;
}
