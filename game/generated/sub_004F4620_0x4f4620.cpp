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

// Function: sub_004F4620
// Address: 0x4f4620 - 0x4f4638
void sub_004F4620_0x4f4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4620_0x4f4620");
#endif

    ctx->pc = 0x4f4620u;

    // 0x4f4620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f4624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f4628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f462c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4F462Cu;
    ctx->pc = 0x4F4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F462Cu;
    // 0x4f4630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F4634u;
    // 0x4f4634: 0x0  nop
    ctx->pc = 0x4f4634u;
    // NOP
    ctx->pc = 0x4f4638u;
}
