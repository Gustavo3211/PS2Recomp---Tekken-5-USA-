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

// Function: sub_00213A68
// Address: 0x213a68 - 0x213ab0
void sub_00213A68_0x213a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213A68_0x213a68");
#endif

    switch (ctx->pc) {
        case 0x213a80u: goto label_213a80;
        case 0x213aa4u: goto label_213aa4;
        default: break;
    }

    ctx->pc = 0x213a68u;

    // 0x213a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213a6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x213a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x213a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213a78: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x213a7c: 0x0  nop
    ctx->pc = 0x213a7cu;
    // NOP
label_213a80:
    // 0x213a80: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213a84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x213a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x213a88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x213a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x213a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x213a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213a90: 0x0  nop
    ctx->pc = 0x213a90u;
    // NOP
    // 0x213a94: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x213A94u;
    {
        const bool branch_taken_0x213a94 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x213A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A94u;
        // 0x213a98: 0xa06001bb  sb          $zero, 0x1BB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a94) {
            ctx->pc = 0x213A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213a80;
        }
    }
    ctx->pc = 0x213A9Cu;
    // 0x213a9c: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x213A9Cu;
    SET_GPR_U32(ctx, 31, 0x213AA4u);
    ctx->pc = 0x213AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A9Cu;
    // 0x213aa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x213A9Cu, 0x213AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AA4u;
label_213aa4:
    // 0x213aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x213AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AA8u;
        // 0x213aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213AB0u;
}
