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

// Function: sub_0050A508
// Address: 0x50a508 - 0x50a520
void sub_0050A508_0x50a508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A508_0x50a508");
#endif

    ctx->pc = 0x50a508u;

    // 0x50a508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a514: 0x8142948  j           func_50A520
    ctx->pc = 0x50A514u;
    ctx->pc = 0x50A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A514u;
    // 0x50a518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A520u;
    sub_0050A520_0x50a520(rdram, ctx, runtime); return;
    ctx->pc = 0x50A51Cu;
    // 0x50a51c: 0x0  nop
    ctx->pc = 0x50a51cu;
    // NOP
    ctx->pc = 0x50a520u;
}
