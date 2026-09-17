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

// Function: sub_0033BC00
// Address: 0x33bc00 - 0x33bc10
void sub_0033BC00_0x33bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BC00_0x33bc00");
#endif

    ctx->pc = 0x33bc00u;

    // 0x33bc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bc04: 0x80cefbc  j           func_33BEF0
    ctx->pc = 0x33BC04u;
    ctx->pc = 0x33BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC04u;
    // 0x33bc08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BEF0u, 0x33BC04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BC0Cu;
    // 0x33bc0c: 0x0  nop
    ctx->pc = 0x33bc0cu;
    // NOP
    ctx->pc = 0x33bc10u;
}
