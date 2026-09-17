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

// Function: sub_004A4118
// Address: 0x4a4118 - 0x4a4130
void sub_004A4118_0x4a4118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4118_0x4a4118");
#endif

    ctx->pc = 0x4a4118u;

    // 0x4a4118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a411c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4124: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A4124u;
    ctx->pc = 0x4A4128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4124u;
    // 0x4a4128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A412Cu;
    // 0x4a412c: 0x0  nop
    ctx->pc = 0x4a412cu;
    // NOP
    ctx->pc = 0x4a4130u;
}
