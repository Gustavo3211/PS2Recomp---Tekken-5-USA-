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

// Function: sub_0050D890
// Address: 0x50d890 - 0x50d8a0
void sub_0050D890_0x50d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D890_0x50d890");
#endif

    ctx->pc = 0x50d890u;

    // 0x50d890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d894: 0x8143b78  j           func_50EDE0
    ctx->pc = 0x50D894u;
    ctx->pc = 0x50D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D894u;
    // 0x50d898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50EDE0u, 0x50D894u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50D89Cu;
    // 0x50d89c: 0x0  nop
    ctx->pc = 0x50d89cu;
    // NOP
    ctx->pc = 0x50d8a0u;
}
