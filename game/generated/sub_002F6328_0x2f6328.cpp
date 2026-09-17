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

// Function: sub_002F6328
// Address: 0x2f6328 - 0x2f6338
void sub_002F6328_0x2f6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6328_0x2f6328");
#endif

    ctx->pc = 0x2f6328u;

    // 0x2f6328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f632c: 0x80bd71e  j           func_2F5C78
    ctx->pc = 0x2F632Cu;
    ctx->pc = 0x2F6330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F632Cu;
    // 0x2f6330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C78u;
    sub_002F5C78_0x2f5c78(rdram, ctx, runtime); return;
    ctx->pc = 0x2F6334u;
    // 0x2f6334: 0x0  nop
    ctx->pc = 0x2f6334u;
    // NOP
    ctx->pc = 0x2f6338u;
}
