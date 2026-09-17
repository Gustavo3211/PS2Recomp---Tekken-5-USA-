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

// Function: sub_002FDE78
// Address: 0x2fde78 - 0x2fdea0
void sub_002FDE78_0x2fde78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDE78_0x2fde78");
#endif

    ctx->pc = 0x2fde78u;

    // 0x2fde78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fde7c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2fde7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2fde80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fde80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fde84: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fde84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fde88: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2fde88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2fde8c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2fde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2fde90: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2fde90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2fde94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE94u;
        // 0x2fde98: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE9Cu;
    // 0x2fde9c: 0x0  nop
    ctx->pc = 0x2fde9cu;
    // NOP
    ctx->pc = 0x2fdea0u;
}
