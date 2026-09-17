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

// Function: sub_0011D500
// Address: 0x11d500 - 0x11d518
void sub_0011D500_0x11d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D500_0x11d500");
#endif

    ctx->pc = 0x11d500u;

    // 0x11d500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d50c: 0x8047830  j           func_11E0C0
    ctx->pc = 0x11D50Cu;
    ctx->pc = 0x11D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D50Cu;
    // 0x11d510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0C0u, 0x11D50Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x11D514u;
    // 0x11d514: 0x0  nop
    ctx->pc = 0x11d514u;
    // NOP
    ctx->pc = 0x11d518u;
}
