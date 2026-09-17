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

// Function: sub_00334EC8
// Address: 0x334ec8 - 0x334ee0
void sub_00334EC8_0x334ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334EC8_0x334ec8");
#endif

    ctx->pc = 0x334ec8u;

    // 0x334ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334ed0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x334ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x334ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334ed8: 0x8043fa0  j           func_10FE80
    ctx->pc = 0x334ED8u;
    ctx->pc = 0x334EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334ED8u;
    // 0x334edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE80u;
    sub_0010FE80_0x10fe80(rdram, ctx, runtime); return;
    ctx->pc = 0x334EE0u;
}
