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

// Function: sub_002DE2F0
// Address: 0x2de2f0 - 0x2de310
void sub_002DE2F0_0x2de2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2F0_0x2de2f0");
#endif

    ctx->pc = 0x2de2f0u;

    // 0x2de2f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2de2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de2f4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2de2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2de2f8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2de2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2de2fc: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2de2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2de300: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2de300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2de304: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE304u;
        // 0x2de308: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE30Cu;
    // 0x2de30c: 0x0  nop
    ctx->pc = 0x2de30cu;
    // NOP
    ctx->pc = 0x2de310u;
}
