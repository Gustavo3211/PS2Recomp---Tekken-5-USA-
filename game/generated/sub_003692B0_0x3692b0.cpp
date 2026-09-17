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

// Function: sub_003692B0
// Address: 0x3692b0 - 0x3692c8
void sub_003692B0_0x3692b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003692B0_0x3692b0");
#endif

    ctx->pc = 0x3692b0u;

    // 0x3692b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3692b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3692b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3692b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3692b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3692b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3692bc: 0x80cbb38  j           func_32ECE0
    ctx->pc = 0x3692BCu;
    ctx->pc = 0x3692C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692BCu;
    // 0x3692c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    sub_0032ECE0_0x32ece0(rdram, ctx, runtime); return;
    ctx->pc = 0x3692C4u;
    // 0x3692c4: 0x0  nop
    ctx->pc = 0x3692c4u;
    // NOP
    ctx->pc = 0x3692c8u;
}
