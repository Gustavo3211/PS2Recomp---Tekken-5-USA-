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

// Function: sub_004E2BD8
// Address: 0x4e2bd8 - 0x4e2bf0
void sub_004E2BD8_0x4e2bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2BD8_0x4e2bd8");
#endif

    ctx->pc = 0x4e2bd8u;

    // 0x4e2bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e2bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e2bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e2bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e2be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e2be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2be4: 0x8138afc  j           func_4E2BF0
    ctx->pc = 0x4E2BE4u;
    ctx->pc = 0x4E2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2BE4u;
    // 0x4e2be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2BF0u;
    sub_004E2BF0_0x4e2bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E2BECu;
    // 0x4e2bec: 0x0  nop
    ctx->pc = 0x4e2becu;
    // NOP
    ctx->pc = 0x4e2bf0u;
}
