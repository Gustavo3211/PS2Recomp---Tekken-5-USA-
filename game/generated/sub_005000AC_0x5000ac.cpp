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

// Function: sub_005000AC
// Address: 0x5000ac - 0x5000b0
void sub_005000AC_0x5000ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005000AC_0x5000ac");
#endif

    ctx->pc = 0x5000acu;

    // 0x5000ac: 0x0  nop
    ctx->pc = 0x5000acu;
    // NOP
    ctx->pc = 0x5000b0u;
}
