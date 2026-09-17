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

// Function: sub_00363070
// Address: 0x363070 - 0x363088
void sub_00363070_0x363070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363070_0x363070");
#endif

    ctx->pc = 0x363070u;

    // 0x363070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36307c: 0x80d6dc2  j           func_35B708
    ctx->pc = 0x36307Cu;
    ctx->pc = 0x363080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36307Cu;
    // 0x363080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B708u, 0x36307Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x363084u;
    // 0x363084: 0x0  nop
    ctx->pc = 0x363084u;
    // NOP
    ctx->pc = 0x363088u;
}
