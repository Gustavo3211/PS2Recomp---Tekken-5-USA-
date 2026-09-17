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

// Function: sub_0048CB38
// Address: 0x48cb38 - 0x48cb48
void sub_0048CB38_0x48cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB38_0x48cb38");
#endif

    ctx->pc = 0x48cb38u;

    // 0x48cb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48cb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cb3c: 0x8123258  j           func_48C960
    ctx->pc = 0x48CB3Cu;
    ctx->pc = 0x48CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CB3Cu;
    // 0x48cb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C960u, 0x48CB3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48CB44u;
    // 0x48cb44: 0x0  nop
    ctx->pc = 0x48cb44u;
    // NOP
    ctx->pc = 0x48cb48u;
}
