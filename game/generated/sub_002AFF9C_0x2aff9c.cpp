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

// Function: sub_002AFF9C
// Address: 0x2aff9c - 0x2affb0
void sub_002AFF9C_0x2aff9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFF9C_0x2aff9c");
#endif

    ctx->pc = 0x2aff9cu;

    // 0x2aff9c: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x2aff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2affa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2affa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2affa4: 0x80a9e50  j           func_2A7940
    ctx->pc = 0x2AFFA4u;
    ctx->pc = 0x2AFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFA4u;
    // 0x2affa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    sub_002A7940_0x2a7940(rdram, ctx, runtime); return;
    ctx->pc = 0x2AFFACu;
    // 0x2affac: 0x0  nop
    ctx->pc = 0x2affacu;
    // NOP
    ctx->pc = 0x2affb0u;
}
