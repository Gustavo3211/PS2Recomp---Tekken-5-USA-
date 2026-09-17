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

// Function: sub_004F4698
// Address: 0x4f4698 - 0x4f46b0
void sub_004F4698_0x4f4698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4698_0x4f4698");
#endif

    ctx->pc = 0x4f4698u;

    // 0x4f4698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f469c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f469cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f46a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f46a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f46a4: 0x813d1ac  j           func_4F46B0
    ctx->pc = 0x4F46A4u;
    ctx->pc = 0x4F46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F46A4u;
    // 0x4f46a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F46B0u;
    sub_004F46B0_0x4f46b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F46ACu;
    // 0x4f46ac: 0x0  nop
    ctx->pc = 0x4f46acu;
    // NOP
    ctx->pc = 0x4f46b0u;
}
