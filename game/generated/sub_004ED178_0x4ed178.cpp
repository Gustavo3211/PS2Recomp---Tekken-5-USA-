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

// Function: sub_004ED178
// Address: 0x4ed178 - 0x4ed198
void sub_004ED178_0x4ed178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED178_0x4ed178");
#endif

    ctx->pc = 0x4ed178u;

    // 0x4ed178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed17c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ed17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ed180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed184: 0xa4820168  sh          $v0, 0x168($a0)
    ctx->pc = 0x4ed184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed18c: 0x813b46e  j           func_4ED1B8
    ctx->pc = 0x4ED18Cu;
    ctx->pc = 0x4ED190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED18Cu;
    // 0x4ed190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED1B8u;
    sub_004ED1B8_0x4ed1b8(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED194u;
    // 0x4ed194: 0x0  nop
    ctx->pc = 0x4ed194u;
    // NOP
    ctx->pc = 0x4ed198u;
}
