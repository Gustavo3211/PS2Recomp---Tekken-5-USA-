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

// Function: sub_0050AFE0
// Address: 0x50afe0 - 0x50aff0
void sub_0050AFE0_0x50afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AFE0_0x50afe0");
#endif

    ctx->pc = 0x50afe0u;

    // 0x50afe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50afe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50afe4: 0x81419f4  j           func_5067D0
    ctx->pc = 0x50AFE4u;
    ctx->pc = 0x50AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AFE4u;
    // 0x50afe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5067D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5067D0u, 0x50AFE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50AFECu;
    // 0x50afec: 0x0  nop
    ctx->pc = 0x50afecu;
    // NOP
    ctx->pc = 0x50aff0u;
}
