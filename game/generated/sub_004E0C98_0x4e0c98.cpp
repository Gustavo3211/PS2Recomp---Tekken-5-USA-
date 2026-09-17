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

// Function: sub_004E0C98
// Address: 0x4e0c98 - 0x4e0cb0
void sub_004E0C98_0x4e0c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0C98_0x4e0c98");
#endif

    ctx->pc = 0x4e0c98u;

    // 0x4e0c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e0c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e0c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e0c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e0ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e0ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0ca4: 0x813832c  j           func_4E0CB0
    ctx->pc = 0x4E0CA4u;
    ctx->pc = 0x4E0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0CA4u;
    // 0x4e0ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0CB0u;
    sub_004E0CB0_0x4e0cb0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E0CACu;
    // 0x4e0cac: 0x0  nop
    ctx->pc = 0x4e0cacu;
    // NOP
    ctx->pc = 0x4e0cb0u;
}
