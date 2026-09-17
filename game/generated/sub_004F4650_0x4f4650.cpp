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

// Function: sub_004F4650
// Address: 0x4f4650 - 0x4f4668
void sub_004F4650_0x4f4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4650_0x4f4650");
#endif

    ctx->pc = 0x4f4650u;

    // 0x4f4650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f4654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f4658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f465c: 0x813d1ac  j           func_4F46B0
    ctx->pc = 0x4F465Cu;
    ctx->pc = 0x4F4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F465Cu;
    // 0x4f4660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F46B0u;
    sub_004F46B0_0x4f46b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F4664u;
    // 0x4f4664: 0x0  nop
    ctx->pc = 0x4f4664u;
    // NOP
    ctx->pc = 0x4f4668u;
}
