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

// Function: sub_0033BC40
// Address: 0x33bc40 - 0x33bc50
void sub_0033BC40_0x33bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BC40_0x33bc40");
#endif

    ctx->pc = 0x33bc40u;

    // 0x33bc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bc44: 0x80cef94  j           func_33BE50
    ctx->pc = 0x33BC44u;
    ctx->pc = 0x33BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC44u;
    // 0x33bc48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BE50u, 0x33BC44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BC4Cu;
    // 0x33bc4c: 0x0  nop
    ctx->pc = 0x33bc4cu;
    // NOP
    ctx->pc = 0x33bc50u;
}
