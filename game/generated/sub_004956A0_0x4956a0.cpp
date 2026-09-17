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

// Function: sub_004956A0
// Address: 0x4956a0 - 0x4956b0
void sub_004956A0_0x4956a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004956A0_0x4956a0");
#endif

    ctx->pc = 0x4956a0u;

    // 0x4956a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4956a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4956a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4956a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4956a8: 0x812515e  j           func_494578
    ctx->pc = 0x4956A8u;
    ctx->pc = 0x4956ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4956A8u;
    // 0x4956ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494578u, 0x4956A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4956B0u;
}
