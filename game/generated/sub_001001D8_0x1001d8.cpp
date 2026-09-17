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

// Function: sub_001001D8
// Address: 0x1001d8 - 0x1001e0
void sub_001001D8_0x1001d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001D8_0x1001d8");
#endif

    ctx->pc = 0x1001d8u;

    // 0x1001d8: 0x8046418  j           func_119060
    ctx->pc = 0x1001D8u;
    ctx->pc = 0x119060u;
    sub_00119060_0x119060(rdram, ctx, runtime); return;
    ctx->pc = 0x1001E0u;
}
