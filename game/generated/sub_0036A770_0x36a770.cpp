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

// Function: sub_0036A770
// Address: 0x36a770 - 0x36a790
void sub_0036A770_0x36a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A770_0x36a770");
#endif

    ctx->pc = 0x36a770u;

    // 0x36a770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a774: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x36a774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a77c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x36a77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a784: 0x8097f98  j           func_25FE60
    ctx->pc = 0x36A784u;
    ctx->pc = 0x36A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A784u;
    // 0x36a788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    sub_0025FE60_0x25fe60(rdram, ctx, runtime); return;
    ctx->pc = 0x36A78Cu;
    // 0x36a78c: 0x0  nop
    ctx->pc = 0x36a78cu;
    // NOP
    ctx->pc = 0x36a790u;
}
