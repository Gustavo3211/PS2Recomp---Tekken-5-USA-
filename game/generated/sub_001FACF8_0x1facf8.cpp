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

// Function: sub_001FACF8
// Address: 0x1facf8 - 0x1fad10
void sub_001FACF8_0x1facf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FACF8_0x1facf8");
#endif

    ctx->pc = 0x1facf8u;

    // 0x1facf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1facf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1facfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1facfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fad00: 0x8484003e  lh          $a0, 0x3E($a0)
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x1fad04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fad08: 0x80990e8  j           func_2643A0
    ctx->pc = 0x1FAD08u;
    ctx->pc = 0x1FAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD08u;
    // 0x1fad0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643A0u;
    sub_002643A0_0x2643a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAD10u;
}
