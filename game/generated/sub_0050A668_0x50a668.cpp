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

// Function: sub_0050A668
// Address: 0x50a668 - 0x50a680
void sub_0050A668_0x50a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A668_0x50a668");
#endif

    ctx->pc = 0x50a668u;

    // 0x50a668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a66c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x50a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x50a670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a678: 0x814417a  j           func_5105E8
    ctx->pc = 0x50A678u;
    ctx->pc = 0x50A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A678u;
    // 0x50a67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    sub_005105E8_0x5105e8(rdram, ctx, runtime); return;
    ctx->pc = 0x50A680u;
}
