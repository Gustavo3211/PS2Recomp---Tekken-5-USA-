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

// Function: sub_002738C8
// Address: 0x2738c8 - 0x2738e8
void sub_002738C8_0x2738c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002738C8_0x2738c8");
#endif

    ctx->pc = 0x2738c8u;

    // 0x2738c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2738c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2738cc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2738ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2738d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2738d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2738d4: 0x2484c530  addiu       $a0, $a0, -0x3AD0
    ctx->pc = 0x2738d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
    // 0x2738d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2738d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2738dc: 0x809aef8  j           func_26BBE0
    ctx->pc = 0x2738DCu;
    ctx->pc = 0x2738E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738DCu;
    // 0x2738e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    sub_0026BBE0_0x26bbe0(rdram, ctx, runtime); return;
    ctx->pc = 0x2738E4u;
    // 0x2738e4: 0x0  nop
    ctx->pc = 0x2738e4u;
    // NOP
    ctx->pc = 0x2738e8u;
}
