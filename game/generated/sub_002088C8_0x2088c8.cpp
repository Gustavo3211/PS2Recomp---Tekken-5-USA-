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

// Function: sub_002088C8
// Address: 0x2088c8 - 0x2088e0
void sub_002088C8_0x2088c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002088C8_0x2088c8");
#endif

    ctx->pc = 0x2088c8u;

    // 0x2088c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2088c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2088cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2088ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2088d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2088d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088d4: 0x80a3a92  j           func_28EA48
    ctx->pc = 0x2088D4u;
    ctx->pc = 0x2088D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088D4u;
    // 0x2088d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    sub_0028EA48_0x28ea48(rdram, ctx, runtime); return;
    ctx->pc = 0x2088DCu;
    // 0x2088dc: 0x0  nop
    ctx->pc = 0x2088dcu;
    // NOP
    ctx->pc = 0x2088e0u;
}
