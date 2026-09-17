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

// Function: sub_002F0320
// Address: 0x2f0320 - 0x2f0348
void sub_002F0320_0x2f0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0320_0x2f0320");
#endif

    ctx->pc = 0x2f0320u;

    // 0x2f0320: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2f0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f0324: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x2f0324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x2f0328: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f0328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f032c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F032Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F032Cu;
        // 0x2f0330: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F032Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0334u;
    // 0x2f0334: 0x0  nop
    ctx->pc = 0x2f0334u;
    // NOP
    // 0x2f0338: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f033c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F033Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F033Cu;
        // 0x2f0340: 0xac82011c  sw          $v0, 0x11C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F033Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0344u;
    // 0x2f0344: 0x0  nop
    ctx->pc = 0x2f0344u;
    // NOP
    ctx->pc = 0x2f0348u;
}
