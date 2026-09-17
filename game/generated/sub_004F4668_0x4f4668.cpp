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

// Function: sub_004F4668
// Address: 0x4f4668 - 0x4f4680
void sub_004F4668_0x4f4668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4668_0x4f4668");
#endif

    ctx->pc = 0x4f4668u;

    // 0x4f4668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f466c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f4670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4674: 0x813d1ac  j           func_4F46B0
    ctx->pc = 0x4F4674u;
    ctx->pc = 0x4F4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4674u;
    // 0x4f4678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F46B0u;
    sub_004F46B0_0x4f46b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F467Cu;
    // 0x4f467c: 0x0  nop
    ctx->pc = 0x4f467cu;
    // NOP
    ctx->pc = 0x4f4680u;
}
