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

// Function: sub_00285828
// Address: 0x285828 - 0x285860
void sub_00285828_0x285828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285828_0x285828");
#endif

    ctx->pc = 0x285828u;

    // 0x285828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28582c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x28582cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x285830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285834: 0x24c64520  addiu       $a2, $a2, 0x4520
    ctx->pc = 0x285834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17696));
    // 0x285838: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x285838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28583c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x285840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285844: 0x24c657a0  addiu       $a2, $a2, 0x57A0
    ctx->pc = 0x285844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22432));
    // 0x285848: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x285848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28584c: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x28584cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x285850: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x285850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x285854: 0x80a1666  j           func_285998
    ctx->pc = 0x285854u;
    ctx->pc = 0x285858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285854u;
    // 0x285858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285998u;
    sub_00285998_0x285998(rdram, ctx, runtime); return;
    ctx->pc = 0x28585Cu;
    // 0x28585c: 0x0  nop
    ctx->pc = 0x28585cu;
    // NOP
    ctx->pc = 0x285860u;
}
