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

// Function: sub_004B9020
// Address: 0x4b9020 - 0x4b9038
void sub_004B9020_0x4b9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9020_0x4b9020");
#endif

    ctx->pc = 0x4b9020u;

    // 0x4b9020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b9020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b9024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b9024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b9028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b902c: 0x812e40e  j           func_4B9038
    ctx->pc = 0x4B902Cu;
    ctx->pc = 0x4B9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B902Cu;
    // 0x4b9030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9038u;
    sub_004B9038_0x4b9038(rdram, ctx, runtime); return;
    ctx->pc = 0x4B9034u;
    // 0x4b9034: 0x0  nop
    ctx->pc = 0x4b9034u;
    // NOP
    ctx->pc = 0x4b9038u;
}
