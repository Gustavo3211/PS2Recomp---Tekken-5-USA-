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

// Function: sub_004DC580
// Address: 0x4dc580 - 0x4dc590
void sub_004DC580_0x4dc580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC580_0x4dc580");
#endif

    ctx->pc = 0x4dc580u;

    // 0x4dc580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc584: 0x813717a  j           func_4DC5E8
    ctx->pc = 0x4DC584u;
    ctx->pc = 0x4DC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC584u;
    // 0x4dc588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC5E8u, 0x4DC584u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC58Cu;
    // 0x4dc58c: 0x0  nop
    ctx->pc = 0x4dc58cu;
    // NOP
    ctx->pc = 0x4dc590u;
}
