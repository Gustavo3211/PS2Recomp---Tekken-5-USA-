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

// Function: sub_0050F1F8
// Address: 0x50f1f8 - 0x50f208
void sub_0050F1F8_0x50f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F1F8_0x50f1f8");
#endif

    ctx->pc = 0x50f1f8u;

    // 0x50f1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f1fc: 0x8143c62  j           func_50F188
    ctx->pc = 0x50F1FCu;
    ctx->pc = 0x50F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F1FCu;
    // 0x50f200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F188u, 0x50F1FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50F204u;
    // 0x50f204: 0x0  nop
    ctx->pc = 0x50f204u;
    // NOP
    ctx->pc = 0x50f208u;
}
