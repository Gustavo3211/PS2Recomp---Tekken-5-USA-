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

// Function: sub_00340008
// Address: 0x340008 - 0x340030
void sub_00340008_0x340008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340008_0x340008");
#endif

    ctx->pc = 0x340008u;

    // 0x340008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34000c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x340010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340014: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x340014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x340018: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x340018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34001c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34001cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340024: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x340024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x340028: 0x80c8916  j           func_322458
    ctx->pc = 0x340028u;
    ctx->pc = 0x34002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340028u;
    // 0x34002c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322458u;
    sub_00322458_0x322458(rdram, ctx, runtime); return;
    ctx->pc = 0x340030u;
}
