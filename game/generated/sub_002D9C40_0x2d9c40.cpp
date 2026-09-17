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

// Function: sub_002D9C40
// Address: 0x2d9c40 - 0x2d9c60
void sub_002D9C40_0x2d9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C40_0x2d9c40");
#endif

    ctx->pc = 0x2d9c40u;

    // 0x2d9c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9c44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d9c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9c4c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d9c50: 0x24847d80  addiu       $a0, $a0, 0x7D80
    ctx->pc = 0x2d9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32128));
    // 0x2d9c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9c58: 0x80b6736  j           func_2D9CD8
    ctx->pc = 0x2D9C58u;
    ctx->pc = 0x2D9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C58u;
    // 0x2d9c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CD8u;
    sub_002D9CD8_0x2d9cd8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D9C60u;
}
