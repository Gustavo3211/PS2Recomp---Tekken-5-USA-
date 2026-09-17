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

// Function: sub_004904D8
// Address: 0x4904d8 - 0x4904f8
void sub_004904D8_0x4904d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004904D8_0x4904d8");
#endif

    ctx->pc = 0x4904d8u;

    // 0x4904d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4904d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4904dc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4904dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4904e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4904e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4904e4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4904e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4904e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4904e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4904ec: 0x812413e  j           func_4904F8
    ctx->pc = 0x4904ECu;
    ctx->pc = 0x4904F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4904ECu;
    // 0x4904f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x4904F4u;
    // 0x4904f4: 0x0  nop
    ctx->pc = 0x4904f4u;
    // NOP
    ctx->pc = 0x4904f8u;
}
