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

// Function: sub_0022C8E8
// Address: 0x22c8e8 - 0x22c8f0
void sub_0022C8E8_0x22c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C8E8_0x22c8e8");
#endif

    ctx->pc = 0x22c8e8u;

    // 0x22c8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c8ec: 0xa1e20032  sb          $v0, 0x32($t7)
    ctx->pc = 0x22c8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 50), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x22c8f0u;
}
