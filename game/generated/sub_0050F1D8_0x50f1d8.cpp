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

// Function: sub_0050F1D8
// Address: 0x50f1d8 - 0x50f1e8
void sub_0050F1D8_0x50f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F1D8_0x50f1d8");
#endif

    ctx->pc = 0x50f1d8u;

    // 0x50f1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f1dc: 0x8143c5e  j           func_50F178
    ctx->pc = 0x50F1DCu;
    ctx->pc = 0x50F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F1DCu;
    // 0x50f1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F178u, 0x50F1DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50F1E4u;
    // 0x50f1e4: 0x0  nop
    ctx->pc = 0x50f1e4u;
    // NOP
    ctx->pc = 0x50f1e8u;
}
