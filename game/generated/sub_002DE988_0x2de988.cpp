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

// Function: sub_002DE988
// Address: 0x2de988 - 0x2de9b0
void sub_002DE988_0x2de988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE988_0x2de988");
#endif

    ctx->pc = 0x2de988u;

    // 0x2de988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de98c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2de98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de994: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2de998: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2de998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2de99c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2de99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9a0: 0x8cc7003c  lw          $a3, 0x3C($a2)
    ctx->pc = 0x2de9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2de9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de9a8: 0x80b7ba0  j           func_2DEE80
    ctx->pc = 0x2DE9A8u;
    ctx->pc = 0x2DE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9A8u;
    // 0x2de9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEE80u;
    sub_002DEE80_0x2dee80(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE9B0u;
}
