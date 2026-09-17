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

// Function: sub_00242858
// Address: 0x242858 - 0x242870
void sub_00242858_0x242858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242858_0x242858");
#endif

    ctx->pc = 0x242858u;

    // 0x242858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24285c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242864: 0x80905d8  j           func_241760
    ctx->pc = 0x242864u;
    ctx->pc = 0x242868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242864u;
    // 0x242868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241760u;
    sub_00241760_0x241760(rdram, ctx, runtime); return;
    ctx->pc = 0x24286Cu;
    // 0x24286c: 0x0  nop
    ctx->pc = 0x24286cu;
    // NOP
    ctx->pc = 0x242870u;
}
