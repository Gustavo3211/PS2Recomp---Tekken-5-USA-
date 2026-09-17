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

// Function: sub_0033BC20
// Address: 0x33bc20 - 0x33bc30
void sub_0033BC20_0x33bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BC20_0x33bc20");
#endif

    ctx->pc = 0x33bc20u;

    // 0x33bc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bc24: 0x80cefbc  j           func_33BEF0
    ctx->pc = 0x33BC24u;
    ctx->pc = 0x33BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC24u;
    // 0x33bc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BEF0u, 0x33BC24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BC2Cu;
    // 0x33bc2c: 0x0  nop
    ctx->pc = 0x33bc2cu;
    // NOP
    ctx->pc = 0x33bc30u;
}
