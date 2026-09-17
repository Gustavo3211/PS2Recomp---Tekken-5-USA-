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

// Function: sub_004DDD38
// Address: 0x4ddd38 - 0x4ddd48
void sub_004DDD38_0x4ddd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDD38_0x4ddd38");
#endif

    ctx->pc = 0x4ddd38u;

    // 0x4ddd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd3c: 0x8137764  j           func_4DDD90
    ctx->pc = 0x4DDD3Cu;
    ctx->pc = 0x4DDD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD3Cu;
    // 0x4ddd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDD90u, 0x4DDD3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDD44u;
    // 0x4ddd44: 0x0  nop
    ctx->pc = 0x4ddd44u;
    // NOP
    ctx->pc = 0x4ddd48u;
}
