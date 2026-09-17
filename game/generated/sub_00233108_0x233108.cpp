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

// Function: sub_00233108
// Address: 0x233108 - 0x233118
void sub_00233108_0x233108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233108_0x233108");
#endif

    ctx->pc = 0x233108u;

    // 0x233108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23310c: 0x808e0ee  j           func_2383B8
    ctx->pc = 0x23310Cu;
    ctx->pc = 0x233110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23310Cu;
    // 0x233110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383B8u;
    sub_002383B8_0x2383b8(rdram, ctx, runtime); return;
    ctx->pc = 0x233114u;
    // 0x233114: 0x0  nop
    ctx->pc = 0x233114u;
    // NOP
    ctx->pc = 0x233118u;
}
