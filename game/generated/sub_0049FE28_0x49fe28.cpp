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

// Function: sub_0049FE28
// Address: 0x49fe28 - 0x49fe60
void sub_0049FE28_0x49fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FE28_0x49fe28");
#endif

    ctx->pc = 0x49fe28u;

    // 0x49fe28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fe2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49fe30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fe34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fe38: 0x812a0e2  j           func_4A8388
    ctx->pc = 0x49FE38u;
    ctx->pc = 0x49FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE38u;
    // 0x49fe3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8388u;
    sub_004A8388_0x4a8388(rdram, ctx, runtime); return;
    ctx->pc = 0x49FE40u;
    // 0x49fe40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fe44: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x49fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x49fe48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fe4c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x49fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49fe50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fe54: 0x8123bc8  j           func_48EF20
    ctx->pc = 0x49FE54u;
    ctx->pc = 0x49FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE54u;
    // 0x49fe58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF20u;
    sub_0048EF20_0x48ef20(rdram, ctx, runtime); return;
    ctx->pc = 0x49FE5Cu;
    // 0x49fe5c: 0x0  nop
    ctx->pc = 0x49fe5cu;
    // NOP
    ctx->pc = 0x49fe60u;
}
