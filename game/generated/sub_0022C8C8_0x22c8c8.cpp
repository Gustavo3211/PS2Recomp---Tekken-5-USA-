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

// Function: sub_0022C8C8
// Address: 0x22c8c8 - 0x22c8d8
void sub_0022C8C8_0x22c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C8C8_0x22c8c8");
#endif

    ctx->pc = 0x22c8c8u;

    // 0x22c8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c8cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c8d0: 0x808b1ec  j           func_22C7B0
    ctx->pc = 0x22C8D0u;
    ctx->pc = 0x22C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8D0u;
    // 0x22c8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7B0u;
    sub_0022C7B0_0x22c7b0(rdram, ctx, runtime); return;
    ctx->pc = 0x22C8D8u;
}
