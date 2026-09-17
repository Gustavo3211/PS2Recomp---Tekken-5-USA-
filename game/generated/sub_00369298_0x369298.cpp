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

// Function: sub_00369298
// Address: 0x369298 - 0x3692b0
void sub_00369298_0x369298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369298_0x369298");
#endif

    ctx->pc = 0x369298u;

    // 0x369298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36929c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3692a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3692a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3692a4: 0x80cbb52  j           func_32ED48
    ctx->pc = 0x3692A4u;
    ctx->pc = 0x3692A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692A4u;
    // 0x3692a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    sub_0032ED48_0x32ed48(rdram, ctx, runtime); return;
    ctx->pc = 0x3692ACu;
    // 0x3692ac: 0x0  nop
    ctx->pc = 0x3692acu;
    // NOP
    ctx->pc = 0x3692b0u;
}
