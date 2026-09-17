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

// Function: sub_0048E648
// Address: 0x48e648 - 0x48e660
void sub_0048E648_0x48e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E648_0x48e648");
#endif

    ctx->pc = 0x48e648u;

    // 0x48e648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e654: 0x8124b0c  j           func_492C30
    ctx->pc = 0x48E654u;
    ctx->pc = 0x48E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E654u;
    // 0x48e658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492C30u, 0x48E654u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48E65Cu;
    // 0x48e65c: 0x0  nop
    ctx->pc = 0x48e65cu;
    // NOP
    ctx->pc = 0x48e660u;
}
