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

// Function: sub_004DB808
// Address: 0x4db808 - 0x4db820
void sub_004DB808_0x4db808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB808_0x4db808");
#endif

    ctx->pc = 0x4db808u;

    // 0x4db808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db818: 0x8136e6c  j           func_4DB9B0
    ctx->pc = 0x4DB818u;
    ctx->pc = 0x4DB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB818u;
    // 0x4db81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB9B0u, 0x4DB818u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB820u;
}
