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

// Function: sub_0050A4F0
// Address: 0x50a4f0 - 0x50a508
void sub_0050A4F0_0x50a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A4F0_0x50a4f0");
#endif

    ctx->pc = 0x50a4f0u;

    // 0x50a4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a4fc: 0x8142948  j           func_50A520
    ctx->pc = 0x50A4FCu;
    ctx->pc = 0x50A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A4FCu;
    // 0x50a500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A520u;
    sub_0050A520_0x50a520(rdram, ctx, runtime); return;
    ctx->pc = 0x50A504u;
    // 0x50a504: 0x0  nop
    ctx->pc = 0x50a504u;
    // NOP
    ctx->pc = 0x50a508u;
}
