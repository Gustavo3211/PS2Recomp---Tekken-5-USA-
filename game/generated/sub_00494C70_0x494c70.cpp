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

// Function: sub_00494C70
// Address: 0x494c70 - 0x494c80
void sub_00494C70_0x494c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494C70_0x494c70");
#endif

    ctx->pc = 0x494c70u;

    // 0x494c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494c74: 0x812502a  j           func_4940A8
    ctx->pc = 0x494C74u;
    ctx->pc = 0x494C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494C74u;
    // 0x494c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4940A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4940A8u, 0x494C74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x494C7Cu;
    // 0x494c7c: 0x0  nop
    ctx->pc = 0x494c7cu;
    // NOP
    ctx->pc = 0x494c80u;
}
