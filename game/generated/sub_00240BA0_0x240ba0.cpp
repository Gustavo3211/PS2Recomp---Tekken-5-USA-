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

// Function: sub_00240BA0
// Address: 0x240ba0 - 0x240bb8
void sub_00240BA0_0x240ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240BA0_0x240ba0");
#endif

    ctx->pc = 0x240ba0u;

    // 0x240ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240ba8: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x240ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x240bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240bb0: 0x80d3031  j           func_34C0C4
    ctx->pc = 0x240BB0u;
    ctx->pc = 0x240BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240BB0u;
    // 0x240bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C0C4u;
    sub_0034C0C4_0x34c0c4(rdram, ctx, runtime); return;
    ctx->pc = 0x240BB8u;
}
