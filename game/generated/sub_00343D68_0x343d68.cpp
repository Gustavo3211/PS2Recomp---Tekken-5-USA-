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

// Function: sub_00343D68
// Address: 0x343d68 - 0x343d80
void sub_00343D68_0x343d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343D68_0x343d68");
#endif

    ctx->pc = 0x343d68u;

    // 0x343d68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x343d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x343d6c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x343d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x343d70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x343d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x343d74: 0x3e00008  jr          $ra
    ctx->pc = 0x343D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D74u;
        // 0x343d78: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343D7Cu;
    // 0x343d7c: 0x0  nop
    ctx->pc = 0x343d7cu;
    // NOP
    ctx->pc = 0x343d80u;
}
