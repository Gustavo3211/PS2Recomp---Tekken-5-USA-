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

// Function: sub_00499FF8
// Address: 0x499ff8 - 0x49a010
void sub_00499FF8_0x499ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499FF8_0x499ff8");
#endif

    ctx->pc = 0x499ff8u;

    // 0x499ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x499ffc: 0x240400dd  addiu       $a0, $zero, 0xDD
    ctx->pc = 0x499ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x49a000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49a004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a008: 0x81233ec  j           func_48CFB0
    ctx->pc = 0x49A008u;
    ctx->pc = 0x49A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A008u;
    // 0x49a00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    sub_0048CFB0_0x48cfb0(rdram, ctx, runtime); return;
    ctx->pc = 0x49A010u;
}
