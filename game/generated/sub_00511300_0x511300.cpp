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

// Function: sub_00511300
// Address: 0x511300 - 0x511318
void sub_00511300_0x511300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511300_0x511300");
#endif

    ctx->pc = 0x511300u;

    // 0x511300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x511300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x511304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x511304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x511308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x511308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51130c: 0x8144432  j           func_5110C8
    ctx->pc = 0x51130Cu;
    ctx->pc = 0x511310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51130Cu;
    // 0x511310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    sub_005110C8_0x5110c8(rdram, ctx, runtime); return;
    ctx->pc = 0x511314u;
    // 0x511314: 0x0  nop
    ctx->pc = 0x511314u;
    // NOP
    ctx->pc = 0x511318u;
}
