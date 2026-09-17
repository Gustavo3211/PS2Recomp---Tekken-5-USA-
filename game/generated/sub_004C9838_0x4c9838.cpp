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

// Function: sub_004C9838
// Address: 0x4c9838 - 0x4c9850
void sub_004C9838_0x4c9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9838_0x4c9838");
#endif

    ctx->pc = 0x4c9838u;

    // 0x4c9838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c9838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c983c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c9840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c9840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9844: 0x8132614  j           func_4C9850
    ctx->pc = 0x4C9844u;
    ctx->pc = 0x4C9848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9844u;
    // 0x4c9848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9850u;
    sub_004C9850_0x4c9850(rdram, ctx, runtime); return;
    ctx->pc = 0x4C984Cu;
    // 0x4c984c: 0x0  nop
    ctx->pc = 0x4c984cu;
    // NOP
    ctx->pc = 0x4c9850u;
}
