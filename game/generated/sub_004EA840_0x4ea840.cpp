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

// Function: sub_004EA840
// Address: 0x4ea840 - 0x4ea870
void sub_004EA840_0x4ea840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA840_0x4ea840");
#endif

    ctx->pc = 0x4ea840u;

    // 0x4ea840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ea840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ea844: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ea844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ea84c: 0xa460015e  sh          $zero, 0x15E($v1)
    ctx->pc = 0x4ea84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea850: 0x246301bc  addiu       $v1, $v1, 0x1BC
    ctx->pc = 0x4ea850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4ea854: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ea854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ea858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea85c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea860: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ea860u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea864: 0x813aa1c  j           func_4EA870
    ctx->pc = 0x4EA864u;
    ctx->pc = 0x4EA868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA864u;
    // 0x4ea868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA870u;
    sub_004EA870_0x4ea870(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA86Cu;
    // 0x4ea86c: 0x0  nop
    ctx->pc = 0x4ea86cu;
    // NOP
    ctx->pc = 0x4ea870u;
}
