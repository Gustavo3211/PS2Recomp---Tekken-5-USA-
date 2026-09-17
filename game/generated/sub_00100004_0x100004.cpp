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

// Function: sub_00100004
// Address: 0x100004 - 0x100008
void sub_00100004_0x100004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100004_0x100004");
#endif

    ctx->pc = 0x100004u;

    // 0x100004: 0x0  nop
    ctx->pc = 0x100004u;
    // NOP
    ctx->pc = 0x100008u;
}
