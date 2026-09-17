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

// Function: sub_00218D60
// Address: 0x218d60 - 0x218da8
void sub_00218D60_0x218d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218D60_0x218d60");
#endif

    ctx->pc = 0x218d60u;

    // 0x218d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218d64: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218d68: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218d70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218D70u;
    {
        const bool branch_taken_0x218d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D70u;
        // 0x218d74: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d70) {
            ctx->pc = 0x218D88u;
            goto label_218d88;
        }
    }
    ctx->pc = 0x218D78u;
    // 0x218d78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218d7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218D7Cu;
    {
        const bool branch_taken_0x218d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D7Cu;
        // 0x218d80: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d7c) {
            ctx->pc = 0x218D98u;
            goto label_218d98;
        }
    }
    ctx->pc = 0x218D84u;
    // 0x218d84: 0x0  nop
    ctx->pc = 0x218d84u;
    // NOP
label_218d88:
    // 0x218d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218d8c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218d90: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218d94: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218d98:
    // 0x218d98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x218d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218da0: 0x808e492  j           func_239248
    ctx->pc = 0x218DA0u;
    ctx->pc = 0x218DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DA0u;
    // 0x218da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239248u;
    sub_00239248_0x239248(rdram, ctx, runtime); return;
    ctx->pc = 0x218DA8u;
}
