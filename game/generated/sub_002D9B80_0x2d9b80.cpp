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

// Function: sub_002D9B80
// Address: 0x2d9b80 - 0x2d9ba8
void sub_002D9B80_0x2d9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9B80_0x2d9b80");
#endif

    ctx->pc = 0x2d9b80u;

    // 0x2d9b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9b84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d9b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9b8c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d9b90: 0x2484e7e0  addiu       $a0, $a0, -0x1820
    ctx->pc = 0x2d9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d9b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d9b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9b9c: 0x80b6196  j           func_2D8658
    ctx->pc = 0x2D9B9Cu;
    ctx->pc = 0x2D9BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B9Cu;
    // 0x2d9ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8658u;
    sub_002D8658_0x2d8658(rdram, ctx, runtime); return;
    ctx->pc = 0x2D9BA4u;
    // 0x2d9ba4: 0x0  nop
    ctx->pc = 0x2d9ba4u;
    // NOP
    ctx->pc = 0x2d9ba8u;
}
