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

// Function: sub_0050A638
// Address: 0x50a638 - 0x50a650
void sub_0050A638_0x50a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A638_0x50a638");
#endif

    ctx->pc = 0x50a638u;

    // 0x50a638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a63c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50a640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a648: 0x814417a  j           func_5105E8
    ctx->pc = 0x50A648u;
    ctx->pc = 0x50A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A648u;
    // 0x50a64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    sub_005105E8_0x5105e8(rdram, ctx, runtime); return;
    ctx->pc = 0x50A650u;
}
