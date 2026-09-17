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

// Function: sub_0048B0B8
// Address: 0x48b0b8 - 0x48b0d8
void sub_0048B0B8_0x48b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B0B8_0x48b0b8");
#endif

    ctx->pc = 0x48b0b8u;

    // 0x48b0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b0bc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x48b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x48b0c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b0c4: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x48b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x48b0c8: 0x2484d600  addiu       $a0, $a0, -0x2A00
    ctx->pc = 0x48b0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956544));
    // 0x48b0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b0d0: 0x813e4a6  j           func_4F9298
    ctx->pc = 0x48B0D0u;
    ctx->pc = 0x48B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B0D0u;
    // 0x48b0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    sub_004F9298_0x4f9298(rdram, ctx, runtime); return;
    ctx->pc = 0x48B0D8u;
}
