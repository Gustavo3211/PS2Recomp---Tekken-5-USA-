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

// Function: sub_00226770
// Address: 0x226770 - 0x226788
void sub_00226770_0x226770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226770_0x226770");
#endif

    ctx->pc = 0x226770u;

    // 0x226770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22677c: 0x80899c8  j           func_226720
    ctx->pc = 0x22677Cu;
    ctx->pc = 0x226780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22677Cu;
    // 0x226780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226720u, 0x22677Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x226784u;
    // 0x226784: 0x0  nop
    ctx->pc = 0x226784u;
    // NOP
    ctx->pc = 0x226788u;
}
