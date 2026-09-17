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

// Function: sub_002088E0
// Address: 0x2088e0 - 0x2088f8
void sub_002088E0_0x2088e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002088E0_0x2088e0");
#endif

    ctx->pc = 0x2088e0u;

    // 0x2088e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2088e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2088e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2088e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2088e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2088e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088ec: 0x80a3a92  j           func_28EA48
    ctx->pc = 0x2088ECu;
    ctx->pc = 0x2088F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088ECu;
    // 0x2088f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    sub_0028EA48_0x28ea48(rdram, ctx, runtime); return;
    ctx->pc = 0x2088F4u;
    // 0x2088f4: 0x0  nop
    ctx->pc = 0x2088f4u;
    // NOP
    ctx->pc = 0x2088f8u;
}
