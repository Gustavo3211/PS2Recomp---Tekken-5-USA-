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

// Function: sub_004F9298
// Address: 0x4f9298 - 0x4f92b8
void sub_004F9298_0x4f9298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9298_0x4f9298");
#endif

    ctx->pc = 0x4f9298u;

    // 0x4f9298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f929c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4f929cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f92a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f92a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f92a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f92a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f92a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f92a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f92ac: 0x804a151  j           func_128544
    ctx->pc = 0x4F92ACu;
    ctx->pc = 0x4F92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F92ACu;
    // 0x4f92b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    sub_00128544_0x128544(rdram, ctx, runtime); return;
    ctx->pc = 0x4F92B4u;
    // 0x4f92b4: 0x0  nop
    ctx->pc = 0x4f92b4u;
    // NOP
    ctx->pc = 0x4f92b8u;
}
