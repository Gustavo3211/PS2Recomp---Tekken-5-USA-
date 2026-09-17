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

// Function: sub_00230C60
// Address: 0x230c60 - 0x230c68
void sub_00230C60_0x230c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230C60_0x230c60");
#endif

    ctx->pc = 0x230c60u;

    // 0x230c60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x230c64: 0x0  nop
    ctx->pc = 0x230c64u;
    // NOP
    ctx->pc = 0x230c68u;
}
