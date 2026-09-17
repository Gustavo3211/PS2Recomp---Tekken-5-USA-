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

// Function: sub_002A9F00
// Address: 0x2a9f00 - 0x2a9f20
void sub_002A9F00_0x2a9f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9F00_0x2a9f00");
#endif

    ctx->pc = 0x2a9f00u;

    // 0x2a9f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9f04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a9f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9f0c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2a9f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2a9f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9f14: 0x80a9e50  j           func_2A7940
    ctx->pc = 0x2A9F14u;
    ctx->pc = 0x2A9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F14u;
    // 0x2a9f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    sub_002A7940_0x2a7940(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9F1Cu;
    // 0x2a9f1c: 0x0  nop
    ctx->pc = 0x2a9f1cu;
    // NOP
    ctx->pc = 0x2a9f20u;
}
