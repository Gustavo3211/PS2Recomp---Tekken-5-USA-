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

// Function: sub_00226788
// Address: 0x226788 - 0x2267a0
void sub_00226788_0x226788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226788_0x226788");
#endif

    ctx->pc = 0x226788u;

    // 0x226788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22678c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226794: 0x809371c  j           func_24DC70
    ctx->pc = 0x226794u;
    ctx->pc = 0x226798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226794u;
    // 0x226798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC70u;
    sub_0024DC70_0x24dc70(rdram, ctx, runtime); return;
    ctx->pc = 0x22679Cu;
    // 0x22679c: 0x0  nop
    ctx->pc = 0x22679cu;
    // NOP
    ctx->pc = 0x2267a0u;
}
