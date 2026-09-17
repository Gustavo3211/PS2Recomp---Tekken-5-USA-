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

// Function: sub_00500188
// Address: 0x500188 - 0x500190
void sub_00500188_0x500188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500188_0x500188");
#endif

    ctx->pc = 0x500188u;

    // 0x500188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x500188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50018c: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x50018cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    ctx->pc = 0x500190u;
}
