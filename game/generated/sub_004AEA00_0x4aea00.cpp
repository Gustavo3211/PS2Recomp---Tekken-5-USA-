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

// Function: sub_004AEA00
// Address: 0x4aea00 - 0x4aea08
void sub_004AEA00_0x4aea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEA00_0x4aea00");
#endif

    ctx->pc = 0x4aea00u;

    // 0x4aea00: 0xc12ba4e  jal         func_4AE938
    ctx->pc = 0x4AEA00u;
    SET_GPR_U32(ctx, 31, 0x4AEA08u);
    ctx->pc = 0x4AE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE938u, 0x4AEA00u, 0x4AEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEA08u;
}
