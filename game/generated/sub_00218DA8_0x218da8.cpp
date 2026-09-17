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

// Function: sub_00218DA8
// Address: 0x218da8 - 0x218df0
void sub_00218DA8_0x218da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218DA8_0x218da8");
#endif

    ctx->pc = 0x218da8u;

    // 0x218da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218dac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218db0: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218db8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218DB8u;
    {
        const bool branch_taken_0x218db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DB8u;
        // 0x218dbc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218db8) {
            ctx->pc = 0x218DD0u;
            goto label_218dd0;
        }
    }
    ctx->pc = 0x218DC0u;
    // 0x218dc0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218dc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218DC4u;
    {
        const bool branch_taken_0x218dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DC4u;
        // 0x218dc8: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218dc4) {
            ctx->pc = 0x218DE0u;
            goto label_218de0;
        }
    }
    ctx->pc = 0x218DCCu;
    // 0x218dcc: 0x0  nop
    ctx->pc = 0x218dccu;
    // NOP
label_218dd0:
    // 0x218dd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218dd4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218dd8: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218ddc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218de0:
    // 0x218de0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x218de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218de8: 0x808e498  j           func_239260
    ctx->pc = 0x218DE8u;
    ctx->pc = 0x218DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DE8u;
    // 0x218dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    sub_00239260_0x239260(rdram, ctx, runtime); return;
    ctx->pc = 0x218DF0u;
}
