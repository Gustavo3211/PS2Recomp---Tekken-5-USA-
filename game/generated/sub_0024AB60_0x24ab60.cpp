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

// Function: sub_0024AB60
// Address: 0x24ab60 - 0x24ab70
void sub_0024AB60_0x24ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AB60_0x24ab60");
#endif

    ctx->pc = 0x24ab60u;

    // 0x24ab60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ab64: 0x8090556  j           func_241558
    ctx->pc = 0x24AB64u;
    ctx->pc = 0x24AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB64u;
    // 0x24ab68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241558u;
    sub_00241558_0x241558(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB6Cu;
    // 0x24ab6c: 0x0  nop
    ctx->pc = 0x24ab6cu;
    // NOP
    ctx->pc = 0x24ab70u;
}
