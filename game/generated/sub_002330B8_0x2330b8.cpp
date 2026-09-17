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

// Function: sub_002330B8
// Address: 0x2330b8 - 0x2330c8
void sub_002330B8_0x2330b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002330B8_0x2330b8");
#endif

    ctx->pc = 0x2330b8u;

    // 0x2330b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2330b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2330bc: 0x808ccc2  j           func_233308
    ctx->pc = 0x2330BCu;
    ctx->pc = 0x2330C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330BCu;
    // 0x2330c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233308u, 0x2330BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2330C4u;
    // 0x2330c4: 0x0  nop
    ctx->pc = 0x2330c4u;
    // NOP
    ctx->pc = 0x2330c8u;
}
