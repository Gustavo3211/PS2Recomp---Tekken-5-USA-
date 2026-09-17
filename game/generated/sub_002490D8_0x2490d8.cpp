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

// Function: sub_002490D8
// Address: 0x2490d8 - 0x2490f0
void sub_002490D8_0x2490d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002490D8_0x2490d8");
#endif

    ctx->pc = 0x2490d8u;

    // 0x2490d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2490d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2490dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2490dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2490e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2490e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2490e4: 0x80d68ae  j           func_35A2B8
    ctx->pc = 0x2490E4u;
    ctx->pc = 0x2490E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490E4u;
    // 0x2490e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A2B8u, 0x2490E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2490ECu;
    // 0x2490ec: 0x0  nop
    ctx->pc = 0x2490ecu;
    // NOP
    ctx->pc = 0x2490f0u;
}
