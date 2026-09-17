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

// Function: sub_003732B0
// Address: 0x3732b0 - 0x3732bc
void sub_003732B0_0x3732b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003732B0_0x3732b0");
#endif

    switch (ctx->pc) {
        case 0x3732b4u: goto label_3732b4;
        default: break;
    }

    ctx->pc = 0x3732b0u;

    // 0x3732b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3732b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3732b4:
    // 0x3732b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3732b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3732b8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3732b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x3732bcu;
}
