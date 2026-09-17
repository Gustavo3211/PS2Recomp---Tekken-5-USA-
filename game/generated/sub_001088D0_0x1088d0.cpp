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

// Function: sub_001088D0
// Address: 0x1088d0 - 0x1088d8
void sub_001088D0_0x1088d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001088D0_0x1088d0");
#endif

    ctx->pc = 0x1088d0u;

    // 0x1088d0: 0x8042200  j           func_108800
    ctx->pc = 0x1088D0u;
    ctx->pc = 0x108800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108800u, 0x1088D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1088D8u;
}
