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

// Function: sub_002CBBF8
// Address: 0x2cbbf8 - 0x2cbc00
void sub_002CBBF8_0x2cbbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBBF8_0x2cbbf8");
#endif

    ctx->pc = 0x2cbbf8u;

    // 0x2cbbf8: 0xc0b33fe  jal         func_2CCFF8
    ctx->pc = 0x2CBBF8u;
    SET_GPR_U32(ctx, 31, 0x2CBC00u);
    ctx->pc = 0x2CBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBF8u;
    // 0x2cbbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFF8u, 0x2CBBF8u, 0x2CBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC00u;
}
