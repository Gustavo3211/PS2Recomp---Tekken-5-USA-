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

// Function: sub_004CA350
// Address: 0x4ca350 - 0x4ca360
void sub_004CA350_0x4ca350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA350_0x4ca350");
#endif

    ctx->pc = 0x4ca350u;

    // 0x4ca350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca354: 0x8132938  j           func_4CA4E0
    ctx->pc = 0x4CA354u;
    ctx->pc = 0x4CA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA354u;
    // 0x4ca358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA4E0u, 0x4CA354u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CA35Cu;
    // 0x4ca35c: 0x0  nop
    ctx->pc = 0x4ca35cu;
    // NOP
    ctx->pc = 0x4ca360u;
}
