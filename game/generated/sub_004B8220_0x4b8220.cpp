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

// Function: sub_004B8220
// Address: 0x4b8220 - 0x4b8238
void sub_004B8220_0x4b8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8220_0x4b8220");
#endif

    ctx->pc = 0x4b8220u;

    // 0x4b8220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b8224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b8224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b8228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b8228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b822c: 0x812e08e  j           func_4B8238
    ctx->pc = 0x4B822Cu;
    ctx->pc = 0x4B8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B822Cu;
    // 0x4b8230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8238u;
    sub_004B8238_0x4b8238(rdram, ctx, runtime); return;
    ctx->pc = 0x4B8234u;
    // 0x4b8234: 0x0  nop
    ctx->pc = 0x4b8234u;
    // NOP
    ctx->pc = 0x4b8238u;
}
