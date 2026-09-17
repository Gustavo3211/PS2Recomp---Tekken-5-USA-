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

// Function: sub_004C5808
// Address: 0x4c5808 - 0x4c5818
void sub_004C5808_0x4c5808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5808_0x4c5808");
#endif

    ctx->pc = 0x4c5808u;

    // 0x4c5808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c5808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c580c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4c580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5810: 0x81315ce  j           func_4C5738
    ctx->pc = 0x4C5810u;
    ctx->pc = 0x4C5814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5810u;
    // 0x4c5814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5738u, 0x4C5810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C5818u;
}
