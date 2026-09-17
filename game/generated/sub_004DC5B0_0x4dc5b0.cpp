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

// Function: sub_004DC5B0
// Address: 0x4dc5b0 - 0x4dc5c0
void sub_004DC5B0_0x4dc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC5B0_0x4dc5b0");
#endif

    ctx->pc = 0x4dc5b0u;

    // 0x4dc5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc5b4: 0x81374be  j           func_4DD2F8
    ctx->pc = 0x4DC5B4u;
    ctx->pc = 0x4DC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC5B4u;
    // 0x4dc5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD2F8u, 0x4DC5B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC5BCu;
    // 0x4dc5bc: 0x0  nop
    ctx->pc = 0x4dc5bcu;
    // NOP
    ctx->pc = 0x4dc5c0u;
}
