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

// Function: sub_004D8BA0
// Address: 0x4d8ba0 - 0x4d8bb0
void sub_004D8BA0_0x4d8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8BA0_0x4d8ba0");
#endif

    ctx->pc = 0x4d8ba0u;

    // 0x4d8ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8ba4: 0x81363a2  j           func_4D8E88
    ctx->pc = 0x4D8BA4u;
    ctx->pc = 0x4D8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8BA4u;
    // 0x4d8ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8E88u, 0x4D8BA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D8BACu;
    // 0x4d8bac: 0x0  nop
    ctx->pc = 0x4d8bacu;
    // NOP
    ctx->pc = 0x4d8bb0u;
}
