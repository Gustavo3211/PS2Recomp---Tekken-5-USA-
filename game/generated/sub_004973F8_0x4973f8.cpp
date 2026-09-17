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

// Function: sub_004973F8
// Address: 0x4973f8 - 0x497400
void sub_004973F8_0x4973f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004973F8_0x4973f8");
#endif

    ctx->pc = 0x4973f8u;

    // 0x4973f8: 0xc125c0e  jal         func_497038
    ctx->pc = 0x4973F8u;
    SET_GPR_U32(ctx, 31, 0x497400u);
    ctx->pc = 0x497038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497038u, 0x4973F8u, 0x497400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497400u;
}
