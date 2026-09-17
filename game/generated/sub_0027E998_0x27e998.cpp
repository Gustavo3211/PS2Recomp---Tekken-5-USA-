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

// Function: sub_0027E998
// Address: 0x27e998 - 0x27e9b0
void sub_0027E998_0x27e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E998_0x27e998");
#endif

    ctx->pc = 0x27e998u;

    // 0x27e998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e9a4: 0x809e99c  j           func_27A670
    ctx->pc = 0x27E9A4u;
    ctx->pc = 0x27E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9A4u;
    // 0x27e9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A670u, 0x27E9A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x27E9ACu;
    // 0x27e9ac: 0x0  nop
    ctx->pc = 0x27e9acu;
    // NOP
    ctx->pc = 0x27e9b0u;
}
