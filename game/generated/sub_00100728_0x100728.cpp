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

// Function: sub_00100728
// Address: 0x100728 - 0x100730
void sub_00100728_0x100728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100728_0x100728");
#endif

    ctx->pc = 0x100728u;

    // 0x100728: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10072c: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x10072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    ctx->pc = 0x100730u;
}
