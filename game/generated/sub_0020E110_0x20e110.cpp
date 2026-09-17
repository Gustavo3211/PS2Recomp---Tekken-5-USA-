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

// Function: sub_0020E110
// Address: 0x20e110 - 0x20e138
void sub_0020E110_0x20e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E110_0x20e110");
#endif

    ctx->pc = 0x20e110u;

    // 0x20e110: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x20e114: 0x24840818  addiu       $a0, $a0, 0x818
    ctx->pc = 0x20e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2072));
    // 0x20e118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20e118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e11c: 0x8c45024c  lw          $a1, 0x24C($v0)
    ctx->pc = 0x20e11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x20e120: 0x8c430248  lw          $v1, 0x248($v0)
    ctx->pc = 0x20e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x20e124: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x20e124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x20e128: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20e128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x20e12c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E12Cu;
        // 0x20e130: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E134u;
    // 0x20e134: 0x0  nop
    ctx->pc = 0x20e134u;
    // NOP
    ctx->pc = 0x20e138u;
}
