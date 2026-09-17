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

// Function: sub_002D96E0
// Address: 0x2d96e0 - 0x2d9700
void sub_002D96E0_0x2d96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D96E0_0x2d96e0");
#endif

    ctx->pc = 0x2d96e0u;

    // 0x2d96e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d96e4: 0x2405d8f0  addiu       $a1, $zero, -0x2710
    ctx->pc = 0x2d96e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
    // 0x2d96e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d96e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d96ec: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2d96ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d96f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d96f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d96f4: 0x80b65c0  j           func_2D9700
    ctx->pc = 0x2D96F4u;
    ctx->pc = 0x2D96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D96F4u;
    // 0x2d96f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9700u;
    sub_002D9700_0x2d9700(rdram, ctx, runtime); return;
    ctx->pc = 0x2D96FCu;
    // 0x2d96fc: 0x0  nop
    ctx->pc = 0x2d96fcu;
    // NOP
    ctx->pc = 0x2d9700u;
}
