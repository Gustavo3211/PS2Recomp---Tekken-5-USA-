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

// Function: sub_004E4BF0
// Address: 0x4e4bf0 - 0x4e4c08
void sub_004E4BF0_0x4e4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BF0_0x4e4bf0");
#endif

    ctx->pc = 0x4e4bf0u;

    // 0x4e4bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4bfc: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E4BFCu;
    ctx->pc = 0x4E4C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BFCu;
    // 0x4e4c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4C04u;
    // 0x4e4c04: 0x0  nop
    ctx->pc = 0x4e4c04u;
    // NOP
    ctx->pc = 0x4e4c08u;
}
