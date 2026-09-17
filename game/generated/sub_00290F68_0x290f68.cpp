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

// Function: sub_00290F68
// Address: 0x290f68 - 0x290f70
void sub_00290F68_0x290f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F68_0x290f68");
#endif

    ctx->pc = 0x290f68u;

    // 0x290f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x290f70u;
}
