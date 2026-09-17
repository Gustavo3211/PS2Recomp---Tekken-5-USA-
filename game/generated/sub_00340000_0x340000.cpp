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

// Function: sub_00340000
// Address: 0x340000 - 0x340008
void sub_00340000_0x340000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340000_0x340000");
#endif

    ctx->pc = 0x340000u;

    // 0x340000: 0x80c88e6  j           func_322398
    ctx->pc = 0x340000u;
    ctx->pc = 0x340004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340000u;
    // 0x340004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322398u;
    sub_00322398_0x322398(rdram, ctx, runtime); return;
    ctx->pc = 0x340008u;
}
