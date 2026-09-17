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

// Function: sub_00254D70
// Address: 0x254d70 - 0x254db0
void sub_00254D70_0x254d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D70_0x254d70");
#endif

    switch (ctx->pc) {
        case 0x254d98u: goto label_254d98;
        default: break;
    }

    ctx->pc = 0x254d70u;

    // 0x254d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d80: 0x2e03001e  sltiu       $v1, $s0, 0x1E
    ctx->pc = 0x254d80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x254d84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254d88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254D88u;
    {
        const bool branch_taken_0x254d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D88u;
        // 0x254d8c: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d88) {
            ctx->pc = 0x254DA0u;
            goto label_254da0;
        }
    }
    ctx->pc = 0x254D90u;
    // 0x254d90: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x254D90u;
    SET_GPR_U32(ctx, 31, 0x254D98u);
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x254D90u, 0x254D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D98u;
label_254d98:
    // 0x254d98: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x254d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x254d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_254da0:
    // 0x254da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254da4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254da8: 0x3e00008  jr          $ra
    ctx->pc = 0x254DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DA8u;
        // 0x254dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254DB0u;
}
