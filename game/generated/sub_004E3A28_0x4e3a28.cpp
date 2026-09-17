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

// Function: sub_004E3A28
// Address: 0x4e3a28 - 0x4e3a40
void sub_004E3A28_0x4e3a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3A28_0x4e3a28");
#endif

    ctx->pc = 0x4e3a28u;

    // 0x4e3a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e3a2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3a34: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E3A34u;
    ctx->pc = 0x4E3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3A34u;
    // 0x4e3a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E3A3Cu;
    // 0x4e3a3c: 0x0  nop
    ctx->pc = 0x4e3a3cu;
    // NOP
    ctx->pc = 0x4e3a40u;
}
