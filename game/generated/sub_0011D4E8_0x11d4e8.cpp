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

// Function: sub_0011D4E8
// Address: 0x11d4e8 - 0x11d500
void sub_0011D4E8_0x11d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D4E8_0x11d4e8");
#endif

    ctx->pc = 0x11d4e8u;

    // 0x11d4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d4f4: 0x80477bc  j           func_11DEF0
    ctx->pc = 0x11D4F4u;
    ctx->pc = 0x11D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4F4u;
    // 0x11d4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEF0u, 0x11D4F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x11D4FCu;
    // 0x11d4fc: 0x0  nop
    ctx->pc = 0x11d4fcu;
    // NOP
    ctx->pc = 0x11d500u;
}
