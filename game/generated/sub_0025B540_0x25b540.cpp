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

// Function: sub_0025B540
// Address: 0x25b540 - 0x25b548
void sub_0025B540_0x25b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B540_0x25b540");
#endif

    ctx->pc = 0x25b540u;

    // 0x25b540: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x25b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25b544: 0x0  nop
    ctx->pc = 0x25b544u;
    // NOP
    ctx->pc = 0x25b548u;
}
