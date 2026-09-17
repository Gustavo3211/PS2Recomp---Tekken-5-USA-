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

// Function: sub_002B7928
// Address: 0x2b7928 - 0x2b7940
void sub_002B7928_0x2b7928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7928_0x2b7928");
#endif

    ctx->pc = 0x2b7928u;

    // 0x2b7928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b792c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7934: 0x80ade6c  j           func_2B79B0
    ctx->pc = 0x2B7934u;
    ctx->pc = 0x2B7938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7934u;
    // 0x2b7938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79B0u;
    sub_002B79B0_0x2b79b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B793Cu;
    // 0x2b793c: 0x0  nop
    ctx->pc = 0x2b793cu;
    // NOP
    ctx->pc = 0x2b7940u;
}
