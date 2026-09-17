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

// Function: sub_0024B8E0
// Address: 0x24b8e0 - 0x24b908
void sub_0024B8E0_0x24b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B8E0_0x24b8e0");
#endif

    switch (ctx->pc) {
        case 0x24b8f0u: goto label_24b8f0;
        default: break;
    }

    ctx->pc = 0x24b8e0u;

    // 0x24b8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b8e8: 0xc086822  jal         func_21A088
    ctx->pc = 0x24B8E8u;
    SET_GPR_U32(ctx, 31, 0x24B8F0u);
    ctx->pc = 0x21A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A088u, 0x24B8E8u, 0x24B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8F0u;
label_24b8f0:
    // 0x24b8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b8f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24b8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b8fc: 0xac6288b0  sw          $v0, -0x7750($v1)
    ctx->pc = 0x24b8fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A88B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A88B0u, _value); } while (0);
    // 0x24b900: 0x3e00008  jr          $ra
    ctx->pc = 0x24B900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B900u;
        // 0x24b904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B908u;
}
