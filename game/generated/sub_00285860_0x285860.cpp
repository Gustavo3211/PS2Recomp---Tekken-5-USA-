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

// Function: sub_00285860
// Address: 0x285860 - 0x285898
void sub_00285860_0x285860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285860_0x285860");
#endif

    ctx->pc = 0x285860u;

    // 0x285860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285864: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x285864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x285868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28586c: 0x24c64520  addiu       $a2, $a2, 0x4520
    ctx->pc = 0x28586cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17696));
    // 0x285870: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x285870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28587c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x28587cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x285880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285884: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x285884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x285888: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x285888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x28588c: 0x80a1666  j           func_285998
    ctx->pc = 0x28588Cu;
    ctx->pc = 0x285890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28588Cu;
    // 0x285890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285998u;
    sub_00285998_0x285998(rdram, ctx, runtime); return;
    ctx->pc = 0x285894u;
    // 0x285894: 0x0  nop
    ctx->pc = 0x285894u;
    // NOP
    ctx->pc = 0x285898u;
}
