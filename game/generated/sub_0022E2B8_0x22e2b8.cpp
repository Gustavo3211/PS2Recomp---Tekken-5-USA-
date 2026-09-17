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

// Function: sub_0022E2B8
// Address: 0x22e2b8 - 0x22e2d0
void sub_0022E2B8_0x22e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E2B8_0x22e2b8");
#endif

    ctx->pc = 0x22e2b8u;

    // 0x22e2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22e2bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e2c4: 0x808f2b2  j           func_23CAC8
    ctx->pc = 0x22E2C4u;
    ctx->pc = 0x22E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2C4u;
    // 0x22e2c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CAC8u;
    sub_0023CAC8_0x23cac8(rdram, ctx, runtime); return;
    ctx->pc = 0x22E2CCu;
    // 0x22e2cc: 0x0  nop
    ctx->pc = 0x22e2ccu;
    // NOP
    ctx->pc = 0x22e2d0u;
}
