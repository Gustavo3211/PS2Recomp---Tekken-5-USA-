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

// Function: sub_00499990
// Address: 0x499990 - 0x4999a8
void sub_00499990_0x499990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499990_0x499990");
#endif

    ctx->pc = 0x499990u;

    // 0x499990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x499994: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x499994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x499998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49999c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49999cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4999a0: 0x812413e  j           func_4904F8
    ctx->pc = 0x4999A0u;
    ctx->pc = 0x4999A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4999A0u;
    // 0x4999a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x4999A8u;
}
