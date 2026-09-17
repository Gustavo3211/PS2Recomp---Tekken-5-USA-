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

// Function: sub_004EC550
// Address: 0x4ec550 - 0x4ec570
void sub_004EC550_0x4ec550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC550_0x4ec550");
#endif

    ctx->pc = 0x4ec550u;

    // 0x4ec550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ec550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ec554: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4ec554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ec558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec55c: 0xa4820166  sh          $v0, 0x166($a0)
    ctx->pc = 0x4ec55cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ec560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec564: 0x813b15c  j           func_4EC570
    ctx->pc = 0x4EC564u;
    ctx->pc = 0x4EC568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC564u;
    // 0x4ec568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC570u;
    sub_004EC570_0x4ec570(rdram, ctx, runtime); return;
    ctx->pc = 0x4EC56Cu;
    // 0x4ec56c: 0x0  nop
    ctx->pc = 0x4ec56cu;
    // NOP
    ctx->pc = 0x4ec570u;
}
