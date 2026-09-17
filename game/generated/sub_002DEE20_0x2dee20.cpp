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

// Function: sub_002DEE20
// Address: 0x2dee20 - 0x2dee40
void sub_002DEE20_0x2dee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEE20_0x2dee20");
#endif

    ctx->pc = 0x2dee20u;

    // 0x2dee20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dee24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2dee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dee2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dee2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee30: 0x8cc7003c  lw          $a3, 0x3C($a2)
    ctx->pc = 0x2dee30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2dee34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dee38: 0x80b7ba0  j           func_2DEE80
    ctx->pc = 0x2DEE38u;
    ctx->pc = 0x2DEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE38u;
    // 0x2dee3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEE80u;
    sub_002DEE80_0x2dee80(rdram, ctx, runtime); return;
    ctx->pc = 0x2DEE40u;
}
