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

// Function: sub_0024BAF8
// Address: 0x24baf8 - 0x24bb30
void sub_0024BAF8_0x24baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BAF8_0x24baf8");
#endif

    ctx->pc = 0x24baf8u;

    // 0x24baf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bafc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24bb04: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x24bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24bb08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24bb0c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BB0Cu;
    {
        const bool branch_taken_0x24bb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB0Cu;
        // 0x24bb10: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb0c) {
            ctx->pc = 0x24BB20u;
            goto label_24bb20;
        }
    }
    ctx->pc = 0x24BB14u;
    // 0x24bb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb18: 0x8086304  j           func_218C10
    ctx->pc = 0x24BB18u;
    ctx->pc = 0x24BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB18u;
    // 0x24bb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    sub_00218C10_0x218c10(rdram, ctx, runtime); return;
    ctx->pc = 0x24BB20u;
label_24bb20:
    // 0x24bb20: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x24bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24bb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb28: 0x8086304  j           func_218C10
    ctx->pc = 0x24BB28u;
    ctx->pc = 0x24BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB28u;
    // 0x24bb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    sub_00218C10_0x218c10(rdram, ctx, runtime); return;
    ctx->pc = 0x24BB30u;
}
