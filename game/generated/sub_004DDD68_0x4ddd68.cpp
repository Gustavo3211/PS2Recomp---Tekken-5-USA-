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

// Function: sub_004DDD68
// Address: 0x4ddd68 - 0x4ddd78
void sub_004DDD68_0x4ddd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDD68_0x4ddd68");
#endif

    ctx->pc = 0x4ddd68u;

    // 0x4ddd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd6c: 0x813776a  j           func_4DDDA8
    ctx->pc = 0x4DDD6Cu;
    ctx->pc = 0x4DDD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD6Cu;
    // 0x4ddd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDDA8u, 0x4DDD6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDD74u;
    // 0x4ddd74: 0x0  nop
    ctx->pc = 0x4ddd74u;
    // NOP
    ctx->pc = 0x4ddd78u;
}
