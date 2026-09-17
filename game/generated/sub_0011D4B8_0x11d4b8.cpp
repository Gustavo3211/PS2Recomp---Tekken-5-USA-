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

// Function: sub_0011D4B8
// Address: 0x11d4b8 - 0x11d4d0
void sub_0011D4B8_0x11d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D4B8_0x11d4b8");
#endif

    ctx->pc = 0x11d4b8u;

    // 0x11d4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d4c4: 0x804765c  j           func_11D970
    ctx->pc = 0x11D4C4u;
    ctx->pc = 0x11D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4C4u;
    // 0x11d4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D970u, 0x11D4C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x11D4CCu;
    // 0x11d4cc: 0x0  nop
    ctx->pc = 0x11d4ccu;
    // NOP
    ctx->pc = 0x11d4d0u;
}
