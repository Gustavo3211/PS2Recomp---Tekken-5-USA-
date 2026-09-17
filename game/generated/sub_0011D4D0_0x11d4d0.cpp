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

// Function: sub_0011D4D0
// Address: 0x11d4d0 - 0x11d4e8
void sub_0011D4D0_0x11d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D4D0_0x11d4d0");
#endif

    ctx->pc = 0x11d4d0u;

    // 0x11d4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d4dc: 0x8047744  j           func_11DD10
    ctx->pc = 0x11D4DCu;
    ctx->pc = 0x11D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4DCu;
    // 0x11d4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD10u, 0x11D4DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x11D4E4u;
    // 0x11d4e4: 0x0  nop
    ctx->pc = 0x11d4e4u;
    // NOP
    ctx->pc = 0x11d4e8u;
}
