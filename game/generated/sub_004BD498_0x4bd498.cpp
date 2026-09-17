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

// Function: sub_004BD498
// Address: 0x4bd498 - 0x4bd4b0
void sub_004BD498_0x4bd498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD498_0x4bd498");
#endif

    ctx->pc = 0x4bd498u;

    // 0x4bd498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bd498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bd49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bd49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bd4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bd4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd4a4: 0x8122db4  j           func_48B6D0
    ctx->pc = 0x4BD4A4u;
    ctx->pc = 0x4BD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD4A4u;
    // 0x4bd4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BD4ACu;
    // 0x4bd4ac: 0x0  nop
    ctx->pc = 0x4bd4acu;
    // NOP
    ctx->pc = 0x4bd4b0u;
}
