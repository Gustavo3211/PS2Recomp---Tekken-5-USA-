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

// Function: sub_002E2158
// Address: 0x2e2158 - 0x2e2170
void sub_002E2158_0x2e2158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2158_0x2e2158");
#endif

    ctx->pc = 0x2e2158u;

    // 0x2e2158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e215c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e215cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2164: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2164u;
        // 0x2e2168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E216Cu;
    // 0x2e216c: 0x0  nop
    ctx->pc = 0x2e216cu;
    // NOP
    ctx->pc = 0x2e2170u;
}
