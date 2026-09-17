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

// Function: sub_002088F8
// Address: 0x2088f8 - 0x208910
void sub_002088F8_0x2088f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002088F8_0x2088f8");
#endif

    ctx->pc = 0x2088f8u;

    // 0x2088f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2088f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2088fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2088fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x208900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208904: 0x80a3a92  j           func_28EA48
    ctx->pc = 0x208904u;
    ctx->pc = 0x208908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208904u;
    // 0x208908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    sub_0028EA48_0x28ea48(rdram, ctx, runtime); return;
    ctx->pc = 0x20890Cu;
    // 0x20890c: 0x0  nop
    ctx->pc = 0x20890cu;
    // NOP
    ctx->pc = 0x208910u;
}
