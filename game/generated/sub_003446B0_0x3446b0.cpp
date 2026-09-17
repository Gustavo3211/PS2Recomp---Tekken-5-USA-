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

// Function: sub_003446B0
// Address: 0x3446b0 - 0x3446d0
void sub_003446B0_0x3446b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003446B0_0x3446b0");
#endif

    ctx->pc = 0x3446b0u;

    // 0x3446b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3446b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3446b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3446b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3446b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3446b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3446bc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3446bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3446c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3446c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3446c4: 0x8049dec  j           func_1277B0
    ctx->pc = 0x3446C4u;
    ctx->pc = 0x3446C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446C4u;
    // 0x3446c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1277B0u;
    sub_001277B0_0x1277b0(rdram, ctx, runtime); return;
    ctx->pc = 0x3446CCu;
    // 0x3446cc: 0x0  nop
    ctx->pc = 0x3446ccu;
    // NOP
    ctx->pc = 0x3446d0u;
}
