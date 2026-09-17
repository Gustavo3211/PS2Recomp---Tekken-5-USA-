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

// Function: sub_0048B4D0
// Address: 0x48b4d0 - 0x48b4e0
void sub_0048B4D0_0x48b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B4D0_0x48b4d0");
#endif

    ctx->pc = 0x48b4d0u;

    // 0x48b4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b4d4: 0x8122d5e  j           func_48B578
    ctx->pc = 0x48B4D4u;
    ctx->pc = 0x48B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B4D4u;
    // 0x48b4d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B578u, 0x48B4D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48B4DCu;
    // 0x48b4dc: 0x0  nop
    ctx->pc = 0x48b4dcu;
    // NOP
    ctx->pc = 0x48b4e0u;
}
