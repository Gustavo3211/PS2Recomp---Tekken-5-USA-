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

// Function: sub_004C9BF8
// Address: 0x4c9bf8 - 0x4c9c00
void sub_004C9BF8_0x4c9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9BF8_0x4c9bf8");
#endif

    ctx->pc = 0x4c9bf8u;

    // 0x4c9bf8: 0xc132712  jal         func_4C9C48
    ctx->pc = 0x4C9BF8u;
    SET_GPR_U32(ctx, 31, 0x4C9C00u);
    ctx->pc = 0x4C9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9BF8u;
    // 0x4c9bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C48u, 0x4C9BF8u, 0x4C9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9C00u;
}
