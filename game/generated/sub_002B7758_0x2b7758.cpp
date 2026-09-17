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

// Function: sub_002B7758
// Address: 0x2b7758 - 0x2b7778
void sub_002B7758_0x2b7758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7758_0x2b7758");
#endif

    ctx->pc = 0x2b7758u;

    // 0x2b7758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b775c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7764: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2b7764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b7768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b776c: 0x80a9e50  j           func_2A7940
    ctx->pc = 0x2B776Cu;
    ctx->pc = 0x2B7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B776Cu;
    // 0x2b7770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    sub_002A7940_0x2a7940(rdram, ctx, runtime); return;
    ctx->pc = 0x2B7774u;
    // 0x2b7774: 0x0  nop
    ctx->pc = 0x2b7774u;
    // NOP
    ctx->pc = 0x2b7778u;
}
