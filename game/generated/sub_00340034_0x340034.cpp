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

// Function: sub_00340034
// Address: 0x340034 - 0x340058
void sub_00340034_0x340034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340034_0x340034");
#endif

    ctx->pc = 0x340034u;

    // 0x340034: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x340034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x340038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34003c: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x34003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x340040: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x340040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340044: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x340044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34004c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x34004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x340050: 0x80c88e6  j           func_322398
    ctx->pc = 0x340050u;
    ctx->pc = 0x340054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340050u;
    // 0x340054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322398u;
    sub_00322398_0x322398(rdram, ctx, runtime); return;
    ctx->pc = 0x340058u;
}
