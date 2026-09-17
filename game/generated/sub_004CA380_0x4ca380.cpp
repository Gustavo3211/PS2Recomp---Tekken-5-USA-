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

// Function: sub_004CA380
// Address: 0x4ca380 - 0x4ca390
void sub_004CA380_0x4ca380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA380_0x4ca380");
#endif

    ctx->pc = 0x4ca380u;

    // 0x4ca380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca384: 0x8132a84  j           func_4CAA10
    ctx->pc = 0x4CA384u;
    ctx->pc = 0x4CA388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA384u;
    // 0x4ca388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CAA10u, 0x4CA384u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CA38Cu;
    // 0x4ca38c: 0x0  nop
    ctx->pc = 0x4ca38cu;
    // NOP
    ctx->pc = 0x4ca390u;
}
