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

// Function: sub_0022F838
// Address: 0x22f838 - 0x22f850
void sub_0022F838_0x22f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F838_0x22f838");
#endif

    ctx->pc = 0x22f838u;

    // 0x22f838: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22f83c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22f83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x22f840: 0x2421b270  addiu       $at, $at, -0x4D90
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947440));
    // 0x22f844: 0x3e00008  jr          $ra
    ctx->pc = 0x22F844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F844u;
        // 0x22f848: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F84Cu;
    // 0x22f84c: 0x0  nop
    ctx->pc = 0x22f84cu;
    // NOP
    ctx->pc = 0x22f850u;
}
