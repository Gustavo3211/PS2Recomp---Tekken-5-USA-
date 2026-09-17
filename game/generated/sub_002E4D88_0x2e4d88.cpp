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

// Function: sub_002E4D88
// Address: 0x2e4d88 - 0x2e4da0
void sub_002E4D88_0x2e4d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4D88_0x2e4d88");
#endif

    ctx->pc = 0x2e4d88u;

    // 0x2e4d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4d90: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x2e4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2e4d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4d98: 0x80b93be  j           func_2E4EF8
    ctx->pc = 0x2E4D98u;
    ctx->pc = 0x2E4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D98u;
    // 0x2e4d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EF8u, 0x2E4D98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E4DA0u;
}
