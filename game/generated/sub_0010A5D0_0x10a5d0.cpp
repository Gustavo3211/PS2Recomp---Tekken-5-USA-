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

// Function: sub_0010A5D0
// Address: 0x10a5d0 - 0x10a5e0
void sub_0010A5D0_0x10a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A5D0_0x10a5d0");
#endif

    ctx->pc = 0x10a5d0u;

    // 0x10a5d0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x10a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x10a5d4: 0x80417dc  j           func_105F70
    ctx->pc = 0x10A5D4u;
    ctx->pc = 0x10A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5D4u;
    // 0x10a5d8: 0x24a5dbf0  addiu       $a1, $a1, -0x2410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    sub_00105F70_0x105f70(rdram, ctx, runtime); return;
    ctx->pc = 0x10A5DCu;
    // 0x10a5dc: 0x0  nop
    ctx->pc = 0x10a5dcu;
    // NOP
    ctx->pc = 0x10a5e0u;
}
