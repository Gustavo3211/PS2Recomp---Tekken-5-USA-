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

// Function: sub_004A6448
// Address: 0x4a6448 - 0x4a6460
void sub_004A6448_0x4a6448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6448_0x4a6448");
#endif

    ctx->pc = 0x4a6448u;

    // 0x4a6448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a6448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a644c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4a644cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a6450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6458: 0x812413e  j           func_4904F8
    ctx->pc = 0x4A6458u;
    ctx->pc = 0x4A645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6458u;
    // 0x4a645c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x4A6460u;
}
