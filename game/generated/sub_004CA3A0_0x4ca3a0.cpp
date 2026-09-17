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

// Function: sub_004CA3A0
// Address: 0x4ca3a0 - 0x4ca3b0
void sub_004CA3A0_0x4ca3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA3A0_0x4ca3a0");
#endif

    ctx->pc = 0x4ca3a0u;

    // 0x4ca3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca3a4: 0x8132aac  j           func_4CAAB0
    ctx->pc = 0x4CA3A4u;
    ctx->pc = 0x4CA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA3A4u;
    // 0x4ca3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CAAB0u, 0x4CA3A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CA3ACu;
    // 0x4ca3ac: 0x0  nop
    ctx->pc = 0x4ca3acu;
    // NOP
    ctx->pc = 0x4ca3b0u;
}
