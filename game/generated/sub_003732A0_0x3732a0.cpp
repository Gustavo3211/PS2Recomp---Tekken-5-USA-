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

// Function: sub_003732A0
// Address: 0x3732a0 - 0x3732a8
void sub_003732A0_0x3732a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003732A0_0x3732a0");
#endif

    ctx->pc = 0x3732a0u;

    // 0x3732a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3732A0u;
    {
        const bool branch_taken_0x3732a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3732A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3732A0u;
        // 0x3732a4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3732a0) {
            ctx->pc = 0x3732B4u;
            return;
        }
    }
    ctx->pc = 0x3732A8u;
}
