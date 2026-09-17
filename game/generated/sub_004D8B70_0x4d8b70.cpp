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

// Function: sub_004D8B70
// Address: 0x4d8b70 - 0x4d8b80
void sub_004D8B70_0x4d8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8B70_0x4d8b70");
#endif

    ctx->pc = 0x4d8b70u;

    // 0x4d8b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8b74: 0x8136338  j           func_4D8CE0
    ctx->pc = 0x4D8B74u;
    ctx->pc = 0x4D8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8B74u;
    // 0x4d8b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8CE0u, 0x4D8B74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D8B7Cu;
    // 0x4d8b7c: 0x0  nop
    ctx->pc = 0x4d8b7cu;
    // NOP
    ctx->pc = 0x4d8b80u;
}
