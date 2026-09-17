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

// Function: sub_00219020
// Address: 0x219020 - 0x219060
void sub_00219020_0x219020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219020_0x219020");
#endif

    ctx->pc = 0x219020u;

    // 0x219020: 0x2c820050  sltiu       $v0, $a0, 0x50
    ctx->pc = 0x219020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x219024: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x219024u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x219028: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x219028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21902c: 0x2c820050  sltiu       $v0, $a0, 0x50
    ctx->pc = 0x21902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x219030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219030u;
    {
        const bool branch_taken_0x219030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219030u;
        // 0x219034: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219030) {
            ctx->pc = 0x219048u;
            goto label_219048;
        }
    }
    ctx->pc = 0x219038u;
    // 0x219038: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x219038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21903c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21903Cu;
    {
        const bool branch_taken_0x21903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21903Cu;
        // 0x219040: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21903c) {
            ctx->pc = 0x219058u;
            goto label_219058;
        }
    }
    ctx->pc = 0x219044u;
    // 0x219044: 0x0  nop
    ctx->pc = 0x219044u;
    // NOP
label_219048:
    // 0x219048: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x219048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21904c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x219050: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x219050u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x219054: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_219058:
    // 0x219058: 0x3e00008  jr          $ra
    ctx->pc = 0x219058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219058u;
        // 0x21905c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219060u;
}
