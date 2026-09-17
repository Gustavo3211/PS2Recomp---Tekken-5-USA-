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

// Function: sub_004DC5A0
// Address: 0x4dc5a0 - 0x4dc5b0
void sub_004DC5A0_0x4dc5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC5A0_0x4dc5a0");
#endif

    ctx->pc = 0x4dc5a0u;

    // 0x4dc5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc5a4: 0x81374a2  j           func_4DD288
    ctx->pc = 0x4DC5A4u;
    ctx->pc = 0x4DC5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC5A4u;
    // 0x4dc5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD288u, 0x4DC5A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC5ACu;
    // 0x4dc5ac: 0x0  nop
    ctx->pc = 0x4dc5acu;
    // NOP
    ctx->pc = 0x4dc5b0u;
}
