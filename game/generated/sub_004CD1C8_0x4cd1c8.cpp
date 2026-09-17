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

// Function: sub_004CD1C8
// Address: 0x4cd1c8 - 0x4cd1e0
void sub_004CD1C8_0x4cd1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD1C8_0x4cd1c8");
#endif

    ctx->pc = 0x4cd1c8u;

    // 0x4cd1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cd1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd1d8: 0x8133590  j           func_4CD640
    ctx->pc = 0x4CD1D8u;
    ctx->pc = 0x4CD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD1D8u;
    // 0x4cd1dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD640u, 0x4CD1D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CD1E0u;
}
