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

// Function: sub_00344E38
// Address: 0x344e38 - 0x344e40
void sub_00344E38_0x344e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344E38_0x344e38");
#endif

    ctx->pc = 0x344e38u;

    // 0x344e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x344E38u;
    {
        const bool branch_taken_0x344e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E38u;
        // 0x344e3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e38) {
            ctx->pc = 0x344E44u;
            return;
        }
    }
    ctx->pc = 0x344E40u;
}
