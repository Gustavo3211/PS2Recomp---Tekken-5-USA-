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

// Function: sub_002E4DA0
// Address: 0x2e4da0 - 0x2e4da8
void sub_002E4DA0_0x2e4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4DA0_0x2e4da0");
#endif

    ctx->pc = 0x2e4da0u;

    // 0x2e4da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2e4da8u;
}
