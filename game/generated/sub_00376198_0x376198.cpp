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

// Function: sub_00376198
// Address: 0x376198 - 0x3761b0
void sub_00376198_0x376198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376198_0x376198");
#endif

    ctx->pc = 0x376198u;

    // 0x376198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37619c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3761a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3761a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3761a4: 0x80cb170  j           func_32C5C0
    ctx->pc = 0x3761A4u;
    ctx->pc = 0x3761A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3761A4u;
    // 0x3761a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5C0u;
    sub_0032C5C0_0x32c5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3761ACu;
    // 0x3761ac: 0x0  nop
    ctx->pc = 0x3761acu;
    // NOP
    ctx->pc = 0x3761b0u;
}
