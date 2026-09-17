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

// Function: sub_005001DC
// Address: 0x5001dc - 0x5001fc
void sub_005001DC_0x5001dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005001DC_0x5001dc");
#endif

    ctx->pc = 0x5001dcu;

    // 0x5001dc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x5001dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5001e0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x5001e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5001e4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x5001e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x5001e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5001e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5001ec: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x5001ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x5001f0: 0x8d64cfa0  lw          $a0, -0x3060($t3)
    ctx->pc = 0x5001f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954912)));
    // 0x5001f4: 0x813faee  j           func_4FEBB8
    ctx->pc = 0x5001F4u;
    ctx->pc = 0x5001F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5001F4u;
    // 0x5001f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    sub_004FEBB8_0x4febb8(rdram, ctx, runtime); return;
    ctx->pc = 0x5001FCu;
}
