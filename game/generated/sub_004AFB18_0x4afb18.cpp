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

// Function: sub_004AFB18
// Address: 0x4afb18 - 0x4afb20
void sub_004AFB18_0x4afb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB18_0x4afb18");
#endif

    ctx->pc = 0x4afb18u;

    // 0x4afb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afb1c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4afb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    ctx->pc = 0x4afb20u;
}
