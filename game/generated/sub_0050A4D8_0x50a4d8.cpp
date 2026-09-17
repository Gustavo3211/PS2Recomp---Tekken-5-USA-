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

// Function: sub_0050A4D8
// Address: 0x50a4d8 - 0x50a4f0
void sub_0050A4D8_0x50a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A4D8_0x50a4d8");
#endif

    ctx->pc = 0x50a4d8u;

    // 0x50a4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a4dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a4e4: 0x8142948  j           func_50A520
    ctx->pc = 0x50A4E4u;
    ctx->pc = 0x50A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A4E4u;
    // 0x50a4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A520u;
    sub_0050A520_0x50a520(rdram, ctx, runtime); return;
    ctx->pc = 0x50A4ECu;
    // 0x50a4ec: 0x0  nop
    ctx->pc = 0x50a4ecu;
    // NOP
    ctx->pc = 0x50a4f0u;
}
