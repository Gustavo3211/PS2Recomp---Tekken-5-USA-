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

// Function: sub_0031A6A8
// Address: 0x31a6a8 - 0x31a6b4
void sub_0031A6A8_0x31a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A6A8_0x31a6a8");
#endif

    switch (ctx->pc) {
        case 0x31a6b0u: goto label_31a6b0;
        default: break;
    }

    ctx->pc = 0x31a6a8u;

    // 0x31a6a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a6ac: 0x8c430ddc  lw          $v1, 0xDDC($v0)
    ctx->pc = 0x31a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DDCu));
label_31a6b0:
    // 0x31a6b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x31a6b4u;
}
