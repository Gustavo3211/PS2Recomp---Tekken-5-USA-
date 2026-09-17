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

// Function: sub_004EB750
// Address: 0x4eb750 - 0x4eb770
void sub_004EB750_0x4eb750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB750_0x4eb750");
#endif

    ctx->pc = 0x4eb750u;

    // 0x4eb750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eb750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eb754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4eb754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4eb758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eb75c: 0xa4820164  sh          $v0, 0x164($a0)
    ctx->pc = 0x4eb75cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eb760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb764: 0x813addc  j           func_4EB770
    ctx->pc = 0x4EB764u;
    ctx->pc = 0x4EB768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB764u;
    // 0x4eb768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB770u;
    sub_004EB770_0x4eb770(rdram, ctx, runtime); return;
    ctx->pc = 0x4EB76Cu;
    // 0x4eb76c: 0x0  nop
    ctx->pc = 0x4eb76cu;
    // NOP
    ctx->pc = 0x4eb770u;
}
