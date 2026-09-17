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

// Function: sub_00105DF8
// Address: 0x105df8 - 0x105e08
void sub_00105DF8_0x105df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105DF8_0x105df8");
#endif

    ctx->pc = 0x105df8u;

    // 0x105df8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x105df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dfc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x105dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x105e00: 0x8044794  j           func_111E50
    ctx->pc = 0x105E00u;
    ctx->pc = 0x105E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E00u;
    // 0x105e04: 0x2484d970  addiu       $a0, $a0, -0x2690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    sub_00111E50_0x111e50(rdram, ctx, runtime); return;
    ctx->pc = 0x105E08u;
}
