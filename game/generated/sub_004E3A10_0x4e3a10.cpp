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

// Function: sub_004E3A10
// Address: 0x4e3a10 - 0x4e3a28
void sub_004E3A10_0x4e3a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3A10_0x4e3a10");
#endif

    ctx->pc = 0x4e3a10u;

    // 0x4e3a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e3a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3a1c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E3A1Cu;
    ctx->pc = 0x4E3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3A1Cu;
    // 0x4e3a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E3A24u;
    // 0x4e3a24: 0x0  nop
    ctx->pc = 0x4e3a24u;
    // NOP
    ctx->pc = 0x4e3a28u;
}
