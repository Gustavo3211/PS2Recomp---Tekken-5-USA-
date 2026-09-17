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

// Function: sub_0033BC10
// Address: 0x33bc10 - 0x33bc20
void sub_0033BC10_0x33bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BC10_0x33bc10");
#endif

    ctx->pc = 0x33bc10u;

    // 0x33bc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bc14: 0x80cef52  j           func_33BD48
    ctx->pc = 0x33BC14u;
    ctx->pc = 0x33BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC14u;
    // 0x33bc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD48u, 0x33BC14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BC1Cu;
    // 0x33bc1c: 0x0  nop
    ctx->pc = 0x33bc1cu;
    // NOP
    ctx->pc = 0x33bc20u;
}
