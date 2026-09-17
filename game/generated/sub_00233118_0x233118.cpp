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

// Function: sub_00233118
// Address: 0x233118 - 0x233128
void sub_00233118_0x233118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233118_0x233118");
#endif

    ctx->pc = 0x233118u;

    // 0x233118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23311c: 0x808d7b0  j           func_235EC0
    ctx->pc = 0x23311Cu;
    ctx->pc = 0x233120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23311Cu;
    // 0x233120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235EC0u;
    sub_00235EC0_0x235ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x233124u;
    // 0x233124: 0x0  nop
    ctx->pc = 0x233124u;
    // NOP
    ctx->pc = 0x233128u;
}
