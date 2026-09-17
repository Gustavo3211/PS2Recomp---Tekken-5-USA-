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

// Function: sub_00218D18
// Address: 0x218d18 - 0x218d60
void sub_00218D18_0x218d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218D18_0x218d18");
#endif

    ctx->pc = 0x218d18u;

    // 0x218d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218d1c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218d20: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218d28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218D28u;
    {
        const bool branch_taken_0x218d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D28u;
        // 0x218d2c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d28) {
            ctx->pc = 0x218D40u;
            goto label_218d40;
        }
    }
    ctx->pc = 0x218D30u;
    // 0x218d30: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218D34u;
    {
        const bool branch_taken_0x218d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D34u;
        // 0x218d38: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d34) {
            ctx->pc = 0x218D50u;
            goto label_218d50;
        }
    }
    ctx->pc = 0x218D3Cu;
    // 0x218d3c: 0x0  nop
    ctx->pc = 0x218d3cu;
    // NOP
label_218d40:
    // 0x218d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218d44: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218d48: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218d48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218d4c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218d50:
    // 0x218d50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x218d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218d58: 0x808e48c  j           func_239230
    ctx->pc = 0x218D58u;
    ctx->pc = 0x218D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D58u;
    // 0x218d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239230u;
    sub_00239230_0x239230(rdram, ctx, runtime); return;
    ctx->pc = 0x218D60u;
}
