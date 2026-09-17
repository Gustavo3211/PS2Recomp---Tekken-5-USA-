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

// Function: sub_002DE9B0
// Address: 0x2de9b0 - 0x2de9e0
void sub_002DE9B0_0x2de9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE9B0_0x2de9b0");
#endif

    ctx->pc = 0x2de9b0u;

    // 0x2de9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de9b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2de9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de9bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2de9c0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2de9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2de9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de9cc: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2de9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2de9d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2de9d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9d4: 0x80b7ba0  j           func_2DEE80
    ctx->pc = 0x2DE9D4u;
    ctx->pc = 0x2DE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9D4u;
    // 0x2de9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEE80u;
    sub_002DEE80_0x2dee80(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE9DCu;
    // 0x2de9dc: 0x0  nop
    ctx->pc = 0x2de9dcu;
    // NOP
    ctx->pc = 0x2de9e0u;
}
