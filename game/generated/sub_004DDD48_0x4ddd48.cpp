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

// Function: sub_004DDD48
// Address: 0x4ddd48 - 0x4ddd58
void sub_004DDD48_0x4ddd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDD48_0x4ddd48");
#endif

    ctx->pc = 0x4ddd48u;

    // 0x4ddd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd4c: 0x8137974  j           func_4DE5D0
    ctx->pc = 0x4DDD4Cu;
    ctx->pc = 0x4DDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD4Cu;
    // 0x4ddd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE5D0u, 0x4DDD4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDD54u;
    // 0x4ddd54: 0x0  nop
    ctx->pc = 0x4ddd54u;
    // NOP
    ctx->pc = 0x4ddd58u;
}
