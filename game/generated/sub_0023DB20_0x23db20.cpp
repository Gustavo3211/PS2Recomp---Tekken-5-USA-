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

// Function: sub_0023DB20
// Address: 0x23db20 - 0x23db28
void sub_0023DB20_0x23db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB20_0x23db20");
#endif

    ctx->pc = 0x23db20u;

    // 0x23db20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23DB20u;
    {
        const bool branch_taken_0x23db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB20u;
        // 0x23db24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db20) {
            ctx->pc = 0x23DB34u;
            return;
        }
    }
    ctx->pc = 0x23DB28u;
}
