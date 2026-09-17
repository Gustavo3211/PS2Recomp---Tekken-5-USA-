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

// Function: sub_004991C0
// Address: 0x4991c0 - 0x4991d0
void sub_004991C0_0x4991c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004991C0_0x4991c0");
#endif

    ctx->pc = 0x4991c0u;

    // 0x4991c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4991c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4991c4: 0x812615a  j           func_498568
    ctx->pc = 0x4991C4u;
    ctx->pc = 0x4991C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4991C4u;
    // 0x4991c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498568u, 0x4991C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4991CCu;
    // 0x4991cc: 0x0  nop
    ctx->pc = 0x4991ccu;
    // NOP
    ctx->pc = 0x4991d0u;
}
