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

// Function: sub_002F6368
// Address: 0x2f6368 - 0x2f6378
void sub_002F6368_0x2f6368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6368_0x2f6368");
#endif

    ctx->pc = 0x2f6368u;

    // 0x2f6368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f636c: 0x80bd832  j           func_2F60C8
    ctx->pc = 0x2F636Cu;
    ctx->pc = 0x2F6370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F636Cu;
    // 0x2f6370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F60C8u;
    sub_002F60C8_0x2f60c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F6374u;
    // 0x2f6374: 0x0  nop
    ctx->pc = 0x2f6374u;
    // NOP
    ctx->pc = 0x2f6378u;
}
