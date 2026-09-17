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

// Function: sub_00124CA8
// Address: 0x124ca8 - 0x124cb0
void sub_00124CA8_0x124ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124CA8_0x124ca8");
#endif

    ctx->pc = 0x124ca8u;

    // 0x124ca8: 0xc049d4a  jal         func_127528
    ctx->pc = 0x124CA8u;
    SET_GPR_U32(ctx, 31, 0x124CB0u);
    ctx->pc = 0x127528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127528u, 0x124CA8u, 0x124CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CB0u;
}
