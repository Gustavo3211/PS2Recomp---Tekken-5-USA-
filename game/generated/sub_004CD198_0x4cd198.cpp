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

// Function: sub_004CD198
// Address: 0x4cd198 - 0x4cd1b0
void sub_004CD198_0x4cd198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD198_0x4cd198");
#endif

    ctx->pc = 0x4cd198u;

    // 0x4cd198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cd198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd1a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd1a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd1a8: 0x81334a2  j           func_4CD288
    ctx->pc = 0x4CD1A8u;
    ctx->pc = 0x4CD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD1A8u;
    // 0x4cd1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD288u, 0x4CD1A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CD1B0u;
}
