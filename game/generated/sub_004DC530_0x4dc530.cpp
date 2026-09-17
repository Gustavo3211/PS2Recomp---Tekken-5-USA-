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

// Function: sub_004DC530
// Address: 0x4dc530 - 0x4dc540
void sub_004DC530_0x4dc530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC530_0x4dc530");
#endif

    ctx->pc = 0x4dc530u;

    // 0x4dc530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc534: 0x8137228  j           func_4DC8A0
    ctx->pc = 0x4DC534u;
    ctx->pc = 0x4DC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC534u;
    // 0x4dc538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC8A0u, 0x4DC534u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC53Cu;
    // 0x4dc53c: 0x0  nop
    ctx->pc = 0x4dc53cu;
    // NOP
    ctx->pc = 0x4dc540u;
}
