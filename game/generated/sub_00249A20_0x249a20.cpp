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

// Function: sub_00249A20
// Address: 0x249a20 - 0x249a40
void sub_00249A20_0x249a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249A20_0x249a20");
#endif

    ctx->pc = 0x249a20u;

    // 0x249a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249a28: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x249a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249a30: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x249a34: 0x8092436  j           func_2490D8
    ctx->pc = 0x249A34u;
    ctx->pc = 0x249A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A34u;
    // 0x249a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490D8u;
    sub_002490D8_0x2490d8(rdram, ctx, runtime); return;
    ctx->pc = 0x249A3Cu;
    // 0x249a3c: 0x0  nop
    ctx->pc = 0x249a3cu;
    // NOP
    ctx->pc = 0x249a40u;
}
