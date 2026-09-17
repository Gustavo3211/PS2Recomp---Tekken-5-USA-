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

// Function: sub_0011D518
// Address: 0x11d518 - 0x11d530
void sub_0011D518_0x11d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D518_0x11d518");
#endif

    ctx->pc = 0x11d518u;

    // 0x11d518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d524: 0x80478e8  j           func_11E3A0
    ctx->pc = 0x11D524u;
    ctx->pc = 0x11D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D524u;
    // 0x11d528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3A0u, 0x11D524u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x11D52Cu;
    // 0x11d52c: 0x0  nop
    ctx->pc = 0x11d52cu;
    // NOP
    ctx->pc = 0x11d530u;
}
