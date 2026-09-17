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

// Function: sub_0048CB58
// Address: 0x48cb58 - 0x48cb68
void sub_0048CB58_0x48cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB58_0x48cb58");
#endif

    ctx->pc = 0x48cb58u;

    // 0x48cb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48cb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cb5c: 0x8123266  j           func_48C998
    ctx->pc = 0x48CB5Cu;
    ctx->pc = 0x48CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CB5Cu;
    // 0x48cb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C998u, 0x48CB5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48CB64u;
    // 0x48cb64: 0x0  nop
    ctx->pc = 0x48cb64u;
    // NOP
    ctx->pc = 0x48cb68u;
}
