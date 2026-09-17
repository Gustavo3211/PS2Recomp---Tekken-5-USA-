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

// Function: sub_002F6378
// Address: 0x2f6378 - 0x2f6388
void sub_002F6378_0x2f6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6378_0x2f6378");
#endif

    ctx->pc = 0x2f6378u;

    // 0x2f6378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f637c: 0x80bd84e  j           func_2F6138
    ctx->pc = 0x2F637Cu;
    ctx->pc = 0x2F6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F637Cu;
    // 0x2f6380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6138u;
    sub_002F6138_0x2f6138(rdram, ctx, runtime); return;
    ctx->pc = 0x2F6384u;
    // 0x2f6384: 0x0  nop
    ctx->pc = 0x2f6384u;
    // NOP
    ctx->pc = 0x2f6388u;
}
