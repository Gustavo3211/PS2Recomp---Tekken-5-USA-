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

// Function: sub_0050AF30
// Address: 0x50af30 - 0x50af40
void sub_0050AF30_0x50af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AF30_0x50af30");
#endif

    ctx->pc = 0x50af30u;

    // 0x50af30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50af30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50af34: 0x81448a2  j           func_512288
    ctx->pc = 0x50AF34u;
    ctx->pc = 0x50AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AF34u;
    // 0x50af38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512288u, 0x50AF34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50AF3Cu;
    // 0x50af3c: 0x0  nop
    ctx->pc = 0x50af3cu;
    // NOP
    ctx->pc = 0x50af40u;
}
