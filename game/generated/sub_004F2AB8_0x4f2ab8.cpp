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

// Function: sub_004F2AB8
// Address: 0x4f2ab8 - 0x4f2ad0
void sub_004F2AB8_0x4f2ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2AB8_0x4f2ab8");
#endif

    ctx->pc = 0x4f2ab8u;

    // 0x4f2ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f2ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f2abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f2ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2ac4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4F2AC4u;
    ctx->pc = 0x4F2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2AC4u;
    // 0x4f2ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2ACCu;
    // 0x4f2acc: 0x0  nop
    ctx->pc = 0x4f2accu;
    // NOP
    ctx->pc = 0x4f2ad0u;
}
