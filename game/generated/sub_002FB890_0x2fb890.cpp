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

// Function: sub_002FB890
// Address: 0x2fb890 - 0x2fb8a8
void sub_002FB890_0x2fb890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB890_0x2fb890");
#endif

    ctx->pc = 0x2fb890u;

    // 0x2fb890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb89c: 0x80beeda  j           func_2FBB68
    ctx->pc = 0x2FB89Cu;
    ctx->pc = 0x2FB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB89Cu;
    // 0x2fb8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB68u;
    sub_002FBB68_0x2fbb68(rdram, ctx, runtime); return;
    ctx->pc = 0x2FB8A4u;
    // 0x2fb8a4: 0x0  nop
    ctx->pc = 0x2fb8a4u;
    // NOP
    ctx->pc = 0x2fb8a8u;
}
