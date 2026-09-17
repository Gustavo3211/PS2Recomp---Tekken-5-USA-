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

// Function: sub_002F6338
// Address: 0x2f6338 - 0x2f6348
void sub_002F6338_0x2f6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6338_0x2f6338");
#endif

    ctx->pc = 0x2f6338u;

    // 0x2f6338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f633c: 0x80bd7b2  j           func_2F5EC8
    ctx->pc = 0x2F633Cu;
    ctx->pc = 0x2F6340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F633Cu;
    // 0x2f6340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5EC8u, 0x2F633Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F6344u;
    // 0x2f6344: 0x0  nop
    ctx->pc = 0x2f6344u;
    // NOP
    ctx->pc = 0x2f6348u;
}
