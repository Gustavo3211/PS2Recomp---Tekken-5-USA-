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

// Function: sub_004AB9C0
// Address: 0x4ab9c0 - 0x4ab9e8
void sub_004AB9C0_0x4ab9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB9C0_0x4ab9c0");
#endif

    ctx->pc = 0x4ab9c0u;

    // 0x4ab9c0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab9c4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab9c8: 0x24630cb0  addiu       $v1, $v1, 0xCB0
    ctx->pc = 0x4ab9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3248));
    // 0x4ab9cc: 0x24420cb4  addiu       $v0, $v0, 0xCB4
    ctx->pc = 0x4ab9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3252));
    // 0x4ab9d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ab9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab9d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ab9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab9d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ab9d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB4u, _value); } while (0);
    // 0x4ab9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB9DCu;
        // 0x4ab9e0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB9E4u;
    // 0x4ab9e4: 0x0  nop
    ctx->pc = 0x4ab9e4u;
    // NOP
    ctx->pc = 0x4ab9e8u;
}
