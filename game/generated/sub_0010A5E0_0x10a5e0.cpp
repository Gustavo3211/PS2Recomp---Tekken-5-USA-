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

// Function: sub_0010A5E0
// Address: 0x10a5e0 - 0x10a5f0
void sub_0010A5E0_0x10a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A5E0_0x10a5e0");
#endif

    ctx->pc = 0x10a5e0u;

    // 0x10a5e0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x10a5e4: 0x80417dc  j           func_105F70
    ctx->pc = 0x10A5E4u;
    ctx->pc = 0x10A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5E4u;
    // 0x10a5e8: 0x24a5dc20  addiu       $a1, $a1, -0x23E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    sub_00105F70_0x105f70(rdram, ctx, runtime); return;
    ctx->pc = 0x10A5ECu;
    // 0x10a5ec: 0x0  nop
    ctx->pc = 0x10a5ecu;
    // NOP
    ctx->pc = 0x10a5f0u;
}
