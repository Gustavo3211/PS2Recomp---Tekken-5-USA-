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

// Function: sub_002B2558
// Address: 0x2b2558 - 0x2b2578
void sub_002B2558_0x2b2558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2558_0x2b2558");
#endif

    ctx->pc = 0x2b2558u;

    // 0x2b2558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b255c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2564: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b2564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b256c: 0x80a9e50  j           func_2A7940
    ctx->pc = 0x2B256Cu;
    ctx->pc = 0x2B2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B256Cu;
    // 0x2b2570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    sub_002A7940_0x2a7940(rdram, ctx, runtime); return;
    ctx->pc = 0x2B2574u;
    // 0x2b2574: 0x0  nop
    ctx->pc = 0x2b2574u;
    // NOP
    ctx->pc = 0x2b2578u;
}
