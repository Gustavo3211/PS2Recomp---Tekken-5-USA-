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

// Function: sub_002F6388
// Address: 0x2f6388 - 0x2f6398
void sub_002F6388_0x2f6388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6388_0x2f6388");
#endif

    ctx->pc = 0x2f6388u;

    // 0x2f6388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f638c: 0x80bd878  j           func_2F61E0
    ctx->pc = 0x2F638Cu;
    ctx->pc = 0x2F6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F638Cu;
    // 0x2f6390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F61E0u;
    sub_002F61E0_0x2f61e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F6394u;
    // 0x2f6394: 0x0  nop
    ctx->pc = 0x2f6394u;
    // NOP
    ctx->pc = 0x2f6398u;
}
