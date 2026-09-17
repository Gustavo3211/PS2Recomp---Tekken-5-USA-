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

// Function: sub_00226A18
// Address: 0x226a18 - 0x226a24
void sub_00226A18_0x226a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226A18_0x226a18");
#endif

    ctx->pc = 0x226a18u;

    // 0x226a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226a1c: 0xaf80a4ec  sw          $zero, -0x5B14($gp)
    ctx->pc = 0x226a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943980), GPR_U32(ctx, 0));
    // 0x226a20: 0xaf82a4f0  sw          $v0, -0x5B10($gp)
    ctx->pc = 0x226a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943984), GPR_U32(ctx, 2));
    ctx->pc = 0x226a24u;
}
