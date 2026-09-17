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

// Function: sub_00254F3C
// Address: 0x254f3c - 0x254f40
void sub_00254F3C_0x254f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F3C_0x254f3c");
#endif

    ctx->pc = 0x254f3cu;

    // 0x254f3c: 0x0  nop
    ctx->pc = 0x254f3cu;
    // NOP
    ctx->pc = 0x254f40u;
}
