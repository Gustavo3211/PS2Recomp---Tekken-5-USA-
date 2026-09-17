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

// Function: sub_00266F48
// Address: 0x266f48 - 0x266f60
void sub_00266F48_0x266f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266F48_0x266f48");
#endif

    ctx->pc = 0x266f48u;

    // 0x266f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266f54: 0x8099b3e  j           func_266CF8
    ctx->pc = 0x266F54u;
    ctx->pc = 0x266F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F54u;
    // 0x266f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266CF8u;
    sub_00266CF8_0x266cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x266F5Cu;
    // 0x266f5c: 0x0  nop
    ctx->pc = 0x266f5cu;
    // NOP
    ctx->pc = 0x266f60u;
}
