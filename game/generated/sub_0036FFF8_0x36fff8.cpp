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

// Function: sub_0036FFF8
// Address: 0x36fff8 - 0x370000
void sub_0036FFF8_0x36fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FFF8_0x36fff8");
#endif

    ctx->pc = 0x36fff8u;

    // 0x36fff8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36fffc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x370000u;
}
