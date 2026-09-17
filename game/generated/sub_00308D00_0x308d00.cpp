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

// Function: sub_00308D00
// Address: 0x308d00 - 0x308d18
void sub_00308D00_0x308d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D00_0x308d00");
#endif

    ctx->pc = 0x308d00u;

    // 0x308d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308d0c: 0x80b6aea  j           func_2DABA8
    ctx->pc = 0x308D0Cu;
    ctx->pc = 0x308D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D0Cu;
    // 0x308d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DABA8u;
    sub_002DABA8_0x2daba8(rdram, ctx, runtime); return;
    ctx->pc = 0x308D14u;
    // 0x308d14: 0x0  nop
    ctx->pc = 0x308d14u;
    // NOP
    ctx->pc = 0x308d18u;
}
