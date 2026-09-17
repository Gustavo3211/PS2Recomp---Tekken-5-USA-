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

// Function: sub_002ED19C
// Address: 0x2ed19c - 0x2ed1b0
void sub_002ED19C_0x2ed19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED19C_0x2ed19c");
#endif

    ctx->pc = 0x2ed19cu;

    // 0x2ed19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1A4u;
        // 0x2ed1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED1ACu;
    // 0x2ed1ac: 0x0  nop
    ctx->pc = 0x2ed1acu;
    // NOP
    ctx->pc = 0x2ed1b0u;
}
