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

// Function: sub_0023DB28
// Address: 0x23db28 - 0x23db30
void sub_0023DB28_0x23db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB28_0x23db28");
#endif

    ctx->pc = 0x23db28u;

    // 0x23db28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23DB28u;
    {
        const bool branch_taken_0x23db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB28u;
        // 0x23db2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db28) {
            ctx->pc = 0x23DB34u;
            return;
        }
    }
    ctx->pc = 0x23DB30u;
}
