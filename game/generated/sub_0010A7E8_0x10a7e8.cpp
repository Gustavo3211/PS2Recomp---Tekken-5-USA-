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

// Function: sub_0010A7E8
// Address: 0x10a7e8 - 0x10a7f8
void sub_0010A7E8_0x10a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A7E8_0x10a7e8");
#endif

    ctx->pc = 0x10a7e8u;

    // 0x10a7e8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x10a7ec: 0x80417dc  j           func_105F70
    ctx->pc = 0x10A7ECu;
    ctx->pc = 0x10A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7ECu;
    // 0x10a7f0: 0x24a5dc70  addiu       $a1, $a1, -0x2390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    sub_00105F70_0x105f70(rdram, ctx, runtime); return;
    ctx->pc = 0x10A7F4u;
    // 0x10a7f4: 0x0  nop
    ctx->pc = 0x10a7f4u;
    // NOP
    ctx->pc = 0x10a7f8u;
}
