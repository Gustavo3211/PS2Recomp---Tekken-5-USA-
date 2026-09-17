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

// Function: sub_00100720
// Address: 0x100720 - 0x100728
void sub_00100720_0x100720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100720_0x100720");
#endif

    ctx->pc = 0x100720u;

    // 0x100720: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x100720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x100724: 0x0  nop
    ctx->pc = 0x100724u;
    // NOP
    ctx->pc = 0x100728u;
}
