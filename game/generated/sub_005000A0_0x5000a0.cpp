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

// Function: sub_005000A0
// Address: 0x5000a0 - 0x5000ac
void sub_005000A0_0x5000a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005000A0_0x5000a0");
#endif

    ctx->pc = 0x5000a0u;

    // 0x5000a0: 0x0  nop
    ctx->pc = 0x5000a0u;
    // NOP
    // 0x5000a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5000A4u;
    {
        const bool branch_taken_0x5000a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5000a4) {
            ctx->pc = 0x500090u;
            return;
        }
    }
    ctx->pc = 0x5000ACu;
}
