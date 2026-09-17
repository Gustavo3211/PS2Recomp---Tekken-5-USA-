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

// Function: sub_0020E0D0
// Address: 0x20e0d0 - 0x20e110
void sub_0020E0D0_0x20e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E0D0_0x20e0d0");
#endif

    ctx->pc = 0x20e0d0u;

    // 0x20e0d0: 0x8c8500bc  lw          $a1, 0xBC($a0)
    ctx->pc = 0x20e0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x20e0d4: 0x24860840  addiu       $a2, $a0, 0x840
    ctx->pc = 0x20e0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x20e0d8: 0x2487082c  addiu       $a3, $a0, 0x82C
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2092));
    // 0x20e0dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20e0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e0e0: 0x8ca20244  lw          $v0, 0x244($a1)
    ctx->pc = 0x20e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
    // 0x20e0e4: 0x8ca30240  lw          $v1, 0x240($a1)
    ctx->pc = 0x20e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x20e0e8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x20e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x20e0ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x20e0f0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x20e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x20e0f4: 0x8c430244  lw          $v1, 0x244($v0)
    ctx->pc = 0x20e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x20e0f8: 0x8c440240  lw          $a0, 0x240($v0)
    ctx->pc = 0x20e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x20e0fc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x20e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x20e100: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x20e100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x20e104: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x20e104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
    // 0x20e108: 0x3e00008  jr          $ra
    ctx->pc = 0x20E108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E108u;
        // 0x20e10c: 0xace80010  sw          $t0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E110u;
}
