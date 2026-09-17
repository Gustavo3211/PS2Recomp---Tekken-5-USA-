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

// Function: sub_0031DF88
// Address: 0x31df88 - 0x31dfa0
void sub_0031DF88_0x31df88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DF88_0x31df88");
#endif

    ctx->pc = 0x31df88u;

    // 0x31df88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31df88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31df8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31df90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31df90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31df94: 0x80c7990  j           func_31E640
    ctx->pc = 0x31DF94u;
    ctx->pc = 0x31DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF94u;
    // 0x31df98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E640u;
    sub_0031E640_0x31e640(rdram, ctx, runtime); return;
    ctx->pc = 0x31DF9Cu;
    // 0x31df9c: 0x0  nop
    ctx->pc = 0x31df9cu;
    // NOP
    ctx->pc = 0x31dfa0u;
}
