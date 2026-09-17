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

// Function: sub_00375980
// Address: 0x375980 - 0x3759b8
void sub_00375980_0x375980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375980_0x375980");
#endif

    ctx->pc = 0x375980u;

    // 0x375980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x375980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375984: 0x3e00008  jr          $ra
    ctx->pc = 0x375984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37598Cu;
    // 0x37598c: 0x0  nop
    ctx->pc = 0x37598cu;
    // NOP
    // 0x375990: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375994: 0x246322d0  addiu       $v1, $v1, 0x22D0
    ctx->pc = 0x375994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8912));
    // 0x375998: 0x3e00008  jr          $ra
    ctx->pc = 0x375998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375998u;
        // 0x37599c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3759A0u;
    // 0x3759a0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3759a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3759a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3759a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3759a8: 0x24632318  addiu       $v1, $v1, 0x2318
    ctx->pc = 0x3759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8984));
    // 0x3759ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3759ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3759B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759ACu;
        // 0x3759b0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3759ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3759B4u;
    // 0x3759b4: 0x0  nop
    ctx->pc = 0x3759b4u;
    // NOP
    ctx->pc = 0x3759b8u;
}
