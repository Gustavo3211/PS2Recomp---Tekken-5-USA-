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

// Function: sub_004EEF10
// Address: 0x4eef10 - 0x4eef28
void sub_004EEF10_0x4eef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEF10_0x4eef10");
#endif

    ctx->pc = 0x4eef10u;

    // 0x4eef10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eef14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eef18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eef1c: 0x813bc62  j           func_4EF188
    ctx->pc = 0x4EEF1Cu;
    ctx->pc = 0x4EEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEF1Cu;
    // 0x4eef20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF188u, 0x4EEF1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EEF24u;
    // 0x4eef24: 0x0  nop
    ctx->pc = 0x4eef24u;
    // NOP
    ctx->pc = 0x4eef28u;
}
