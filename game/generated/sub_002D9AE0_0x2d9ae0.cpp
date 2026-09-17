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

// Function: sub_002D9AE0
// Address: 0x2d9ae0 - 0x2d9b08
void sub_002D9AE0_0x2d9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9AE0_0x2d9ae0");
#endif

    ctx->pc = 0x2d9ae0u;

    // 0x2d9ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9ae4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d9ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9aec: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d9af0: 0x2484e7e0  addiu       $a0, $a0, -0x1820
    ctx->pc = 0x2d9af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d9af4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d9af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b00: 0x80b5adc  j           func_2D6B70
    ctx->pc = 0x2D9B00u;
    ctx->pc = 0x2D9B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B00u;
    // 0x2d9b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B70u;
    sub_002D6B70_0x2d6b70(rdram, ctx, runtime); return;
    ctx->pc = 0x2D9B08u;
}
