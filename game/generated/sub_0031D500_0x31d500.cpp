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

// Function: sub_0031D500
// Address: 0x31d500 - 0x31d520
void sub_0031D500_0x31d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D500_0x31d500");
#endif

    switch (ctx->pc) {
        case 0x31d510u: goto label_31d510;
        default: break;
    }

    ctx->pc = 0x31d500u;

    // 0x31d500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d508: 0xc0ce694  jal         func_339A50
    ctx->pc = 0x31D508u;
    SET_GPR_U32(ctx, 31, 0x31D510u);
    ctx->pc = 0x31D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D508u;
    // 0x31d50c: 0x248401ac  addiu       $a0, $a0, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A50u, 0x31D508u, 0x31D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D510u;
label_31d510:
    // 0x31d510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d514: 0x3e00008  jr          $ra
    ctx->pc = 0x31D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D514u;
        // 0x31d518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D51Cu;
    // 0x31d51c: 0x0  nop
    ctx->pc = 0x31d51cu;
    // NOP
    ctx->pc = 0x31d520u;
}
