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

// Function: sub_004B69A8
// Address: 0x4b69a8 - 0x4b69c0
void sub_004B69A8_0x4b69a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B69A8_0x4b69a8");
#endif

    ctx->pc = 0x4b69a8u;

    // 0x4b69a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b69a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b69ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b69acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b69b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b69b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b69b4: 0x812da76  j           func_4B69D8
    ctx->pc = 0x4B69B4u;
    ctx->pc = 0x4B69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B69B4u;
    // 0x4b69b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B69D8u;
    sub_004B69D8_0x4b69d8(rdram, ctx, runtime); return;
    ctx->pc = 0x4B69BCu;
    // 0x4b69bc: 0x0  nop
    ctx->pc = 0x4b69bcu;
    // NOP
    ctx->pc = 0x4b69c0u;
}
