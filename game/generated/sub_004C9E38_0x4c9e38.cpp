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

// Function: sub_004C9E38
// Address: 0x4c9e38 - 0x4c9e50
void sub_004C9E38_0x4c9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9E38_0x4c9e38");
#endif

    ctx->pc = 0x4c9e38u;

    // 0x4c9e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c9e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c9e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c9e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c9e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c9e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9e44: 0x8132794  j           func_4C9E50
    ctx->pc = 0x4C9E44u;
    ctx->pc = 0x4C9E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9E44u;
    // 0x4c9e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9E50u;
    sub_004C9E50_0x4c9e50(rdram, ctx, runtime); return;
    ctx->pc = 0x4C9E4Cu;
    // 0x4c9e4c: 0x0  nop
    ctx->pc = 0x4c9e4cu;
    // NOP
    ctx->pc = 0x4c9e50u;
}
