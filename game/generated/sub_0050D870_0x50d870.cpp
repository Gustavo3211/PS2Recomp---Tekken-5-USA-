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

// Function: sub_0050D870
// Address: 0x50d870 - 0x50d880
void sub_0050D870_0x50d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D870_0x50d870");
#endif

    ctx->pc = 0x50d870u;

    // 0x50d870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d874: 0x8142e34  j           func_50B8D0
    ctx->pc = 0x50D874u;
    ctx->pc = 0x50D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D874u;
    // 0x50d878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B8D0u, 0x50D874u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50D87Cu;
    // 0x50d87c: 0x0  nop
    ctx->pc = 0x50d87cu;
    // NOP
    ctx->pc = 0x50d880u;
}
