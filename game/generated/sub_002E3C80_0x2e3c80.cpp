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

// Function: sub_002E3C80
// Address: 0x2e3c80 - 0x2e3cb8
void sub_002E3C80_0x2e3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3C80_0x2e3c80");
#endif

    switch (ctx->pc) {
        case 0x2e3cacu: goto label_2e3cac;
        default: break;
    }

    ctx->pc = 0x2e3c80u;

    // 0x2e3c80: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2e3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2e3c84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3c88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e3c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e3c8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3C8Cu;
    {
        const bool branch_taken_0x2e3c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C8Cu;
        // 0x2e3c90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c8c) {
            ctx->pc = 0x2E3CACu;
            goto label_2e3cac;
        }
    }
    ctx->pc = 0x2E3C94u;
    // 0x2e3c94: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2e3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2e3c98: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3C98u;
    {
        const bool branch_taken_0x2e3c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e3c98) {
            ctx->pc = 0x2E3C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3C98u;
            // 0x2e3c9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3CB0u;
            goto label_2e3cb0;
        }
    }
    ctx->pc = 0x2E3CA0u;
    // 0x2e3ca0: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2e3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e3ca4: 0xc0c14c8  jal         func_305320
    ctx->pc = 0x2E3CA4u;
    SET_GPR_U32(ctx, 31, 0x2E3CACu);
    ctx->pc = 0x2E3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CA4u;
    // 0x2e3ca8: 0x24840074  addiu       $a0, $a0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305320u, 0x2E3CA4u, 0x2E3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CACu;
label_2e3cac:
    // 0x2e3cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3cb0:
    // 0x2e3cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CB0u;
        // 0x2e3cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3CB8u;
}
