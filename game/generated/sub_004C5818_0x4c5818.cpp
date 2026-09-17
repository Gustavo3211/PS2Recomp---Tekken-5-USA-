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

// Function: sub_004C5818
// Address: 0x4c5818 - 0x4c5828
void sub_004C5818_0x4c5818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5818_0x4c5818");
#endif

    switch (ctx->pc) {
        case 0x4c581cu: goto label_4c581c;
        default: break;
    }

    ctx->pc = 0x4c5818u;

    // 0x4c5818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c5818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c581c:
    // 0x4c581c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C581Cu;
        // 0x4c5820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C5824u;
    // 0x4c5824: 0x0  nop
    ctx->pc = 0x4c5824u;
    // NOP
    ctx->pc = 0x4c5828u;
}
