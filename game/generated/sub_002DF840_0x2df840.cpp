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

// Function: sub_002DF840
// Address: 0x2df840 - 0x2df860
void sub_002DF840_0x2df840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF840_0x2df840");
#endif

    ctx->pc = 0x2df840u;

    // 0x2df840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df844: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2df844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2df848: 0xa0820011  sb          $v0, 0x11($a0)
    ctx->pc = 0x2df848u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2df84c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2df84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2df850: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x2df850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df854: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF854u;
        // 0x2df858: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF85Cu;
    // 0x2df85c: 0x0  nop
    ctx->pc = 0x2df85cu;
    // NOP
    ctx->pc = 0x2df860u;
}
