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

// Function: sub_002461C0
// Address: 0x2461c0 - 0x2461c4
void sub_002461C0_0x2461c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002461C0_0x2461c0");
#endif

    ctx->pc = 0x2461c0u;

    // 0x2461c0: 0x8cb30060  lw          $s3, 0x60($a1)
    ctx->pc = 0x2461c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    ctx->pc = 0x2461c4u;
}
