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

// Function: sub_004DDD58
// Address: 0x4ddd58 - 0x4ddd68
void sub_004DDD58_0x4ddd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDD58_0x4ddd58");
#endif

    ctx->pc = 0x4ddd58u;

    // 0x4ddd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddd5c: 0x8137990  j           func_4DE640
    ctx->pc = 0x4DDD5Cu;
    ctx->pc = 0x4DDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDD5Cu;
    // 0x4ddd60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE640u, 0x4DDD5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDD64u;
    // 0x4ddd64: 0x0  nop
    ctx->pc = 0x4ddd64u;
    // NOP
    ctx->pc = 0x4ddd68u;
}
