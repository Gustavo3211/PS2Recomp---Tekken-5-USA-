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

// Function: sub_002229E0
// Address: 0x2229e0 - 0x2229f0
void sub_002229E0_0x2229e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002229E0_0x2229e0");
#endif

    switch (ctx->pc) {
        case 0x2229ecu: goto label_2229ec;
        default: break;
    }

    ctx->pc = 0x2229e0u;

    // 0x2229e0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2229e4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2229E4u;
    SET_GPR_U32(ctx, 31, 0x2229ECu);
    ctx->pc = 0x2229E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229E4u;
    // 0x2229e8: 0x2484fbb8  addiu       $a0, $a0, -0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2229E4u, 0x2229ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229ECu;
label_2229ec:
    // 0x2229ec: 0x0  nop
    ctx->pc = 0x2229ecu;
    // NOP
    ctx->pc = 0x2229f0u;
}
