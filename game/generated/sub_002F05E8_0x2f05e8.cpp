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

// Function: sub_002F05E8
// Address: 0x2f05e8 - 0x2f0600
void sub_002F05E8_0x2f05e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F05E8_0x2f05e8");
#endif

    ctx->pc = 0x2f05e8u;

    // 0x2f05e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f05e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f05ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f05ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f05f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f05f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f05f4: 0x80bc180  j           func_2F0600
    ctx->pc = 0x2F05F4u;
    ctx->pc = 0x2F05F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F05F4u;
    // 0x2f05f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0600u;
    sub_002F0600_0x2f0600(rdram, ctx, runtime); return;
    ctx->pc = 0x2F05FCu;
    // 0x2f05fc: 0x0  nop
    ctx->pc = 0x2f05fcu;
    // NOP
    ctx->pc = 0x2f0600u;
}
