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

// Function: sub_0049AD90
// Address: 0x49ad90 - 0x49ada8
void sub_0049AD90_0x49ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AD90_0x49ad90");
#endif

    ctx->pc = 0x49ad90u;

    // 0x49ad90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ad94: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x49ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
    // 0x49ad98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ad9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ad9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ada0: 0x8124910  j           func_492440
    ctx->pc = 0x49ADA0u;
    ctx->pc = 0x49ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ADA0u;
    // 0x49ada4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    sub_00492440_0x492440(rdram, ctx, runtime); return;
    ctx->pc = 0x49ADA8u;
}
