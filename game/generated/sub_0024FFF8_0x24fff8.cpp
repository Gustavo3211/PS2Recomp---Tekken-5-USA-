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

// Function: sub_0024FFF8
// Address: 0x24fff8 - 0x250000
void sub_0024FFF8_0x24fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FFF8_0x24fff8");
#endif

    ctx->pc = 0x24fff8u;

    // 0x24fff8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24fffc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x250000u;
}
