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

// Function: sub_0048B4C0
// Address: 0x48b4c0 - 0x48b4d0
void sub_0048B4C0_0x48b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B4C0_0x48b4c0");
#endif

    ctx->pc = 0x48b4c0u;

    // 0x48b4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b4c4: 0x8122d5c  j           func_48B570
    ctx->pc = 0x48B4C4u;
    ctx->pc = 0x48B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B4C4u;
    // 0x48b4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B570u, 0x48B4C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48B4CCu;
    // 0x48b4cc: 0x0  nop
    ctx->pc = 0x48b4ccu;
    // NOP
    ctx->pc = 0x48b4d0u;
}
