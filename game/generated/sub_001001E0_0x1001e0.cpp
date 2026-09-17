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

// Function: sub_001001E0
// Address: 0x1001e0 - 0x1001e8
void sub_001001E0_0x1001e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001E0_0x1001e0");
#endif

    ctx->pc = 0x1001e0u;

    // 0x1001e0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1001e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1001e4: 0xc  syscall     0
    ctx->pc = 0x1001e4u;
    ctx->pc = 0x1001E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1001e8u;
}
