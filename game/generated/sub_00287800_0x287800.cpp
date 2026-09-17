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

// Function: sub_00287800
// Address: 0x287800 - 0x287810
void sub_00287800_0x287800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287800_0x287800");
#endif

    switch (ctx->pc) {
        case 0x287804u: goto label_287804;
        default: break;
    }

    ctx->pc = 0x287800u;

    // 0x287800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_287804:
    // 0x287804: 0x3e00008  jr          $ra
    ctx->pc = 0x287804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287804u;
        // 0x287808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28780Cu;
    // 0x28780c: 0x0  nop
    ctx->pc = 0x28780cu;
    // NOP
    ctx->pc = 0x287810u;
}
