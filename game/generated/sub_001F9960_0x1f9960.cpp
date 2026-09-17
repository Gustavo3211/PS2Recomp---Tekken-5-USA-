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

// Function: sub_001F9960
// Address: 0x1f9960 - 0x1f9968
void sub_001F9960_0x1f9960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9960_0x1f9960");
#endif

    ctx->pc = 0x1f9960u;

    // 0x1f9960: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9960u;
    {
        const bool branch_taken_0x1f9960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9960u;
        // 0x1f9964: 0x24020274  addiu       $v0, $zero, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9960) {
            ctx->pc = 0x1F996Cu;
            return;
        }
    }
    ctx->pc = 0x1F9968u;
}
