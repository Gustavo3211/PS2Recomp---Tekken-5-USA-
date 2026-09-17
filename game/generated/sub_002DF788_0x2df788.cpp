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

// Function: sub_002DF788
// Address: 0x2df788 - 0x2df798
void sub_002DF788_0x2df788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF788_0x2df788");
#endif

    switch (ctx->pc) {
        case 0x2df794u: goto label_2df794;
        default: break;
    }

    ctx->pc = 0x2df788u;

    // 0x2df788: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2df788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2df78c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2DF78Cu;
    SET_GPR_U32(ctx, 31, 0x2DF794u);
    ctx->pc = 0x2DF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF78Cu;
    // 0x2df790: 0x248402d8  addiu       $a0, $a0, 0x2D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DF78Cu, 0x2DF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF794u;
label_2df794:
    // 0x2df794: 0x0  nop
    ctx->pc = 0x2df794u;
    // NOP
    ctx->pc = 0x2df798u;
}
