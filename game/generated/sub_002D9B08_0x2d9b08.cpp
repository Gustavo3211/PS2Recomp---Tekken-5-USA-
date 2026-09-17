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

// Function: sub_002D9B08
// Address: 0x2d9b08 - 0x2d9b38
void sub_002D9B08_0x2d9b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9B08_0x2d9b08");
#endif

    ctx->pc = 0x2d9b08u;

    // 0x2d9b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9b0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d9b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9b14: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d9b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d9b18: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d9b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d9b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9b24: 0x2484e7e0  addiu       $a0, $a0, -0x1820
    ctx->pc = 0x2d9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d9b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b2c: 0x80b5adc  j           func_2D6B70
    ctx->pc = 0x2D9B2Cu;
    ctx->pc = 0x2D9B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B2Cu;
    // 0x2d9b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B70u;
    sub_002D6B70_0x2d6b70(rdram, ctx, runtime); return;
    ctx->pc = 0x2D9B34u;
    // 0x2d9b34: 0x0  nop
    ctx->pc = 0x2d9b34u;
    // NOP
    ctx->pc = 0x2d9b38u;
}
