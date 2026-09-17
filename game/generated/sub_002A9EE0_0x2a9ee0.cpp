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

// Function: sub_002A9EE0
// Address: 0x2a9ee0 - 0x2a9f00
void sub_002A9EE0_0x2a9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9EE0_0x2a9ee0");
#endif

    ctx->pc = 0x2a9ee0u;

    // 0x2a9ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9ee4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a9ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9eec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a9eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a9ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9ef4: 0x80a9e50  j           func_2A7940
    ctx->pc = 0x2A9EF4u;
    ctx->pc = 0x2A9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EF4u;
    // 0x2a9ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    sub_002A7940_0x2a7940(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9EFCu;
    // 0x2a9efc: 0x0  nop
    ctx->pc = 0x2a9efcu;
    // NOP
    ctx->pc = 0x2a9f00u;
}
