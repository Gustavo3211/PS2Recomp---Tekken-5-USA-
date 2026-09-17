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

// Function: sub_00121C60
// Address: 0x121c60 - 0x121c78
void sub_00121C60_0x121c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121C60_0x121c60");
#endif

    ctx->pc = 0x121c60u;

    // 0x121c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121c6c: 0x8048724  j           func_121C90
    ctx->pc = 0x121C6Cu;
    ctx->pc = 0x121C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C6Cu;
    // 0x121c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121C90u;
    sub_00121C90_0x121c90(rdram, ctx, runtime); return;
    ctx->pc = 0x121C74u;
    // 0x121c74: 0x0  nop
    ctx->pc = 0x121c74u;
    // NOP
    ctx->pc = 0x121c78u;
}
