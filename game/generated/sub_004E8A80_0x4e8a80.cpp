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

// Function: sub_004E8A80
// Address: 0x4e8a80 - 0x4e8aa0
void sub_004E8A80_0x4e8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8A80_0x4e8a80");
#endif

    switch (ctx->pc) {
        case 0x4e8a88u: goto label_4e8a88;
        default: break;
    }

    ctx->pc = 0x4e8a80u;

    // 0x4e8a80: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8A88u;
label_4e8a88:
    // 0x4e8a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e8a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e8a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e8a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8a94: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E8A94u;
    ctx->pc = 0x4E8A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8A94u;
    // 0x4e8a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E8A9Cu;
    // 0x4e8a9c: 0x0  nop
    ctx->pc = 0x4e8a9cu;
    // NOP
    ctx->pc = 0x4e8aa0u;
}
