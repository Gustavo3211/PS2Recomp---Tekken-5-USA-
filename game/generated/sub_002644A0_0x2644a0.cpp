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

// Function: sub_002644A0
// Address: 0x2644a0 - 0x2644c0
void sub_002644A0_0x2644a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002644A0_0x2644a0");
#endif

    ctx->pc = 0x2644a0u;

    // 0x2644a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2644a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2644a4: 0x34058067  ori         $a1, $zero, 0x8067
    ctx->pc = 0x2644a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32871);
    // 0x2644a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2644a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2644ac: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2644acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2644b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2644b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2644b4: 0x808431e  j           func_210C78
    ctx->pc = 0x2644B4u;
    ctx->pc = 0x2644B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644B4u;
    // 0x2644b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210C78u;
    sub_00210C78_0x210c78(rdram, ctx, runtime); return;
    ctx->pc = 0x2644BCu;
    // 0x2644bc: 0x0  nop
    ctx->pc = 0x2644bcu;
    // NOP
    ctx->pc = 0x2644c0u;
}
