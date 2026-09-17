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

// Function: sub_004C5750
// Address: 0x4c5750 - 0x4c5770
void sub_004C5750_0x4c5750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5750_0x4c5750");
#endif

    ctx->pc = 0x4c5750u;

    // 0x4c5750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c5754: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4c5754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c575c: 0xa440016a  sh          $zero, 0x16A($v0)
    ctx->pc = 0x4c575cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c5760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c5760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5764: 0xa44001bc  sh          $zero, 0x1BC($v0)
    ctx->pc = 0x4c5764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c5768: 0x81315dc  j           func_4C5770
    ctx->pc = 0x4C5768u;
    ctx->pc = 0x4C576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5768u;
    // 0x4c576c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5770u;
    sub_004C5770_0x4c5770(rdram, ctx, runtime); return;
    ctx->pc = 0x4C5770u;
}
