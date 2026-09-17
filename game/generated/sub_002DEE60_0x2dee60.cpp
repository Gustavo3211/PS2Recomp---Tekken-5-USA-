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

// Function: sub_002DEE60
// Address: 0x2dee60 - 0x2dee80
void sub_002DEE60_0x2dee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEE60_0x2dee60");
#endif

    ctx->pc = 0x2dee60u;

    // 0x2dee60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dee64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2dee64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dee6c: 0x8cc7003c  lw          $a3, 0x3C($a2)
    ctx->pc = 0x2dee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2dee70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dee74: 0x80b7ba0  j           func_2DEE80
    ctx->pc = 0x2DEE74u;
    ctx->pc = 0x2DEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE74u;
    // 0x2dee78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEE80u;
    sub_002DEE80_0x2dee80(rdram, ctx, runtime); return;
    ctx->pc = 0x2DEE7Cu;
    // 0x2dee7c: 0x0  nop
    ctx->pc = 0x2dee7cu;
    // NOP
    ctx->pc = 0x2dee80u;
}
