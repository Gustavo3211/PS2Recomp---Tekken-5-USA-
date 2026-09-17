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

// Function: sub_0010AA00
// Address: 0x10aa00 - 0x10aa08
void sub_0010AA00_0x10aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AA00_0x10aa00");
#endif

    ctx->pc = 0x10aa00u;

    // 0x10aa00: 0x8042200  j           func_108800
    ctx->pc = 0x10AA00u;
    ctx->pc = 0x108800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108800u, 0x10AA00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x10AA08u;
}
