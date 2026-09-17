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

// Function: sub_00101078
// Address: 0x101078 - 0x101080
void sub_00101078_0x101078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101078_0x101078");
#endif

    ctx->pc = 0x101078u;

    // 0x101078: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x101078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10107c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10107cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    ctx->pc = 0x101080u;
}
