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

// Function: sub_0048FEB0
// Address: 0x48feb0 - 0x48feb8
void sub_0048FEB0_0x48feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FEB0_0x48feb0");
#endif

    ctx->pc = 0x48feb0u;

    // 0x48feb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48FEB0u;
    {
        const bool branch_taken_0x48feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FEB0u;
        // 0x48feb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48feb0) {
            ctx->pc = 0x48FEBCu;
            return;
        }
    }
    ctx->pc = 0x48FEB8u;
}
